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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_825444B8();
extern int fn_826310E0();
extern int fn_826311B8();
extern int fn_826312F0();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_82639990();
extern int fn_82639A10();
extern int fn_8263CBB0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C1E08;
extern unsigned int lbl_831C1E0C;
extern unsigned int lbl_831C1E14;
extern unsigned int lbl_831C1E18;
extern unsigned int lbl_8326F970;
extern unsigned int lbl_8326F988;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825419D8(ulonglong param_1,int *param_2,int param_3)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_r0;
  undefined8 uVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined1 in_vs32 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 auStack_b0 [6];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  if (((param_3 != 1) && (param_3 != 0x20)) && (param_3 != 0x80)) {
    iVar1 = *param_2;
    *(int *)(iVar1 + 0x1ac0) = param_2[0x2a80];
    *(int *)(iVar1 + 0x1ac4) = param_2[0x2a81];
    *(int *)(iVar1 + 0x1ac8) = param_2[0x2a82];
    *(int *)(iVar1 + 0x1acc) = param_2[0x2a83];
    *(ulonglong *)(iVar1 + 8) = *(ulonglong *)(iVar1 + 8) | 0x4000000000000;
    puVar2 = (ulonglong *)*param_2;
    *(int *)(puVar2 + 0x122) = param_2[0x2a80];
    *(int *)((int)puVar2 + 0x914) = param_2[0x2a81];
    *(int *)(puVar2 + 0x123) = param_2[0x2a82];
    *(int *)((int)puVar2 + 0x91c) = param_2[0x2a83];
    *puVar2 = *puVar2 | 0x200000000000000;
    fn_826310E0(*param_2,0x80,param_2 + 0x2a50,4,0x80000000);
    fn_826311B8(*param_2,0x35,param_2 + 0x2a50,4,0x6000000000000);
    fn_826311B8(*param_2,0x18,param_2 + 0x2a70,4,0x200000000000000);
    iVar1 = *param_2;
    uVar13 = 0x3c;
    piVar12 = param_2 + 0x2a88;
    *(int *)(iVar1 + 0x1a60) = param_2[0x2a18];
    *(int *)(iVar1 + 0x1a64) = param_2[0x2a19];
    *(int *)(iVar1 + 0x1a68) = param_2[0x2a1a];
    *(int *)(iVar1 + 0x1a6c) = param_2[0x2a1b];
    *(ulonglong *)(iVar1 + 8) = *(ulonglong *)(iVar1 + 8) | 0x10000000000000;
    do {
      iVar6 = (int)in_r0;
      puVar5 = (undefined4 *)(iVar6 + (int)piVar12 & 0xfffffff0);
      uVar17 = *puVar5;
      uVar18 = puVar5[1];
      uVar19 = puVar5[2];
      uVar20 = puVar5[3];
      iVar1 = *param_2;
      puVar5 = (undefined4 *)((uint)(piVar12 + 8) & 0xfffffff0);
      uVar24 = *puVar5;
      uVar25 = puVar5[1];
      uVar26 = puVar5[2];
      uVar27 = puVar5[3];
      puVar5 = (undefined4 *)((uint)(piVar12 + 4) & 0xfffffff0);
      uVar21 = puVar5[1];
      uVar22 = puVar5[2];
      uVar23 = puVar5[3];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar15, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar14, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar16, &_vt2, 16); }
      uVar3 = (uVar13 & 0xffffffff) >> 2;{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(in_vs44, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar15,auVar16); memcpy(in_vs43, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar15,auVar16); memcpy(in_vs45, &_vt5, 16); }
      vectorMergeHighWord(auVar14,in_vs44);{ V16 _vt6 = vectorMergeLowWord(auVar14,in_vs44); memcpy(in_vs32, &_vt6, 16); }
      puVar7 = (undefined4 *)((uint)(auStack_90 + iVar6) & 0xfffffff0);
      *puVar7 = *puVar5;
      puVar7[1] = uVar21;
      puVar7[2] = uVar22;
      puVar7[3] = uVar23;
      puVar5 = (undefined4 *)((uint)(auStack_80 + iVar6) & 0xfffffff0);
      *puVar5 = uVar24;
      puVar5[1] = uVar25;
      puVar5[2] = uVar26;
      puVar5[3] = uVar27;
      puVar5 = (undefined4 *)((uint)(auStack_70 + iVar6) & 0xfffffff0);
      *puVar5 = in_register_000100a0;
      puVar5[1] = in_register_000100a4;
      puVar5[2] = in_register_000100a8;
      puVar5[3] = in_vr10;
      puVar5 = (undefined4 *)((uint)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar5 = uVar17;
      puVar5[1] = uVar18;
      puVar5[2] = uVar19;
      puVar5[3] = uVar20;
      fn_826310E0(iVar1,uVar13,auStack_90,4,
                   (ulonglong)
                   (-0x8000000000000000 >> (((uVar13 + 3 & 0xffffffff) >> 2) - uVar3 & 0x7f)) >>
                   (uVar3 & 0x7f));
      uVar4 = (uVar13 - 3 & 0xffffffff) >> 2;
      fn_826311B8(*param_2,uVar13 - 3,auStack_90,4,
                   (ulonglong)(-0x8000000000000000 >> (uVar3 - uVar4 & 0x7f)) >> (uVar4 & 0x7f));
      fVar10 = lbl_821CA460;
      uVar13 = uVar13 + 4;
      piVar12 = piVar12 + 0x10;
    } while ((int)uVar13 < 0x44);
    fVar8 = lbl_831C1E0C;
    if (lbl_831C1E0C <= lbl_831C1E08) {
      fVar8 = lbl_831C1E08 + lbl_821CA460;
    }
    fVar9 = fVar8 - lbl_831C1E08;
    iVar1 = *param_2;
    *(float *)(iVar1 + 0x1a80) = fVar8;
    *(float *)(iVar1 + 0x1a84) = fVar10 / fVar9;
    *(undefined4 *)(iVar1 + 0x1a88) = uStack_98;
    *(undefined4 *)(iVar1 + 0x1a8c) = uStack_94;
    *(ulonglong *)(iVar1 + 8) = *(ulonglong *)(iVar1 + 8) | 0x8000000000000;
    fn_8263CBB0(*param_2,0xd,param_2[0x2a1c],0x40000);
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x5b8) = *(uint *)(iVar1 + 0x5b8) & 0xffffe3ff | 0x1800;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000;
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x5b8) = *(uint *)(iVar1 + 0x5b8) & 0xffff1fff | 0xc000;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000;
    fn_82639380(*param_2,0xd,0);
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x5c4) = *(uint *)(iVar1 + 0x5c4) & 0xfe7fffff;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000;
    fn_82639528(*param_2,0xd);
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x5cc) = *(uint *)(iVar1 + 0x5cc) & 0xfffffffc | 1;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000;
    fn_8263CBB0(*param_2,0xc,param_2[0x2a1d],0x80000);
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x5a0) = *(uint *)(iVar1 + 0x5a0) & 0xffffe3ff | 0x400;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000;
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x5a0) = *(uint *)(iVar1 + 0x5a0) & 0xffff1fff | 0x2000;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000;
    fn_82639380(*param_2,0xc,0);
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x5ac) = *(uint *)(iVar1 + 0x5ac) & 0xfe7fffff;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000;
    fn_82639528(*param_2,0xc);
    fn_82639990(*param_2,0xc);
    fn_82639A10(*param_2);
    if (param_3 == 8) {
      if ((param_1 & 0xffffffff) == 0) {
        uVar11 = 0xffffffff8326b090;
      }
      else {
        uVar11 = fn_825444B8(param_1);
      }
      fn_8263CBB0(*param_2,9,uVar11,0x400000);
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x558) = *(uint *)(iVar1 + 0x558) & 0xffffe3ff | 0x800;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x400000;
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x558) = *(uint *)(iVar1 + 0x558) & 0xffff1fff | 0x4000;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x400000;
    }
    iVar1 = param_2[0x2b0c];
    if (iVar1 != 0) {
      fn_8263CBB0(*param_2,0xf,iVar1,0x10000);
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x5e8) = *(uint *)(iVar1 + 0x5e8) & 0xffffe3ff | 0x800;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x10000;
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x5e8) = *(uint *)(iVar1 + 0x5e8) & 0xffff1fff | 0x4000;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x10000;
      fn_8263CBB0(*param_2,0x11,param_2[0x2b0c],0x4000);
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x618) = *(uint *)(iVar1 + 0x618) & 0xffffe3ff | 0x800;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x4000;
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x618) = *(uint *)(iVar1 + 0x618) & 0xffff1fff | 0x4000;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x4000;
    }
    if (param_2[0x2b0d] != 0) {
      fn_8263CBB0(*param_2,7,param_2[0x2b0d],0x1000000);
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x528) = *(uint *)(iVar1 + 0x528) & 0xffffe3ff | 0x800;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x1000000;
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x528) = *(uint *)(iVar1 + 0x528) & 0xffff1fff | 0x4000;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x1000000;
      iVar1 = *param_2;
      *(uint *)(iVar1 + 0x528) = *(uint *)(iVar1 + 0x528) & 0xfff8ffff | 0x20000;
      *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x1000000;
    }
    if ((lbl_8326F988 == 0) && (lbl_8326F970 == 0)) {
      auStack_b0[0] = 0;
    }
    else {
      auStack_b0[0] = 1;
    }
    fn_826312F0(*param_2,2,auStack_b0,1);
    uVar18 = lbl_831C1E18;
    uVar17 = lbl_821CC160;
    iVar1 = *param_2;
    *(undefined4 *)(iVar1 + 0x1c30) = lbl_831C1E14;
    *(undefined4 *)(iVar1 + 0x1c34) = uVar18;
    *(undefined4 *)(iVar1 + 0x1c38) = uVar17;
    *(undefined4 *)(iVar1 + 0x1c3c) = uVar17;
    *(ulonglong *)(iVar1 + 8) = *(ulonglong *)(iVar1 + 8) | 0x200000000000;
  }
  return;
}

