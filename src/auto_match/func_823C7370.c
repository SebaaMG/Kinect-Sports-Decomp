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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_8255A2F8();
extern int fn_82F65018();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192330;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2DA4;
extern unsigned int lbl_831D2DA8;
extern unsigned int lbl_831D2FEC;
extern unsigned int lbl_831D3000;
extern unsigned int lbl_831DEAC0;
extern unsigned int lbl_831DEAC4;
extern unsigned int lbl_831DEAC8;
extern unsigned int lbl_831DEACC;
extern unsigned int stack0x00000020;
extern V16 loadVectorLeftIndexed128();


void fn_823C7370(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  float *pfVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  float in_vr2;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float in_stack_00000020;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar5 = fn_82F6A548();
  param_6 = param_6 & 0xff;
  pfVar6 = (float *)((int)&stack0x00000020 + in_r0 & 0xfffffff0);
  *pfVar6 = in_register_00010010;
  pfVar6[1] = in_register_00010014;
  pfVar6[2] = in_register_00010018;
  pfVar6[3] = in_vr1;
  fVar4 = lbl_821CC160;
  fVar14 = lbl_82192734;
  pfVar6 = (float *)&lbl_831D3000;
  if (param_6 == 0) {
    pfVar6 = (float *)&lbl_831D2FEC;
  }
  fStack_a0 = pfVar6[1];
  fStack_9c = pfVar6[2];
  fStack_98 = pfVar6[3];
  dVar10 = (double)*pfVar6;
  dVar9 = (double)lbl_821CC160;
  if (*(int *)(*(int *)(iVar5 + 0x10) + 0x2c) != 0) {
    puVar1 = (undefined4 *)
             (in_r0 + *(int *)(*(int *)(*(int *)(iVar5 + 0x240) + 0x1c) + 4) & 0xfffffff0);
    uVar13 = puVar1[1];
    uVar15 = puVar1[2];
    uVar17 = puVar1[3];
    puVar2 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar13;
    puVar2[2] = uVar15;
    puVar2[3] = uVar17;
    fStack_98 = (fStack_98 - fStack_88) * fVar14 + fStack_88;
  }
  if ((param_5 & 0xff) != 0) {
    if (*(int *)(iVar5 + 0x260) != 0) {
      *(uint *)(iVar5 + 0x2b8) = (uint)(dVar9 < (double)in_stack_00000020);
    }
    if (*(int *)(iVar5 + 0x2b8) != 0) {
      fStack_a0 = fStack_a0 * fVar14;
    }
  }
  fVar14 = lbl_82191FCC;
  if (param_6 != 0) {
    fVar14 = lbl_821922D0;
  }
  bVar7 = *(float *)(iVar5 + 0x29c) < fVar14;
  pfVar6 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  *pfVar6 = in_register_00010010;
  pfVar6[1] = in_register_00010014;
  pfVar6[2] = in_register_00010018;
  pfVar6[3] = in_vr1;
  if ((param_4 & 0xff) == 0) {
    if ((!bVar7) && ((param_2 & 0xff) != 0)) {
      dVar9 = (double)fn_8255A2F8();
      loadVectorLeftIndexed128(0xffffffff82192730,0xffffffffffffc1b8);
      pfVar6 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
      *pfVar6 = in_register_000100d0 * (in_register_00010020 - in_register_00010010) +
                in_register_00010010;
      pfVar6[1] = in_register_000100d4 * (in_register_00010024 - in_register_00010014) +
                  in_register_00010014;
      pfVar6[2] = in_register_000100d8 * (in_register_00010028 - in_register_00010018) +
                  in_register_00010018;
      pfVar6[3] = in_vr13 * (in_vr2 - in_vr1) + in_vr1;
    }
  }
  else {
    bVar7 = false;
    pfVar6 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *pfVar6 = in_register_00010020;
    pfVar6[1] = in_register_00010024;
    pfVar6[2] = in_register_00010028;
    pfVar6[3] = in_vr2;
  }
  fStack_8c = fStack_8c + lbl_82191FB0;
  pfVar6 = (float *)((int)&fStack_a0 + in_r0 & 0xfffffff0);
  fVar19 = *pfVar6;
  fVar20 = pfVar6[1];
  fVar21 = pfVar6[2];
  fVar22 = pfVar6[3];
  pfVar6 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  fVar14 = pfVar6[1];
  fVar16 = pfVar6[2];
  fVar18 = pfVar6[3];
  pfVar3 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  *pfVar3 = *pfVar6 - fVar19;
  pfVar3[1] = fVar14 - fVar20;
  pfVar3[2] = fVar16 - fVar21;
  pfVar3[3] = fVar18 - fVar22;
  dVar12 = (double)fStack_88;
  dVar11 = (double)fStack_90;
  dVar8 = (double)fn_82F65018(-dVar11,-dVar12);
  dVar11 = (double)fn_82F65018((double)fStack_8c,
                                (double)SQRT((float)(dVar11 * dVar11 +
                                                    (double)(float)(dVar12 * dVar12))));
  if ((param_3 & 0xff) == 0) {
    fVar14 = lbl_831DEAC8;
    if (((param_6 == 0) && (fVar14 = lbl_82192330, (param_4 & 0xff) == 0)) &&
       (fVar14 = lbl_831DEAC8, !bVar7)) {
      fVar14 = -(float)(dVar9 * (double)lbl_831DEACC - dVar10);
    }
  }
  else {
    fVar14 = lbl_831DEAC4;
    if (bVar7) {
      fVar14 = lbl_831DEAC0;
    }
  }
  *(undefined4 *)(iVar5 + 700) = lbl_831D2DA4;
  *(undefined4 *)(iVar5 + 0x2c0) = lbl_831D2DA8;
  *(float *)(iVar5 + 0x228) = fVar14;
  *(float *)(iVar5 + 0x214) = (float)dVar11;
  *(float *)(iVar5 + 0x218) = (float)dVar8;
  pfVar6 = (float *)(iVar5 + 0x1a0U & 0xfffffff0);
  *pfVar6 = fVar19;
  pfVar6[1] = fVar20;
  pfVar6[2] = fVar21;
  pfVar6[3] = fVar22;
  *(float *)(iVar5 + 0x21c) = fVar4;
  fn_82F6A594();
  return;
}

