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
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_8201546C;


void fn_82B652E0(void)

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
  int iVar31;
  int *piVar34;
  undefined8 uVar32;
  longlong lVar33;
  float *pfVar35;
  int iVar36;
  uint uVar37;
  float *pfVar38;
  int *piVar39;
  int iVar40;
  int iVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  longlong lVar51;
  double dVar52;
  
  piVar34 = (int *)fn_82F6A53C();
  if (*(char *)((int)piVar34 + 0xb) == '\x05') {
    iVar48 = *piVar34;
    iVar49 = piVar34[1];
    uVar37 = *(uint *)(iVar48 + 0x68);
    if ((*(uint *)(iVar49 + 0x68) == uVar37 >> 1) ||
       ((*(uint *)(iVar49 + 0x68) == 1 && (uVar37 == 1)))) {
      if (((*(uint *)(iVar49 + 0x6c) == *(uint *)(iVar48 + 0x6c) >> 1) ||
          ((*(uint *)(iVar49 + 0x6c) == 1 && (*(uint *)(iVar48 + 0x6c) == 1)))) &&
         (*(uint *)(iVar49 + 0x70) == *(uint *)(iVar48 + 0x70) >> 1)) {
        if ((1 < uVar37) && ((uVar37 & 1) != 0)) {
          *(uint *)(iVar48 + 0x68) = *(uint *)(iVar48 + 0x68) & 0xfffffffe;
          iVar48 = *piVar34;
          *(int *)(iVar48 + 0x74) = *(int *)(iVar48 + 0x74) - *(int *)(iVar48 + 0x78);
        }
        uVar37 = *(uint *)(*piVar34 + 0x6c);
        if (1 < uVar37) {
          *(uint *)(*piVar34 + 0x6c) = uVar37 & 0xfffffffe;
        }
        uVar37 = *(uint *)(*piVar34 + 0x70);
        if (1 < uVar37) {
          *(uint *)(*piVar34 + 0x70) = uVar37 & 0xfffffffe;
        }
        lVar33 = ((ulonglong)*(uint *)(piVar34[1] + 0x68) & 0xfffffff) << 4;
        if (0xfffffff < *(uint *)(piVar34[1] + 0x68)) {
          lVar33 = -1;
        }
        pfVar35 = (float *)fn_8265C9E0(lVar33);
        if (pfVar35 == (float *)0x0) {
          uVar32 = 0xffffffff8007000e;
        }
        else {
          uVar37 = *(uint *)(*piVar34 + 0x68);
          if (*(int *)(*piVar34 + 0x6c) == 1) {
            lVar33 = ((ulonglong)uVar37 & 0x7ffffff) << 5;
            if (0xfffffff < ((ulonglong)uVar37 & 0x7fffffff) << 1) {
              lVar33 = -1;
            }
            iVar36 = fn_8265C9E0(lVar33);
            piVar39 = (int *)(*piVar34 + 0x68);
            iVar48 = *piVar39 * 0x10 + iVar36;
            iVar49 = iVar36;
            iVar50 = iVar48;
          }
          else {
            lVar33 = ((ulonglong)uVar37 & 0x3ffffff) << 6;
            if (0xfffffff < ((ulonglong)uVar37 & 0x3fffffff) << 2) {
              lVar33 = -1;
            }
            iVar36 = fn_8265C9E0(lVar33);
            piVar39 = (int *)(*piVar34 + 0x68);
            iVar48 = *piVar39;
            iVar50 = iVar48 * 0x10 + iVar36;
            iVar49 = iVar48 * 0x20 + iVar36;
            iVar48 = iVar48 * 0x30 + iVar36;
          }
          if (iVar36 == 0) {
            uVar32 = 0xffffffff8007000e;
          }
          else {
            iVar47 = iVar36;
            iVar45 = iVar49;
            iVar44 = iVar48;
            iVar46 = iVar50;
            if (*piVar39 != 1) {
              iVar47 = iVar36 + 0x10;
              iVar45 = iVar49 + 0x10;
              iVar44 = iVar48 + 0x10;
              iVar46 = iVar50 + 0x10;
            }
            iVar40 = piVar34[1];
            uVar42 = 0;
            if (*(int *)(iVar40 + 0x70) != 0) {
              dVar52 = (double)lbl_8201546C;
              do {
                lVar33 = (uVar42 & 0x7fffffff) * 2;
                uVar43 = 0;
                if (*(int *)(iVar40 + 0x6c) != 0) {
                  do {
                    lVar51 = (uVar43 & 0x7fffffff) * 2;
                    (**(code **)(*(int *)*piVar34 + 4))((int *)*piVar34,lVar51,lVar33,iVar36);
                    if (iVar50 != iVar36) {
                      (**(code **)(*(int *)*piVar34 + 4))((int *)*piVar34,lVar51,lVar33 + 1,iVar50);
                    }
                    if (iVar49 != iVar36) {
                      (**(code **)(*(int *)*piVar34 + 4))((int *)*piVar34,lVar51 + 1,lVar33,iVar49);
                    }
                    if ((iVar48 != iVar50) && (iVar48 != iVar49)) {
                      (**(code **)(*(int *)*piVar34 + 4))
                                ((int *)*piVar34,lVar51 + 1,lVar33 + 1,iVar48);
                    }
                    uVar37 = 0;
                    pfVar38 = pfVar35;
                    if (*(int *)(piVar34[1] + 0x68) != 0) {
                      do {
                        iVar41 = uVar37 * 0x20;
                        iVar40 = iVar41 + iVar47;
                        iVar25 = iVar41 + iVar36;
                        iVar26 = iVar41 + iVar50;
                        fVar17 = *(float *)(iVar41 + iVar47);
                        iVar27 = iVar41 + iVar46;
                        fVar18 = *(float *)(iVar41 + iVar36);
                        iVar28 = iVar41 + iVar49;
                        iVar29 = iVar41 + iVar45;
                        fVar1 = *(float *)(iVar40 + 8);
                        fVar2 = *(float *)(iVar25 + 8);
                        iVar30 = iVar41 + iVar48;
                        fVar3 = *(float *)(iVar40 + 0xc);
                        fVar4 = *(float *)(iVar25 + 0xc);
                        iVar31 = iVar41 + iVar44;
                        fVar19 = *(float *)(iVar41 + iVar50);
                        fVar5 = *(float *)(iVar26 + 8);
                        fVar6 = *(float *)(iVar26 + 0xc);
                        fVar20 = *(float *)(iVar41 + iVar46);
                        fVar7 = *(float *)(iVar27 + 8);
                        fVar8 = *(float *)(iVar27 + 0xc);
                        fVar21 = *(float *)(iVar41 + iVar49);
                        fVar9 = *(float *)(iVar28 + 8);
                        fVar10 = *(float *)(iVar28 + 0xc);
                        fVar22 = *(float *)(iVar41 + iVar45);
                        fVar11 = *(float *)(iVar29 + 8);
                        fVar12 = *(float *)(iVar29 + 0xc);
                        fVar23 = *(float *)(iVar41 + iVar48);
                        fVar13 = *(float *)(iVar30 + 8);
                        fVar14 = *(float *)(iVar30 + 0xc);
                        fVar24 = *(float *)(iVar41 + iVar44);
                        fVar15 = *(float *)(iVar31 + 8);
                        fVar16 = *(float *)(iVar31 + 0xc);
                        pfVar38[1] = (float)((double)(*(float *)(iVar31 + 4) +
                                                     *(float *)(iVar30 + 4) +
                                                     *(float *)(iVar29 + 4) +
                                                     *(float *)(iVar28 + 4) +
                                                     *(float *)(iVar27 + 4) +
                                                     *(float *)(iVar26 + 4) +
                                                     *(float *)(iVar40 + 4) + *(float *)(iVar25 + 4)
                                                     ) * dVar52);
                        uVar37 = uVar37 + 1;
                        *pfVar38 = (float)((double)(fVar24 + fVar23 + fVar21 + fVar20 + fVar19 + 
                                                  fVar18 + fVar17 + fVar22) * dVar52);
                        pfVar38[2] = (float)((double)(fVar15 + fVar13 + fVar11 + fVar9 + fVar7 + 
                                                  fVar5 + fVar1 + fVar2) * dVar52);
                        pfVar38[3] = (float)((double)(fVar16 + fVar14 + fVar12 + fVar10 + fVar8 + 
                                                  fVar6 + fVar3 + fVar4) * dVar52);
                        pfVar38 = pfVar38 + 4;
                      } while (uVar37 < *(uint *)(piVar34[1] + 0x68));
                    }
                    (**(code **)(*(int *)piVar34[1] + 8))((int *)piVar34[1],uVar43,uVar42,pfVar35);
                    iVar40 = piVar34[1];
                    uVar43 = uVar43 + 1;
                  } while ((uVar43 & 0xffffffff) < (ulonglong)*(uint *)(iVar40 + 0x6c));
                }
                uVar42 = uVar42 + 1;
              } while ((uVar42 & 0xffffffff) < (ulonglong)*(uint *)(iVar40 + 0x70));
            }
            fn_8265CA20(iVar36);
            uVar32 = 0;
          }
          fn_8265CA20(pfVar35);
        }
        goto LAB_82b6530c;
      }
    }
  }
  uVar32 = 0xffffffff80004005;
LAB_82b6530c:
  fn_82F6A588(uVar32);
  return;
}

