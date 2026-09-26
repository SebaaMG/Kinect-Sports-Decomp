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
extern int fn_83013B98();


void fn_82FB8288(int param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  
  for (piVar2 = *(int **)(param_1 + 0x1c);
      (piVar2 != *(int **)(param_1 + 0x20) && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
  }
  uVar1 = (ulonglong)(*(int **)(param_1 + 0x20) != piVar2);
  if ((((-(uint)(uVar1 != 0) & (uint)(piVar2 + 1)) == 0) &&
      (piVar2 = (int *)(**(code **)(*param_3 + 0xc))
                                 (param_3,*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2 &
                                          0xffff,param_3,-uVar1), piVar2 != (int *)0x0)) &&
     (iVar3 = fn_83013B98(param_1 + 0x1c,param_2,piVar2), iVar3 == 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return;
}

