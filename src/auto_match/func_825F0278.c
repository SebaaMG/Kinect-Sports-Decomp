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
extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_825C7348();
extern int fn_825EA908();
extern int fn_825F04B8();
extern int fn_82622CC0();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_82F68CC0();


void fn_825F0278(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [128];
  
  piVar2 = *(int **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar9 = *piVar2;
  uVar4 = fn_825C7348(1);
  fn_82623298(piVar2,0,uVar4);
  fn_82622CC0(param_1,piVar2);
  fn_82639EA8(iVar9,((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (ulonglong)*(uint *)(param_1 + 4) + 0x174);
  *(undefined4 *)(iVar9 + 0x2f14) = 1;
  *(uint *)(iVar9 + 0x2934) =
       (-(uint)(*(int *)(iVar9 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar9 + 0x2934) & 0xfffffffd;
  uVar8 = *(ulonglong *)(iVar9 + 0x10);
  *(ulonglong *)(iVar9 + 0x10) = uVar8 | 0x800;
  *(ulonglong *)(iVar9 + 0x10) = uVar8 | 0x20800;
  *(uint *)(iVar9 + 0x2934) = *(uint *)(iVar9 + 0x2934) | 4;
  *(ulonglong *)(iVar9 + 0x10) = *(ulonglong *)(iVar9 + 0x10) | 0x800;
  *(uint *)(iVar9 + 0x2934) = *(uint *)(iVar9 + 0x2934) & 0xffffff8f | 0x60;
  uVar8 = *(ulonglong *)(iVar9 + 0x10);
  *(ulonglong *)(iVar9 + 0x10) = uVar8 | 0x800;
  *(ulonglong *)(iVar9 + 0x10) = uVar8 | 0x20800;
  fn_825402B0(auStack_80,*(undefined4 *)(param_1 + 0x18),0x20,
               *(undefined4 *)(*(int *)(param_1 + 4) + 0xae4),*(undefined4 *)(param_1 + 0x10),1,0);
  fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                    *(undefined4 *)(param_1 + 0x18));
  lVar11 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
           (ulonglong)*(uint *)(param_1 + 4);
  fn_82F68CC0(auStack_c0,lVar11 + 0x50,0x40);
  iVar9 = (int)lVar11;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar6 = (undefined4 *)(in_r0 + iVar9 + 0x90 & 0xfffffff0);
  uVar13 = puVar6[1];
  uVar14 = puVar6[2];
  uVar15 = puVar6[3];
  puVar3 = (undefined4 *)(iVar9 + 0xa0U & 0xfffffff0);
  uVar24 = *puVar3;
  uVar25 = puVar3[1];
  uVar26 = puVar3[2];
  uVar27 = puVar3[3];
  puVar3 = (undefined4 *)(iVar9 + 0xb0U & 0xfffffff0);
  uVar20 = *puVar3;
  uVar21 = puVar3[1];
  uVar22 = puVar3[2];
  uVar23 = puVar3[3];
  puVar3 = (undefined4 *)(iVar9 + 0xc0U & 0xfffffff0);
  uVar16 = *puVar3;
  uVar17 = puVar3[1];
  uVar18 = puVar3[2];
  uVar19 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar6;
  puVar3[1] = uVar13;
  puVar3[2] = uVar14;
  puVar3[3] = uVar15;
  puVar6 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar6 = uVar24;
  puVar6[1] = uVar25;
  puVar6[2] = uVar26;
  puVar6[3] = uVar27;
  puVar6 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar6 = uVar20;
  puVar6[1] = uVar21;
  puVar6[2] = uVar22;
  puVar6[3] = uVar23;
  puVar6 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar6 = uVar16;
  puVar6[1] = uVar17;
  puVar6[2] = uVar18;
  puVar6[3] = uVar19;
  fn_82540870(uVar1,auStack_c0);
  fn_82540B48(*(undefined4 *)(param_1 + 0x18),auStack_100);
  fn_82540438(((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                    (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x18),0x20);
  iVar9 = *(int *)(param_1 + 0x10);
  iVar12 = 0;
  iVar7 = *(int *)(param_1 + 8);
  if (0 < *(int *)((iVar9 + 1) * 4 + iVar7)) {
    iVar10 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)((iVar9 + 3) * 4 + iVar7) + iVar10);
      cVar5 = fn_825F04B8(param_1);
      if (cVar5 != '\0') {
        fn_825EA908(param_1,*puVar6,auStack_80);
      }
      iVar9 = *(int *)(param_1 + 0x10);
      iVar12 = iVar12 + 1;
      iVar7 = *(int *)(param_1 + 8);
      iVar10 = iVar10 + 0x18;
    } while (iVar12 < *(int *)((iVar9 + 1) * 4 + iVar7));
  }
  fn_82623338(piVar2);
  return;
}

