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
extern int fn_822ABA88();
extern unsigned int lbl_821CC160;


void fn_8239D6D8(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_3);
  fVar3 = lbl_821CC160;
  iVar2 = (param_2 * 2 + (int)param_3) * 0xb0 + param_1 + 0x8d4;
  *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
  if (fVar3 < *(float *)(param_4 + 0x268)) {
    *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 1;
  }
  if (*(float *)(param_4 + 0x268) < fVar3) {
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
  }
  if (*(int *)(param_4 + 0x188) != 0) {
    *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) + 1;
  }
  if (*(int *)(param_4 + 0x184) != 0) {
    *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + 1;
  }
  if (*(int *)(iVar4 + 0x244) == 0) {
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
  }
  else {
    *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
  }
  if ((*(int *)(param_4 + 0x188) != 0) && (*(uint *)(iVar2 + 0x18) < *(uint *)(param_4 + 0x170))) {
    *(uint *)(iVar2 + 0x18) = *(uint *)(param_4 + 0x170);
  }
  return;
}

