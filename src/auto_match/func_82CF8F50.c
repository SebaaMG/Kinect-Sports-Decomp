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
extern int fn_82D01B18();
extern int fn_82D02610();


uint fn_82CF8F50(int param_1,int *param_2,ulonglong param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = (longlong)*param_2 * (longlong)(int)param_3;
  RtlEnterCriticalSection(param_1 + 4);
  iVar6 = (int)lVar5;
  if (iVar6 < 0x221) {
    piVar1 = *(int **)(((iVar6 + 0xf >> 4) + 0x3c) * 4 + param_1);
    piVar2 = (int *)*piVar1;
    iVar6 = piVar1[10];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)piVar1[8];
      if (piVar2 < (uint)piVar1[9]) {
        piVar1[10] = iVar6 + -1;
        piVar1[8] = piVar1[1] + (int)piVar2;
      }
      else {
        piVar2 = (int *)fn_82D01B18(piVar1);
      }
    }
    else {
      piVar1[10] = iVar6 + -1;
      *piVar1 = *piVar2;
    }
    trapWord(6,param_3,0);
    *(int *)(param_1 + 0x20) = (piVar1[10] - iVar6) * piVar1[1] + *(int *)(param_1 + 0x20);
    uVar3 = piVar1[1];
    *param_2 = (int)uVar3 / (int)param_3;
    trapWord(5,param_3 & ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1),
             0xffff);
  }
  else {
    piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 4))(param_1 + 0x2c,lVar5);
  }
  uVar4 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x24) < uVar4) {
    uVar3 = uVar4;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  if (*(uint *)(param_1 + 0x8fc) <= uVar4) {
    fn_82D02610(1);
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return (uint)piVar2;
}

