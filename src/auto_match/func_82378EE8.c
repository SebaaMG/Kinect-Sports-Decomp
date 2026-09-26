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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82250A18();
extern int fn_822AA770();
extern int fn_822AA7E0();
extern int fn_822BD338();
extern int fn_8237C500();
extern int fn_824CCD80();
extern int fn_824CD030();
extern int fn_82560708();
extern unsigned int lbl_831D1C40;
extern unsigned int lbl_831D1C78;
extern unsigned int lbl_831D1C7C;
extern unsigned int lbl_831D1C80;
extern unsigned int lbl_831D1C84;
extern unsigned int lbl_831DCD58;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82378EE8(int param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 in_r0;
  int iVar8;
  int iVar9;
  char cVar11;
  uint uVar10;
  ulonglong uVar12;
  double dVar13;
  
  iVar8 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar8 = fn_82250A18();
  }
  cVar11 = *(char *)(iVar8 + 4);
  *(undefined4 *)(param_1 + 0x2190) = 0;
  if (lbl_831D1C40 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x174) == 0) && (cVar11 == '\0')) {
    return;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    return;
  }
  if ((((*(int *)(param_1 + 0x20ec) < 0x18) && (*(int *)(param_1 + 0x20e8) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x20e8) + 0x24) != 0)) &&
     (iVar8 = fn_824CD030(), iVar8 != 0)) {
    dVar13 = (double)(*(float *)(param_1 + 0x2120) + *(float *)(param_1 + 0x118));
    if ((double)lbl_831D1C84 < dVar13) {
      return;
    }
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x80);
    if (*(int *)(param_1 + 0x209c) != 0) {
      return;
    }
    iVar8 = fn_82560708();
    if (iVar8 != 0) {
      fn_824CCD80(*(undefined4 *)(*(int *)(param_1 + 0x20e8) + 0x24));
    }
    fn_8237C500(dVar13,(double)*(float *)(param_1 + 0x20f4),param_1);
    *(undefined4 *)(param_1 + 0x20a4) = 1;
    return;
  }
  if (((*(int *)(param_1 + 0x2138) != 0) && (*(int *)(*(int *)(param_1 + 0x2138) + 0x24) != 0)) &&
     ((iVar8 = fn_824CD030(), iVar8 != 0 && (*(int *)(param_1 + 0x1b8) == 0)))) {
    *(undefined4 *)(param_1 + 0x2190) = 1;
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x80);
    if (*(int *)(param_1 + 0x20a4) != 0) {
      *(undefined4 *)(param_1 + 0x209c) = 1;
      *(undefined4 *)(param_1 + 0x20a4) = 0;
    }
    if (*(int *)(param_1 + 0x209c) != 0) {
      return;
    }
    iVar8 = fn_82560708();
    if (iVar8 != 0) {
      fn_824CCD80(*(undefined4 *)(*(int *)(param_1 + 0x2138) + 0x24));
    }
    fVar1 = *(float *)(param_1 + 0x1b0);
LAB_82379470:
    fn_8237C500((double)fVar1,(double)*(float *)(param_1 + 0x2140),param_1);
    return;
  }
  iVar8 = *(int *)(param_1 + 0x20ec);
  if ((0x17 < iVar8) || (cVar11 != '\0')) {
    if (*(int *)(param_1 + 0x2134) == 0) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x2134) + 0x24) == 0) {
      return;
    }
    iVar8 = fn_824CD030();
    if (iVar8 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x20a8) = 0;
    if (*(int *)(param_1 + 0x209c) != 0) {
      return;
    }
    iVar8 = fn_82560708();
    if (iVar8 != 0) {
      fn_824CCD80(*(undefined4 *)(*(int *)(param_1 + 0x2134) + 0x24));
    }
    fVar1 = *(float *)(param_1 + 0x118);
    goto LAB_82379470;
  }
  iVar9 = *(int *)(param_1 + 0x20e4);
  if ((iVar9 == 0) || (*(int *)(iVar9 + 0x34c) == 0)) {
    if (iVar8 < 5) {
LAB_823791a4:
      iVar8 = 0;
LAB_823791a8:
      if (iVar8 == 0) {
        dVar13 = (double)lbl_831D1C78;
        goto LAB_823791d0;
      }
    }
    else if (7 < iVar8) {
      if (iVar8 == 0xd) {
        iVar8 = (int)*(float *)(param_1 + 0x20f4);
        goto LAB_823791a8;
      }
      if (iVar8 != 0xf) goto LAB_823791a4;
    }
    dVar13 = (double)lbl_831D1C7C;
  }
  else {
    dVar13 = (double)lbl_831D1C80;
  }
LAB_823791d0:
  if (iVar9 == 0) {
    return;
  }
  if (*(int *)(iVar9 + 0x24) == 0) {
    return;
  }
  iVar8 = fn_824CD030();
  if (iVar8 == 0) {
    return;
  }
  if (dVar13 <= (double)*(float *)(param_1 + 0x118)) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x20e4);
  if (*(int *)(*(int *)(param_1 + 0x20e0) + 0x2c) == *(int *)(iVar8 + 0x2c)) {
    iVar9 = fn_822AA770(*(undefined4 *)(*(int *)(param_1 + 0x20e0) + 0x1c));
    bVar5 = true;
    if (iVar9 == 0) goto LAB_8237922c;
  }
  else {
LAB_8237922c:
    bVar5 = false;
  }
  if (*(int *)(param_1 + 0x20ec) < 0x18) {
    uVar12 = (ulonglong)*(uint *)(&lbl_831DCD58 + *(int *)(param_1 + 0x20ec) * 4);
  }
  else {
    uVar12 = 6;
  }
  cVar11 = fn_822BD338((ulonglong)*(uint *)(*(int *)(iVar8 + 0x114) + 0x20) + 4,
                             0xffffffff821ad284);
  if (((cVar11 != '\0') || (iVar8 = *(int *)(*(int *)(param_1 + 0x20e4) + 0x1c8), iVar8 == 6)) ||
     (bVar6 = false, iVar8 == 7)) {
    bVar6 = true;
  }
  bVar7 = true;
  if (((*(int *)(param_1 + 0x2130) == 0) || (*(int *)(param_1 + 0x2134) == 0)) ||
     (bVar2 = true,
     *(int *)(*(int *)(param_1 + 0x2130) + 0x2c) == *(int *)(*(int *)(param_1 + 0x2134) + 0x2c))) {
    bVar2 = false;
  }
  if (((*(int *)(param_1 + 0x20e0) == 0) || (*(int *)(param_1 + 0x20e4) == 0)) ||
     (bVar3 = true,
     *(int *)(*(int *)(param_1 + 0x20e0) + 0x2c) == *(int *)(*(int *)(param_1 + 0x20e4) + 0x2c))) {
    bVar3 = false;
  }
  if ((*(int *)(param_1 + 0x20e4) != 0) && (*(int *)(*(int *)(param_1 + 0x20e4) + 0x24) != 0)) {
    iVar8 = fn_824CD030();
    bVar4 = true;
    if (iVar8 != 0) goto LAB_82379330;
  }
  bVar4 = false;
LAB_82379330:
  if ((((bVar2) && (bVar3)) && (bVar4)) &&
     ((uVar10 = fn_822AA7E0(*(undefined4 *)(*(int *)(param_1 + 0x2130) + 0x1c)), 1 < uVar10 ||
      (uVar10 = fn_822AA7E0(*(undefined4 *)(*(int *)(param_1 + 0x2134) + 0x1c)), 1 < uVar10)))
     ) {
    bVar7 = false;
  }
  if (((!bVar5) && ((int)(uVar12 - 2) == (int)uVar12 + -3 + (uint)(uVar12 - 2 == 0))) && (!bVar6)) {
    return;
  }
  if (!bVar7) {
    return;
  }
  if (*(int *)(param_1 + 0x209c) != 0) {
    return;
  }
  iVar8 = fn_82560708();
  if (iVar8 != 0) {
    fn_824CCD80(*(undefined4 *)(*(int *)(param_1 + 0x20e4) + 0x24));
  }
  fn_8237C500((double)(*(float *)(param_1 + 0x2124) + *(float *)(param_1 + 0x118)),
                    (double)*(float *)(param_1 + 0x20f4),param_1);
  *(undefined4 *)(param_1 + 0x20a8) = 1;
  return;
}

