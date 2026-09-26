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
extern float fRam83274b24;
extern float fRam83274b28;
extern float fRam83274b2c;
extern int fn_82559EF0();
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83274B20;
extern V16 loadVectorLeftIndexed128();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82626968(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar8 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar8;
  puVar2[3] = uVar10;
  fVar15 = fRam83274b2c;
  fVar14 = fRam83274b28;
  fVar13 = fRam83274b24;
  fVar12 = lbl_83274B20;
  fn_82559EF0(param_3,param_3 + 4);
  fVar4 = lbl_82193E50;
  pfVar3 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar5 = *pfVar3;
  fVar7 = pfVar3[1];
  fVar9 = pfVar3[2];
  fVar11 = pfVar3[3];
  *(undefined4 *)(param_3 + 8) = lbl_821CC160;
  *(float *)(param_3 + 4) = *(float *)(param_3 + 4) + fVar4;
  loadVectorLeftIndexed128(0xffffffff82192950,0x60);
  pfVar3 = (float *)(in_r0 + param_2 & 0xfffffff0);
  *pfVar3 = fVar12 * in_register_000100d0 + fVar5;
  pfVar3[1] = fVar13 * in_register_000100d4 + fVar7;
  pfVar3[2] = fVar14 * in_register_000100d8 + fVar9;
  pfVar3[3] = fVar15 * in_vr13 + fVar11;
  return;
}

