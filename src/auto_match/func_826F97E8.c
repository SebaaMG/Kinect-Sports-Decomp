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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();


ulonglong fn_826F97E8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  uVar3 = 0;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xa90) - 1;
  if (-1 < (longlong)uVar5) {
    lVar4 = (uVar5 & 0x3fffffff) << 2;
    do {
      piVar2 = *(int **)((int)lVar4 + *(int *)(param_1 + 0xa8c));
      iVar6 = piVar2[8];
      fn_8268CC00(auStack_60);
      fn_8269A240(iVar6,auStack_60);
      fn_8268D008(auStack_60,auStack_70,param_2);
      uVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,auStack_70,param_3,param_4);
      if ((uVar3 & 0xffffffff) != 0) {
        return uVar3;
      }
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar5 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    iVar6 = uVar1 << 3;
    do {
      piVar2 = *(int **)(iVar6 + *(int *)(param_1 + 0x5c) + -4);
      uVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,param_2,param_3,param_4);
      if ((uVar3 & 0xffffffff) != 0) {
        return uVar3;
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + -8;
    } while (0 < (longlong)uVar5);
  }
  return uVar3;
}

