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
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_8201546C;


void fn_829218D0(void)

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
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int *piVar32;
  undefined8 uVar31;
  int iVar33;
  int iVar34;
  uint uVar35;
  float *pfVar36;
  int *piVar37;
  int iVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  longlong lVar50;
  double dVar51;
  
  piVar32 = (int *)fn_82F6A53C();
  if (*(char *)((int)piVar32 + 0xb) == '\x05') {
    iVar33 = *piVar32;
    iVar47 = piVar32[1];
    uVar35 = *(uint *)(iVar33 + 0x68);
    if ((*(uint *)(iVar47 + 0x68) == uVar35 >> 1) ||
       ((*(uint *)(iVar47 + 0x68) == 1 && (uVar35 == 1)))) {
      if (((*(uint *)(iVar47 + 0x6c) == *(uint *)(iVar33 + 0x6c) >> 1) ||
          ((*(uint *)(iVar47 + 0x6c) == 1 && (*(uint *)(iVar33 + 0x6c) == 1)))) &&
         (*(uint *)(iVar47 + 0x70) == *(uint *)(iVar33 + 0x70) >> 1)) {
        if ((1 < uVar35) && ((uVar35 & 1) != 0)) {
          *(uint *)(iVar33 + 0x68) = *(uint *)(iVar33 + 0x68) & 0xfffffffe;
          iVar33 = *piVar32;
          *(int *)(iVar33 + 0x74) = *(int *)(iVar33 + 0x74) - *(int *)(iVar33 + 0x78);
        }
        uVar35 = *(uint *)(*piVar32 + 0x6c);
        if (1 < uVar35) {
          *(uint *)(*piVar32 + 0x6c) = uVar35 & 0xfffffffe;
        }
        uVar35 = *(uint *)(*piVar32 + 0x70);
        if (1 < uVar35) {
          *(uint *)(*piVar32 + 0x70) = uVar35 & 0xfffffffe;
        }
        iVar33 = fn_8265C940(*(int *)(piVar32[1] + 0x68) << 4,0x24810000);
        if (iVar33 == 0) {
          uVar31 = 0xffffffff8007000e;
        }
        else {
          iVar47 = *(int *)(*piVar32 + 0x68);
          if (*(int *)(*piVar32 + 0x6c) == 1) {
            iVar34 = fn_8265C940(iVar47 << 5,0x24810000);
            piVar37 = (int *)(*piVar32 + 0x68);
            iVar47 = *piVar37 * 0x10 + iVar34;
            iVar48 = iVar34;
            iVar49 = iVar47;
          }
          else {
            iVar34 = fn_8265C940(iVar47 << 6,0x24810000);
            piVar37 = (int *)(*piVar32 + 0x68);
            iVar47 = *piVar37;
            iVar49 = iVar47 * 0x10 + iVar34;
            iVar48 = iVar47 * 0x20 + iVar34;
            iVar47 = iVar47 * 0x30 + iVar34;
          }
          if (iVar34 == 0) {
            uVar31 = 0xffffffff8007000e;
          }
          else {
            iVar46 = iVar34;
            iVar44 = iVar48;
            iVar43 = iVar47;
            iVar45 = iVar49;
            if (*piVar37 != 1) {
              iVar46 = iVar34 + 0x10;
              iVar44 = iVar48 + 0x10;
              iVar43 = iVar47 + 0x10;
              iVar45 = iVar49 + 0x10;
            }
            iVar38 = piVar32[1];
            uVar40 = 0;
            if (*(int *)(iVar38 + 0x70) != 0) {
              dVar51 = (double)lbl_8201546C;
              do {
                lVar41 = (uVar40 & 0x7fffffff) * 2;
                uVar42 = 0;
                if (*(int *)(iVar38 + 0x6c) != 0) {
                  do {
                    lVar50 = (uVar42 & 0x7fffffff) * 2;
                    (**(code **)(*(int *)*piVar32 + 4))((int *)*piVar32,lVar50,lVar41,iVar34);
                    if (iVar49 != iVar34) {
                      (**(code **)(*(int *)*piVar32 + 4))((int *)*piVar32,lVar50,lVar41 + 1,iVar49);
                    }
                    if (iVar48 != iVar34) {
                      (**(code **)(*(int *)*piVar32 + 4))((int *)*piVar32,lVar50 + 1,lVar41,iVar48);
                    }
                    if ((iVar47 != iVar49) && (iVar47 != iVar48)) {
                      (**(code **)(*(int *)*piVar32 + 4))
                                ((int *)*piVar32,lVar50 + 1,lVar41 + 1,iVar47);
                    }
                    uVar35 = 0;
                    if (*(int *)(piVar32[1] + 0x68) != 0) {
                      pfVar36 = (float *)(iVar33 + -4);
                      do {
                        iVar39 = uVar35 * 0x20;
                        uVar35 = uVar35 + 1;
                        iVar38 = iVar39 + iVar46;
                        iVar25 = iVar39 + iVar34;
                        iVar26 = iVar39 + iVar49;
                        iVar27 = iVar39 + iVar45;
                        iVar28 = iVar39 + iVar48;
                        fVar1 = *(float *)(iVar38 + 4);
                        fVar2 = *(float *)(iVar25 + 4);
                        iVar29 = iVar39 + iVar44;
                        fVar3 = *(float *)(iVar38 + 8);
                        fVar4 = *(float *)(iVar25 + 8);
                        iVar30 = iVar39 + iVar47;
                        fVar5 = *(float *)(iVar38 + 0xc);
                        fVar6 = *(float *)(iVar25 + 0xc);
                        iVar38 = iVar39 + iVar43;
                        fVar7 = *(float *)(iVar26 + 4);
                        fVar8 = *(float *)(iVar26 + 8);
                        fVar9 = *(float *)(iVar26 + 0xc);
                        fVar10 = *(float *)(iVar27 + 4);
                        fVar11 = *(float *)(iVar27 + 8);
                        fVar12 = *(float *)(iVar27 + 0xc);
                        fVar13 = *(float *)(iVar28 + 4);
                        fVar14 = *(float *)(iVar28 + 8);
                        fVar15 = *(float *)(iVar28 + 0xc);
                        fVar16 = *(float *)(iVar29 + 4);
                        fVar17 = *(float *)(iVar29 + 8);
                        fVar18 = *(float *)(iVar29 + 0xc);
                        fVar19 = *(float *)(iVar30 + 4);
                        fVar20 = *(float *)(iVar30 + 8);
                        fVar21 = *(float *)(iVar30 + 0xc);
                        fVar22 = *(float *)(iVar38 + 4);
                        fVar23 = *(float *)(iVar38 + 8);
                        fVar24 = *(float *)(iVar38 + 0xc);
                        pfVar36[1] = (float)((double)(*(float *)(iVar39 + iVar43) +
                                                     *(float *)(iVar39 + iVar47) +
                                                     *(float *)(iVar39 + iVar48) +
                                                     *(float *)(iVar39 + iVar45) +
                                                     *(float *)(iVar39 + iVar49) +
                                                     *(float *)(iVar39 + iVar46) +
                                                     *(float *)(iVar39 + iVar34) +
                                                     *(float *)(iVar39 + iVar44)) * dVar51);
                        pfVar36[2] = (float)((double)(fVar22 + fVar19 + fVar16 + fVar13 + fVar10 + 
                                                  fVar7 + fVar1 + fVar2) * dVar51);
                        pfVar36[3] = (float)((double)(fVar23 + fVar20 + fVar17 + fVar14 + fVar11 + 
                                                  fVar8 + fVar3 + fVar4) * dVar51);
                        pfVar36 = pfVar36 + 4;
                        *pfVar36 = (float)((double)(fVar24 + fVar21 + fVar18 + fVar15 + fVar12 + 
                                                  fVar9 + fVar5 + fVar6) * dVar51);
                      } while (uVar35 < *(uint *)(piVar32[1] + 0x68));
                    }
                    (**(code **)(*(int *)piVar32[1] + 8))((int *)piVar32[1],uVar42,uVar40,iVar33);
                    iVar38 = piVar32[1];
                    uVar42 = uVar42 + 1;
                  } while ((uVar42 & 0xffffffff) < (ulonglong)*(uint *)(iVar38 + 0x6c));
                }
                uVar40 = uVar40 + 1;
              } while ((uVar40 & 0xffffffff) < (ulonglong)*(uint *)(iVar38 + 0x70));
            }
            fn_8265C990(iVar34,0x24810000);
            uVar31 = 0;
          }
          fn_8265C990(iVar33,0x24810000);
        }
        goto LAB_829218fc;
      }
    }
  }
  uVar31 = 0xffffffff80004005;
LAB_829218fc:
  fn_82F6A588(uVar31);
  return;
}

