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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82921D58();
extern int fn_82F6A540();
extern int fn_82F6A58C();


void fn_82921E70(void)

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
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float *pfVar27;
  int *piVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  int *piVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined8 uVar38;
  
  piVar20 = (int *)fn_82F6A540();
  uVar33 = piVar20[2];
  iVar23 = 0;
  iVar24 = 0;
  if ((uVar33 & 0xff) == 3) {
    if (*(int *)(piVar20[1] + 0x70) == 1) {
      if (*(int *)(*piVar20 + 0x70) == 1) {
        iVar21 = fn_82921D58(*(undefined4 *)(*piVar20 + 0x68),*(undefined4 *)(piVar20[1] + 0x68),
                               (~(ulonglong)uVar33 & 0xffffffff) >> 0x10 & 1);
        iVar22 = fn_82921D58(*(undefined4 *)(*piVar20 + 0x6c),*(undefined4 *)(piVar20[1] + 0x6c),
                               (~(ulonglong)uVar33 & 0xffffffff) >> 0x11 & 1);
        if ((iVar21 == 0) || (iVar22 == 0)) {
LAB_82922174:
          uVar38 = 0xffffffff8007000e;
        }
        else {
          iVar23 = fn_8265C940(*(int *)(piVar20[1] + 0x68) << 4,0x24810000);
          if (iVar23 == 0) goto LAB_82922174;
          iVar24 = fn_8265C940(*(int *)(*piVar20 + 0x68) << 5,0x24810000);
          if (iVar24 == 0) goto LAB_82922174;
          iVar30 = -1;
          uVar29 = 0;
          iVar31 = -1;
          if (*(int *)(piVar20[1] + 0x6c) != 0) {
            piVar34 = (int *)(iVar22 + 8);
            iVar37 = iVar24;
            iVar35 = *(int *)(*piVar20 + 0x68) * 0x10 + iVar24;
            do {
              iVar17 = piVar34[-2];
              uVar33 = 0;
              iVar32 = iVar31;
              iVar36 = iVar35;
              if (iVar17 != iVar30) {
                if (iVar17 == iVar31) {
                  iVar32 = -1;
                  iVar30 = iVar31;
                  iVar36 = iVar37;
                  iVar37 = iVar35;
                }
                else {
                  (**(code **)(*(int *)*piVar20 + 4))((int *)*piVar20,iVar17,0,iVar37);
                  iVar30 = iVar17;
                }
              }
              iVar35 = *piVar34;
              iVar31 = iVar32;
              if (iVar35 != iVar32) {
                (**(code **)(*(int *)*piVar20 + 4))((int *)*piVar20,iVar35,0,iVar36);
                iVar31 = iVar35;
              }
              if (*(int *)(piVar20[1] + 0x68) != 0) {
                piVar28 = (int *)(iVar21 + -0x10);
                pfVar27 = (float *)(iVar23 + -4);
                do {
                  fVar1 = (float)piVar28[7];
                  piVar18 = piVar28 + 6;
                  fVar2 = (float)piVar28[5];
                  piVar28 = piVar28 + 4;
                  iVar26 = *piVar18 * 0x10;
                  fVar3 = (float)piVar34[1];
                  iVar25 = *piVar28 * 0x10;
                  fVar4 = (float)piVar34[-1];
                  iVar35 = iVar26 + iVar36;
                  iVar17 = iVar25 + iVar36;
                  iVar32 = iVar26 + iVar37;
                  iVar19 = iVar25 + iVar37;
                  fVar5 = *(float *)(iVar35 + 4);
                  fVar6 = *(float *)(iVar17 + 4);
                  fVar7 = *(float *)(iVar35 + 8);
                  fVar8 = *(float *)(iVar17 + 8);
                  fVar9 = *(float *)(iVar32 + 4);
                  fVar10 = *(float *)(iVar19 + 4);
                  fVar11 = *(float *)(iVar32 + 8);
                  fVar12 = *(float *)(iVar19 + 8);
                  fVar13 = *(float *)(iVar35 + 0xc);
                  fVar14 = *(float *)(iVar17 + 0xc);
                  fVar15 = *(float *)(iVar32 + 0xc);
                  fVar16 = *(float *)(iVar19 + 0xc);
                  uVar33 = uVar33 + 1;
                  pfVar27[1] = (fVar2 * *(float *)(iVar25 + iVar37) +
                               fVar1 * *(float *)(iVar26 + iVar37)) * fVar4 +
                               (fVar2 * *(float *)(iVar25 + iVar36) +
                               *(float *)(iVar26 + iVar36) * fVar1) * fVar3;
                  pfVar27[2] = (fVar10 * fVar2 + fVar9 * fVar1) * fVar4 +
                               (fVar6 * fVar2 + fVar5 * fVar1) * fVar3;
                  pfVar27[3] = (fVar12 * fVar2 + fVar11 * fVar1) * fVar4 +
                               (fVar8 * fVar2 + fVar7 * fVar1) * fVar3;
                  pfVar27 = pfVar27 + 4;
                  *pfVar27 = (fVar16 * fVar2 + fVar15 * fVar1) * fVar4 +
                             (fVar14 * fVar2 + fVar13 * fVar1) * fVar3;
                } while (uVar33 < *(uint *)(piVar20[1] + 0x68));
              }
              (**(code **)(*(int *)piVar20[1] + 8))((int *)piVar20[1],uVar29,0,iVar23);
              uVar29 = uVar29 + 1;
              piVar34 = piVar34 + 4;
              iVar35 = iVar36;
            } while ((uVar29 & 0xffffffff) < (ulonglong)*(uint *)(piVar20[1] + 0x6c));
          }
          uVar38 = 0;
        }
        fn_8265C990(iVar21,0x24810000);
        fn_8265C990(iVar22,0x24810000);
        fn_8265C990(iVar23,0x24810000);
        fn_8265C990(iVar24,0x24810000);
        goto LAB_829221bc;
      }
    }
  }
  uVar38 = 0xffffffff80004005;
LAB_829221bc:
  fn_82F6A58C(uVar38);
  return;
}

