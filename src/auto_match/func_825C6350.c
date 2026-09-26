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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_825443D8();
extern int fn_82544B18();
extern int fn_826197B8();
extern int fn_826310E0();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637EC0();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296890;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825C6350(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar3 = lbl_8320A898;
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0xc) != '\0')) {
    uVar1 = *(uint *)(lbl_8320A898 + 0x2948);
    *(uint *)(lbl_8320A898 + 0x2948) = uVar1 & 0xfffffff8;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x40;
    fn_82637B30(lbl_8320A898,1);
    fn_82637C50(lbl_8320A898,6);
    fn_82637CE0(lbl_8320A898,7);
    iVar3 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x40200;
    iVar3 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x2934) = *(uint *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x800;
    iVar3 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x2f18) = 0;
    *(uint *)(iVar3 + 0x2934) = *(uint *)(iVar3 + 0x2934) & 0xfffffffe;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x20800;
    fn_82544B18(lbl_8320A898,0);
    iVar3 = lbl_8320A898;
    if ((&lbl_83296C80)[param_3 * 0x2c] == 0) {
      puVar5 = &lbl_83296890;
    }
    else {
      puVar5 = &lbl_83296C20 + param_3 * 0x16;
    }
    puVar2 = (undefined4 *)(in_r0 + (int)puVar5 & 0xfffffff0);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    uVar17 = *(undefined4 *)(puVar5 + 4);
    uVar18 = *(undefined4 *)((int)puVar5 + 0x24);
    uVar19 = *(undefined4 *)(puVar5 + 5);
    uVar20 = *(undefined4 *)((int)puVar5 + 0x2c);
    uVar14 = *(undefined4 *)((int)puVar5 + 0x14);
    uVar15 = *(undefined4 *)(puVar5 + 3);
    uVar16 = *(undefined4 *)((int)puVar5 + 0x1c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar8, &_vt3, 16); }
    vectorMergeHighWord(auVar7,auVar9);
    vectorMergeLowWord(auVar7,auVar9);
    vectorMergeHighWord(auVar6,auVar8);
    vectorMergeLowWord(auVar6,auVar8);
    puVar2 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar2 = *(undefined4 *)(puVar5 + 2);
    puVar2[1] = uVar14;
    puVar2[2] = uVar15;
    puVar2[3] = uVar16;
    puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar2 = uVar17;
    puVar2[1] = uVar18;
    puVar2[2] = uVar19;
    puVar2[3] = uVar20;
    puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_000100a0;
    puVar2[1] = in_register_000100a4;
    puVar2[2] = in_register_000100a8;
    puVar2[3] = in_vr10;
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2[2] = uVar12;
    puVar2[3] = uVar13;
    fn_826310E0(iVar3,4,auStack_80,3,0x4000000000000000);
    uVar4 = fn_825443D8(param_3);
    fn_8263CBB0(lbl_8320A898,0,uVar4,0x80000000);
    for (puVar2 = *(undefined4 **)(param_1 + 8); iVar3 = lbl_8320A898, puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      fn_826197B8(*puVar2);
    }
    *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8 | uVar1 & 7;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x40;
    iVar3 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x2f04) = 0xf;
    *(uint *)(iVar3 + 0x28dc) =
         *(uint *)(iVar3 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar3 + 0x3148) != 0) & 0xf;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x2000000000;
    fn_82637EC0(lbl_8320A898,0);
  }
  return;
}

