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
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B1A0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82D10C70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 in_r0;
  int iVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  
  iVar6 = param_1 + 0x70;
  if (*(float *)(param_1 + 0x7c) != lbl_82134508) {
    return;
  }
  iVar2 = (int)in_r0;
  puVar1 = (undefined4 *)((uint)(&lbl_8323B1A0 + iVar2) & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar9 = puVar1[2];
  uVar11 = puVar1[3];
  puVar3 = (undefined4 *)(iVar2 + iVar6 & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar7;
  puVar3[2] = uVar9;
  puVar3[3] = uVar11;
  for (puVar1 = *(undefined4 **)(param_1 + 0x24); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    vectorAddFloatingPoint(in_vs45,in_vs32);
    pfVar4 = (float *)(iVar2 + iVar6 & 0xfffffff0);
    *pfVar4 = in_register_000100c0;
    pfVar4[1] = in_register_000100c4;
    pfVar4[2] = in_register_000100c8;
    pfVar4[3] = in_vr12;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    pfVar4 = (float *)(iVar2 + iVar6 & 0xfffffff0);
    fVar8 = pfVar4[1];
    fVar10 = pfVar4[2];
    fVar12 = pfVar4[3];
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
    pfVar5 = (float *)(iVar2 + iVar6 & 0xfffffff0);
    *pfVar5 = *pfVar4 * in_register_000100c0;
    pfVar5[1] = fVar8 * in_register_000100c4;
    pfVar5[2] = fVar10 * in_register_000100c8;
    pfVar5[3] = fVar12 * in_vr12;
  }
  *(undefined4 *)(param_1 + 0x7c) = lbl_821AAD20;
  return;
}

