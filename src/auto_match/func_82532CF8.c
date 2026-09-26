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
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000050;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82532CF8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    iVar3 = *param_1;
  }
  puVar1 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(&stack0x00000040 + in_r0) & 0xfffffff0);
  uVar15 = *puVar1;
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  iVar3 = param_2 * 0x40 + iVar3;
  puVar1 = (undefined4 *)((uint)(&stack0x00000050 + in_r0) & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar5, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs44,in_vs43); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs44,in_vs43); memcpy(auVar6, &_vt3, 16); }
  vectorMergeHighWord(auVar5,auVar7);
  vectorMergeLowWord(auVar5,auVar7);
  vectorMergeHighWord(auVar4,auVar6);
  vectorMergeLowWord(auVar4,auVar6);
  puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
  *puVar1 = uVar15;
  puVar1[1] = uVar16;
  puVar1[2] = uVar17;
  puVar1[3] = uVar18;
  puVar1 = (undefined4 *)(iVar3 + 0x20U & 0xfffffff0);
  *puVar1 = in_register_000100a0;
  puVar1[1] = in_register_000100a4;
  puVar1[2] = in_register_000100a8;
  puVar1[3] = in_vr10;
  puVar1 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  return;
}

