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
extern int fn_82E50BE8();
extern int fn_82EE9850();


undefined8 fn_82EE9B98(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  
  RtlEnterCriticalSection(param_1 + 0x50);
  piVar2 = (int *)fn_82E50BE8(0x18,0,0,0,0);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xffffffff8007000e;
  }
  else {
    piVar2[2] = param_2;
    piVar2[3] = (int)param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(param_3);
    }
    piVar2[4] = *(int *)(param_1 + 0x10a4);
    *(int *)(param_1 + 0x10a4) = *(int *)(param_1 + 0x10a4) + 1;
    piVar2[5] = 0;
    if (*(int *)(param_1 + 0x10a4) == 0) {
      *(undefined4 *)(param_1 + 0x10a4) = 1;
    }
    piVar1 = *(int **)(param_1 + 0x10a0);
    *piVar2 = param_1 + 0x109c;
    piVar2[1] = (int)piVar1;
    *piVar1 = (int)piVar2;
    *(int **)(param_1 + 0x10a0) = piVar2;
    *(int *)(param_1 + 0x1098) = *(int *)(param_1 + 0x1098) + 1;
    if (param_4 != (int *)0x0) {
      *param_4 = piVar2[4];
    }
    if (*(int *)(param_1 + 0x10ac) == 0) {
      fn_82EE9850(param_1);
    }
    uVar3 = 0;
  }
  RtlLeaveCriticalSection(param_1 + 0x50);
  return uVar3;
}

