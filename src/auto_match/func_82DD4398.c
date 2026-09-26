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
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorReciprocalSquareRootEstimateFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DD4398(undefined8 param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  int in_r0;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float in_register_000100c0;
  float in_register_000100c8;
  float in_vr12;
  undefined4 in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float fStack_10;
  
  lVar5 = ZEXT48(&stack0x00000000) - 0x10;
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs42,in_vs32); memcpy(auVar8, &_vt0, 16); }
  vectorSubtractFloatingPoint(in_vs42,in_vs43);
  uVar9 = storeVectorElementWordIndexed(in_vs40,0,lVar5);
  *(undefined4 *)lVar5 = uVar9;
  fVar4 = lbl_821AAD20;
  iVar6 = 8;
  if (lbl_821AAD20 <= fStack_10) {
    iVar6 = 0;
  }
  lVar5 = ZEXT48(&stack0x00000000) - 0x10;
  uVar9 = storeVectorElementWordIndexed(in_vs41,0,lVar5);
  *(undefined4 *)lVar5 = uVar9;
  iVar7 = 8;
  if (fVar4 <= fStack_10) {
    iVar7 = 0;
  }
  if (iVar6 != iVar7) {
    vectorReciprocalSquareRootEstimateFloatingPoint(in_vs43);
    vectorSubtractFloatingPoint(in_vs37,in_vs38);
    if (param_5 == 8) {
      vectorSubtractFloatingPoint(in_vs39,in_vs40);
      pfVar2 = (float *)(in_r0 + param_4 & 0xfffffff0);
      *pfVar2 = in_register_000100c0 * in_register_000100d4;
      pfVar2[1] = in_vr12 * in_vr13;
      pfVar2[2] = in_register_000100c0 * in_register_000100d8;
      pfVar2[3] = in_register_000100c8 * in_register_000100d4;
      return;
    }
    vectorSubtractFloatingPoint(in_vs39,in_vs40);
    pfVar2 = (float *)(in_r0 + param_4 & 0xfffffff0);
    *pfVar2 = in_register_000100c0 * in_register_000100d4;
    pfVar2[1] = in_vr12 * in_vr13;
    pfVar2[2] = in_register_000100c0 * in_register_000100d8;
    pfVar2[3] = in_register_000100c8 * in_register_000100d4;
    return;
  }
  if (iVar6 != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(param_2 + 0x50U & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar3 = (undefined4 *)(param_2 + 0x40U & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
  }
  vectorSubtractFloatingPoint(in_vs43,auVar8);
  *param_3 = *param_3 + -1;
  if (param_5 != 8) {
    vectorSubtractFloatingPoint(auVar8,in_vs43);
  }
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  return;
}

