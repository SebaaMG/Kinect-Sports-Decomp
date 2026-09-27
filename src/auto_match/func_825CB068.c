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
extern int fn_82547FB8();
extern int fn_825480E0();
extern int fn_825484B8();
extern int fn_8284C850();
extern int fn_8284C860();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern float lbl_82186E64;
extern float lbl_821917D4;
extern unsigned int lbl_821954D0;
extern unsigned int lbl_82195598;
extern unsigned int lbl_82195940;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8329788C;


void fn_825CB068(undefined8 param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar11;
  ulonglong uVar9;
  byte bVar13;
  longlong lVar10;
  uint uVar12;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar11 = fn_82F6A52C();
  iVar5 = *(int *)(iVar11 + 0x54);
  dVar24 = (double)lbl_821CC160;
  dVar23 = (double)*(float *)(iVar5 + 0x158);
  if ((dVar23 != dVar24) || ((double)*(float *)(iVar5 + 0x15c) != dVar24)) {
    iVar6 = *(int *)(iVar11 + 0x54);
    iVar14 = *(int *)(iVar6 + 0xd8);
    iVar7 = *(int *)(iVar6 + 0xdc);
    iVar8 = *(int *)(iVar6 + 0xe0);
    iVar1 = (int)((double)(longlong)(iVar14 + -1) * param_3);
    iVar2 = (int)((double)(longlong)(iVar14 + -1) * param_4);
    dVar19 = extraout_f1;
    uVar9 = fn_825484B8(*(undefined4 *)(iVar6 + 0x114),iVar14,iVar1,iVar2);
    bVar13 = fn_82547FB8(*(undefined4 *)(iVar5 + 0x114),iVar14,iVar1,iVar2);
    dVar25 = (double)lbl_821954D0;
    dVar22 = (double)lbl_821CA460;
    dVar20 = (double)(float)((double)(uVar9 & 0xff) * dVar25);
    dVar21 = (double)(float)((double)bVar13 * dVar25);
    dVar18 = dVar24;
    if (dVar24 < dVar23) {
      uVar12 = iVar7 - 1;
      iVar1 = *(int *)(iVar11 + 0x54);
      fVar4 = ((float)((double)((uVar9 & 0xffffffff) >> 8 & 0xff) * dVar25) *
               *(float *)(iVar1 + 0x1b0) + *(float *)(iVar1 + 0x16c) * *(float *)(iVar1 + 0x70) +
              *(float *)(iVar1 + 0x174)) * lbl_82186E64;
      dVar18 = (double)fVar4;
      iVar2 = (int)((int)((float)((double)*(float *)(iVar1 + 0x150) * dVar19) *
                         (float)(longlong)(int)uVar12) & uVar12) >> 3;
      iVar6 = (int)((int)((float)((double)*(float *)(iVar1 + 0x150) * param_2) *
                         (float)(longlong)(int)uVar12) & uVar12) >> 3;
      iVar14 = (int)fVar4 % 0xc;
      dVar19 = (double)(float)(dVar18 - (double)(longlong)(dVar18 - lbl_82195598));
      dVar18 = (double)(float)((double)*(byte *)((*(int *)(iVar1 + 0xa8) * iVar14 + iVar6) *
                                                 *(int *)(iVar1 + 0xa4) + *(int *)(iVar1 + 0xb0) +
                                                iVar2) * dVar25);
      if (dVar24 < dVar19) {
        dVar18 = (double)(float)((double)(float)((double)*(byte *)((((iVar14 + 1) % 0xc) *
                                                                    *(int *)(iVar1 + 0xa8) + iVar6)
                                                                   * *(int *)(iVar1 + 0xa4) +
                                                                   *(int *)(iVar5 + 0xb0) + iVar2) *
                                                dVar25) * dVar19 +
                                (double)(float)((double)(float)(dVar22 - dVar19) * dVar18));
      }
      dVar18 = (double)(float)(dVar23 * dVar18);
    }
    if (dVar24 < dVar20) {
      dVar24 = lbl_82195598;
      lVar10 = fn_8284C850(*(undefined4 *)(*(int *)(iVar5 + 0x8c) + 0x14));
      uVar12 = fn_8284C860(*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x54) + 0x8c) + 0x14));
      uVar12 = uVar12 & 0xff;
      dVar22 = (double)lbl_821CA460;
      if (uVar12 < 2) {
        iVar5 = *(int *)(iVar11 + 0x54);
        uVar12 = (int)lVar10 - 1;
        fVar4 = (float)((double)*(byte *)(((int)(((float)(dVar21 * (double)lbl_82195940 -
                                                         (double)(*(float *)(*(int *)(iVar11 + 0x4c)
                                                                            + 0x828) *
                                                                  *(float *)(iVar5 + 0x160) *
                                                                 lbl_821917D4)) + lbl_8329788C) *
                                                (float)(longlong)(int)uVar12) & uVar12) +
                                         *(int *)(iVar5 + 0xa0)) * dVar25) *
                *(float *)(iVar5 + 0x15c);
      }
      else {
        iVar5 = *(int *)(iVar11 + 0x54);
        fVar4 = *(float *)(*(int *)(iVar11 + 0x4c) + 0x828) * *(float *)(iVar5 + 0x160);
        dVar23 = (double)fVar4;
        uVar3 = (uint)fVar4;
        uVar17 = (ulonglong)uVar3 - (longlong)((int)uVar3 / (int)uVar12) * (longlong)(int)uVar12;
        lVar15 = uVar17 + 1;
        uVar16 = (ulonglong)(uint)(int)((double)(longlong)(int)(lVar10 - 1U) * dVar21) & lVar10 - 1U
        ;
        dVar19 = (double)(float)(dVar23 - (double)(longlong)(dVar23 - dVar24));
        uVar9 = fn_825480E0(*(undefined4 *)
                                   ((int)((lVar15 - (longlong)((int)lVar15 / (int)uVar12) *
                                                    (longlong)(int)uVar12 & 0xffffffffU) << 2) +
                                   *(int *)(iVar5 + 0x118)),lVar10,uVar16,0);
        dVar23 = (double)*(float *)(iVar5 + 0x15c);
        dVar24 = (double)(float)((double)((uVar9 & 0xffffffff) >> 8 & 0xff) * dVar25);
        uVar9 = fn_825480E0(*(undefined4 *)
                                   (*(int *)(iVar5 + 0x118) + (int)((uVar17 & 0xffffffff) << 2)),
                                  lVar10,uVar16,0);
        fVar4 = (float)((double)(float)(dVar24 * dVar23) * dVar19 +
                       (double)((float)((double)((uVar9 & 0xffffffff) >> 8 & 0xff) * dVar25) *
                                *(float *)(iVar5 + 0x15c) * (float)(dVar22 - dVar19)));
      }
      dVar18 = (double)(float)((double)(float)(dVar22 - (double)(float)(dVar20 * dVar21)) * dVar18 +
                              (double)(float)((double)(float)(dVar20 * dVar21) * (double)fVar4));
    }
    dVar24 = (double)(longlong)(iVar8 + -1);
    dVar24 = (double)(float)(-(double)(float)((double)*(byte *)((int)(dVar24 * param_4) *
                                                                *(int *)(*(int *)(iVar11 + 0x54) +
                                                                        0xb4) +
                                                                (int)(dVar24 * param_3) +
                                                               *(int *)(*(int *)(iVar11 + 0x54) +
                                                                       0xc0)) * dVar25 - dVar22) *
                            dVar18);
  }
  fn_82F6A578(dVar24);
  return;
}

