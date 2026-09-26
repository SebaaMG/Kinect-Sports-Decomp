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
extern int fn_825F19B0();


void fn_825C4E88(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_2 + 0xc);
  piVar4 = (int *)0x0;
joined_r0x825c4eac:
  do {
    piVar3 = piVar4;
    piVar4 = piVar1;
    if (piVar4 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)piVar4[2];
  } while (0 < piVar4[1]);
  iVar2 = *piVar4;
  if (iVar2 != 0) goto code_r0x825c4ecc;
  goto LAB_825c4efc;
code_r0x825c4ecc:
  if ((double)*(float *)(iVar2 + 0x7c) < param_1) {
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + *(int *)(iVar2 + 0x18) * -0x120;
    fn_825F19B0(*piVar4);
    *piVar4 = 0;
LAB_825c4efc:
    if (piVar4 == *(int **)(param_2 + 0xc)) {
      *(int **)(param_2 + 0xc) = piVar1;
    }
    else {
      piVar3[2] = (int)piVar1;
    }
    fn_82522ED8(piVar4);
    piVar4 = piVar3;
  }
  goto joined_r0x825c4eac;
}

