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
extern unsigned int lbl_82134BC0;
extern V16 vectorCompareEqualToFloatingPoint();
extern V16 vectorConditionalSelect();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D37118(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  int in_r8;
  undefined1 in_vs32 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_register_000101d0;
  undefined4 in_register_000101d4;
  undefined4 in_register_000101d8;
  undefined4 in_vr29;
  undefined4 in_register_000101e0;
  undefined4 in_register_000101e4;
  undefined4 in_register_000101e8;
  undefined4 in_vr30;
  undefined4 in_register_000101f0;
  undefined4 in_register_000101f4;
  undefined4 in_register_000101f8;
  undefined4 in_vr31;
  undefined4 in_stack_0000005c;
  
  puVar1 = (undefined4 *)(in_r0 + in_r8 & 0xfffffff0);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];{ V16 _vt0 = vectorMergeHighWord(in_vs45,in_vs43); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs44,in_vs32); memcpy(auVar7, &_vt1, 16); }{ V16 _vt2 = vectorMergeLowWord(in_vs45,in_vs43); memcpy(auVar5, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs40,in_vs36); memcpy(auVar3, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar6,auVar7); memcpy(auVar9, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(in_vs37,in_vs35); memcpy(auVar2, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(in_vs44,in_vs32); memcpy(auVar4, &_vt6, 16); }{ V16 _vt7 = vectorMergeLowWord(auVar6,auVar7); memcpy(auVar8, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(auVar3,auVar2); memcpy(auVar7, &_vt8, 16); }{ V16 _vt9 = vectorMergeLowWord(auVar3,auVar2); memcpy(auVar6, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(auVar5,auVar4); memcpy(auVar5, &_vt10, 16); }{ V16 _vt11 = vectorMergeLowWord(in_vs37,in_vs35); memcpy(auVar4, &_vt11, 16); }{ V16 _vt12 = vectorSubtractFloatingPoint(auVar7,auVar9); memcpy(auVar2, &_vt12, 16); }
  puVar1 = (undefined4 *)((uint)(&lbl_82134BC0 + in_r0) & 0xfffffff0);
  uVar14 = *puVar1;
  uVar15 = puVar1[1];
  uVar16 = puVar1[2];
  uVar17 = puVar1[3];{ V16 _vt13 = vectorMergeLowWord(in_vs40,in_vs36); memcpy(auVar3, &_vt13, 16); }{ V16 _vt14 = vectorSubtractFloatingPoint(auVar6,auVar8); memcpy(auVar6, &_vt14, 16); }
  *(undefined4 *)(param_1 + 0x60) = in_stack_0000005c;
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000101f0;
  puVar1[1] = in_register_000101f4;
  puVar1[2] = in_register_000101f8;
  puVar1[3] = in_vr31;{ V16 _vt15 = vectorMergeHighWord(auVar3,auVar4); memcpy(auVar3, &_vt15, 16); }
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar1 = in_register_000101e0;
  puVar1[1] = in_register_000101e4;
  puVar1[2] = in_register_000101e8;
  puVar1[3] = in_vr30;
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000101d0;
  puVar1[1] = in_register_000101d4;
  puVar1[2] = in_register_000101d8;
  puVar1[3] = in_vr29;{ V16 _vt16 = vectorSubtractFloatingPoint(auVar3,auVar5); memcpy(auVar7, &_vt16, 16); }{ V16 _vt17 = vectorCompareEqualToFloatingPoint(in_vs44,auVar2); memcpy(auVar3, &_vt17, 16); }{ V16 _vt18 = vectorConditionalSelect(auVar2,in_vs32,auVar3); memcpy(auVar2, &_vt18, 16); }{ V16 _vt19 = vectorReciprocalEstimateFloatingPoint(auVar2); memcpy(auVar5, &_vt19, 16); }{ V16 _vt20 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar2,in_vs32); memcpy(auVar2, &_vt20, 16); }{ V16 _vt21 = vectorCompareEqualToFloatingPoint(in_vs44,auVar6); memcpy(auVar4, &_vt21, 16); }{ V16 _vt22 = vectorMultiplyAddFloatingPoint(auVar2,auVar5,auVar5); memcpy(auVar2, &_vt22, 16); }{ V16 _vt23 = vectorConditionalSelect(auVar6,in_vs32,auVar4); memcpy(auVar5, &_vt23, 16); }
  vectorConditionalSelect(auVar2,in_vs45,auVar3);{ V16 _vt24 = vectorReciprocalEstimateFloatingPoint(auVar5); memcpy(auVar6, &_vt24, 16); }
  puVar1 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = in_register_000100a0;
  puVar1[1] = in_register_000100a4;
  puVar1[2] = in_register_000100a8;
  puVar1[3] = in_vr10;{ V16 _vt25 = vectorCompareEqualToFloatingPoint(in_vs44,auVar7); memcpy(auVar3, &_vt25, 16); }{ V16 _vt26 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar5,in_vs32); memcpy(auVar2, &_vt26, 16); }{ V16 _vt27 = vectorConditionalSelect(auVar7,in_vs32,auVar3); memcpy(auVar5, &_vt27, 16); }{ V16 _vt28 = vectorMultiplyAddFloatingPoint(auVar2,auVar6,auVar6); memcpy(auVar2, &_vt28, 16); }
  vectorConditionalSelect(auVar2,in_vs45,auVar4);{ V16 _vt29 = vectorReciprocalEstimateFloatingPoint(auVar5); memcpy(auVar4, &_vt29, 16); }
  puVar1 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;{ V16 _vt30 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar5,in_vs32); memcpy(auVar2, &_vt30, 16); }{ V16 _vt31 = vectorMultiplyAddFloatingPoint(auVar2,auVar4,auVar4); memcpy(auVar2, &_vt31, 16); }
  vectorConditionalSelect(auVar2,in_vs45,auVar3);
  puVar1 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1[2] = uVar16;
  puVar1[3] = uVar17;
  return;
}

