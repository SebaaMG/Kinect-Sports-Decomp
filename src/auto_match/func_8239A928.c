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
extern int fn_82F63CA0();


void fn_8239A928(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x1d8);
  for (piVar4 = *(int **)(param_1 + 0x1d4); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    for (piVar3 = *(int **)(param_1 + 0x1b4);
        (piVar3 != *(int **)(param_1 + 0x1b8) && (*piVar3 != *piVar4)); piVar3 = piVar3 + 1) {
    }
    fn_82F63CA0(piVar3,piVar3 + 1,(*(int *)(param_1 + 0x1b8) - (int)(piVar3 + 1) >> 2) << 2);
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + -4;
  }
  iVar2 = *(int *)(param_1 + 0x1d4);
  if (iVar2 != *(int *)(param_1 + 0x1d8)) {
    fn_82F63CA0(iVar2,*(int *)(param_1 + 0x1d8),0);
    *(int *)(param_1 + 0x1d8) = iVar2;
  }
  return;
}

