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
extern int fn_822C40E8();
extern unsigned int lbl_82196750;
extern V16 loadVectorLeftIndexed128();


void fn_82314140(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined4 *param_6,int param_7,undefined4 *param_8)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  uint in_register_00010410;
  uint in_register_00010414;
  uint in_register_00010418;
  uint in_vr65;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(param_4 + 0x24);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x160) == 0)) {
    pfVar2 = (float *)(param_4 + 0x80U & 0xfffffff0);
    fVar12 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar14 = pfVar2[2];
    fVar15 = pfVar2[3];
  }
  else {
    pfVar2 = (float *)(iVar1 + 0x130U & 0xfffffff0);
    fVar12 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar14 = pfVar2[2];
    fVar15 = pfVar2[3];
  }
  fn_822C40E8(auStack_50,param_4,param_2,0);
  loadVectorLeftIndexed128(0xffffffff82192438,0x48);
  puVar3 = (uint *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar8 = puVar3[2];
  uVar10 = puVar3[3];
  pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar2 = in_register_000100d0 * (float)(*puVar3 ^ in_register_00010410) + fVar12;
  pfVar2[1] = in_register_000100d4 * (float)(uVar6 ^ in_register_00010414) + fVar13;
  pfVar2[2] = in_register_000100d8 * (float)(uVar8 ^ in_register_00010418) + fVar14;
  pfVar2[3] = in_vr13 * (float)(uVar10 ^ in_vr65) + fVar15;
  puVar4 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar7 = puVar4[1];
  uVar9 = puVar4[2];
  uVar11 = puVar4[3];
  puVar5 = (undefined4 *)(in_r0 + param_7 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar7;
  puVar5[2] = uVar9;
  puVar5[3] = uVar11;
  *param_6 = 0;
  *param_8 = 1;
  return;
}

