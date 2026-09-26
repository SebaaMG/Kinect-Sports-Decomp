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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F63CA0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_832967A4;
extern unsigned int lbl_832967A8;
extern unsigned int lbl_832967AC;
extern unsigned int uStack_3c;


void fn_82530448(void)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  uVar1 = lbl_832967AC;
  uVar6 = (ulonglong)lbl_832967A8;
  if ((0x2762762 - uVar6 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff821a8018);
  }
  uVar5 = (ulonglong)(lbl_832967A8 >> 1);
  if (uVar5 < 8) {
    uVar5 = 8;
  }
  uVar11 = 1;
  if ((1 < uVar5) && (uVar6 <= (0x2762762 - uVar5 & 0xffffffff))) {
    uVar11 = uVar5;
  }
  uVar5 = (ulonglong)lbl_832967AC;
  uVar7 = uVar6 + uVar11;
  iVar3 = 0;
  if (uVar7 != 0) {
    if ((0x3fffffff < (uVar7 & 0xffffffff)) ||
       (iVar3 = fn_8265C9E0((uVar7 & 0x3fffffff) << 2), iVar3 == 0)) {
      uStack_3c = 0;
      ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_40);
    }
    uVar6 = (ulonglong)lbl_832967A8;
  }
  iVar4 = uVar1 * 4;
  lVar9 = ((ulonglong)
           (uint)((int)(((int)(uVar6 << 2) - (iVar4 + lbl_832967A4)) + lbl_832967A4) >> 2) &
          0x3fffffff) * 4;
  lVar2 = fn_82F63CA0(iVar4 + iVar3,iVar4 + lbl_832967A4,lVar9);
  lVar2 = lVar2 + lVar9;
  if (uVar11 < uVar5) {
    lVar9 = (uVar11 & 0x3fffffff) * 4;
    fn_82F63CA0(lVar2,lbl_832967A4,((int)lVar9 >> 2) << 2);
    lVar9 = lVar9 + (ulonglong)lbl_832967A4;
    iVar10 = ((int)((iVar4 - (int)lVar9) + lbl_832967A4) >> 2) * 4;
    iVar4 = fn_82F63CA0(iVar3,lVar9,iVar10);
    if (uVar11 != 0) {
      puVar8 = (undefined4 *)(iVar4 + iVar10 + -4);
      for (uVar6 = uVar11; uVar6 != 0; uVar6 = uVar6 - 1) {
        puVar8 = puVar8 + 1;
        *puVar8 = 0;
      }
    }
  }
  else {
    uVar6 = uVar11 - uVar5;
    iVar10 = (iVar4 >> 2) * 4;
    iVar4 = fn_82F63CA0(lVar2,lbl_832967A4,iVar10);
    if ((uVar6 & 0xffffffff) != 0) {
      puVar8 = (undefined4 *)(iVar4 + iVar10 + -4);
      uVar7 = uVar6 & 0xffffffff;
      while (uVar7 != 0) {
        puVar8 = puVar8 + 1;
        *puVar8 = 0;
        uVar6 = uVar6 - 1;
        uVar7 = uVar6;
      }
    }
    if (uVar5 != 0) {
      puVar8 = (undefined4 *)(iVar3 + -4);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar8 = puVar8 + 1;
        *puVar8 = 0;
      }
    }
  }
  if (lbl_832967A4 != 0) {
    fn_8265CA20();
  }
  lbl_832967A4 = iVar3;
  lbl_832967A8 = lbl_832967A8 + (int)uVar11;
  return;
}

