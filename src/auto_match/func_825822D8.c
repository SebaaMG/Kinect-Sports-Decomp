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
extern int fn_825D6AD8();


void fn_825822D8(double param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_2 + 0xe0);
  piVar3 = (int *)0x0;
joined_r0x825822fc:
  do {
    piVar2 = piVar3;
    piVar3 = piVar1;
    if (piVar3 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)piVar3[4];
  } while (0 < piVar3[1]);
  if (*piVar3 != 0) goto code_r0x8258231c;
  goto LAB_82582334;
code_r0x8258231c:
  if ((double)*(float *)(*piVar3 + 0x4c) <= param_1) {
    fn_825D6AD8();
    *piVar3 = 0;
LAB_82582334:
    *(int *)(param_2 + 0xec) = *(int *)(param_2 + 0xec) - piVar3[2];
    if (piVar3 == *(int **)(param_2 + 0xe0)) {
      *(int **)(param_2 + 0xe0) = piVar1;
    }
    else {
      piVar2[4] = (int)piVar1;
    }
    fn_82522ED8(piVar3);
    piVar3 = piVar2;
  }
  goto joined_r0x825822fc;
}

