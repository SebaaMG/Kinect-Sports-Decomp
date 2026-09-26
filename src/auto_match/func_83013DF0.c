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


void fn_83013DF0(double param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar4;
  undefined8 uVar3;
  uint uVar5;
  
  for (piVar4 = *(int **)(param_2 + 4); (piVar4 != *(int **)(param_2 + 8) && (*piVar4 != param_3));
      piVar4 = piVar4 + 10) {
  }
  uVar1 = (uint)(*(int **)(param_2 + 8) != piVar4);
  uVar2 = -(uint)(uVar1 != 0);
  uVar5 = uVar2 & (uint)(piVar4 + 2);
  if (uVar5 != 0) {
    RtlEnterCriticalSection(param_2 + 0x10,uVar2,param_4,-uVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(float *)(uVar5 + 4) = (float)param_1;
    *(undefined8 *)(uVar5 + 0x10) = uVar3;
    RtlLeaveCriticalSection(param_2 + 0x10);
  }
  return;
}

