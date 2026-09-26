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
#define NAN(x) ((x) != (x))
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825A2410();
extern int fn_825C2EB8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int *lbl_8326C2C0;


void fn_82594298(double param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double extraout_f1;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  lVar4 = fn_8251F720(param_2,0);
  if (lVar4 != 0) {
    if (((lbl_8326C2C0 == (ushort *)0x0) ||
        (0xf < (uint)((*(int *)(lbl_8326C2C0 + 4) - *(int *)(lbl_8326C2C0 + 2)) /
                     (int)(uint)*lbl_8326C2C0))) ||
       (iVar5 = fn_825A2410(0xffffffff8326c2c0), iVar5 == 0)) {
      fn_8251FA58(lVar4);
    }
    else {
      *(undefined4 *)(iVar5 + 0x44) = param_5;
      dVar14 = (double)lbl_821CC160;
      dVar13 = (double)lbl_821CA460;
      puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      uVar15 = *puVar2;
      uVar16 = puVar2[1];
      uVar17 = puVar2[2];
      uVar18 = puVar2[3];
      *(int *)(iVar5 + 0x28) = (int)lVar4;
      iVar9 = 0;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((param_1 < dVar14) << 2) |
                    (uint)(NAN(param_1) || NAN(dVar14)) << 2)) < 0.0) {
        param_1 = dVar14;
      }
      puVar2 = (undefined4 *)(iVar5 + 0x30U & 0xfffffff0);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      dVar12 = dVar13;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((double)(float)(param_1 - dVar13) < dVar14) << 2) |
                    (uint)(NAN((double)(float)(param_1 - dVar13)) || NAN(dVar14)) << 2)) < 0.0) {
        dVar12 = param_1;
      }
      *(float *)(iVar5 + 0x40) = (float)dVar12;
      dVar12 = (double)lbl_8218E8E8;
      do {
        iVar8 = iVar9 * 0x6c;
        iVar3 = *(int *)(iVar5 + 0x28) + iVar8;
        dVar10 = (double)*(float *)(iVar3 + 0x54);
        pfVar7 = (float *)(iVar9 * 0x14 + iVar5);
        pfVar7[4] = (float)((double)(float)((double)*(float *)(iVar3 + 0x58) - dVar10) * dVar12 +
                           dVar10);
        iVar3 = *(int *)(iVar5 + 0x28) + iVar8;
        pfVar7[3] = (float)((double)(*(float *)(iVar3 + 0x58) - *(float *)(iVar3 + 0x54)) * dVar12);
        pfVar7[1] = (float)dVar14;
        pfVar7[2] = *(float *)(*(int *)(iVar5 + 0x28) + iVar8 + 0x60);
        pfVar1 = *(float **)(iVar5 + 0x28);
        pfVar6 = pfVar1 + 1;
        if (iVar9 != 0) {
          pfVar6 = pfVar1 + 0x1c;
        }
        iVar5 = fn_825C2EB8((double)(float)(dVar14 / (double)*pfVar1),iVar5,pfVar6);
        iVar9 = iVar9 + 1;
        dVar10 = extraout_f1;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((extraout_f1 < dVar14) << 2) |
                      (uint)(NAN(extraout_f1) || NAN(dVar14)) << 2)) < 0.0) {
          dVar10 = dVar14;
        }
        dVar11 = dVar13;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)(((double)(float)(dVar10 - dVar13) < dVar14) << 2) |
                      (uint)(NAN((double)(float)(dVar10 - dVar13)) || NAN(dVar14)) << 2)) < 0.0) {
          dVar11 = dVar10;
        }
        *pfVar7 = (float)dVar11;
        *(float *)(iVar5 + 0x2c) = (float)dVar14;
      } while (iVar9 < 2);
    }
  }
  return;
}

