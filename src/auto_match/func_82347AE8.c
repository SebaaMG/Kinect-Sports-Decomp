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
#define ZEXT48(x) ((U64)((U32)(x)))
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_70;
extern int fn_822BD338();
extern int fn_822C72E0();
extern int fn_82337DE0();
extern int fn_823419C0();
extern int fn_823477E8();
extern int fn_82349750();
extern int fn_82435FA8();
extern int fn_82450238();
extern int fn_82539560();
extern int fn_827F6210();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821929B0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C78F0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82347AE8(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  float *pfVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  char cVar5;
  uint uVar4;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float in_register_00010000;
  float fVar14;
  float in_ACC;
  float fVar15;
  float in_register_00010008;
  float fVar16;
  float in_vr0;
  float fVar17;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  undefined1 auStack_70 [1];
  
  uVar3 = ZEXT48(&stack0x00000000);
  iVar1 = **(int **)(param_2 + 0xc);
  iVar8 = *(int *)(*(int *)(*(int *)(iVar1 + 0x1a0) + 0xc) + 0x174);
  if (*(int *)(*(int *)(iVar8 + 0x5c) + 0x1d4) == -1) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar8 + 0x5c);
    iVar8 = *(int *)(*(int *)(iVar8 + 0x1d4) * 4 + *(int *)(iVar8 + 0x1c4));
  }
  iVar7 = (*(int **)(param_2 + 0xc))[1];
  dVar13 = (double)lbl_821CC160;
  if ((iVar7 != 9) && (iVar7 != 10)) {
    if (iVar7 == 0xc) {
      fn_823419C0(dVar13,param_1,param_2);
    }
    goto LAB_82347e7c;
  }
  pfVar2 = *(float **)(**(int **)(param_2 + 0xc) + 0x1a0);
  fn_82435FA8((double)*pfVar2,uVar3 - 0x70,iVar8,param_4,*(undefined1 *)(pfVar2 + 0x11));
  iVar7 = *(int *)(param_2 + 0x10);
  if ((*(int *)(iVar7 + 0xb4) == 0) &&
     (*(float *)(iVar7 + 0x8c) <= *(float *)(*(int *)(param_2 + 0xc) + 0x14))) {
    *(float *)(iVar1 + 0x108) = *(float *)(iVar7 + 0x74) * lbl_831C78F0;
    fn_822C72E0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x20),0xffffffff821b114c);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xb4) = 1;
    goto LAB_82347e7c;
  }
  if ((**(float **)(iVar8 + 0x44) < **(float **)(iVar1 + 0x1a0)) || (*(int *)(iVar7 + 0x5c) != 0))
  goto LAB_82347e7c;
  cVar5 = fn_822BD338((ulonglong)*(uint *)(*(int *)(iVar1 + 0x114) + 0x20) + 4,
                            0xffffffff821b1140);
  if (cVar5 == '\0') {
    cVar5 = fn_822BD338((ulonglong)*(uint *)(*(int *)(iVar1 + 0x114) + 0x20) + 4,
                              0xffffffff821b11a0);
    if (cVar5 != '\0') goto LAB_82347dc8;
    if (*(int *)(*(int *)(param_2 + 0x10) + 0x60) == 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x60) = 1;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x7c) = **(undefined4 **)(iVar1 + 0x1a0);
    }
    iVar7 = *(int *)(param_2 + 0x10);
    dVar10 = (double)lbl_821CA460;
    dVar11 = (double)(**(float **)(**(int **)(param_2 + 0xc) + 0x1a0) - *(float *)(iVar7 + 0x7c));
    dVar12 = -dVar11;
    dVar9 = dVar13;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar12 < dVar13) << 2) | (uint)(NAN(dVar12) || NAN(dVar13)) << 2))
        < 0.0) {
      dVar9 = dVar11;
    }
    fVar14 = (float)(dVar10 - (double)(float)(dVar10 / (double)(float)((double)((float)(dVar10 / (
                                                  double)*(float *)(iVar7 + 0x84)) +
                                                  **(float **)(iVar8 + 0x44)) *
                                                  (double)*(float *)(iVar7 + 0x84))));
    dVar12 = (double)(lbl_821929B0 - fVar14);
    fVar15 = lbl_821929B0;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar12 < dVar13) << 2) | (uint)(NAN(dVar12) || NAN(dVar13)) << 2))
        < 0.0) {
      fVar15 = fVar14;
    }
    dVar9 = (double)fn_82539560((double)((float)(dVar10 - (double)(float)(dVar10 / (double)(float)(
                                                  (double)(float)(dVar9 + (double)(float)(dVar10 / (
                                                  double)*(float *)(iVar7 + 0x84))) *
                                                  (double)*(float *)(iVar7 + 0x84)))) / fVar15),
                                 dVar13,dVar10,(double)*(float *)(iVar7 + 0x78),
                                 (double)*(float *)(iVar7 + 0x80));
    *(float *)(iVar7 + 0x98) = (float)dVar9;
    iVar7 = *(int *)(param_2 + 0x10);
    dVar9 = (double)*(float *)(iVar7 + 0x98);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar9 < dVar13) << 2) | (uint)(NAN(dVar9) || NAN(dVar13)) << 2)) <
        0.0) {
      dVar9 = dVar13;
    }
    dVar12 = (double)(float)(dVar9 - (double)*(float *)(iVar7 + 0x74));
    dVar10 = (double)*(float *)(iVar7 + 0x74);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar12 < dVar13) << 2) | (uint)(NAN(dVar12) || NAN(dVar13)) << 2))
        < 0.0) {
      dVar10 = dVar9;
    }
    *(float *)(iVar7 + 0x98) = (float)dVar10;
  }
  else {
LAB_82347dc8:
    if (*(int *)(*(int *)(*(int *)(iVar1 + 0x118) + 0xc) + 0x110) != 0) {
      fn_827F6210((double)*(float *)(*(int *)(param_2 + 0x10) + 0x88));
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((dVar13 < (double)*(float *)(uVar4 + 8)) || (dVar13 < (double)*(float *)(uVar4 + 0x34))) {
    loadVectorLeftIndexed128((ulonglong)uVar4,0xac);
    pfVar2 = (float *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
    in_register_000100d0 = *pfVar2;
    in_register_000100d4 = pfVar2[1];
    in_register_000100d8 = pfVar2[2];
    in_vr13 = pfVar2[3];
    *(undefined4 *)(**(int **)(param_2 + 0xc) + 0x10c) = *(undefined4 *)(uVar4 + 0xb0);
    in_register_00010000 = in_register_000100d0 * in_register_00010000;
    in_ACC = in_register_000100d4 * in_ACC;
    in_register_00010008 = in_register_000100d8 * in_register_00010008;
    in_vr0 = in_vr13 * in_vr0;
  }
  else {
    loadVectorLeftIndexed128(in_r0,uVar3 - 0x80);
    pfVar2 = (float *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
    in_register_00010000 = *pfVar2 * in_register_000100d0;
    in_ACC = pfVar2[1] * in_register_000100d4;
    in_register_00010008 = pfVar2[2] * in_register_000100d8;
    in_vr0 = pfVar2[3] * in_vr13;
  }
  fn_823419C0((double)*(float *)(uVar4 + 0x98),param_1,param_2);
  pfVar2 = (float *)(*(int *)(**(int **)(param_2 + 0xc) + 0x114) + 0x60U & 0xfffffff0);
  *pfVar2 = in_register_00010000;
  pfVar2[1] = in_ACC;
  pfVar2[2] = in_register_00010008;
  pfVar2[3] = in_vr0;
LAB_82347e7c:
  if (**(float **)(iVar1 + 0x1a0) <= **(float **)(iVar8 + 0x44)) {
    fn_82349750(param_1,param_2);
    if (((*(int *)(*(int *)(param_2 + 0x10) + 0x14) == 0) &&
        (*(int *)(*(int *)(param_2 + 0x10) + 0x90) != 0)) &&
       (*(int *)(*(int *)(param_2 + 0xc) + 4) == 9)) {
      iVar7 = *(int *)(param_2 + 0x10);
      *(float *)(iVar7 + 8) = (float)((double)*(float *)(iVar7 + 8) + param_1);
      *(undefined4 *)(iVar7 + 0x14) = 1;
    }
    if ((*(int *)(*(int *)(param_2 + 0x10) + 0x40) == 0) &&
       (*(int *)(*(int *)(param_2 + 0x10) + 0x94) != 0)) {
      if ((**(float **)(iVar8 + 0x44) - lbl_821922D0 <
           **(float **)(**(int **)(param_2 + 0xc) + 0x1a0)) && ((*(int **)(param_2 + 0xc))[1] == 9))
      {
        iVar7 = *(int *)(param_2 + 0x10);
        *(float *)(iVar7 + 0x34) = (float)((double)*(float *)(iVar7 + 0x34) + param_1);
        *(undefined4 *)(iVar7 + 0x40) = 1;
        fn_822C72E0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x20),0xffffffff821b0f70);
      }
    }
  }
  else {
    *(float *)(*(int *)(param_2 + 0x10) + 0xa0) =
         (float)(param_1 + (double)*(float *)(*(int *)(param_2 + 0x10) + 0xa0));
  }
  fn_823477E8(param_1,*(undefined4 *)(param_2 + 0x10));
  fn_823477E8(param_1,(ulonglong)*(uint *)(param_2 + 0x10) + 0x2c);
  if ((dVar13 < (double)*(float *)(*(int *)(param_2 + 0x10) + 0xa0)) &&
     (*(int *)(*(int *)(param_2 + 0x10) + 0x5c) == 0)) {
    if (*(float *)(*(int *)(param_2 + 0x10) + 0xa4) <= *(float *)(*(int *)(param_2 + 0x10) + 0xa0))
    {
      uVar4 = fn_82450238(iVar8,iVar1);
      if (uVar4 < 6) {
        if (uVar4 < 4) {
          uVar6 = 0xffffffff821b0db4;
        }
        else {
          uVar6 = 0xffffffff821b0df0;
        }
      }
      else {
        uVar6 = 0xffffffff821b0dd0;
      }
      fn_822C72E0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x20),uVar6);
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x5c) = 1;
    }
    else {
      fn_82435FA8((double)**(float **)(**(int **)(param_2 + 0xc) + 0x1a0),uVar3 - 0x70,iVar8);
      iVar8 = *(int *)(param_2 + 0x10);
      dVar9 = (double)fn_82539560((double)*(float *)(iVar8 + 0xa0),dVar13,
                                   (double)*(float *)(iVar8 + 0xa4),(double)*(float *)(iVar8 + 0x80)
                                   ,(double)*(float *)(iVar8 + 0xc4));
      *(float *)(iVar8 + 0x98) = (float)dVar9;
      iVar8 = *(int *)(param_2 + 0x10);
      dVar9 = (double)*(float *)(iVar8 + 0x98);
      pfVar2 = (float *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
      fVar14 = *pfVar2;
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar9 < dVar13) << 2) | (uint)(NAN(dVar9) || NAN(dVar13)) << 2))
          < 0.0) {
        dVar9 = dVar13;
      }
      dVar12 = (double)(float)(dVar9 - (double)*(float *)(iVar8 + 0x74));
      dVar10 = (double)*(float *)(iVar8 + 0x74);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar12 < dVar13) << 2) | (uint)(NAN(dVar12) || NAN(dVar13)) << 2)
                    ) < 0.0) {
        dVar10 = dVar9;
      }
      *(float *)(iVar8 + 0x98) = (float)dVar10;
      loadVectorLeftIndexed128(in_r0,uVar3 - 0x80);
      pfVar2 = (float *)(*(int *)(**(int **)(param_2 + 0xc) + 0x114) + 0x60U & 0xfffffff0);
      *pfVar2 = fVar14 * in_register_000100d0;
      pfVar2[1] = fVar15 * in_register_000100d4;
      pfVar2[2] = fVar16 * in_register_000100d8;
      pfVar2[3] = fVar17 * in_vr13;
    }
  }
  fn_82337DE0(iVar1);
  return;
}

