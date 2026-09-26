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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82275128();
extern int fn_8227F578();
extern int fn_82628520();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 * fn_8227F358(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  int iStack_30;
  int iStack_2c;
  
  param_1[4] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_82F68CC0(param_1 + 5,param_2,0x58);
  uVar1 = param_1[8];
  param_1[0x1b] = 0;
  param_1[0x3d] = 0;
  param_1[0x1e] = uVar1;
  iStack_30 = lbl_821CC160;
  param_1[0x24] = uVar1;
  param_1[0x20] = uVar1;
  iStack_2c = iStack_30;
  uVar2 = param_1[7];
  param_1[0x1d] = uVar2;
  param_1[0x1f] = uVar2;
  param_1[0x22] = uVar1;
  param_1[0x1f] = (float)param_1[9] + (float)param_1[0x1f];
  param_1[0x21] = param_1[0x1f];
  param_1[0x22] = (float)param_1[10] + (float)param_1[0x22];
  param_1[0x24] = (float)param_1[0x24] + (float)param_1[10];
  param_1[0x23] = uVar2;
  iVar5 = fn_8265C9E0(0x44);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    *(ulonglong *)(iVar5 + 0x20) = CONCAT44(iStack_30,iStack_2c);
    puVar6 = (undefined8 *)(iVar5 + -8);
    *(ulonglong *)(iVar5 + 0x28) = CONCAT44(iStack_30,iStack_2c);
    uVar1 = lbl_821CA460;
    puVar7 = (undefined8 *)(param_1 + 0x1b);
    *(undefined4 *)(iVar5 + 0x34) = 1;
    *(undefined4 *)(iVar5 + 0x30) = uVar1;
    *(undefined4 *)(iVar5 + 0x38) = 3;
    lVar10 = 4;
    do {
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(iVar5 + 0x40) = 0;
  }
  param_1[0x1c] = iVar5;
  iVar5 = fn_8227F578(param_1);
  iVar9 = 0;
  do {
    iVar5 = fn_82275128(iVar5);
    iVar3 = *(int *)(iVar9 + iVar5);
    iStack_30 = param_1[0x1c];
    iVar5 = iVar3 + 0x4c;
    for (piVar8 = *(int **)(iVar3 + 0x4c); piVar8 != *(int **)(iVar3 + 0x50); piVar8 = piVar8 + 1) {
      if (*piVar8 == iStack_30) {
        bVar4 = true;
        goto LAB_8227f4d0;
      }
    }
    bVar4 = false;
LAB_8227f4d0:
    if (!bVar4) {
      iVar5 = fn_82628520(iVar5,&iStack_30);
    }
    iVar9 = iVar9 + 4;
    if (7 < iVar9) {
      return param_1;
    }
  } while( true );
}

