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
extern int fn_829B5088();
extern int fn_82F655D8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82005F78;
extern unsigned int lbl_82052590;
extern unsigned int lbl_82052598;
extern unsigned int lbl_820525A0;
extern unsigned int lbl_820525A8;
extern unsigned int lbl_820525B0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_71;
extern unsigned int uStack_7a;


void fn_829B0868(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined2 uStack_7a;
  undefined1 uStack_71;
  
  iVar3 = fn_82F6A548();
  dVar16 = (double)*(float *)(iVar3 + 0x630);
  if (dVar16 != (double)lbl_821AAD20) {
    if (*(byte *)(iVar3 + 0x617) < 9) {
      dVar17 = lbl_82005758;
      if (lbl_82005F78 < (double)*(float *)(iVar3 + 0x634)) {
        dVar17 = lbl_82005758 / (double)(float)((double)*(float *)(iVar3 + 0x634) * dVar16);
      }
      uVar4 = fn_829B5088(iVar3,0x100);
      *(undefined4 *)(iVar3 + 0x638) = uVar4;
      iVar10 = 0;
      dVar16 = lbl_82005730;
      dVar19 = lbl_820525B0;
      dVar18 = lbl_820525A8;
      do {
        dVar15 = (double)fn_82F655D8((double)(longlong)iVar10 * dVar18,dVar17);
        uStack_71 = (undefined1)(longlong)(dVar15 * dVar19 + dVar16);
        *(undefined1 *)(*(int *)(iVar3 + 0x638) + iVar10) = uStack_71;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x100);
    }
    else {
      if ((*(byte *)(iVar3 + 0x616) & 2) == 0) {
        uVar8 = (ulonglong)*(byte *)(iVar3 + 0x653);
      }
      else {
        bVar1 = *(byte *)(iVar3 + 0x650);
        if (*(byte *)(iVar3 + 0x650) < *(byte *)(iVar3 + 0x651)) {
          bVar1 = *(byte *)(iVar3 + 0x651);
        }
        uVar8 = (ulonglong)bVar1;
        if (bVar1 < *(byte *)(iVar3 + 0x652)) {
          uVar8 = (ulonglong)*(byte *)(iVar3 + 0x652);
        }
      }
      uVar5 = 0x10 - uVar8;
      if ((int)uVar8 == 0) {
        uVar5 = 0;
      }
      if (((*(uint *)(iVar3 + 0x560) & 0x400) != 0) && ((int)uVar5 < 5)) {
        uVar5 = 5;
      }
      if (8 < (int)uVar5) {
        uVar5 = 8;
      }
      uVar5 = ((uVar5 & 0xffffffff) >> 0x1f) - 1 & uVar5;
      uVar2 = (uint)uVar5;
      uVar9 = 8 - uVar2;
      bVar14 = lbl_82005F78 < (double)*(float *)(iVar3 + 0x634);
      *(uint *)(iVar3 + 0x62c) = uVar2 & 0xff;
      uVar12 = 1 << (uVar9 & 0x3f);
      uVar8 = (ulonglong)uVar12;
      dVar17 = lbl_82005758;
      if (bVar14) {
        dVar17 = lbl_82005758 / (double)(float)((double)*(float *)(iVar3 + 0x634) * dVar16);
      }
      dVar16 = lbl_82005758;
      uVar4 = fn_829B5088(iVar3,uVar12 << 2);
      *(undefined4 *)(iVar3 + 0x644) = uVar4;
      if ((*(uint *)(iVar3 + 0x560) & 0x480) == 0) {
        iVar10 = 0;
        if (0 < (int)uVar12) {
          iVar11 = 0;
          dVar16 = lbl_82052590;
          dVar19 = lbl_82052598;
          dVar18 = lbl_82005730;
          do {
            uVar4 = fn_829B5088(iVar3,0x200);
            iVar13 = 0;
            *(undefined4 *)(iVar11 + *(int *)(iVar3 + 0x644)) = uVar4;
            uVar8 = ((longlong)*(int *)((int)((uVar5 & 0xffffffff) << 2) + -0x7cea3de4) *
                     (longlong)iVar10 & 0xffffffffU) >> 4;
            do {
              dVar15 = (double)fn_82F655D8((double)(uVar8 & 0xffffffff) * dVar19,dVar17);
              uVar8 = uVar8 + 0x100;
              uStack_7a = (undefined2)(longlong)(dVar15 * dVar16 + dVar18);
              *(undefined2 *)(*(int *)(iVar11 + *(int *)(iVar3 + 0x644)) + iVar13) = uStack_7a;
              iVar13 = iVar13 + 2;
            } while (iVar13 < 0x200);
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar10 < (int)uVar12);
        }
      }
      else {
        if (0 < (int)uVar12) {
          iVar10 = 0;
          do {
            uVar4 = fn_829B5088(iVar3,0x200);
            uVar8 = uVar8 - 1;
            *(undefined4 *)(iVar10 + *(int *)(iVar3 + 0x644)) = uVar4;
            iVar10 = iVar10 + 4;
          } while (uVar8 != 0);
        }
        dVar16 = dVar16 / dVar17;
        uVar8 = ((ulonglong)uVar12 & 0xffffff) << 8;
        uVar5 = 0;
        iVar10 = 0;
        dVar18 = (double)uVar8;
        dVar17 = lbl_820525A0;
        dVar19 = lbl_82005730;
        do {
          dVar15 = (double)fn_82F655D8(((double)(longlong)iVar10 + dVar19) * dVar17,dVar16);
          uVar6 = (longlong)(dVar15 * dVar18) & 0xffffffff;
          if ((uVar5 & 0xffffffff) <= uVar6) {
            lVar7 = (uVar6 - uVar5) + 1;
            do {
              uVar6 = (longlong)(0xff >> (uVar2 & 0x3f)) & uVar5;
              uVar12 = (uint)uVar5;
              uVar5 = uVar5 + 1;
              *(ushort *)
               (*(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(iVar3 + 0x644)) +
               (uVar12 >> (uVar9 & 0x3f)) * 2) = (ushort)iVar10 << 8 | (ushort)iVar10;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x100);
        if ((uVar5 & 0xffffffff) < uVar8) {
          do {
            uVar6 = (longlong)(0xff >> (uVar2 & 0x3f)) & uVar5;
            uVar12 = (uint)uVar5;
            uVar5 = uVar5 + 1;
            *(undefined2 *)
             (*(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(iVar3 + 0x644)) +
             (uVar12 >> (uVar9 & 0x3f)) * 2) = 0xffff;
          } while ((uVar5 & 0xffffffff) < uVar8);
        }
      }
    }
  }
  fn_82F6A594();
  return;
}

