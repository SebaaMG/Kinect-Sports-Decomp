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
extern int fn_825CB068();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82192604;
extern unsigned int lbl_821954D4;
extern unsigned int lbl_82195690;
extern unsigned int lbl_821CC160;


void fn_825C89B0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,float *param_7)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  double dVar15;
  double extraout_f1;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar6 = fn_82F6A53C();
  iVar7 = *(int *)(iVar6 + 0x54);
  uVar5 = 0;
  bVar4 = false;
  dVar23 = (double)lbl_821CC160;
  iVar2 = (int)((param_6 & 0x1fffffff) << 3);
  piVar11 = (int *)(*(int *)(*(int *)(iVar7 + 0x138) + 0x98) + iVar2);
  iVar8 = *piVar11;
  fVar1 = lbl_82195690;
  if (iVar8 != 0) {
    iVar14 = 0;
    if (0 < iVar8) {
      piVar11 = (int *)(piVar11[1] + 8);
      dVar22 = (double)lbl_821954D4;
      dVar21 = (double)lbl_82192604;
      dVar24 = dVar23;
      dVar25 = extraout_f1;
      do {
        iVar8 = 0;
        if (0 < *piVar11) {
          iVar9 = 0;
          do {
            iVar12 = piVar11[1] + iVar9;
            dVar15 = (double)*(float *)(piVar11[1] + iVar9);
            dVar17 = (double)*(float *)(iVar12 + 0xc);
            dVar16 = (double)*(float *)(iVar12 + 8);
            dVar20 = (double)*(float *)(iVar12 + 4);
            dVar19 = (double)*(float *)(iVar12 + 0x10);
            dVar18 = (double)*(float *)(iVar12 + 0x14);
            fVar3 = (float)(dVar17 - dVar20) * (float)(dVar25 - dVar15) -
                    (float)(dVar16 - dVar15) * (float)(param_2 - dVar20);
            if ((dVar24 <= (double)(((float)(dVar18 - dVar17) * (float)(dVar25 - dVar16) -
                                    (float)(dVar19 - dVar16) * (float)(param_2 - dVar17)) * fVar3))
               && (dVar24 <= (double)(((float)(dVar20 - dVar18) * (float)(dVar25 - dVar19) -
                                      (float)(dVar15 - dVar19) * (float)(param_2 - dVar18)) * fVar3)
                  )) {
              if (piVar11[-1] == 1) {
                if (*param_7 < (float)piVar11[-2]) goto LAB_825c8ba8;
              }
              else {
                if (!bVar4) {
                  pfVar10 = (float *)(*(int *)(iVar6 + 0x54) + 0x15c);
                  pfVar13 = (float *)(*(int *)(iVar6 + 0x54) + 0x158);
                  if (*pfVar13 < *pfVar10) {
                    pfVar13 = pfVar10;
                  }
                  if ((((double)(*param_7 - (float)piVar11[-2]) <=
                        (double)(float)((double)*pfVar13 + dVar21)) &&
                      (dVar22 < (double)(*param_7 - (float)piVar11[-2]))) &&
                     (bVar4 = true, *(int *)(iVar7 + 0x10) != 0)) {
                    dVar23 = (double)fn_825CB068(dVar25,param_2,param_3,param_4,iVar6);
                  }
                  dVar23 = (double)(float)((double)*(float *)(iVar6 + 0x24) + dVar23);
                }
                uVar5 = 1;
                fVar1 = (float)((double)(float)piVar11[-2] + dVar23);
              }
              break;
            }
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 0x18;
          } while (iVar8 < *piVar11);
        }
        iVar7 = *(int *)(iVar6 + 0x54);
        iVar14 = iVar14 + 1;
        piVar11 = piVar11 + 4;
      } while (iVar14 < *(int *)(*(int *)(*(int *)(iVar7 + 0x138) + 0x98) + iVar2));
    }
  }
LAB_825c8ba8:
  *param_7 = fVar1;
  fn_82F6A588(uVar5);
  return;
}

