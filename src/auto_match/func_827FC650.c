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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int fStack_94;
extern int fn_8250D648();
extern int fn_827F6950();
extern int fn_827F7210();
extern int fn_82A1D9A8();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_827FC650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  double extraout_f1;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uStack_b0;
  uint uStack_ac;
  uint auStack_a8 [2];
  undefined1 auStack_a0 [12];
  float fStack_94;
  
  uVar5 = fn_82F6DA1C();
  fStack_94 = (float)extraout_f1;
  fVar33 = *(float *)(((uint)(auStack_a0 + (int)in_r0) & 0xfffffff0) + 0xc);
  fVar34 = fVar33;
  fVar35 = fVar33;
  fVar36 = fVar33;
  uVar6 = fn_827F7210();
  uVar6 = uVar6 & 0xffff;
  fn_827F6950(uVar5,&uStack_ac);
  fn_827F6950(param_2,auStack_a8);
  fn_827F6950(param_3,&uStack_b0);
  uVar9 = (ulonglong)uStack_ac;
  dataCacheBlockTouch(uVar9);
  uVar8 = (ulonglong)auStack_a8[0];
  dataCacheBlockTouch(uVar8);
  dataCacheBlockTouch(uVar9 + 0x80);
  dataCacheBlockTouch(uVar8 + 0x80);
  uVar11 = (ulonglong)uStack_b0;
  uVar10 = uVar11 + 0x7f & 0xffffff80;
  uVar7 = (uVar6 * 0x30 - uVar10) + uVar11;
  if (((0x7f < (int)uVar7) && (uVar11 != uVar9)) && (uVar11 != uVar8)) {
    fn_82A1D9A8(uVar10,0,uVar7 & 0xffffff80);
    uVar9 = (ulonglong)uStack_ac;
    uVar8 = (ulonglong)auStack_a8[0];
    uVar11 = (ulonglong)uStack_b0;
  }
  uVar12 = 0x80;
  if (uVar6 != 0) {
    uVar10 = 0;
    do {
      if (0x7f < uVar12) {
        uVar12 = uVar12 - 0x80;
        dataCacheBlockTouch(uVar9 + 0x100);
        dataCacheBlockTouch(uVar8 + 0x100);
      }
      iVar2 = (int)uVar9;
      pfVar1 = (float *)(iVar2 + 0x10U & 0xfffffff0);
      fVar29 = *pfVar1;
      fVar30 = pfVar1[1];
      fVar31 = pfVar1[2];
      fVar32 = pfVar1[3];
      pfVar1 = (float *)(iVar2 + 0x20U & 0xfffffff0);
      fVar25 = *pfVar1;
      fVar26 = pfVar1[1];
      fVar27 = pfVar1[2];
      fVar28 = pfVar1[3];
      pfVar1 = (float *)((int)uVar8 + 0x10U & 0xfffffff0);
      pfVar3 = (float *)((int)uVar8 + 0x20U & 0xfffffff0);
      fVar21 = *pfVar1 - fVar29;
      fVar22 = pfVar1[1] - fVar30;
      fVar23 = pfVar1[2] - fVar31;
      fVar24 = pfVar1[3] - fVar32;
      fVar17 = *pfVar3 - fVar25;
      fVar18 = pfVar3[1] - fVar26;
      fVar19 = pfVar3[2] - fVar27;
      fVar20 = pfVar3[3] - fVar28;
      puVar4 = (undefined4 *)((int)in_r0 + iVar2 & 0xfffffff0);
      uVar13 = *puVar4;
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      fn_8250D648();
      puVar4 = (undefined4 *)((int)in_r0 + (int)uVar11 & 0xfffffff0);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      uVar12 = uVar12 + 0x30;
      uVar10 = uVar10 + 1 & 0xffff;
      pfVar1 = (float *)(uStack_b0 + 0x10 & 0xfffffff0);
      *pfVar1 = fVar33 * fVar21 + fVar29;
      pfVar1[1] = fVar34 * fVar22 + fVar30;
      pfVar1[2] = fVar35 * fVar23 + fVar31;
      pfVar1[3] = fVar36 * fVar24 + fVar32;
      pfVar1 = (float *)(uStack_b0 + 0x20 & 0xfffffff0);
      *pfVar1 = fVar33 * fVar17 + fVar25;
      pfVar1[1] = fVar34 * fVar18 + fVar26;
      pfVar1[2] = fVar35 * fVar19 + fVar27;
      pfVar1[3] = fVar36 * fVar20 + fVar28;
      uVar8 = (ulonglong)auStack_a8[0] + 0x30;
      uVar9 = (ulonglong)uStack_ac + 0x30;
      auStack_a8[0] = (uint)uVar8;
      uVar11 = (ulonglong)uStack_b0 + 0x30;
      uStack_ac = (uint)uVar9;
      uStack_b0 = (uint)uVar11;
    } while (uVar10 < uVar6);
  }
  fn_82F6DCB4();
  return;
}

