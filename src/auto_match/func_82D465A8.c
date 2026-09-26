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
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8307F168();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821354B4;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_24;
extern V16 loadVectorLeftIndexed128();


undefined4 * fn_82D465A8(undefined4 *param_1,float *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 in_r0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  float in_register_000100c0;
  float in_register_000100c4;
  float fVar9;
  float in_register_000100c8;
  float fVar10;
  float in_vr12;
  float fVar11;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  *param_1 = &lbl_821354B4;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0xd;
  *(undefined1 *)((int)param_1 + 0x1d) = param_3;
  param_1[4] = param_2[4];
  uStack_24 = lbl_821AAD20;
  param_1[5] = param_2[5];
  fStack_2c = lbl_82002AE0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 8);
  iVar2 = (int)in_r0;
  puVar1 = (undefined4 *)((int)&fStack_30 + iVar2 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)((int)param_1 + iVar2 + 0x50 & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  pfVar4 = (float *)(iVar2 + (int)param_2 & 0xfffffff0);
  fVar9 = pfVar4[1];
  fVar10 = pfVar4[2];
  fVar11 = pfVar4[3];
  pfVar5 = (float *)((int)param_1 + iVar2 + 0x50 & 0xfffffff0);
  *pfVar5 = in_register_000100c0 * *pfVar4;
  pfVar5[1] = in_register_000100c4 * fVar9;
  pfVar5[2] = in_register_000100c8 * fVar10;
  pfVar5[3] = in_vr12 * fVar11;
  uVar6 = lbl_8200133C;
  if (param_2[6] <= param_2[7]) {
    param_1[6] = (param_2[6] + param_2[7]) * param_2[1] * lbl_82002C5C;
  }
  else {
    param_1[6] = lbl_8200133C;
    param_1[0x15] = uVar6;
  }
  puVar1 = (undefined4 *)(iVar2 + (int)param_2 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)((int)param_1 + iVar2 + 0x20 & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  fStack_30 = fStack_2c / *param_2;
  fStack_28 = fStack_2c / param_2[2];
  fStack_2c = fStack_2c / param_2[1];
  puVar1 = (undefined4 *)((int)&fStack_30 + iVar2 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  fn_8307F168();
  iVar2 = (int)in_r0;
  pfVar4 = (float *)((int)param_1 + iVar2 + 0x20 & 0xfffffff0);
  fVar9 = pfVar4[1];
  fVar10 = pfVar4[2];
  fVar11 = pfVar4[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
  pfVar5 = (float *)((int)&fStack_30 + iVar2 & 0xfffffff0);
  *pfVar5 = *pfVar4 * in_register_000100a0;
  pfVar5[1] = fVar9 * in_register_000100a4;
  pfVar5[2] = fVar10 * in_register_000100a8;
  pfVar5[3] = fVar11 * in_vr10;
  puVar1 = (undefined4 *)((int)&fStack_30 + iVar2 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  return param_1;
}

