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
extern unsigned int *auStack_80;
extern int fn_8267BE38();
extern int fn_82681728();
extern int fn_82681838();
extern int fn_82681898();
extern int fn_82681930();
extern int fn_8268F7C0();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_8269A190();
extern int fn_8269A1F0();
extern int fn_8269FD90();
extern int fn_826A7380();
extern int fn_826D6630();
extern int fn_8272DDC8();
extern int fn_827912D8();
extern int fn_82799E48();
extern int fn_82799E80();
extern int fn_8279A9F8();
extern int fn_8279AA48();
extern int fn_827A0A18();
extern int fn_827A0A60();
extern int fn_827A0AA8();
extern int fn_827A0B18();
extern int fn_827A0B88();
extern int fn_827A1F10();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005720;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_82186E6C;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern U64 storeWordConditionalIndexed();


undefined8 fn_8272E228(int param_1,int param_2,int *param_3,undefined1 *param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  byte bVar6;
  bool bVar7;
  int iVar10;
  ulonglong uVar8;
  char cVar11;
  undefined8 uVar9;
  char *pcVar12;
  uint *puVar14;
  longlong lVar13;
  char *pcVar15;
  int *piVar16;
  char in_RESERVE;
  byte bVar17;
  double dVar18;
  ulonglong uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint auStack_80 [4];
  int iStack_70;
  int iStack_6c;
  
  piVar16 = (int *)(param_1 + -0x68);
  iVar10 = fn_8269FD90(piVar16,param_3);
  dVar18 = lbl_8200E890;
  fVar5 = lbl_8200D8DC;
  switch(iVar10) {
  case 0:
    fn_82681930(&iStack_70);
    fn_8272DDC8(piVar16,&iStack_70,0);
    iStack_6c = iStack_70;
    goto code_r0x8272e2b8;
  case 1:
    fn_82681930(&iStack_70);
    fn_8272DDC8(piVar16,&iStack_70,0);
code_r0x8272e2b8:
    uStack_90 = (ulonglong)iStack_6c;
    dVar18 = (double)(longlong)uStack_90 * lbl_82005720;
    goto code_r0x8272e2c4;
  default:
    cVar11 = (**(code **)(*piVar16 + 0x100))(piVar16,iVar10,param_4,0);
    if (cVar11 != '\0') {
      return 1;
    }
    break;
  case 0x19:
    fn_826959C8(param_4);
    *param_4 = 0;
    uVar8 = fn_826A7380(param_2);
    if ((uVar8 & 0xffffffff) == 0) {
      return 1;
    }
    fn_826D6630(uVar8 + 0xc,0xffffffff82011648);
    return 1;
  case 0x26:
    uVar9 = fn_82799E48(auStack_80,*(undefined4 *)(param_1 + 0x38));
    fn_8269A190(&uStack_90,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,uVar9);
    fn_82681838(param_4,&uStack_90);
    lVar13 = (ulonglong)*(uint *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) - 1;
    bVar17 = (lVar13 == 0) << 1;
    *(int *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar13;
    if (lVar13 == 0) {
      fn_826944C8();
    }
    lVar13 = ((ulonglong)auStack_80[0] & 0xfffffffc) + 4;
    do {
      puVar14 = (uint *)lVar13;
      uVar8 = (ulonglong)*puVar14;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar8 - 1,0,lVar13);
        *puVar14 = uVar3;
        bVar17 = 2;
      }
    } while (!(bool)(bVar17 >> 1 & 1));
code_r0x8272e478:
    if (uVar8 != 1) {
      return 1;
    }
    fn_8267BE38();
    return 1;
  case 0x27:
    dVar18 = (double)fn_827A0AA8(*(undefined4 *)(param_1 + 0x38));
    uStack_90 = (ulonglong)(int)(dVar18 * (double)lbl_82005718);
    goto code_r0x8272e564;
  case 0x28:
    dVar18 = (double)fn_827A0B18(*(undefined4 *)(param_1 + 0x38));
    uStack_90 = (ulonglong)(int)(dVar18 * (double)lbl_82005718);
    goto code_r0x8272e564;
  case 0x29:
    uVar3 = *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 8) + 0x1c) + 0x20);
    uStack_90 = CONCAT44(uVar3,(((U64)(uStack_90) >> 32) & 0xFFFFFFFF));
code_r0x8272e52c:
    fn_8269A1F0(param_4,uVar3 & 0xffffff);
    return 1;
  case 0x2a:
    uStack_90 = fn_827912D8(*(undefined4 *)(*(int *)(param_1 + 0x38) + 8));
    uStack_90 = uStack_90 & 0xffffffff;
    goto code_r0x8272e564;
  case 0x2b:
    uVar2 = *(ushort *)(param_1 + 0x60);
    goto code_r0x8272e304;
  case 0x2c:
    if ((*(int **)(param_1 + 0x68) == (int *)0x0) || (bVar7 = true, **(int **)(param_1 + 0x68) == 0)
       ) {
      bVar7 = false;
    }
    if (!bVar7) {
      if ((*(ushort *)(param_1 + 0x60) >> 1 & 1) == 0) {
        uVar9 = fn_82799E48(&uStack_84,*(undefined4 *)(param_1 + 0x38));
        fn_8269A190(&uStack_90,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,uVar9);
        fn_82681838(param_4,&uStack_90);
        lVar13 = (ulonglong)*(uint *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) - 1;
        bVar17 = (lVar13 == 0) << 1;
        *(int *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar13;
        if (lVar13 == 0) {
          fn_826944C8();
        }
        lVar13 = ((ulonglong)uStack_84 & 0xfffffffc) + 4;
        do {
          puVar14 = (uint *)lVar13;
          uVar8 = (ulonglong)*puVar14;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(uVar8 - 1,0,lVar13);
            *puVar14 = uVar3;
            bVar17 = 2;
          }
        } while (!(bool)(bVar17 >> 1 & 1));
      }
      else {
        uVar9 = fn_82799E80(&uStack_88);
        fn_8269A190(&uStack_90,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,uVar9);
        fn_82681838(param_4,&uStack_90);
        lVar13 = (ulonglong)*(uint *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) - 1;
        bVar17 = (lVar13 == 0) << 1;
        *(int *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar13;
        if (lVar13 == 0) {
          fn_826944C8();
        }
        lVar13 = ((ulonglong)uStack_88 & 0xfffffffc) + 4;
        do {
          puVar14 = (uint *)lVar13;
          uVar8 = (ulonglong)*puVar14;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(uVar8 - 1,0,lVar13);
            *puVar14 = uVar3;
            bVar17 = 2;
          }
        } while (!(bool)(bVar17 >> 1 & 1));
      }
      goto code_r0x8272e478;
    }
    fn_8269A190(&uStack_90,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,param_1 + 100);
    goto code_r0x8272e360;
  case 0x2d:
    fn_826959C8(param_4);
    *param_4 = 0;
    if (*(int **)(param_1 + 0x68) == (int *)0x0) {
      return 1;
    }
    iVar10 = **(int **)(param_1 + 0x68);
    if (iVar10 == 0) {
      return 1;
    }
    goto LAB_8272e978;
  case 0x2e:
    if ((*(ushort *)(param_1 + 0x60) & 1) == 0) {
      uVar9 = 0xffffffff821c53cc;
    }
    else {
      bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x13c);
      bVar6 = bVar17 & 3;
      if ((bVar17 & 3) == 0) {
        uVar9 = 0xffffffff821adae0;
      }
      else if (bVar6 == 1) {
        uVar9 = 0xffffffff821adae8;
      }
      else {
        if (2 < bVar6) goto code_r0x8272e5ec;
        uVar9 = 0xffffffff820116c4;
      }
    }
    iVar10 = *(int *)(param_2 + 0x78);
code_r0x8272e620:
    fn_82681728(&uStack_90,iVar10 + 0x254,uVar9);
code_r0x8272e360:
    fn_82681838(param_4,&uStack_90);
code_r0x8272e36c:
    lVar13 = (ulonglong)*(uint *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) - 1;
    *(int *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar13;
    if (lVar13 != 0) {
      return 1;
    }
    fn_826944C8();
    return 1;
  case 0x2f:
    bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x13d) >> 3 & 1;
    goto code_r0x8272e308;
  case 0x30:
    bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x13d) >> 2 & 1;
    goto code_r0x8272e308;
  case 0x31:
    cVar11 = *(char *)(param_1 + 0x48);
    goto code_r0x8272e654;
  case 0x32:
    iVar10 = param_1 + 0x4c;
    if (*(int *)(*(int *)(param_1 + 0x4c) + 0x10) == 0) {
code_r0x8272e69c:
      fn_826959C8(param_4,iVar10);
      *param_4 = 1;
      return 1;
    }
code_r0x8272e694:
    fn_82681838(param_4,iVar10);
    return 1;
  case 0x33:
    iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114);
    if (iVar10 == 0) {
      bVar17 = (byte)(*(ushort *)(*(int *)(param_1 + 0x34) + 0x50) >> 5) & 1;
      goto code_r0x8272e308;
    }
    uVar2 = *(ushort *)(iVar10 + 0x68);
code_r0x8272e304:
    bVar17 = (byte)(uVar2 >> 1) & 1;
    goto code_r0x8272e308;
  case 0x34:
    bVar17 = (byte)((~(ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x13d) & 0xffffffff) >> 5) & 1
    ;
    goto code_r0x8272e308;
  case 0x35:
    bVar7 = (*(byte *)(*(int *)(param_1 + 0x38) + 0x13d) & 0x40) == 0;
    if (bVar7) {
      uVar9 = 0xffffffff821ae24c;
    }
    else {
      uVar9 = 0xffffffff820116a8;
    }
    fn_82681728(&uStack_90,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,uVar9);
    fn_82681838(param_4,&uStack_90);
    if ((bVar7) &&
       (lVar13 = (ulonglong)*(uint *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) - 1,
       *(int *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar13, lVar13 == 0)) {
      fn_826944C8();
    }
    goto code_r0x8272e89c;
  case 0x36:
    uVar8 = fn_827A0A18(*(undefined4 *)(param_1 + 0x38));
    uStack_90 = (uVar8 & 0xffffffff) / 0x14;
    goto code_r0x8272e564;
  case 0x37:
    lVar13 = fn_827A0A60(*(undefined4 *)(param_1 + 0x38));
    uStack_90 = lVar13 + 1U & 0xffffffff;
    goto code_r0x8272e564;
  case 0x38:
    lVar13 = fn_8279AA48(*(undefined4 *)(param_1 + 0x38));
    uStack_90 = lVar13 + 1U & 0xffffffff;
    goto code_r0x8272e564;
  case 0x39:
    uVar8 = fn_8279A9F8(*(undefined4 *)(param_1 + 0x38));
    uStack_90 = (uVar8 & 0xffffffff) / 0x14;
    goto code_r0x8272e564;
  case 0x3a:
    cVar11 = *(char *)(param_1 + 0x44);
code_r0x8272e654:
    fn_826959C8(param_4);
    *param_4 = 2;
    param_4[4] = '\x01' - (cVar11 == '\0');
    return 1;
  case 0x3b:
    uStack_90 = (ulonglong)*(uint *)(param_1 + 0x44) & 0xffffff;
    goto code_r0x8272e564;
  case 0x3c:
    uStack_90 = (ulonglong)*(uint *)(param_1 + 0x48) & 0xffffff;
    goto code_r0x8272e564;
  case 0x3d:
    lVar13 = fn_827A1F10(*(undefined4 *)(param_1 + 0x38));
    uStack_90 = lVar13 + 1U & 0xffffffff;
    goto code_r0x8272e564;
  case 0x3e:
    iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114);
    if (iVar10 == 0) {
      uVar2 = *(ushort *)(*(int *)(param_1 + 0x34) + 0x50) >> 3;
    }
    else {
      uVar2 = *(ushort *)(iVar10 + 0x68);
    }
    bVar7 = (uVar2 & 1) == 0;
    if (bVar7) {
      uVar9 = 0xffffffff820116b4;
    }
    else {
      uVar9 = 0xffffffff820116bc;
    }
    fn_82681728(&uStack_90,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,uVar9);
    fn_82681838(param_4,&uStack_90);
    if ((bVar7) &&
       (lVar13 = (ulonglong)*(uint *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) - 1,
       *(int *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar13, lVar13 == 0)) {
      fn_826944C8();
    }
code_r0x8272e89c:
    if (bVar7) {
      return 1;
    }
    goto code_r0x8272e36c;
  case 0x3f:
    uVar3 = *(uint *)(*(int *)(param_1 + 0x38) + 0x108);
    if (uVar3 == 0) goto code_r0x8272e69c;
    uStack_90 = (ulonglong)uVar3;
code_r0x8272e564:
    dVar18 = (double)(longlong)uStack_90;
code_r0x8272e2c4:
    fn_82681898(dVar18,param_4);
    return 1;
  case 0x40:
    bVar17 = (byte)(*(ushort *)(param_1 + 0x60) >> 4) & 1;
    goto code_r0x8272e308;
  case 0x41:
    bVar17 = (byte)(*(ushort *)(param_1 + 0x60) >> 7) & 1;
    goto code_r0x8272e308;
  case 0x42:
    bVar17 = (byte)(*(ushort *)(param_1 + 0x60) >> 2) & 1;
code_r0x8272e308:
    fn_826959C8(param_4);
    param_4[4] = bVar17;
    *param_4 = 2;
    return 1;
  case 0x43:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      iVar10 = *(int *)(param_1 + 0x7c) + 4;
      if (*(int *)(param_1 + 0x7c) == 0) {
        iVar10 = *(int *)(param_2 + 0x78) + 8;
      }
      goto code_r0x8272e694;
    }
    break;
  case 0x44:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uVar3 = *(uint *)(*(int *)(param_1 + 0x38) + 0x130);
      goto code_r0x8272e52c;
    }
    break;
  case 0x45:
    iVar10 = (**(code **)(*piVar16 + 0x5c))(piVar16);
    if (*(char *)(*(int *)(iVar10 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = (byte)(*(uint *)(param_1 + 0x24) >> 0xb) & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x46:
    iVar10 = (**(code **)(*piVar16 + 0x5c))(piVar16);
    if (*(char *)(*(int *)(iVar10 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = (byte)(*(ushort *)(param_1 + 0x60) >> 3) & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x47:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      if (*(int *)(*(int *)(param_1 + 0x38) + 0x114) == 0) goto code_r0x8272e2c4;
      uStack_90 = fn_8268F7C0();
      uStack_90 = uStack_90 & 0xffffffff;
code_r0x8272ea14:
      dVar18 = (double)uStack_90;
      goto code_r0x8272e2c4;
    }
    break;
  case 0x48:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = fn_827A0B88(*(undefined4 *)(param_1 + 0x38));
      uStack_90 = uStack_90 & 0xffffffff;
      goto code_r0x8272e564;
    }
    break;
  case 0x49:
    iVar10 = *(int *)(param_2 + 0x78);
    if (*(char *)(iVar10 + 0x2a4) == '\x01') {
      iVar4 = *(int *)(param_1 + 0x38);
      if ((*(byte *)(iVar4 + 0x13d) & 2) != 0) goto code_r0x8272ee2c;
code_r0x8272eda4:
      uVar9 = 0xffffffff821c53cc;
      goto code_r0x8272e620;
    }
    break;
  case 0x4a:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)(int)(uint)*(ushort *)(*(int *)(param_1 + 0x38) + 0x13a);
      fn_82681898((double)((float)uStack_90 * lbl_82005718),param_4);
    }
    break;
  case 0x4b:
    iVar10 = *(int *)(param_2 + 0x78);
    if (*(char *)(iVar10 + 0x2a4) == '\x01') {
      iVar4 = *(int *)(param_1 + 0x38);
code_r0x8272ee2c:
      bVar17 = *(byte *)(iVar4 + 0x13c) >> 2 & 3;
      if (bVar17 == 0) goto code_r0x8272eda4;
      if (bVar17 == 1) {
        uVar9 = 0xffffffff8201169c;
      }
      else if (bVar17 < 3) {
        uVar9 = 0xffffffff820116a0;
      }
      else {
        if (bVar17 != 3) {
code_r0x8272e5ec:
          fn_826959C8(param_4);
          *param_4 = 0;
          return 1;
        }
        uVar9 = 0xffffffff820116c4;
      }
      goto code_r0x8272e620;
    }
    break;
  case 0x4c:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x13c) >> 4 & 3;
      if (bVar17 == 1) {
        uVar9 = 0xffffffff82011690;
      }
      else if (bVar17 == 2) {
        uVar9 = 0xffffffff82011698;
      }
      else {
        uVar9 = 0xffffffff821c53cc;
      }
      fn_82681728(&uStack_90,*(int *)(param_2 + 0x78) + 0x254,uVar9);
      fn_82681838(param_4,&uStack_90);
      lVar13 = (ulonglong)*(uint *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) - 1;
      *(int *)((((U64)(uStack_90) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar13;
      if (lVar13 == 0) {
        fn_826944C8();
      }
    }
    break;
  case 0x4d:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = *(byte *)(param_1 + 0x60);
code_r0x8272eee8:
      fn_826959C8(param_4);
      param_4[4] = bVar17 & 1;
      *param_4 = 2;
    }
    break;
  case 0x4e:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = (byte)((ushort)*(undefined2 *)(param_1 + 0x60) >> 9);
      goto code_r0x8272eee8;
    }
    break;
  case 0x4f:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114);
      if (iVar10 == 0) {
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x34) + 0x50) >> 5;
      }
      else {
        uVar2 = *(ushort *)(iVar10 + 0x68) >> 1;
      }
      if (((uVar2 & 1) == 0) || (*(int *)(*(int *)(param_1 + 0x38) + 0x114) == 0))
      goto code_r0x8272e2c4;
      uStack_90 = (**(code **)(*piVar16 + 0x15c))(piVar16);
      uStack_90 = uStack_90 & 0xffffffff;
      goto code_r0x8272ea14;
    }
    break;
  case 0x50:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114);
      if (iVar10 == 0) {
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x34) + 0x50) >> 5;
      }
      else {
        uVar2 = *(ushort *)(iVar10 + 0x68) >> 1;
      }
      if (((uVar2 & 1) == 0) || (*(int *)(*(int *)(param_1 + 0x38) + 0x114) == 0))
      goto code_r0x8272e2c4;
      uStack_90 = (**(code **)(*piVar16 + 0x160))(piVar16);
      uStack_90 = uStack_90 & 0xffffffff;
      goto code_r0x8272ea14;
    }
    break;
  case 0x51:
    if ((*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') &&
       (iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114), iVar10 != 0)) {
      uStack_90 = (ulonglong)*(uint *)(iVar10 + 0x58);
      goto code_r0x8272e564;
    }
    break;
  case 0x52:
    if ((*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') &&
       (iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114), iVar10 != 0)) {
      uStack_90 = (ulonglong)*(uint *)(iVar10 + 0x5c);
      goto code_r0x8272e564;
    }
    break;
  case 0x53:
    if ((*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') &&
       (iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114), iVar10 != 0)) {
      uStack_90 = (ulonglong)*(uint *)(iVar10 + 0x60);
      goto code_r0x8272e564;
    }
    break;
  case 0x54:
    if ((*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') &&
       (iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 0x114), iVar10 != 0)) {
      uStack_90 = (ulonglong)*(uint *)(iVar10 + 100);
      goto code_r0x8272e564;
    }
    break;
  case 0x55:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = (byte)((ushort)*(undefined2 *)(param_1 + 0x60) >> 10) & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x56:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = (byte)((ushort)*(undefined2 *)(param_1 + 0x60) >> 0xb) & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x59:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x13d) >> 7;
      goto code_r0x8272e308;
    }
    break;
  case 0x5a:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x120);
code_r0x8272eb58:
      dVar18 = (double)((float)(longlong)uStack_90 * fVar5);
      goto code_r0x8272e2c4;
    }
    break;
  case 0x5b:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x121);
      goto code_r0x8272eb58;
    }
    break;
  case 0x5c:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x122);
      goto code_r0x8272eb58;
    }
    break;
  case 0x5d:
  case 0x69:
    break;
  case 0x5e:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x13e) & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x5f:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x13e) >> 1 & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x60:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x127);
      fVar5 = lbl_82005328;
      goto code_r0x8272eb58;
    }
    break;
  case 0x61:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(short *)(*(int *)(param_1 + 0x38) + 0x128);
      fVar5 = lbl_82186E6C;
      goto code_r0x8272eb58;
    }
    break;
  case 0x62:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x124);
      goto code_r0x8272eb58;
    }
    break;
  case 99:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x125);
      goto code_r0x8272eb58;
    }
    break;
  case 100:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(short *)(*(int *)(param_1 + 0x38) + 0x12a);
      fVar5 = lbl_82005718;
      goto code_r0x8272eb58;
    }
    break;
  case 0x65:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x123) >> 6 & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x66:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      bVar17 = *(byte *)(*(int *)(param_1 + 0x38) + 0x123) >> 5 & 1;
      goto code_r0x8272e308;
    }
    break;
  case 0x67:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = ((ulonglong)((*(byte *)(*(int *)(param_1 + 0x38) + 0x123) & 0x80) == 0) ^ 1) + 1;
      goto code_r0x8272e564;
    }
    break;
  case 0x68:
    if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
      uStack_90 = (ulonglong)*(byte *)(*(int *)(param_1 + 0x38) + 0x126);
      goto code_r0x8272eb58;
    }
  }
  iVar10 = *(int *)(param_1 + 0x80);
  if (iVar10 != 0) {
    uVar9 = (**(code **)(*(int *)(iVar10 + 0x10) + 0x10))(iVar10 + 0x10,param_2,param_3,param_4);
    return uVar9;
  }
  if ((param_2 == 0) || (*param_3 != *(int *)(*(int *)(param_2 + 0x78) + 0x134))) {
    iVar10 = *(int *)(param_1 + 4);
    if ((iVar10 != 0) &&
       (cVar11 = (**(code **)(*(int *)(iVar10 + 0x10) + 0x10))
                           (iVar10 + 0x10,param_2,param_3,param_4), cVar11 != '\0')) {
      return 1;
    }
    pcVar12 = "_global";
    pcVar15 = *(char **)*param_3;
    do {
      cVar11 = *pcVar15;
      cVar1 = *pcVar12;
      if (cVar11 == '\0') break;
      pcVar15 = pcVar15 + 1;
      pcVar12 = pcVar12 + 1;
    } while (cVar11 == cVar1);
    if ((cVar11 != cVar1) || (param_2 == 0)) {
      return 0;
    }
    iVar10 = *(int *)(*(int *)(param_2 + 0x78) + 0x2a0);
  }
  else {
    iVar10 = *(int *)(param_1 + 4);
  }
LAB_8272e978:
  fn_82696BC8(param_4,iVar10);
  return 1;
}

