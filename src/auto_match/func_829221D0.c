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
extern int fn_82F6A52C();
extern int fn_82F6A578();


void fn_829221D0(void)

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
  int *piVar33;
  undefined8 uVar32;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  float *pfVar39;
  float *pfVar40;
  int iVar41;
  ulonglong uVar42;
  int iVar43;
  int iVar44;
  ulonglong uVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  undefined4 *puVar49;
  uint uVar50;
  int *piVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  
  piVar33 = (int *)fn_82F6A52C();
  uVar42 = (ulonglong)(uint)piVar33[2];
  iVar37 = 0;
  iVar38 = 0;
  if ((piVar33[2] & 0xffU) == 3) {
    iVar34 = fn_82921D58(*(undefined4 *)(*piVar33 + 0x68),*(undefined4 *)(piVar33[1] + 0x68),
                           (~uVar42 & 0xffffffff) >> 0x10 & 1);
    iVar35 = fn_82921D58(*(undefined4 *)(*piVar33 + 0x6c),*(undefined4 *)(piVar33[1] + 0x6c),
                           (~uVar42 & 0xffffffff) >> 0x11 & 1);
    iVar36 = fn_82921D58(*(undefined4 *)(*piVar33 + 0x70),*(undefined4 *)(piVar33[1] + 0x70),
                           (~uVar42 & 0xffffffff) >> 0x12 & 1);
    if ((((iVar34 == 0) || (iVar35 == 0)) || (iVar36 == 0)) ||
       ((iVar37 = fn_8265C940(*(int *)(piVar33[1] + 0x68) << 4,0x24810000), iVar37 == 0 ||
        (iVar38 = fn_8265C940(*(int *)(*piVar33 + 0x68) << 6,0x24810000), iVar38 == 0)))) {
      uVar32 = 0xffffffff8007000e;
    }
    else {
      iVar43 = piVar33[1];
      uVar42 = 0;
      iVar53 = *(int *)(*piVar33 + 0x68);
      iVar55 = iVar53 * 0x10 + iVar38;
      iVar54 = iVar53 * 0x20 + iVar38;
      iVar53 = iVar53 * 0x30 + iVar38;
      if (*(int *)(iVar43 + 0x70) != 0) {
        puVar49 = (undefined4 *)(iVar36 + 8);
        iVar57 = iVar38;
        do {
          uVar45 = 0;
          iVar46 = -1;
          iVar47 = -1;
          if (*(int *)(iVar43 + 0x6c) != 0) {
            piVar51 = (int *)(iVar35 + 8);
            iVar56 = iVar55;
            iVar52 = iVar53;
            do {
              iVar43 = piVar51[-2];
              uVar50 = 0;
              iVar48 = iVar47;
              iVar53 = iVar52;
              iVar55 = iVar56;
              if (iVar43 != iVar46) {
                if (iVar43 == iVar47) {
                  iVar48 = -1;
                  iVar46 = iVar47;
                  iVar53 = iVar54;
                  iVar55 = iVar57;
                  iVar57 = iVar56;
                  iVar54 = iVar52;
                }
                else {
                  (**(code **)(*(int *)*piVar33 + 4))((int *)*piVar33,iVar43,puVar49[-2],iVar57);
                  (**(code **)(*(int *)*piVar33 + 4))((int *)*piVar33,iVar43,*puVar49,iVar54);
                  iVar46 = iVar43;
                }
              }
              iVar43 = *piVar51;
              iVar47 = iVar48;
              if (iVar43 != iVar48) {
                (**(code **)(*(int *)*piVar33 + 4))((int *)*piVar33,iVar43,puVar49[-2],iVar55);
                (**(code **)(*(int *)*piVar33 + 4))((int *)*piVar33,iVar43,*puVar49,iVar53);
                iVar47 = iVar43;
              }
              if (*(int *)(piVar33[1] + 0x68) != 0) {
                pfVar40 = (float *)(iVar34 + -0xc);
                pfVar39 = (float *)(iVar37 + -4);
                do {
                  fVar1 = pfVar40[6];
                  fVar2 = pfVar40[4];
                  iVar44 = (int)pfVar40[5] * 0x10;
                  fVar3 = (float)piVar51[1];
                  iVar41 = (int)pfVar40[3] * 0x10;
                  fVar4 = (float)piVar51[-1];
                  iVar43 = iVar44 + iVar53;
                  fVar5 = (float)puVar49[1];
                  iVar56 = iVar41 + iVar53;
                  pfVar40 = pfVar40 + 4;
                  fVar31 = *pfVar40;
                  iVar52 = iVar44 + iVar54;
                  iVar48 = iVar41 + iVar54;
                  fVar6 = *(float *)(iVar43 + 0xc);
                  fVar7 = *(float *)(iVar56 + 0xc);
                  fVar8 = *(float *)(iVar43 + 4);
                  fVar9 = *(float *)(iVar43 + 8);
                  fVar10 = *(float *)(iVar56 + 4);
                  fVar11 = *(float *)(iVar56 + 8);
                  fVar12 = *(float *)(iVar52 + 4);
                  fVar13 = *(float *)(iVar52 + 8);
                  fVar14 = *(float *)(iVar52 + 0xc);
                  fVar15 = *(float *)(iVar48 + 4);
                  fVar16 = *(float *)(iVar48 + 8);
                  fVar17 = *(float *)(iVar48 + 0xc);
                  iVar43 = iVar44 + iVar55;
                  iVar56 = iVar41 + iVar55;
                  iVar52 = iVar44 + iVar57;
                  fVar18 = *(float *)(iVar43 + 4);
                  fVar19 = *(float *)(iVar43 + 8);
                  iVar48 = iVar41 + iVar57;
                  fVar20 = *(float *)(iVar56 + 4);
                  fVar21 = *(float *)(iVar56 + 8);
                  fVar22 = *(float *)(iVar52 + 4);
                  fVar23 = *(float *)(iVar48 + 4);
                  fVar24 = *(float *)(iVar52 + 8);
                  fVar25 = *(float *)(iVar48 + 8);
                  fVar26 = *(float *)(iVar43 + 0xc);
                  fVar27 = *(float *)(iVar56 + 0xc);
                  fVar28 = *(float *)(iVar52 + 0xc);
                  fVar29 = *(float *)(iVar48 + 0xc);
                  uVar50 = uVar50 + 1;
                  fVar30 = (float)puVar49[-1];
                  pfVar39[1] = ((*(float *)(iVar41 + iVar57) * fVar31 +
                                fVar1 * *(float *)(iVar44 + iVar57)) * fVar4 +
                               (*(float *)(iVar41 + iVar55) * fVar2 +
                               *(float *)(iVar44 + iVar55) * fVar1) * fVar3) * fVar30 +
                               ((*(float *)(iVar41 + iVar54) * fVar2 +
                                *(float *)(iVar44 + iVar54) * fVar1) * fVar4 +
                               (*(float *)(iVar41 + iVar53) * fVar2 +
                               fVar1 * *(float *)(iVar44 + iVar53)) * fVar3) * fVar5;
                  pfVar39[2] = ((fVar23 * fVar31 + fVar22 * fVar1) * fVar4 +
                               (fVar20 * fVar2 + fVar18 * fVar1) * fVar3) * fVar30 +
                               ((fVar15 * fVar2 + fVar12 * fVar1) * fVar4 +
                               (fVar10 * fVar2 + fVar8 * fVar1) * fVar3) * fVar5;
                  pfVar39[3] = ((fVar25 * fVar31 + fVar24 * fVar1) * fVar4 +
                               (fVar21 * fVar2 + fVar19 * fVar1) * fVar3) * fVar30 +
                               ((fVar16 * fVar2 + fVar13 * fVar1) * fVar4 +
                               (fVar11 * fVar2 + fVar9 * fVar1) * fVar3) * fVar5;
                  pfVar39 = pfVar39 + 4;
                  *pfVar39 = ((fVar29 * fVar31 + fVar28 * fVar1) * fVar4 +
                             (fVar27 * fVar2 + fVar26 * fVar1) * fVar3) * fVar30 +
                             ((fVar17 * fVar2 + fVar14 * fVar1) * fVar4 +
                             (fVar7 * fVar2 + fVar6 * fVar1) * fVar3) * fVar5;
                } while (uVar50 < *(uint *)(piVar33[1] + 0x68));
              }
              (**(code **)(*(int *)piVar33[1] + 8))((int *)piVar33[1],uVar45,uVar42,iVar37);
              iVar43 = piVar33[1];
              uVar45 = uVar45 + 1;
              piVar51 = piVar51 + 4;
              iVar56 = iVar55;
              iVar52 = iVar53;
            } while ((uVar45 & 0xffffffff) < (ulonglong)*(uint *)(iVar43 + 0x6c));
          }
          uVar42 = uVar42 + 1;
          puVar49 = puVar49 + 4;
        } while ((uVar42 & 0xffffffff) < (ulonglong)*(uint *)(iVar43 + 0x70));
      }
      uVar32 = 0;
    }
    fn_8265C990(iVar34,0x24810000);
    fn_8265C990(iVar35,0x24810000);
    fn_8265C990(iVar36,0x24810000);
    fn_8265C990(iVar37,0x24810000);
    fn_8265C990(iVar38,0x24810000);
  }
  else {
    uVar32 = 0xffffffff80004005;
  }
  fn_82F6A578(uVar32);
  return;
}

