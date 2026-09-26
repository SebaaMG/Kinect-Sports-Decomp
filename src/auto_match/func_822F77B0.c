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
extern unsigned int fStack_54;
extern int fn_822F78F0();
extern int fn_822F7B80();
extern int fn_822F7FA0();
extern int fn_822F8298();
extern int fn_822F8438();
extern int fn_8265CA20();
extern unsigned int uStack_48;
extern unsigned int uStack_58;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_822F77B0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  undefined4 uStack_58;
  float fStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  
  uVar1 = param_2[1];
  for (uVar4 = *param_2; uVar4 != uVar1; uVar4 = uVar4 + 0x14) {
    dVar10 = (double)fn_822F7B80(param_1,uVar4);
    *(float *)(uVar4 + 8) = (float)dVar10;
  }
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  uStack_48 = 0;
  fn_822F7FA0(&piStack_50,(int)(param_2[1] - *param_2) / 0x14);
  uVar4 = param_2[1];
  for (uVar8 = (ulonglong)*param_2; piVar3 = piStack_4c, piVar2 = piStack_50,
      (uVar8 & 0xffffffff) != (ulonglong)uVar4; uVar8 = uVar8 + 0x14) {
    uStack_58 = (int)uVar8;
    dVar10 = (double)fn_822F78F0(param_1,uVar8);
    fStack_54 = (float)dVar10;
    fn_822F8438(&piStack_50,&uStack_58);
  }
  fn_822F8298(piStack_50,piStack_4c,(int)piStack_4c - (int)piStack_50 >> 3,0);
  uVar4 = *param_2;
  for (piVar5 = piVar2; piVar5 != piVar3; piVar5 = piVar5 + 2) {
    pfVar6 = &fStack_54;
    pfVar7 = (float *)(*piVar5 + -4);
    lVar9 = 5;
    do {
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
      *pfVar6 = *pfVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    pfVar7 = &fStack_54;
    pfVar6 = (float *)(uVar4 - 4);
    lVar9 = 5;
    do {
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
      *pfVar6 = *pfVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar4 = uVar4 + 0x14;
  }
  if (piVar2 != (int *)0x0) {
    fn_8265CA20(piVar2);
  }
  return;
}

