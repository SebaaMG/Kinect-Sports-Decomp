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
extern int fn_82522ED8();
extern unsigned int lbl_821CC160;


char fn_8262CF28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  for (iVar1 = *(int *)(param_1 + 0x304); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    piVar3 = *(int **)(iVar1 + 8);
    if (*piVar3 == 0x6d) goto LAB_8262cf68;
  }
  piVar3 = (int *)0x0;
LAB_8262cf68:
  if (piVar3 != (int *)0x0) {
    do {
      if (piVar3[2] == *(int *)(param_2 + 0xc)) {
        if (*(float *)(param_2 + 0x14) != lbl_821CC160) {
          return '\0';
        }
        if (piVar3[-2] != 0) {
          *(int *)(piVar3[-2] + 4) = piVar3[-1];
        }
        if ((int *)piVar3[-1] != (int *)0x0) {
          *(int *)piVar3[-1] = piVar3[-2];
        }
        piVar3[-2] = 0;
        piVar3[-1] = 0;
        fn_82522ED8();
        return (*(int *)(param_2 + 8) == 0) + '\x01';
      }
      iVar1 = *piVar3;
      for (iVar2 = piVar3[-1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        piVar3 = *(int **)(iVar2 + 8);
        if (*piVar3 == iVar1) goto LAB_8262cfac;
      }
      piVar3 = (int *)0x0;
LAB_8262cfac:;} while (piVar3 != (int *)0x0);
  }
  return '\0';
}

