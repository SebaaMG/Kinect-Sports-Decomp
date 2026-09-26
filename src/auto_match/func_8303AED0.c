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
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8303A888();
extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int lbl_8201546C;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_78;


void fn_8303AED0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar9;
  longlong lVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float afStack_80 [2];
  ulonglong uStack_78;
  
  uVar4 = fn_82F6A548();
  iVar1 = (int)param_2;
  piVar2 = (int *)uVar4;
  uVar10 = (ulonglong)*(ushort *)((int)piVar2 + 0xe);
  uVar12 = 0;
  for (uVar9 = *(uint *)(iVar1 + 0x1c); uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
    uVar12 = uVar12 + 1;
  }
  uVar13 = 0;
  dVar15 = (double)*(float *)(iVar1 + 0x10);
  dVar14 = (double)(float)((double)*(float *)(iVar1 + 0x14) - dVar15);
  if (uVar10 != 0) {
    dVar16 = (double)lbl_821AAD20;
    dVar17 = (double)lbl_8201546C;
    do {
      uVar11 = 0x80;
      if ((uVar10 - uVar13 & 0xffffffff) < 0x81) {
        uVar11 = uVar10 - uVar13;
      }
      if (*(uint *)(iVar1 + 0x18) < 8) {
        uVar9 = *(uint *)(iVar1 + 0x18) + 1;
        afStack_80[0] = (float)dVar16;
        uStack_78 = (ulonglong)uVar9;
        *(uint *)(iVar1 + 0x18) = uVar9;
        *(float *)(iVar1 + 0x10) =
             (float)((double)(float)((double)uStack_78 * dVar14) * dVar17 + dVar15);
        uVar5 = fn_8303A930(uVar4,*(undefined1 *)(iVar1 + 0x20),afStack_80);
        if ((uVar5 & 0xff) == 0) {
          uVar4 = fn_8303AA38((double)afStack_80[0],uVar5,param_2);
        }
        else {
          uVar4 = uVar5;
          if (*(char *)(iVar1 + 0x21) == '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(param_3,0,(uVar12 & 0xfffffff) << 4);
          }
        }
        *(char *)(iVar1 + 0x21) = (char)uVar5;
      }
      uVar6 = 0;
      uVar5 = param_3;
      if ((uVar12 & 0xffffffff) != 0) {
        do {
          afStack_80[0] =
               (float)((int)(((longlong)(int)(uint)*(ushort *)(piVar2 + 3) * (longlong)(int)uVar6 +
                              uVar13 & 0xffffffff) << 2) + *piVar2);
          if (*(char *)(iVar1 + 0x21) == '\0') {
            uVar5 = fn_8303A888(uVar5,param_2,afStack_80,uVar11);
          }
          uVar6 = uVar6 + 1;
          uVar4 = uVar5 + 0x10;
          uVar5 = uVar4;
        } while ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff));
      }
      uVar13 = uVar11 + uVar13;
    } while ((uVar13 & 0xffffffff) < uVar10);
  }
  uVar4 = 0;
  if (3 < (int)uVar12) {
    lVar8 = param_3 - 4;
    do {
      fVar3 = lbl_8217BA98;
      uVar4 = uVar4 + 4;
      iVar1 = (int)lVar8;
      *(float *)(iVar1 + 0xc) = (*(float *)(iVar1 + 0xc) + lbl_8217BA98) - lbl_8217BA98;
      *(float *)(iVar1 + 0x10) = (*(float *)(iVar1 + 0x10) + fVar3) - fVar3;
      *(float *)(iVar1 + 0x1c) = (*(float *)(iVar1 + 0x1c) + fVar3) - fVar3;
      *(float *)(iVar1 + 0x20) = (*(float *)(iVar1 + 0x20) + fVar3) - fVar3;
      *(float *)(iVar1 + 0x2c) = (*(float *)(iVar1 + 0x2c) + fVar3) - fVar3;
      *(float *)(iVar1 + 0x30) = (*(float *)(iVar1 + 0x30) + fVar3) - fVar3;
      *(float *)(iVar1 + 0x3c) = (*(float *)(iVar1 + 0x3c) + fVar3) - fVar3;
      lVar8 = lVar8 + 0x40;
      *(float *)lVar8 = (*(float *)(iVar1 + 0x40) + fVar3) - fVar3;
    } while ((uVar4 & 0xffffffff) < (uVar12 - 3 & 0xffffffff));
  }
  if ((uVar4 & 0xffffffff) < (uVar12 & 0xffffffff)) {
    lVar7 = uVar12 - uVar4;
    lVar8 = (uVar4 & 0xfffffff) * 0x10 + param_3 + -4;
    do {
      fVar3 = lbl_8217BA98;
      iVar1 = (int)lVar8;
      *(float *)(iVar1 + 0xc) = (*(float *)(iVar1 + 0xc) + lbl_8217BA98) - lbl_8217BA98;
      lVar8 = lVar8 + 0x10;
      *(float *)lVar8 = (*(float *)(iVar1 + 0x10) + fVar3) - fVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  fn_82F6A594();
  return;
}

