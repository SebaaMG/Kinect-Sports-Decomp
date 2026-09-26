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
extern int fn_8265C940();
extern int fn_82C10278();
extern int fn_82C10320();


undefined8 fn_82C05278(int *param_1,ulonglong param_2,uint param_3,ulonglong param_4,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar1 = (ulonglong)param_3;
  uVar4 = 0;
  uVar5 = 0;
  if (*(ulonglong *)(param_1 + 0x10) < (param_4 & 0xffffffff) * uVar1) {
    trapDoubleWordImmediate(6,uVar1,0);
    param_4 = ((*(ulonglong *)(param_1 + 0x10) + uVar1) - 1) / uVar1 & 0xffffffff;
  }
  param_1[0xc] = 0;
  param_1[0x1a] = param_3;
  if (param_5 == 0) {
    param_5 = 1;
  }
  param_1[0x1d] = param_5;
  if ((param_2 & 0xffffffff) == 0) {
    param_2 = fn_8265C940((longlong)(int)param_3 * (longlong)(int)param_4,0x208c800a);
    param_1[0x1f] = (int)param_2;
    if ((param_2 & 0xffffffff) == 0) {
      uVar5 = 0xffffffff8007000e;
    }
    if ((int)uVar5 < 0) goto LAB_82c053bc;
  }
  if ((param_4 & 0xffffffff) != 0) {
    do {
      iVar2 = fn_82C10278(0x60);
      if ((iVar2 == 0) || (piVar3 = (int *)fn_82C10320(), piVar3 == (int *)0x0)) {
        uVar5 = 0xffffffff8007000e;
        goto LAB_82c053bc;
      }
      (**(code **)(*piVar3 + 0x18))(piVar3,param_1 + 0x21);
      param_1[0x1b] = param_1[0x1b] + 1;
      uVar5 = (**(code **)(*piVar3 + 0x24))(piVar3,param_2,param_1[0x1a]);
      if ((int)uVar5 < 0) goto LAB_82c053bc;
      uVar4 = uVar4 + 1;
      param_2 = (uint)param_1[0x1a] + param_2;
    } while ((uVar4 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  uVar5 = (**(code **)(*param_1 + 0x78))(param_1);
  if (-1 < (int)uVar5) {
    return uVar5;
  }
LAB_82c053bc:
  (**(code **)(*param_1 + 0x30))(param_1);
  return uVar5;
}

