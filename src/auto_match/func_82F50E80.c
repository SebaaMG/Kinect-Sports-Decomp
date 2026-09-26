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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_84;
extern int fn_82A1DD38();
extern int fn_82F534D8();
extern int fn_82F53548();
extern int fn_82F59AE8();
extern int fn_82F59F48();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_821AAD20;


undefined8 fn_82F50E80(undefined8 param_1,int param_2,int *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int in_r0;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  undefined1 auStack_90 [12];
  float fStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  if (*param_3 == 2) {
    fn_82A1DD38(param_4,param_3,0x1c0);
    fStack_84 = lbl_821AAD20;
    dVar10 = (double)lbl_821AAD20;
    pfVar8 = (float *)(*(int *)(param_2 + 8) + 0x10U & 0xfffffff0);
    fVar11 = *pfVar8;
    fVar12 = pfVar8[1];
    fVar13 = pfVar8[2];
    fVar14 = pfVar8[3];
    pfVar8 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *pfVar8 = fVar11;
    pfVar8[1] = fVar12;
    pfVar8[2] = fVar13;
    pfVar8[3] = fVar14;
    pfVar8 = (float *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *pfVar8 = fVar11;
    pfVar8[1] = fVar12;
    pfVar8[2] = fVar13;
    pfVar8[3] = fVar14;
    fn_82F53548();
    fn_82F59F48();
    fn_82F534D8(dVar10,(double)fStack_84,dVar10,dVar10);
    fn_82F59AE8(auStack_80);
    fVar6 = lbl_8200133C;
    pfVar8 = (float *)(param_4 + 0x20);
    lVar9 = 0x14;
    do {
      pfVar1 = (float *)(((int)param_3 - param_4) + (int)pfVar8 & 0xfffffff0);
      pfVar2 = (float *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
      pfVar3 = (float *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
      pfVar4 = (float *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
      pfVar5 = (float *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
      fVar11 = *pfVar1 * *pfVar5 + in_register_000100d0 * *pfVar4 + *pfVar3 * fVar11 + *pfVar2;
      fVar12 = pfVar1[1] * pfVar5[1] +
               in_register_000100d4 * pfVar4[1] + pfVar3[1] * fVar12 + pfVar2[1];
      fVar13 = pfVar1[2] * pfVar5[2] +
               in_register_000100d8 * pfVar4[2] + pfVar3[2] * fVar13 + pfVar2[2];
      fVar14 = pfVar1[3] * pfVar5[3] + in_vr13 * pfVar4[3] + pfVar3[3] * fVar14 + pfVar2[3];
      pfVar1 = (float *)(in_r0 + (int)pfVar8 & 0xfffffff0);
      *pfVar1 = fVar11;
      pfVar1[1] = fVar12;
      pfVar1[2] = fVar13;
      pfVar1[3] = fVar14;
      *pfVar8 = *pfVar8 * fVar6;
      pfVar8[2] = pfVar8[2] * fVar6;
      pfVar8 = pfVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

