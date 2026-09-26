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
extern int fn_822315A0();


void fn_822C7490(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int aiStack_40 [16];
  
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 != *(int **)(param_1 + 0x34)) {
    do {
      if (*piVar3 == *param_2) break;
      piVar3 = piVar3 + 2;
    } while (piVar3 != *(int **)(param_1 + 0x34));
  }
  piVar1 = *(int **)(param_1 + 0x34);
  while (piVar3 = piVar3 + 2, piVar3 != piVar1) {
    iVar5 = 0;
    iVar4 = 0;
    if (aiStack_40 != piVar3) {
      iVar4 = piVar3[1];
      piVar3[1] = 0;
      iVar5 = *piVar3;
      *piVar3 = 0;
    }
    iVar2 = piVar3[-1];
    piVar3[-1] = iVar4;
    piVar3[-2] = iVar5;
    if (iVar2 != 0) {
      fn_822315A0();
    }
  }
  iVar4 = *(int *)(param_1 + 0x34);
  for (iVar5 = iVar4 + -8; iVar5 != iVar4; iVar5 = iVar5 + 8) {
    if (*(int *)(iVar5 + 4) != 0) {
      fn_822315A0();
    }
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -8;
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

