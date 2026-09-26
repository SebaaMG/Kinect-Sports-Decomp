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
extern unsigned int fStack_20;
extern unsigned int fStack_8;
extern unsigned int fStack_c;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMergeHighWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D526C0(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int in_r0;
  uint uVar7;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_00010050;
  undefined4 in_register_00010054;
  undefined4 in_register_00010058;
  undefined4 in_vr5;
  float fStack_20;
  float fStack_10;
  float fStack_c;
  float fStack_8;{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs32); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs44,in_vs40); memcpy(auVar8, &_vt1, 16); }
  vectorMergeHighWord(auVar8,auVar9);
  puVar2 = (undefined4 *)((int)&fStack_10 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010050;
  puVar2[1] = in_register_00010054;
  puVar2[2] = in_register_00010058;
  puVar2[3] = in_vr5;
  if (fStack_8 <= fStack_c) {
    uVar7 = 1;
    fStack_8 = fStack_c;
  }
  else {
    uVar7 = 2;
  }
  if (fStack_8 < fStack_10) {
    uVar7 = 0;
  }
  puVar2 = (undefined4 *)((uVar7 + 2) * 0x10 + param_1 & 0xfffffff0);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  uVar4 = param_1 + 0x50U & 0xfffffff0;
  uVar5 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = *(float *)(uVar5 + 4) * *(float *)(uVar4 + 4) + 0.0 +
          *(float *)(uVar5 + 8) * *(float *)(uVar4 + 8);
  uVar10 = storeVectorElementWordIndexed(in_vs44,0,ZEXT48(&stack0x00000000) - 0x20);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = uVar10;
  if (lbl_821AAD20 < fStack_20) {
    uVar7 = uVar7 + 3;
    vectorAddFloatingPoint(in_vs45,in_vs32);
    pfVar6 = (float *)(in_r0 + param_3 & 0xfffffff0);
    *pfVar6 = fVar1;
    pfVar6[1] = fVar1;
    pfVar6[2] = fVar1;
    pfVar6[3] = fVar1;
  }
  *(uint *)(param_3 + 0xc) = uVar7 | 0x3f000000;
  return;
}

