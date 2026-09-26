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
extern unsigned int *auStack_28;
extern int fn_82A45C40();
extern int fn_82A48EE8();
extern int fn_82A495D8();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


longlong fn_82A49908(int param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [10];
  
  auStack_28[0] = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  lVar2 = fn_82A495D8(param_1 + -0x8c,param_2,auStack_28,&uStack_2c,&iStack_30);
  if (lVar2 < 0) {
    if (iStack_30 != 0) {
      fn_82A45C40();
    }
    if (uStack_2c != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + -0x58) + 0x3f74);
      do {
        if (piVar4 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar4;
          piVar4 = (int *)piVar4[1];
        }
      } while ((uStack_2c < *(uint *)(iVar3 + 0xfc)) ||
              (*(int *)(iVar3 + 0x100) + *(uint *)(iVar3 + 0xfc) <= uStack_2c));
      fn_82A48EE8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x14c) != 0) {
      fn_82A45C40();
    }
    uVar1 = *(uint *)(param_1 + 0x138);
    if (uVar1 != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + -0x58) + 0x3f74);
      do {
        if (piVar4 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar4;
          piVar4 = (int *)piVar4[1];
        }
      } while ((uVar1 < *(uint *)(iVar3 + 0xfc)) ||
              (*(int *)(iVar3 + 0x100) + *(uint *)(iVar3 + 0xfc) <= uVar1));
      fn_82A48EE8();
    }
    *(undefined4 *)(param_1 + 0x134) = auStack_28[0];
    *(uint *)(param_1 + 0x138) = uStack_2c;
    *(int *)(param_1 + 0x14c) = iStack_30;
  }
  return lVar2;
}

