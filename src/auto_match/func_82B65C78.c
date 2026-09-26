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
extern int fn_82F6A530();
extern int fn_82F6A57C();


void fn_82B65C78(void)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int *piVar34;
  undefined8 uVar32;
  int iVar35;
  int iVar36;
  int iVar37;
  longlong lVar33;
  float *pfVar38;
  int iVar39;
  float *pfVar40;
  float *pfVar41;
  int iVar42;
  ulonglong uVar43;
  int iVar44;
  int iVar45;
  ulonglong uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  uint uVar50;
  int *piVar51;
  undefined4 *puVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  
  piVar34 = (int *)fn_82F6A530();
  uVar43 = (ulonglong)(uint)piVar34[2];
  pfVar38 = (float *)0x0;
  iVar39 = 0;
  if ((piVar34[2] & 0xffU) != 3) {
    uVar32 = 0xffffffff80004005;
    goto LAB_82b661cc;
  }
  iVar35 = fn_82B657B8(*(undefined4 *)(*piVar34 + 0x68),*(undefined4 *)(piVar34[1] + 0x68),
                         (~uVar43 & 0xffffffff) >> 0x10 & 1);
  iVar36 = fn_82B657B8(*(undefined4 *)(*piVar34 + 0x6c),*(undefined4 *)(piVar34[1] + 0x6c),
                         (~uVar43 & 0xffffffff) >> 0x11 & 1);
  iVar37 = fn_82B657B8(*(undefined4 *)(*piVar34 + 0x70),*(undefined4 *)(piVar34[1] + 0x70),
                         (~uVar43 & 0xffffffff) >> 0x12 & 1);
  if (((iVar35 == 0) || (iVar36 == 0)) || (iVar37 == 0)) {
LAB_82b66198:
    uVar32 = 0xffffffff8007000e;
  }
  else {
    lVar33 = ((ulonglong)*(uint *)(piVar34[1] + 0x68) & 0xfffffff) << 4;
    if (0xfffffff < *(uint *)(piVar34[1] + 0x68)) {
      lVar33 = -1;
    }
    pfVar38 = (float *)fn_8265C9E0(lVar33);
    if (pfVar38 == (float *)0x0) goto LAB_82b66198;
    lVar33 = ((ulonglong)*(uint *)(*piVar34 + 0x68) & 0x3ffffff) << 6;
    if (0xfffffff < ((ulonglong)*(uint *)(*piVar34 + 0x68) & 0x3fffffff) << 2) {
      lVar33 = -1;
    }
    iVar39 = fn_8265C9E0(lVar33);
    if (iVar39 == 0) goto LAB_82b66198;
    iVar44 = piVar34[1];
    uVar43 = 0;
    iVar54 = *(int *)(*piVar34 + 0x68);
    iVar56 = iVar54 * 0x10 + iVar39;
    iVar55 = iVar54 * 0x20 + iVar39;
    iVar54 = iVar54 * 0x30 + iVar39;
    if (*(int *)(iVar44 + 0x70) != 0) {
      puVar52 = (undefined4 *)(iVar37 + 8);
      iVar58 = iVar39;
      do {
        uVar46 = 0;
        iVar47 = -1;
        iVar48 = -1;
        if (*(int *)(iVar44 + 0x6c) != 0) {
          piVar51 = (int *)(iVar36 + 8);
          iVar57 = iVar56;
          iVar53 = iVar54;
          do {
            iVar44 = piVar51[-2];
            uVar50 = 0;
            iVar49 = iVar48;
            iVar54 = iVar53;
            iVar56 = iVar57;
            if (iVar44 != iVar47) {
              if (iVar44 == iVar48) {
                iVar49 = -1;
                iVar47 = iVar48;
                iVar54 = iVar55;
                iVar56 = iVar58;
                iVar58 = iVar57;
                iVar55 = iVar53;
              }
              else {
                (**(code **)(*(int *)*piVar34 + 4))((int *)*piVar34,iVar44,puVar52[-2],iVar58);
                (**(code **)(*(int *)*piVar34 + 4))((int *)*piVar34,iVar44,*puVar52,iVar55);
                iVar47 = iVar44;
              }
            }
            iVar44 = *piVar51;
            iVar48 = iVar49;
            if (iVar44 != iVar49) {
              (**(code **)(*(int *)*piVar34 + 4))((int *)*piVar34,iVar44,puVar52[-2],iVar56);
              (**(code **)(*(int *)*piVar34 + 4))((int *)*piVar34,iVar44,*puVar52,iVar54);
              iVar48 = iVar44;
            }
            if (*(int *)(piVar34[1] + 0x68) != 0) {
              pfVar40 = (float *)(iVar35 + -0xc);
              pfVar41 = pfVar38;
              do {
                fVar1 = pfVar40[6];
                fVar2 = pfVar40[4];
                iVar45 = (int)pfVar40[5] * 0x10;
                fVar3 = (float)piVar51[1];
                iVar42 = (int)pfVar40[3] * 0x10;
                fVar4 = (float)piVar51[-1];
                iVar44 = iVar45 + iVar54;
                fVar5 = (float)puVar52[1];
                iVar57 = iVar42 + iVar54;
                pfVar40 = pfVar40 + 4;
                fVar31 = *pfVar40;
                iVar53 = iVar45 + iVar55;
                iVar49 = iVar42 + iVar55;
                fVar6 = *(float *)(iVar44 + 8);
                fVar7 = *(float *)(iVar57 + 8);
                fVar8 = *(float *)(iVar53 + 4);
                fVar9 = *(float *)(iVar49 + 4);
                fVar10 = *(float *)(iVar44 + 4);
                fVar11 = *(float *)(iVar44 + 0xc);
                fVar12 = *(float *)(iVar57 + 4);
                fVar13 = *(float *)(iVar57 + 0xc);
                fVar14 = *(float *)(iVar53 + 8);
                fVar15 = *(float *)(iVar53 + 0xc);
                fVar16 = *(float *)(iVar49 + 8);
                fVar17 = *(float *)(iVar49 + 0xc);
                iVar44 = iVar45 + iVar56;
                iVar57 = iVar42 + iVar56;
                iVar53 = iVar45 + iVar58;
                iVar49 = iVar42 + iVar58;
                fVar18 = *(float *)(iVar44 + 4);
                fVar19 = *(float *)(iVar44 + 8);
                fVar20 = *(float *)(iVar44 + 0xc);
                fVar21 = *(float *)(iVar57 + 4);
                fVar22 = *(float *)(iVar57 + 8);
                fVar23 = *(float *)(iVar57 + 0xc);
                fVar24 = *(float *)(iVar53 + 4);
                fVar25 = *(float *)(iVar53 + 8);
                fVar26 = *(float *)(iVar53 + 0xc);
                fVar27 = *(float *)(iVar49 + 4);
                fVar28 = *(float *)(iVar49 + 8);
                fVar29 = *(float *)(iVar49 + 0xc);
                fVar30 = (float)puVar52[-1];
                uVar50 = uVar50 + 1;
                *pfVar41 = ((fVar31 * *(float *)(iVar42 + iVar58) +
                            fVar1 * *(float *)(iVar45 + iVar58)) * fVar4 +
                           (*(float *)(iVar42 + iVar56) * fVar2 +
                           *(float *)(iVar45 + iVar56) * fVar1) * fVar3) * fVar30 +
                           ((*(float *)(iVar42 + iVar55) * fVar2 +
                            *(float *)(iVar45 + iVar55) * fVar1) * fVar4 +
                           (*(float *)(iVar42 + iVar54) * fVar2 +
                           *(float *)(iVar45 + iVar54) * fVar1) * fVar3) * fVar5;
                pfVar41[1] = ((fVar27 * fVar31 + fVar24 * fVar1) * fVar4 +
                             (fVar21 * fVar2 + fVar18 * fVar1) * fVar3) * fVar30 +
                             ((fVar9 * fVar2 + fVar8 * fVar1) * fVar4 +
                             (fVar12 * fVar2 + fVar10 * fVar1) * fVar3) * fVar5;
                pfVar41[2] = ((fVar28 * fVar31 + fVar25 * fVar1) * fVar4 +
                             (fVar22 * fVar2 + fVar19 * fVar1) * fVar3) * fVar30 +
                             ((fVar16 * fVar2 + fVar14 * fVar1) * fVar4 +
                             (fVar7 * fVar2 + fVar6 * fVar1) * fVar3) * fVar5;
                pfVar41[3] = ((fVar29 * fVar31 + fVar26 * fVar1) * fVar4 +
                             (fVar23 * fVar2 + fVar20 * fVar1) * fVar3) * fVar30 +
                             ((fVar17 * fVar2 + fVar15 * fVar1) * fVar4 +
                             (fVar13 * fVar2 + fVar11 * fVar1) * fVar3) * fVar5;
                pfVar41 = pfVar41 + 4;
              } while (uVar50 < *(uint *)(piVar34[1] + 0x68));
            }
            (**(code **)(*(int *)piVar34[1] + 8))((int *)piVar34[1],uVar46,uVar43,pfVar38);
            iVar44 = piVar34[1];
            uVar46 = uVar46 + 1;
            piVar51 = piVar51 + 4;
            iVar57 = iVar56;
            iVar53 = iVar54;
          } while ((uVar46 & 0xffffffff) < (ulonglong)*(uint *)(iVar44 + 0x6c));
        }
        uVar43 = uVar43 + 1;
        puVar52 = puVar52 + 4;
      } while ((uVar43 & 0xffffffff) < (ulonglong)*(uint *)(iVar44 + 0x70));
    }
    uVar32 = 0;
  }
  fn_8265CA20(iVar35);
  fn_8265CA20(iVar36);
  fn_8265CA20(iVar37);
  fn_8265CA20(pfVar38);
  fn_8265CA20(iVar39);
LAB_82b661cc:
  fn_82F6A57C(uVar32);
  return;
}

