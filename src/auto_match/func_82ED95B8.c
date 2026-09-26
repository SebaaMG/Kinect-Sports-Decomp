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
extern int fn_82ED4E58();
extern int fn_82F65FB0();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000003c;
extern unsigned int lbl_82005708;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8215F990;
extern unsigned int uStack0000002c;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;


double fn_82ED95B8(double param_1,undefined8 param_2,int param_3,byte *param_4,uint param_5,
                    ulonglong param_6,int param_7)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  byte *pbVar13;
  ulonglong uVar12;
  int *piVar14;
  byte *pbVar15;
  ulonglong uVar16;
  byte *pbVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int iStack0000001c;
  byte *pbStack00000024;
  uint uStack0000002c;
  int iStack0000003c;
  uint uStack_f8;
  byte *pbStack_f4;
  int *piStack_f0;
  uint uStack_ec;
  
  uStack_ec = (uint)param_6;
  uVar16 = (longlong)(int)param_5 * (longlong)(int)uStack_ec;
  lVar9 = (uVar16 & 0x3fffffff) << 2;
  if (0x3fffffff < (uVar16 & 0xffffffff)) {
    lVar9 = -1;
  }
  iStack0000001c = param_3;
  pbStack00000024 = param_4;
  uStack0000002c = param_5;
  iStack0000003c = param_7;
  iVar10 = fn_8265C940(lVar9,0x248c8000);
  uVar12 = uVar16;
  if (0 < (int)uStack_ec) {
    iVar1 = param_7 * 8;
    piStack_f0 = (int *)(iVar10 + -4);
    uStack_f8 = param_5;
    pbVar17 = param_4;
    do {
      if (0 < (int)uStack_f8) {
        pbStack_f4 = param_4;
        do {
          iVar11 = 0;
          pbVar13 = pbStack_f4 + (iStack0000001c - (int)pbVar17);
          lVar9 = 2;
          pbVar15 = pbStack_f4;
          do {
            pbVar2 = pbVar15 + param_7;
            pbVar3 = pbVar13 + param_7;
            pbVar4 = pbVar2 + param_7;
            pbVar5 = pbVar3 + iStack0000003c;
            pbVar6 = pbVar4 + iStack0000003c;
            pbVar7 = pbVar5 + iStack0000003c;
            iVar11 = ((uint)pbVar7[7] - (uint)pbVar6[7]) * ((uint)pbVar7[7] - (uint)pbVar6[7]) +
                     ((uint)pbVar7[6] - (uint)pbVar6[6]) * ((uint)pbVar7[6] - (uint)pbVar6[6]) +
                     ((uint)pbVar7[5] - (uint)pbVar6[5]) * ((uint)pbVar7[5] - (uint)pbVar6[5]) +
                     ((uint)pbVar7[4] - (uint)pbVar6[4]) * ((uint)pbVar7[4] - (uint)pbVar6[4]) +
                     ((uint)pbVar7[3] - (uint)pbVar6[3]) * ((uint)pbVar7[3] - (uint)pbVar6[3]) +
                     ((uint)pbVar7[2] - (uint)pbVar6[2]) * ((uint)pbVar7[2] - (uint)pbVar6[2]) +
                     ((uint)pbVar7[1] - (uint)pbVar6[1]) * ((uint)pbVar7[1] - (uint)pbVar6[1]) +
                     ((uint)*pbVar7 - (uint)*pbVar6) * ((uint)*pbVar7 - (uint)*pbVar6) +
                     ((uint)pbVar5[7] - (uint)pbVar4[7]) * ((uint)pbVar5[7] - (uint)pbVar4[7]) +
                     ((uint)pbVar5[6] - (uint)pbVar4[6]) * ((uint)pbVar5[6] - (uint)pbVar4[6]) +
                     ((uint)pbVar5[5] - (uint)pbVar4[5]) * ((uint)pbVar5[5] - (uint)pbVar4[5]) +
                     ((uint)pbVar5[4] - (uint)pbVar4[4]) * ((uint)pbVar5[4] - (uint)pbVar4[4]) +
                     ((uint)pbVar5[3] - (uint)pbVar4[3]) * ((uint)pbVar5[3] - (uint)pbVar4[3]) +
                     ((uint)pbVar5[2] - (uint)pbVar4[2]) * ((uint)pbVar5[2] - (uint)pbVar4[2]) +
                     ((uint)pbVar5[1] - (uint)pbVar4[1]) * ((uint)pbVar5[1] - (uint)pbVar4[1]) +
                     ((uint)*pbVar5 - (uint)*pbVar4) * ((uint)*pbVar5 - (uint)*pbVar4) +
                     ((uint)pbVar3[7] - (uint)pbVar2[7]) * ((uint)pbVar3[7] - (uint)pbVar2[7]) +
                     ((uint)pbVar3[6] - (uint)pbVar2[6]) * ((uint)pbVar3[6] - (uint)pbVar2[6]) +
                     ((uint)pbVar3[5] - (uint)pbVar2[5]) * ((uint)pbVar3[5] - (uint)pbVar2[5]) +
                     ((uint)pbVar3[4] - (uint)pbVar2[4]) * ((uint)pbVar3[4] - (uint)pbVar2[4]) +
                     ((uint)pbVar3[3] - (uint)pbVar2[3]) * ((uint)pbVar3[3] - (uint)pbVar2[3]) +
                     ((uint)pbVar3[2] - (uint)pbVar2[2]) * ((uint)pbVar3[2] - (uint)pbVar2[2]) +
                     ((uint)pbVar3[1] - (uint)pbVar2[1]) * ((uint)pbVar3[1] - (uint)pbVar2[1]) +
                     ((uint)*pbVar3 - (uint)*pbVar2) * ((uint)*pbVar3 - (uint)*pbVar2) +
                     ((uint)pbVar13[7] - (uint)pbVar15[7]) * ((uint)pbVar13[7] - (uint)pbVar15[7]) +
                     ((uint)pbVar13[6] - (uint)pbVar15[6]) * ((uint)pbVar13[6] - (uint)pbVar15[6]) +
                     ((uint)pbVar13[5] - (uint)pbVar15[5]) * ((uint)pbVar13[5] - (uint)pbVar15[5]) +
                     ((uint)pbVar13[4] - (uint)pbVar15[4]) * ((uint)pbVar13[4] - (uint)pbVar15[4]) +
                     ((uint)pbVar13[3] - (uint)pbVar15[3]) * ((uint)pbVar13[3] - (uint)pbVar15[3]) +
                     ((uint)pbVar13[2] - (uint)pbVar15[2]) * ((uint)pbVar13[2] - (uint)pbVar15[2]) +
                     ((uint)pbVar13[1] - (uint)pbVar15[1]) * ((uint)pbVar13[1] - (uint)pbVar15[1]) +
                     ((uint)*pbVar13 - (uint)*pbVar15) * ((uint)*pbVar13 - (uint)*pbVar15) + iVar11;
            pbVar13 = pbVar7 + iStack0000003c;
            pbVar15 = pbVar6 + iStack0000003c;
            lVar9 = lVar9 + -1;
            param_7 = iStack0000003c;
          } while (lVar9 != 0);
          uVar12 = (ulonglong)uStack_f8;
          piStack_f0 = piStack_f0 + 1;
          *piStack_f0 = iVar11 >> 6;
          pbStack_f4 = pbStack_f4 + 8;
          uStack_f8 = (uint)(uVar12 - 1);
        } while (uVar12 - 1 != 0);
        param_6 = (ulonglong)uStack_ec;
        uVar12 = uVar16 & 0xffffffff;
        uStack_f8 = uStack0000002c;
        pbVar17 = pbStack00000024;
      }
      param_6 = param_6 - 1;
      param_4 = param_4 + iVar1;
      uStack_ec = (uint)param_6;
    } while (param_6 != 0);
  }
  dVar19 = lbl_82005710;
  dVar18 = lbl_82005710;
  fn_82ED4E58(iVar10,uVar12,4,0xffffffff82ed4d80);
  iVar11 = 0;
  iVar1 = (int)uVar12 / 10;
  dVar20 = dVar18;
  if (1 < iVar1) {
    piVar14 = (int *)(iVar10 + -4);
    do {
      piVar8 = piVar14 + 1;
      iVar11 = iVar11 + 2;
      piVar14 = piVar14 + 2;
      dVar20 = (double)(longlong)*piVar8 + dVar20;
      dVar19 = (double)(longlong)*piVar14 + dVar19;
    } while (iVar11 < iVar1 + -1);
  }
  if (iVar11 < iVar1) {
    dVar18 = (double)(longlong)*(int *)(iVar11 * 4 + iVar10);
  }
  dVar18 = (dVar19 + dVar20 + dVar18) / (double)(longlong)iVar1;
  dVar19 = lbl_82005708;
  if (lbl_8215F990 < dVar18) {
    dVar19 = (double)fn_82F65FB0((param_1 * param_1) / dVar18);
    dVar19 = dVar19 * lbl_82015618;
  }
  fn_8265C990(iVar10,0x248c8000);
  return dVar19;
}

