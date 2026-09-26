typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82FAB9C0();
extern int fn_8302C600();
extern int fn_8302C9C8();
extern int fn_8302CB50();
extern int fn_8302CE08();
extern int fn_8302D178();
extern int fn_8302D5C8();
extern unsigned int lbl_832642E0;


undefined8
fn_8302DD08(int param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4,uint *param_5,
             short *param_6)

{
  byte bVar1;
  uint uVar3;
  int iVar4;
  undefined8 uVar2;
  ulonglong uVar5;
  char acStack_60 [96];
  
  *param_4 = 0;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 1) & 0x40) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x11f);
    acStack_60[0] = '\x01';
    if ((((bVar1 & 8) == 0) && (*param_5 == 0)) && ((bVar1 & 0xe0) == 0x20)) {
      iVar4 = fn_8302CE08(param_1,param_2);
      if ((iVar4 == 0) || (uVar3 = fn_8302C600(param_1), uVar3 == 0)) {
        return 0;
      }
      *(undefined4 *)(uVar3 + 4) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(uVar3 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined1 *)(uVar3 + 0xc) = *(undefined1 *)(iVar4 + 0xc);
      *(undefined2 *)(uVar3 + 0xe) = *(undefined2 *)(iVar4 + 0xe);
      uVar2 = fn_8302CB50(param_1,uVar3,acStack_60,param_6);
      *param_5 = uVar3;
    }
    else if ((bVar1 & 0xe0) == 0x20) {
      if (*param_5 == 0) {
        uVar3 = fn_8302C600(param_1);
        *param_5 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0x10c);
        if (iVar4 != 0) {
          *(undefined2 *)(uVar3 + 0xe) = *(undefined2 *)(iVar4 + 0xe);
          *(undefined2 *)(iVar4 + 0xe) = 0xffff;
        }
      }
      uVar3 = *param_5;
      uVar2 = fn_8302CB50(param_1,uVar3,acStack_60,param_6);
      if ((*(byte *)(param_1 + 0x11f) & 8) == 0) {
        fn_8302D178(param_1,uVar3,param_2);
      }
    }
    else {
      uVar5 = (ulonglong)*param_5;
      if (uVar5 == 0) {
        uVar5 = fn_8302C9C8(param_1,uVar3 & 0xffff);
        if ((uVar5 & 0xffffffff) == 0) {
          return 0;
        }
        *param_5 = (uint)uVar5;
      }
      uVar2 = fn_8302D5C8(param_1,uVar5,acStack_60,param_6);
    }
    if (acStack_60[0] == '\0') {
      return 0;
    }
    *param_3 = (short)uVar2;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),uVar2);
  *param_4 = (int)uVar2;
  uVar2 = fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,uVar2);
  return uVar2;
}

