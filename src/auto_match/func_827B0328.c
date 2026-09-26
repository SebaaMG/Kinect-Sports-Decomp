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
extern int fn_82F68918();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_827B0328(undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  short *psVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  short sStack_110;
  short sStack_10e;
  
  iVar7 = fn_82F6A538();
  *param_2 = 0x3fff;
  *param_3 = 0x3fff;
  *param_4 = -0x3fff;
  *param_5 = -0x3fff;
  uVar11 = 0;
  if (*(int *)(iVar7 + 0x28) != 0) {
    dVar22 = (double)lbl_82002C5C;
    dVar20 = (double)lbl_82002AE0;
    dVar23 = (double)lbl_821AAD20;
    dVar21 = (double)lbl_82005344;
    do {
      iVar3 = (uVar11 & 0x3f) * 8;
      iVar8 = *(int *)((uVar11 >> 4 & 0xffffffc) + *(int *)(iVar7 + 0x34));
      puVar12 = (uint *)(iVar8 + iVar3);
      uVar2 = *(uint *)(iVar8 + iVar3);
      uVar10 = *(undefined4 *)
                (*(int *)((uVar2 >> 4 & 0xffffffc) + *(int *)(iVar7 + 0x24)) + (uVar2 & 0x3f) * 4);
      sStack_10e = (short)uVar10;
      sVar4 = (short)((int)uVar10 >> 0x11);
      iVar8 = (int)sVar4;
      if ((int)sVar4 < *param_2) {
        *param_2 = (int)sVar4;
      }
      if ((int)sStack_10e < *param_3) {
        *param_3 = (int)sStack_10e;
      }
      if (*param_4 < (int)sVar4) {
        *param_4 = (int)sVar4;
      }
      if (*param_5 < (int)sStack_10e) {
        *param_5 = (int)sStack_10e;
      }
      uVar13 = 1;
      if (1 < puVar12[1]) {
        do {
          uVar2 = *puVar12 + (int)uVar13;
          iVar6 = (uVar2 & 0x3f) * 4;
          iVar3 = *(int *)((uVar2 >> 4 & 0xffffffc) + *(int *)(iVar7 + 0x24));
          psVar14 = (short *)(iVar3 + iVar6);
          uVar1 = *(ushort *)(iVar3 + iVar6);
          if ((uVar1 & 1) == 0) {
            uVar10 = *(undefined4 *)psVar14;
          }
          else {
            uVar13 = uVar13 + 1;
            uVar9 = *puVar12 + uVar13;
            iVar6 = ((uint)uVar9 & 0x3f) * 4;
            iVar3 = *(int *)(((uint)((uVar9 & 0xffffffff) >> 4) & 0xffffffc) +
                            *(int *)(iVar7 + 0x24));
            psVar5 = (short *)(iVar3 + iVar6);
            dVar24 = (double)(longlong)iVar8;
            dVar15 = (double)(longlong)((short)uVar1 >> 1);
            dVar16 = (double)(longlong)(*(short *)(iVar3 + iVar6) >> 1);
            dVar17 = (double)(float)((double)(float)(dVar15 * dVar21 - dVar24) - dVar16);
            if (((dVar17 != dVar23) &&
                (dVar17 = (double)(float)((double)(float)(dVar15 - dVar24) / dVar17),
                dVar23 < dVar17)) && (dVar17 < dVar20)) {
              dVar19 = (double)(float)((double)(float)(dVar15 - dVar24) * dVar17 + dVar24);
              dVar18 = (double)(float)((double)(float)(dVar16 - dVar15) * dVar17 + dVar15);
              dVar15 = (double)(longlong)(int)sStack_10e;
              dVar16 = (double)(longlong)psVar14[1];
              dVar15 = (double)(float)((double)(float)(dVar16 - dVar15) * dVar17 + dVar15);
              dVar15 = (double)fn_82F68918((double)(float)((double)(float)((double)(float)((double)
                                                  (float)((double)(longlong)psVar5[1] - dVar16) *
                                                  dVar17 + dVar16) - dVar15) * dVar17 + dVar15));
              iVar8 = (int)((double)(float)dVar15 + dVar22);
              dVar15 = (double)fn_82F68918((double)(float)((double)(float)(dVar18 - dVar19) *
                                                            dVar17 + dVar19));
              iVar3 = (int)((double)(float)dVar15 + dVar22);
              if (iVar3 < *param_2) {
                *param_2 = iVar3;
              }
              if (iVar8 < *param_3) {
                *param_3 = iVar8;
              }
              if (*param_4 < iVar3) {
                *param_4 = iVar3;
              }
              if (*param_5 < iVar8) {
                *param_5 = iVar8;
              }
            }
            dVar17 = (double)(longlong)(int)sStack_10e;
            dVar15 = (double)(longlong)psVar14[1];
            dVar16 = (double)(float)((double)(float)(dVar15 * dVar21 - dVar17) -
                                    (double)(longlong)psVar5[1]);
            if (dVar16 != dVar23) {
              dVar16 = (double)(float)((double)(float)(dVar15 - dVar17) / dVar16);
              if ((dVar23 < dVar16) && (dVar16 < dVar20)) {
                dVar18 = (double)(float)((double)(float)(dVar15 - dVar17) * dVar16 + dVar17);
                dVar17 = (double)(longlong)(*psVar14 >> 1);
                dVar24 = (double)(float)((double)(float)(dVar17 - dVar24) * dVar16 + dVar24);
                dVar17 = (double)(float)((double)(float)((double)(longlong)(*psVar5 >> 1) - dVar17)
                                         * dVar16 + dVar17);
                dVar15 = (double)fn_82F68918((double)(float)((double)(float)((double)(float)((
                                                  double)(float)((double)(longlong)psVar5[1] -
                                                                dVar15) * dVar16 + dVar15) - dVar18)
                                                  * dVar16 + dVar18));
                iVar8 = (int)((double)(float)dVar15 + dVar22);
                dVar15 = (double)fn_82F68918((double)(float)((double)(float)(dVar17 - dVar24) *
                                                              dVar16 + dVar24));
                iVar3 = (int)((double)(float)dVar15 + dVar22);
                if (iVar3 < *param_2) {
                  *param_2 = iVar3;
                }
                if (iVar8 < *param_3) {
                  *param_3 = iVar8;
                }
                if (*param_4 < iVar3) {
                  *param_4 = iVar3;
                }
                if (*param_5 < iVar8) {
                  *param_5 = iVar8;
                }
              }
            }
            uVar10 = *(undefined4 *)psVar5;
          }
          sStack_10e = (short)uVar10;
          iVar8 = (int)(short)((int)uVar10 >> 0x11);
          if (iVar8 < *param_2) {
            *param_2 = iVar8;
          }
          if ((int)sStack_10e < *param_3) {
            *param_3 = (int)sStack_10e;
          }
          if (*param_4 < iVar8) {
            *param_4 = iVar8;
          }
          if (*param_5 < (int)sStack_10e) {
            *param_5 = (int)sStack_10e;
          }
          uVar13 = uVar13 + 1;
        } while ((uVar13 & 0xffffffff) < (ulonglong)puVar12[1]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(iVar7 + 0x28));
  }
  fn_82F6A584();
  return;
}

