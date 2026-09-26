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
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D11518(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined8 in_r0;
  int iVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  
  uVar7 = lbl_821AAD20;
  iVar8 = param_1 + 0x80;
  if (*(float *)(param_1 + 0x8c) != lbl_82134508) {
    return;
  }
  iVar3 = (int)in_r0;
  puVar2 = (undefined4 *)((uint)(&lbl_8323B1A0 + iVar3) & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar11 = puVar2[2];
  uVar13 = puVar2[3];
  puVar4 = (undefined4 *)(iVar3 + iVar8 & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar9;
  puVar4[2] = uVar11;
  puVar4[3] = uVar13;
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    do {
      pfVar5 = (float *)(iVar3 + param_1 + 0x110 & 0xfffffff0);
      in_register_000100c0 = *pfVar5;
      in_register_000100c4 = pfVar5[1];
      in_register_000100c8 = pfVar5[2];
      in_vr12 = pfVar5[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs44,in_vs45); memcpy(in_vs32, &_vt0, 16); }
      vectorAddFloatingPoint(in_vs43,in_vs32);
      puVar2 = (undefined4 *)(iVar3 + iVar8 & 0xfffffff0);
      *puVar2 = in_register_000100a0;
      puVar2[1] = in_register_000100a4;
      puVar2[2] = in_register_000100a8;
      puVar2[3] = in_vr10;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    pfVar5 = (float *)(iVar3 + iVar8 & 0xfffffff0);
    fVar10 = pfVar5[1];
    fVar12 = pfVar5[2];
    fVar14 = pfVar5[3];
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x30);
    pfVar6 = (float *)(iVar3 + iVar8 & 0xfffffff0);
    *pfVar6 = *pfVar5 * in_register_000100c0;
    pfVar6[1] = fVar10 * in_register_000100c4;
    pfVar6[2] = fVar12 * in_register_000100c8;
    pfVar6[3] = fVar14 * in_vr12;
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  return;
}

