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
extern unsigned int fStack_10;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82CEC0E0(double param_1,int param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  undefined8 in_r0;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs63 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_register_00010040;
  float in_register_00010044;
  float in_register_00010048;
  float in_vr4;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  float fStack_10;
  
  puVar5 = (undefined4 *)(param_2 + 0x20);
  puVar4 = (undefined4 *)(param_2 + 0x10);
  iVar3 = (int)in_r0;
  pfVar2 = (float *)(iVar3 + (int)puVar5 & 0xfffffff0);
  fVar8 = *pfVar2;
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = pfVar2[3];
  pfVar2 = (float *)(iVar3 + (int)puVar4 & 0xfffffff0);
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar14 = pfVar2[2];
  fVar15 = pfVar2[3];
  vectorSubtractFloatingPoint(in_vs61,in_vs63);
  uVar1 = storeVectorElementWordIndexed(in_vs44,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  if ((float)((double)(float)(param_1 * param_1) * param_1) < ABS(fStack_10)) {{ V16 _vt0 = vectorReciprocalEstimateFloatingPoint(in_vs44); memcpy(auVar6, &_vt0, 16); }
    vectorSubtractFloatingPoint(in_vs45,in_vs43);
    vectorSubtractFloatingPoint(in_vs32,in_vs40);
    loadVectorLeftIndexed128(in_r0,0xffffffff82002ae0);{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,in_vs44,in_vs43); memcpy(auVar7, &_vt1, 16); }
    vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar6);
    fVar8 = in_register_00010040 * fVar8;
    fVar9 = in_register_00010044 * fVar9;
    fVar10 = in_register_00010048 * fVar10;
    fVar11 = in_vr4 * fVar11;
    pfVar2 = (float *)(iVar3 + (int)puVar4 & 0xfffffff0);
    *pfVar2 = fVar12 * fVar8;
    pfVar2[1] = fVar13 * fVar9;
    pfVar2[2] = fVar14 * fVar10;
    pfVar2[3] = fVar15 * fVar11;
    pfVar2 = (float *)(iVar3 + param_2 & 0xfffffff0);
    *pfVar2 = in_register_000100a0 * fVar8;
    pfVar2[1] = in_register_000100a4 * fVar9;
    pfVar2[2] = in_register_000100a8 * fVar10;
    pfVar2[3] = in_vr10 * fVar11;
    pfVar2 = (float *)(iVar3 + (int)puVar5 & 0xfffffff0);
    *pfVar2 = in_register_000100a8 * fVar8;
    pfVar2[1] = in_register_000100a8 * fVar9;
    pfVar2[2] = in_register_000100a8 * fVar10;
    pfVar2[3] = in_register_000100a4 * fVar11;
    uVar1 = *puVar4;
    *puVar4 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = uVar1;
    uVar1 = *puVar5;
    *puVar5 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = uVar1;
    return 0;
  }
  return 1;
}

