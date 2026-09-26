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
extern unsigned int *auStack_40;
extern unsigned int *auStack_4c;
extern int fn_82C09CA0();
extern int fn_82C0B000();
extern int fn_82C175C0();
extern int fn_82C1C550();
extern unsigned int uStack_38;
extern unsigned int uStack_50;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82C0B678(int param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_50;
  undefined4 auStack_4c [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x248) == 0)) {
    return 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x188);
  while (iVar3 != 6) {
    uVar2 = fn_82C09CA0(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar3 = *(int *)(param_1 + 0x188);
  }
  uVar1 = *(uint *)(param_1 + 0x24c);
  piVar4 = (int *)(param_1 + 0x24c);
  if ((uVar1 < 4) && (uVar1 != 0)) {
    if (uVar1 == 1) {
      auStack_4c[0] = 0;
      uStack_50 = 0;
      uVar5 = 0;
      uStack_38 = 0;
      uVar6 = 0;
      uVar2 = fn_82C0B000(param_1,auStack_4c,&uStack_50,auStack_40);
      if ((uVar2 & 0xffffffff) == 0x80040005) {
        uVar5 = 1;
      }
      else {
        if ((int)uVar2 < 0) {
          *(undefined4 *)(param_1 + 0x188) = 7;
          return uVar2;
        }
        if ((int)uVar2 == 3) {
          uVar6 = 1;
        }
      }
      iVar3 = fn_82C175C0(*(undefined4 *)(param_1 + 0x248),auStack_4c[0],uStack_50,uVar6,uVar5
                                ,0,uStack_38,piVar4);
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x188) = 7;
        return 1;
      }
    }
    else {
      if (uVar1 != 2) goto LAB_82c0b7f4;
      iVar3 = fn_82C1C550(*(undefined4 *)(param_1 + 0x248),param_2,piVar4,0);
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x188) = 7;
        return 1;
      }
    }
    if (iVar3 == 5) {
      return 6;
    }
  }
LAB_82c0b7f4:
  return -(ulonglong)(*piVar4 == 0) & 6;
}

