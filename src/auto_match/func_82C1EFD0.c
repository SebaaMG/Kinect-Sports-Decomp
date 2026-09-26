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
extern unsigned int *auStack_70;
extern int fn_82F68CC0();


undefined8
fn_82C1EFD0(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,uint *param_5,
             int *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar2 = 0;
  lVar5 = 0;
  lVar3 = 0;
  uVar4 = param_3;
  do {
    if (*param_5 == 0) {
      uVar2 = (**(code **)(*piVar1 + 0x10))(*piVar1,*param_6,param_4,param_5,auStack_70);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      lVar5 = 0;
      *(ulonglong *)(piVar1 + 2) = (ulonglong)*param_5 + *(longlong *)(piVar1 + 2);
      *param_6 = *param_6 - *param_5;
    }
    uVar6 = (ulonglong)*param_5;
    if ((uVar4 & 0xffffffff) < (ulonglong)*param_5) {
      uVar6 = uVar4;
    }
    if ((param_2 & 0xffffffff) != 0) {
      if ((param_3 & 0xffffffff) < (uVar6 + lVar3 & 0xffffffff)) {
        return 0xffffffff8050000c;
      }
      fn_82F68CC0(lVar3 + param_2,*param_4,uVar6);
    }
    uVar4 = uVar4 - uVar6;
    lVar3 = uVar6 + lVar3;
    lVar5 = uVar6 + lVar5;
    *param_5 = *param_5 - (int)uVar6;
  } while (0 < (longlong)uVar4);
  *param_4 = *param_4 + (int)lVar5;
  return uVar2;
}

