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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82B657B8();
extern int fn_82F6A544();
extern int fn_82F6A590();


void fn_82B658E0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int *piVar21;
  int iVar22;
  int iVar23;
  longlong lVar20;
  float *pfVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  float *pfVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  int *piVar35;
  int iVar36;
  int iVar37;
  int iVar39;
  undefined8 uVar38;
  
  piVar21 = (int *)fn_82F6A544();
  uVar34 = piVar21[2];
  pfVar24 = (float *)0x0;
  iVar25 = 0;
  if ((uVar34 & 0xff) == 3) {
    if (*(int *)(piVar21[1] + 0x70) == 1) {
      if (*(int *)(*piVar21 + 0x70) == 1) {
        iVar22 = fn_82B657B8(*(undefined4 *)(*piVar21 + 0x68),*(undefined4 *)(piVar21[1] + 0x68),
                               (~(ulonglong)uVar34 & 0xffffffff) >> 0x10 & 1);
        iVar23 = fn_82B657B8(*(undefined4 *)(*piVar21 + 0x6c),*(undefined4 *)(piVar21[1] + 0x6c),
                               (~(ulonglong)uVar34 & 0xffffffff) >> 0x11 & 1);
        if ((iVar22 == 0) || (iVar23 == 0)) {
LAB_82b65c30:
          uVar38 = 0xffffffff8007000e;
        }
        else {
          lVar20 = ((ulonglong)*(uint *)(piVar21[1] + 0x68) & 0xfffffff) << 4;
          if (0xfffffff < *(uint *)(piVar21[1] + 0x68)) {
            lVar20 = -1;
          }
          pfVar24 = (float *)fn_8265C9E0(lVar20);
          if (pfVar24 == (float *)0x0) goto LAB_82b65c30;
          lVar20 = ((ulonglong)*(uint *)(*piVar21 + 0x68) & 0x7ffffff) << 5;
          if (0xfffffff < ((ulonglong)*(uint *)(*piVar21 + 0x68) & 0x7fffffff) << 1) {
            lVar20 = -1;
          }
          iVar25 = fn_8265C9E0(lVar20);
          if (iVar25 == 0) goto LAB_82b65c30;
          uVar30 = 0;
          iVar31 = -1;
          iVar32 = -1;
          if (*(int *)(piVar21[1] + 0x6c) != 0) {
            piVar35 = (int *)(iVar23 + 8);
            iVar39 = iVar25;
            iVar36 = *(int *)(*piVar21 + 0x68) * 0x10 + iVar25;
            do {
              iVar17 = piVar35[-2];
              uVar34 = 0;
              iVar33 = iVar32;
              iVar37 = iVar36;
              if (iVar17 != iVar31) {
                if (iVar17 == iVar32) {
                  iVar33 = -1;
                  iVar31 = iVar32;
                  iVar37 = iVar39;
                  iVar39 = iVar36;
                }
                else {
                  (**(code **)(*(int *)*piVar21 + 4))((int *)*piVar21,iVar17,0,iVar39);
                  iVar31 = iVar17;
                }
              }
              iVar36 = *piVar35;
              iVar32 = iVar33;
              if (iVar36 != iVar33) {
                (**(code **)(*(int *)*piVar21 + 4))((int *)*piVar21,iVar36,0,iVar37);
                iVar32 = iVar36;
              }
              if (*(int *)(piVar21[1] + 0x68) != 0) {
                piVar28 = (int *)(iVar22 + -0x10);
                pfVar29 = pfVar24;
                do {
                  fVar1 = (float)piVar28[7];
                  piVar18 = piVar28 + 6;
                  fVar2 = (float)piVar28[5];
                  piVar28 = piVar28 + 4;
                  iVar27 = *piVar18 * 0x10;
                  fVar3 = (float)piVar35[1];
                  iVar26 = *piVar28 * 0x10;
                  fVar4 = (float)piVar35[-1];
                  iVar36 = iVar27 + iVar37;
                  iVar17 = iVar26 + iVar37;
                  iVar33 = iVar27 + iVar39;
                  fVar13 = *(float *)(iVar27 + iVar37);
                  iVar19 = iVar26 + iVar39;
                  fVar14 = *(float *)(iVar26 + iVar37);
                  fVar15 = *(float *)(iVar27 + iVar39);
                  fVar5 = *(float *)(iVar36 + 8);
                  fVar6 = *(float *)(iVar36 + 0xc);
                  fVar7 = *(float *)(iVar17 + 8);
                  fVar8 = *(float *)(iVar33 + 8);
                  fVar9 = *(float *)(iVar17 + 0xc);
                  fVar10 = *(float *)(iVar33 + 0xc);
                  fVar16 = *(float *)(iVar26 + iVar39);
                  fVar11 = *(float *)(iVar19 + 8);
                  fVar12 = *(float *)(iVar19 + 0xc);
                  uVar34 = uVar34 + 1;
                  pfVar29[1] = (*(float *)(iVar19 + 4) * fVar2 + *(float *)(iVar33 + 4) * fVar1) *
                               fVar4 + (*(float *)(iVar17 + 4) * fVar2 +
                                       *(float *)(iVar36 + 4) * fVar1) * fVar3;
                  *pfVar29 = (fVar2 * fVar16 + fVar1 * fVar15) * fVar4 +
                             (fVar2 * fVar14 + fVar13 * fVar1) * fVar3;
                  pfVar29[2] = (fVar11 * fVar2 + fVar8 * fVar1) * fVar4 +
                               (fVar7 * fVar2 + fVar5 * fVar1) * fVar3;
                  pfVar29[3] = (fVar12 * fVar2 + fVar10 * fVar1) * fVar4 +
                               (fVar9 * fVar2 + fVar6 * fVar1) * fVar3;
                  pfVar29 = pfVar29 + 4;
                } while (uVar34 < *(uint *)(piVar21[1] + 0x68));
              }
              (**(code **)(*(int *)piVar21[1] + 8))((int *)piVar21[1],uVar30,0,pfVar24);
              uVar30 = uVar30 + 1;
              piVar35 = piVar35 + 4;
              iVar36 = iVar37;
            } while ((uVar30 & 0xffffffff) < (ulonglong)*(uint *)(piVar21[1] + 0x6c));
          }
          uVar38 = 0;
        }
        fn_8265CA20(iVar22);
        fn_8265CA20(iVar23);
        fn_8265CA20(pfVar24);
        fn_8265CA20(iVar25);
        goto LAB_82b65c68;
      }
    }
  }
  uVar38 = 0xffffffff80004005;
LAB_82b65c68:
  fn_82F6A590(uVar38);
  return;
}

