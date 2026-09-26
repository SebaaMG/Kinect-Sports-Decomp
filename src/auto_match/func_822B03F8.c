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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822AF138();
extern int fn_822CDCF8();
extern int fn_82372C00();
extern int fn_82374520();
extern int fn_8288B760();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1B84;


void fn_822B03F8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  iVar6 = fn_82372C00(uVar11);
  uVar8 = *(uint *)(iVar6 + 0x28);
  piVar1 = *(int **)(param_1 + 0xc);
  iVar6 = fn_82372C00(uVar11);
  if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10) != *(int *)(iVar6 + 0x2c)) {
    return;
  }
  iVar6 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),(ulonglong)uVar8);
  iVar7 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),1 - (ulonglong)uVar8);
  bVar10 = false;
  bVar4 = false;
  if (*(int *)(iVar7 + 0x340) == 0) goto LAB_822b052c;
  fn_822CDCF8(iVar7,auStack_50,auStack_40);
  fn_82374520(&iStack_60,*(undefined4 *)(param_1 + 0x10));
  bVar4 = bVar10;
  if (iStack_60 != 0) {
    puVar2 = (undefined4 *)(iStack_60 + 0x30U & 0xfffffff0);
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    fVar5 = lbl_831D1B84;
    bVar10 = fStack_38 <= lbl_821CC160;
    puVar2 = (undefined4 *)(iStack_60 + 0x20U & 0xfffffff0);
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    if (bVar10) {
      if (fStack_48 - fVar5 <= fStack_38) goto LAB_822b0518;
    }
    else if (fStack_38 < fVar5 + fStack_48) {
LAB_822b0518:
      bVar4 = true;
    }
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
LAB_822b052c:
  if (*(int *)(iVar6 + 0x168) == 0) {
    uVar8 = *(uint *)(iVar6 + 0x16c);
  }
  else {
    uVar8 = fn_8288B760();
    uVar8 = uVar8 & 0xff;
  }
  if (uVar8 != 0) {
    uVar9 = 3;
    if (!bVar4) {
      uVar9 = 1;
    }
    fn_822AF138(*(undefined4 *)(iVar6 + 0x110),uVar9);
  }
  if (*(int *)(iVar7 + 0x168) == 0) {
    uVar8 = *(uint *)(iVar7 + 0x16c);
  }
  else {
    uVar8 = fn_8288B760();
    uVar8 = uVar8 & 0xff;
  }
  if (uVar8 != 0) {
    uVar9 = 1;
    if (!bVar4) {
      uVar9 = 3;
    }
    fn_822AF138(*(undefined4 *)(iVar7 + 0x110),uVar9);
  }
  return;
}

