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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_28;
extern unsigned int fStack_38;
extern unsigned int fStack_4c;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_6c;
extern unsigned int fStack_7c;
extern int fn_823AC498();
extern int fn_823ACD08();
extern int fn_823AD3F0();
extern int fn_8253A728();
extern unsigned int lbl_821954B0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2C60;
extern unsigned int lbl_831D2CA0;
extern unsigned int lbl_831D2CC0;
extern unsigned int lbl_831D2CE0;
extern unsigned int lbl_831D2D00;
extern unsigned int lbl_831D2D20;
extern unsigned int lbl_831D2D40;


undefined8 fn_822F4038(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined1 auStack_70 [4];
  float fStack_6c;
  undefined1 auStack_60 [4];
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [4];
  float fStack_4c;
  undefined1 auStack_40 [8];
  float fStack_38;
  float fStack_28;
  
  uVar7 = fn_823AC498(param_2);
  puVar5 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  uVar15 = *puVar5;
  uVar16 = puVar5[1];
  uVar17 = puVar5[2];
  uVar18 = puVar5[3];
  fVar1 = *(float *)(param_1 + 0xb0);
  puVar5 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  uVar19 = puVar5[1];
  uVar20 = puVar5[2];
  uVar21 = puVar5[3];
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar19;
  puVar2[2] = uVar20;
  puVar2[3] = uVar21;
  puVar5 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  uVar23 = *puVar5;
  uVar24 = puVar5[1];
  uVar25 = puVar5[2];
  uVar26 = puVar5[3];
  puVar5 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar19 = *puVar5;
  uVar20 = puVar5[1];
  uVar21 = puVar5[2];
  uVar22 = puVar5[3];
  dVar10 = (double)fStack_5c;
  puVar5 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = uVar15;
  puVar5[1] = uVar16;
  puVar5[2] = uVar17;
  puVar5[3] = uVar18;
  puVar5 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar5 = uVar23;
  puVar5[1] = uVar24;
  puVar5[2] = uVar25;
  puVar5[3] = uVar26;
  puVar5 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar5 = uVar19;
  puVar5[1] = uVar20;
  puVar5[2] = uVar21;
  puVar5[3] = uVar22;
  if (param_3 == 0) {
    dVar9 = (double)fStack_7c;
  }
  else {
    fStack_7c = fStack_5c;
    fStack_4c = fStack_5c;
    fStack_6c = fStack_5c;
    dVar9 = dVar10;
  }
  dVar8 = (double)fn_823AD3F0(uVar7,(double)fVar1,param_2);
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 == 0) {
    if (*(int *)(param_2 + 0x54) == 0) {
      dVar6 = (double)lbl_831D2CA0;
      dVar13 = (double)lbl_831D2CC0;
    }
    else {
      dVar6 = (double)lbl_831D2CE0;
      dVar13 = (double)lbl_831D2D00;
    }
  }
  else {
    dVar6 = (double)lbl_831D2D20;
    dVar13 = (double)lbl_831D2D40;
  }
  puVar5 = &lbl_831D2C60;
  dVar12 = (double)*(float *)(param_2 + 0x48);
  puVar4 = &lbl_821954B0;
  dVar11 = (double)lbl_821CC160;
  dVar6 = (double)(float)((double)(float)(dVar13 - dVar6) * dVar12 + dVar6);
  dVar13 = (double)(float)(dVar6 - dVar8);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar13 < dVar11) << 2) | (uint)(NAN(dVar13) || NAN(dVar11)) << 2)) <
      0.0) {
    dVar6 = dVar8;
  }
  dVar8 = (double)fn_823AD3F0(param_2);
  if (iVar3 == 0) {
    if (*(int *)(param_2 + 0x54) == 0) {
      dVar13 = (double)(float)puVar5[0x11];
      dVar14 = (double)(float)puVar5[0x19];
    }
    else {
      dVar13 = (double)(float)puVar5[0x21];
      dVar14 = (double)(float)puVar5[0x29];
    }
  }
  else {
    dVar13 = (double)(float)puVar5[0x31];
    dVar14 = (double)(float)puVar5[0x39];
  }
  dVar13 = (double)(float)((double)(float)(dVar14 - dVar13) * dVar12 + dVar13);
  if (dVar10 < (double)(float)(dVar6 + dVar9)) {
    dVar6 = (double)(float)(dVar13 - dVar8);
    if (*(float *)((int)puVar4 +
                  ((uint)(byte)((dVar6 < dVar11) << 2) | (uint)(NAN(dVar6) || NAN(dVar11)) << 2) +
                  0x28) < 0.0) {
      dVar13 = dVar8;
    }
    if ((double)(float)(dVar9 - dVar13) < dVar10) {
      fStack_6c = (float)dVar10;
      fStack_7c = (float)dVar10;
    }
  }
  puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000104d0;
  puVar5[1] = in_register_000104d4;
  puVar5[2] = in_register_000104d8;
  puVar5[3] = in_vr77;
  uVar7 = fn_8253A728(uVar7,auStack_70,auStack_80);
  if ((int)uVar7 != 0) {
    fn_823ACD08(auStack_40,param_2);
    if ((ABS(fStack_38) <= ABS(fStack_58)) || (uVar7 = 0, ABS(fStack_28) <= ABS(fStack_58))) {
      uVar7 = 1;
    }
  }
  return uVar7;
}

