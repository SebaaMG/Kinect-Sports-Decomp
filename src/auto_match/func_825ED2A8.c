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
extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_8254F208();
extern int fn_825C7348();
extern int fn_825C73C8();
extern int fn_825D5E68();
extern int fn_825D5F20();
extern int fn_825D6140();
extern int fn_825ED6A8();
extern int fn_825ED7A8();
extern int fn_82622CC0();
extern int fn_826231D8();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_8263CBB0();
extern int fn_82F68CC0();


void fn_825ED2A8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
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
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [144];
  
  iVar8 = *(int *)(param_1 + 4);
  piVar3 = *(int **)((*(uint *)(iVar8 + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar3;
  if ((*(int *)(param_1 + 0x30) == 2) ||
     ((*(int *)(*(int *)(param_1 + 0x10) * 0x200 + iVar8 + 0x170) < 2 &&
      (*(char *)(iVar8 + 0xbdc) != '\0')))) {
    if (*(char *)(iVar8 + 0xbdc) == '\0') {
      fn_825C7348(1);
      uVar5 = fn_825C7348(0);
      fn_82623298(piVar3,uVar5);
    }
    else {
      if (*(int *)(param_1 + 0x30) == 2) {
        fn_825C7348(3);
        uVar5 = fn_825C7348(2);
      }
      else {
        fn_825C7348(3);
        uVar5 = fn_825C7348(2);
      }
      fn_826231D8(piVar3,uVar5);
    }
    fn_82622CC0(param_1,piVar3);
    fn_82639EA8(iVar1,((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                            (ulonglong)*(uint *)(param_1 + 4) + 0x174);
    *(undefined4 *)(iVar1 + 0x2f14) = 1;
    *(uint *)(iVar1 + 0x2934) =
         (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
    uVar7 = *(ulonglong *)(iVar1 + 0x10);
    *(ulonglong *)(iVar1 + 0x10) = uVar7 | 0x800;
    *(ulonglong *)(iVar1 + 0x10) = uVar7 | 0x20800;
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
    uVar7 = *(ulonglong *)(iVar1 + 0x10);
    *(ulonglong *)(iVar1 + 0x10) = uVar7 | 0x800;
    *(ulonglong *)(iVar1 + 0x10) = uVar7 | 0x20800;
    iVar8 = *(int *)(**(int **)(param_1 + 4) + 0x8c8);
    if (iVar8 != 0) {
      fn_8254F208(iVar8,*(undefined4 *)(param_1 + 0x18));
    }
    fn_825402B0(auStack_90,*(undefined4 *)(param_1 + 0x18),4,
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0xae4),*(undefined4 *)(param_1 + 0x10),1,0)
    ;
    fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                      *(undefined4 *)(param_1 + 0x18));
    lVar11 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
             (ulonglong)*(uint *)(param_1 + 4);
    fn_82F68CC0(auStack_d0,lVar11 + 0x50,0x40);
    iVar8 = (int)lVar11;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar8 = iVar8 + 0xd0;
    }
    else if (*(int *)(param_1 + 0x30) == 1) {
      iVar8 = iVar8 + 0x110;
    }
    else {
      iVar8 = iVar8 + 0x90;
    }
    puVar12 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
    uVar24 = *puVar12;
    uVar25 = puVar12[1];
    uVar26 = puVar12[2];
    uVar27 = puVar12[3];
    puVar12 = (undefined4 *)(in_r0 + iVar8 & 0xfffffff0);
    uVar13 = puVar12[1];
    uVar14 = puVar12[2];
    uVar15 = puVar12[3];
    puVar4 = (undefined4 *)(iVar8 + 0x20U & 0xfffffff0);
    uVar20 = *puVar4;
    uVar21 = puVar4[1];
    uVar22 = puVar4[2];
    uVar23 = puVar4[3];
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    puVar4 = (undefined4 *)(iVar8 + 0x30U & 0xfffffff0);
    uVar16 = *puVar4;
    uVar17 = puVar4[1];
    uVar18 = puVar4[2];
    uVar19 = puVar4[3];
    puVar4 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar12;
    puVar4[1] = uVar13;
    puVar4[2] = uVar14;
    puVar4[3] = uVar15;
    puVar12 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar12 = uVar24;
    puVar12[1] = uVar25;
    puVar12[2] = uVar26;
    puVar12[3] = uVar27;
    puVar12 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar12 = uVar20;
    puVar12[1] = uVar21;
    puVar12[2] = uVar22;
    puVar12[3] = uVar23;
    puVar12 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar12 = uVar16;
    puVar12[1] = uVar17;
    puVar12[2] = uVar18;
    puVar12[3] = uVar19;
    fn_82540870(uVar2,auStack_d0);
    fn_82540B48(*(undefined4 *)(param_1 + 0x18),auStack_110);
    fn_82540438(((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                      (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x18),4);
    fn_825D6140(*(undefined4 *)(param_1 + 0x1c),iVar1);
    fn_825D5E68(*(undefined4 *)(param_1 + 0x1c));
    uVar5 = fn_825C73C8(0);
    fn_8263CBB0(iVar1,10,uVar5);
    *(uint *)(iVar1 + 0x570) = *(uint *)(iVar1 + 0x570) & 0xffffe3ff | 0x800;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x200000;
    *(uint *)(iVar1 + 0x570) = *(uint *)(iVar1 + 0x570) & 0xffff1fff | 0x4000;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x200000;
    iVar10 = *(int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
    iVar8 = iVar10 / *(int *)(param_1 + 0x38);
    iVar9 = *(int *)(param_1 + 0x34) * iVar8;
    if (*(int *)(param_1 + 0x34) + 1 != *(int *)(param_1 + 0x38)) {
      iVar10 = (*(int *)(param_1 + 0x34) + 1) * iVar8;
    }
    if (iVar9 < iVar10) {
      iVar8 = iVar9 * 0x18;
      iVar10 = iVar10 - iVar9;
      do {
        puVar12 = (undefined4 *)
                  (*(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8)) + iVar8);
        cVar6 = fn_825ED6A8(param_1,puVar12);
        if (cVar6 != '\0') {
          if (*(int *)(*(int *)*puVar12 + 0x1bc) != 0) {
            fn_825D5E68(*(undefined4 *)(param_1 + 0x1c),iVar1,8);
          }
          fn_825ED7A8(param_1,*puVar12,auStack_90);
          if (*(int *)(*(int *)*puVar12 + 0x1bc) != 0) {
            fn_825D5F20(*(undefined4 *)(param_1 + 0x1c),iVar1,8);
          }
        }
        iVar10 = iVar10 + -1;
        iVar8 = iVar8 + 0x18;
      } while (iVar10 != 0);
    }
    fn_825D5F20(*(undefined4 *)(param_1 + 0x1c),iVar1,0x20);
  }
  else {
    fn_82623298(piVar3,0,0);
  }
  fn_82623338(piVar3);
  return;
}

