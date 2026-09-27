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
extern unsigned int *auStack_a0;
extern int fn_8255A1C8();
extern int fn_8261EAE8();
extern int fn_8261EFD0();
extern int fn_8261F420();
extern int fn_8261F628();
extern int fn_826214A8();
extern int fn_82621500();
extern int fn_82621548();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern float lbl_8218E8E8;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_821955B4;
extern unsigned int lbl_82195C38;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DB304;


void fn_825E0EC8(undefined8 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  int iVar9;
  ulonglong uVar6;
  bool bVar10;
  int iVar11;
  undefined8 extraout_f1;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_a0 [96];
  
  iVar7 = fn_82F6A540();
  iVar9 = param_2[0xd];
  dVar16 = (double)lbl_821CC160;
  fVar1 = *(float *)(iVar9 + 4);
  fVar2 = *(float *)(iVar9 + 0x2c);
  if ((*(int *)(iVar9 + 0x50) != 0) || (bVar10 = false, *(int *)(param_2[0x10] + 8) != 0)) {
    bVar10 = true;
  }
  iVar9 = param_2[1];
  iVar11 = iVar7 + 0x4d0;
  uVar5 = extraout_f1;
  dVar17 = dVar16;
  fn_8261F628((double)*(float *)(iVar9 + 0x30),(double)*(float *)(iVar9 + 0x34),
                (double)*(float *)(iVar9 + 0x38),iVar11,(ulonglong)(uint)param_2[9] + 0x110);
  if (((*(int *)(param_2[0xd] + 0x54) == 0) && (*(int *)(param_2[9] + 0x110) != 0)) &&
     (*(int *)(param_2[9] + 0x11c) != 0)) {
    uVar5 = 0;
    goto LAB_825e13c0;
  }
  dVar15 = (double)fVar1;
  dVar14 = (double)fVar2;
  dVar13 = (double)lbl_831DB304;
  if (*(int *)(param_2[0xd] + 0x54) != 0) {
    fVar1 = *(float *)(param_2[1] + 0x38);
    fn_82621500(dVar15);
    fn_82621548(uVar5,param_2[0xd]);
    fn_82621500(dVar14,(ulonglong)(uint)param_2[0xd] + 0x28);
    fn_82621548(uVar5,(ulonglong)(uint)param_2[0xd] + 0x28);
    pfVar3 = (float *)param_2[0xd];
    iVar9 = param_2[1];
    if (*(float *)(iVar9 + 0x30) <= *pfVar3) {
      dVar17 = dVar14;
      if (*(float *)(iVar9 + 0x30) < pfVar3[10]) {
        fn_8261F420((double)*(float *)(param_2[1] + 0x38),
                          (double)*(float *)(param_2[1] + 0x34),(double)pfVar3[0xb],iVar11);
        fn_8255A1C8((double)*(float *)(param_2[0xd] + 0x2c),
                          (double)*(float *)(param_2[1] + 0x34),
                          (double)*(float *)(param_2[1] + 0x38));
        iVar8 = fn_8261EFD0(iVar11);
        iVar9 = param_2[0xe];
        fn_8255A1C8((double)*(float *)(iVar9 + 0x30),(double)*(float *)(iVar9 + 0x34),
                          (double)*(float *)(iVar9 + 0x38));
        iVar9 = param_2[1];
        puVar4 = (undefined4 *)(iVar9 + 0x20U & 0xfffffff0);
        uVar18 = *puVar4;
        uVar19 = puVar4[1];
        uVar20 = puVar4[2];
        uVar21 = puVar4[3];
        fn_8255A1C8(dVar14,(double)*(float *)(iVar9 + 0x34),(double)*(float *)(iVar9 + 0x38));
        puVar4 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
        *puVar4 = uVar18;
        puVar4[1] = uVar19;
        puVar4[2] = uVar20;
        puVar4[3] = uVar21;
        iVar9 = fn_8261EAE8(dVar16,iVar11,auStack_a0);
        dVar17 = dVar14;
        if (((iVar9 != 0) || (iVar8 != 0)) &&
           (fVar1 < *(float *)(*param_2 + 0xc0) + *(float *)(iVar7 + 0x1a0))) {
          uVar6 = (ulonglong)(uint)param_2[0xd] + 0x28;
          goto LAB_825e1220;
        }
      }
    }
    else {
      fn_8261F420((double)*(float *)(iVar9 + 0x38),(double)*(float *)(iVar9 + 0x34),
                        (double)pfVar3[1],iVar11);
      fn_8255A1C8((double)*(float *)(param_2[0xd] + 4),(double)*(float *)(param_2[1] + 0x34),
                        (double)*(float *)(param_2[1] + 0x38));
      iVar8 = fn_8261EFD0(iVar11);
      iVar9 = param_2[0xe];
      fn_8255A1C8((double)*(float *)(iVar9 + 0x30),(double)*(float *)(iVar9 + 0x34),
                        (double)*(float *)(iVar9 + 0x38));
      iVar9 = param_2[1];
      puVar4 = (undefined4 *)(iVar9 + 0x20U & 0xfffffff0);
      uVar18 = *puVar4;
      uVar19 = puVar4[1];
      uVar20 = puVar4[2];
      uVar21 = puVar4[3];
      fn_8255A1C8(dVar15,(double)*(float *)(iVar9 + 0x34),(double)*(float *)(iVar9 + 0x38));
      puVar4 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
      *puVar4 = uVar18;
      puVar4[1] = uVar19;
      puVar4[2] = uVar20;
      puVar4[3] = uVar21;
      dVar17 = dVar14;
      dVar14 = dVar15;
      iVar9 = fn_8261EAE8(dVar16,iVar11,auStack_a0);
      dVar15 = dVar14;
      if (((iVar9 != 0) || (iVar8 != 0)) &&
         (fVar1 < *(float *)(*param_2 + 0xc0) + *(float *)(iVar7 + 0x1a0))) {
        uVar6 = (ulonglong)(uint)param_2[0xd];
LAB_825e1220:
        fn_826214A8(dVar14,uVar6);
      }
    }
    dVar14 = dVar17;
    if (bVar10) {
      fn_826214A8(dVar15,param_2[0xd]);
      fn_826214A8(dVar14,(ulonglong)(uint)param_2[0xd] + 0x28);
    }
    iVar9 = param_2[0xd];
    if (*(float *)(iVar9 + 4) < *(float *)(iVar9 + 0x2c)) {
      fn_826214A8((double)*(float *)(iVar9 + 4),iVar9 + 0x28);
    }
    dVar17 = dVar13;
    if (*(int *)(param_2[0xd] + 0x310) == 0) {
      dVar12 = (double)(float)((double)(float)(dVar15 - (double)lbl_821917D4) - (double)lbl_821955B4
                              );
      dVar17 = (double)(float)(dVar15 - (double)lbl_821917D4);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar12 < dVar16) << 2) | (uint)(NAN(dVar12) || NAN(dVar16)) << 2)
                    ) < 0.0) {
        dVar17 = (double)lbl_821955B4;
      }
    }
    if (dVar17 <= (double)*(float *)(param_2[0xc] + 0xa4)) {
      *(undefined4 *)(param_2[0x10] + 0x40) = *(undefined4 *)(param_2[1] + 0x34);
    }
  }
  dVar12 = (double)*(float *)(param_2[3] + 8);
  if ((double)*(float *)(param_2[0x10] + 0x3c) != dVar16) {
    dVar12 = (double)*(float *)(param_2[0x10] + 0x3c);
  }
  if ((double)(float)(((double)(float)(dVar12 * (double)lbl_82195590) -
                      (double)(longlong)(dVar12 * (double)lbl_82195590)) * lbl_821955A0) < dVar17) {
    if ((lbl_82195C38 < *(float *)(param_2[0xc] + 0x2d4)) &&
       ((double)*(float *)(param_2[3] + 8) < (double)*(float *)(*param_2 + 0x114))) {
      dVar12 = (double)*(float *)(*param_2 + 0x114);
    }
    dVar17 = (double)(float)(dVar12 + (double)(*(float *)(param_2[8] + 0xdc) *
                                              *(float *)(param_2[0xc] + 0x194)));
    if (((*(int *)(param_2[0xd] + 0x314) == 0) && (dVar17 < (double)(float)(dVar14 - dVar13))) &&
       (dVar17 = (double)(float)(dVar14 - dVar13), *(int *)(param_2[0xd] + 0x310) == 0)) {
      dVar17 = (double)((float)(dVar14 + dVar15) * lbl_8218E8E8);
    }
  }
  fn_82621500(dVar17,(ulonglong)(uint)param_2[0xc] + 0xa0);
  uVar5 = 1;
LAB_825e13c0:
  fn_82F6A58C(uVar5);
  return;
}

