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


void fn_82CF8BF0(int param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = param_1 + 4;
  RtlEnterCriticalSection(iVar5);
  if (param_4 < 0x221) {
    piVar3 = *(int **)(((param_4 + 0xf >> 4) + 0x3c) * 4 + param_1);
    iVar1 = piVar3[10];
    piVar4 = (int *)*piVar3;
    piVar3[10] = iVar1 + (int)param_3;
    if (-1 < param_3 + -1) {
      param_2 = param_2 + -1;
      do {
        param_2 = param_2 + 1;
        piVar2 = (int *)*param_2;
        if (piVar2 == (int *)0x0) {
          piVar3[10] = piVar3[10] + -1;
        }
        else {
          *piVar2 = (int)piVar4;
          piVar4 = piVar2;
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    *piVar3 = (int)piVar4;
    *(int *)(param_1 + 0x20) = (piVar3[10] - iVar1) * piVar3[1] + *(int *)(param_1 + 0x20);
    RtlLeaveCriticalSection(iVar5);
  }
  else {
    if (0 < (int)param_3) {
      do {
        if (*param_2 != 0) {
          (**(code **)(*(int *)(param_1 + 0x2c) + 8))(param_1 + 0x2c);
        }
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    RtlLeaveCriticalSection(iVar5);
  }
  return;
}

