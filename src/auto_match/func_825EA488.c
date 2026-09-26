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
extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_ec;
extern unsigned int fStack_fc;
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_8257FF90();
extern int fn_825C7348();
extern int fn_825C73C8();
extern int fn_825EA908();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_8263DE70();
extern int fn_8263FB38();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_100;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


void fn_825EA488(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_r0;
  undefined8 uVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [144];
  
  iVar7 = *(int *)(param_1 + 4);
  piVar4 = *(int **)((*(uint *)(iVar7 + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar4;
  if (*(int *)(iVar7 + 0xbe0) == 0) {
    fn_82623298(piVar4,0,0);
  }
  else {
    uStack_118 = *(undefined4 *)(iVar7 + 0xae4);
    uStack_120 = *(undefined4 *)(param_1 + 0x18);
    uStack_114 = *(undefined4 *)(param_1 + 0x10);
    uStack_11c = 4;
    puVar6 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
    *puVar6 = in_register_000104b0;
    puVar6[1] = in_register_000104b4;
    puVar6[2] = in_register_000104b8;
    puVar6[3] = in_vr75;
    dVar9 = (double)lbl_821CC160;
    uStack_100 = 1;
    fStack_fc = lbl_821CC160;
    uStack_f8 = 0;
    fStack_ec = lbl_821CC160;
    uStack_f0 = 0xffffffff;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0xffffffff;
    uVar2 = *(uint *)(param_1 + 4);
    fn_82F68CC0(auStack_90,(ulonglong)uVar2 + 0xbf0,0x40);
    fn_82F68CC0(auStack_d0,(ulonglong)uVar2 + 0xc30,0x40);
    **(int **)(param_1 + 0x18) = iVar1;
    fn_82540B48(*(undefined4 *)(param_1 + 0x18),auStack_d0);
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xabb8) = *(undefined4 *)(param_1 + 0x10);
    fn_82540870(*(undefined4 *)(param_1 + 0x18),auStack_90);
    fn_825C7348(7);
    uVar3 = fn_825C7348(6);
    fn_82623298(*(undefined4 *)
                       ((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1),uVar3);
    fn_82540438(((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                      (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x18),4);
    fStack_130 = (float)dVar9;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0x280;
    dVar8 = (double)lbl_821CA460;
    fStack_12c = lbl_821CA460;
    uStack_134 = 0x1e0;
    fn_82639EA8(iVar1,&uStack_140);
    *(undefined4 *)(iVar1 + 0x2f14) = 1;
    *(uint *)(iVar1 + 0x2934) =
         (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffff8f | 0x30;
    uVar5 = *(ulonglong *)(iVar1 + 0x10);
    *(ulonglong *)(iVar1 + 0x10) = uVar5 | 0x20800;
    *(uint *)(iVar1 + 0x293c) = *(uint *)(iVar1 + 0x293c) & 0xfffffff7;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
    fn_8263DE70(dVar8,iVar1,0,0,0x11,0,uVar5,0,0);
    uVar2 = *(uint *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
    uVar5 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      iVar7 = 0;
      do {
        puVar6 = (undefined4 *)
                 (*(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8)) + iVar7);
        if (puVar6[4] != 0) {
          fn_825EA908(param_1,*puVar6,&uStack_120);
        }
        uVar5 = uVar5 - 1;
        iVar7 = iVar7 + 0x18;
      } while (uVar5 != 0);
    }
    fn_8257FF90(*(undefined4 *)(**(int **)(param_1 + 4) + 0x7e4),&uStack_120,
                      *(undefined4 *)(param_1 + 0x10),iVar1,0);
    uVar3 = fn_825C73C8(dVar9,2);
    fn_8263FB38(iVar1,0,0,uVar3,0,0,0,0);
    piVar4 = *(int **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  }
  fn_82623338(piVar4);
  return;
}

