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
extern int fn_82231540();
extern int fn_822315A0();
extern int fn_823F2E20();


void fn_8248E338(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x50);
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) break;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      piVar1 = *(int **)(param_1 + 0x50);
      piVar4 = piVar2 + 2;
      if (piVar4 != piVar1) {
        iVar3 = (int)piVar2 - (int)piVar4;
        do {
          fn_823F2E20(iVar3 + (int)piVar4,piVar4);
          piVar4 = piVar4 + 2;
        } while (piVar4 != piVar1);
      }
      fn_82231540((ulonglong)*(uint *)(param_1 + 0x50) - 8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -8;
      piVar1 = *(int **)(param_1 + 0x50);
      piVar2 = *(int **)(param_1 + 0x4c);
      if (piVar2 != piVar1) {
        do {
          if (*piVar2 == *param_2) break;
          piVar2 = piVar2 + 2;
        } while (piVar2 != piVar1);
        if (piVar2 != piVar1) goto LAB_8248e410;
      }
      (**(code **)(*(int *)*param_2 + 0x10))();
    }
  }
LAB_8248e410:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

