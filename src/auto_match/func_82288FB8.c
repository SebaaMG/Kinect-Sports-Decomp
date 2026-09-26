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
extern unsigned int *auStack_6c;
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_8225DB68();
extern int fn_8225F160();
extern int fn_82268ED8();
extern int fn_82284A40();
extern int fn_82286080();
extern int fn_82286F08();
extern int fn_822886B0();
extern int fn_8228A540();
extern int fn_8228AF60();
extern int fn_822C5B18();
extern int fn_8234F298();
extern int fn_8265C9E0();
extern unsigned int iStack_70;
extern unsigned int lbl_821A96E0;
extern unsigned int lbl_83265988;
extern unsigned int uStack_5c;


void fn_82288FB8(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  longlong lVar4;
  ulonglong uVar6;
  undefined1 *puVar7;
  int **ppiVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iStack_70;
  undefined1 auStack_6c [4];
  int *piStack_68;
  undefined4 *puStack_64;
  undefined **ppuStack_60;
  undefined8 uStack_5c;
  undefined ***pppuStack_50;
  
  uVar3 = fn_8225C590();
  if (param_1[0x186] != 0) {
    fn_82286F08();
  }
  iStack_70 = 0;
  iVar11 = 0;
  iVar9 = 0;
  uVar2 = (uint)LZCOUNT(*(int *)(param_1[0x47c] + 0x18b8) + -1) >> 5 ^ 1;
  if (uVar2 != 0xfffffffd) {
    puVar10 = param_1 + 0x1ab;
    do {
      if ((iVar9 != param_1[0x1a8]) && (puVar10[-1] == 0)) {
        uVar5 = fn_8225DA18(uVar3,*puVar10);
        param_1[iVar11 + 0x169] = uVar5;
        iVar11 = iStack_70 + 1;
        iStack_70 = iVar11;
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 0x10;
    } while (iVar9 < (int)(uVar2 + 3));
  }
  if ((*(int *)(param_1[0x47c] + 0x18b8) == 1) && (param_1[0x1ca] == 3)) {
    pppuStack_50 = &ppuStack_60;
    piStack_68 = &iStack_70;
    ppuStack_60 = &lbl_821A96E0;
    uStack_5c = CONCAT44(piStack_68,param_1);
    puStack_64 = param_1;
    fn_8225DB68(uVar3,&ppuStack_60);
    iVar11 = iStack_70;
  }
  while (iVar11 < 4) {
    param_1[iVar11 + 0x169] = 0;
    iVar11 = iStack_70 + 1;
    iStack_70 = iVar11;
  }
  if ((*(int *)(param_1[0x47c] + 0x18b8) == 1) && (param_1[0x1ca] == 3)) {
    param_1[0x171] = fn_82286080;
  }
  else {
    param_1[0x171] = 0;
  }
  fn_8225F160();
  if ((lbl_83265988 == 0) ||
     ((*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
    uVar6 = (ulonglong)(uint)param_1[0x1a8];
    if (*(int *)(param_1[0x47c] + 0x18b8) == 1) {
      uVar6 = -((ulonglong)(uVar6 < 2) - 1);
    }
    fn_8234F298(param_1[0x47c] + 0x234,uVar6,auStack_6c,&piStack_68);
    lVar4 = fn_8265C9E0(0x3b0);
    if (lVar4 == 0) goto LAB_822891e4;
    uVar5 = param_1[0x47c];
    uVar1 = param_1[0x1a6];
    uVar3 = fn_822C5B18(&ppuStack_60,param_1 + 0x1a0);
    puVar7 = auStack_6c;
    ppiVar8 = &piStack_68;
  }
  else {
    lVar4 = fn_8265C9E0(0x3b0);
    if (lVar4 == 0) {
LAB_822891e4:
      uVar5 = 0;
      goto LAB_822891e8;
    }
    uVar5 = param_1[0x47c];
    uVar1 = param_1[0x1a6];
    uVar3 = fn_822C5B18(&ppuStack_60,param_1 + 0x1a0);
    puVar7 = (undefined1 *)0x0;
    ppiVar8 = (int **)0x0;
  }
  uVar5 = fn_82268ED8(lVar4,param_1 + 0x150,*param_1,uVar3,uVar1,puVar7,ppiVar8,uVar5);
LAB_822891e8:
  param_1[0x186] = uVar5;
  fn_82284A40(param_1[0x47d],param_1 + 0x2f4,0);
  fn_822886B0(param_1);
  if ((*(int *)(param_1[0x47c] + 0x18b8) == 1) && (param_1[0x1a8] == 1)) {
    uVar3 = 0xffffffff821a94a4;
  }
  else {
    uVar3 = 0xffffffff821a94c8;
  }
  fn_8228A540(param_1,uVar3);
  fn_8228AF60(param_1,0xffffffff82196582);
  return;
}

