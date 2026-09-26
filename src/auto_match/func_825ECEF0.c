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
extern int fn_8252DCF8();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540C50();
extern int fn_825444B8();
extern int fn_8257DE30();
extern int fn_825C7348();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82637B30();
extern int fn_82639EA8();
extern int fn_82F68CC0();
extern unsigned int iStack_104;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B370;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_825ECEF0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int in_r0;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [128];
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 4);
  iVar12 = iVar4 * 0x200 + iVar5;
  fn_82F68CC0(auStack_80,iVar12 + 0x50,0x40);
  fn_82F68CC0(auStack_c0,iVar12 + 0x90,0x40);
  uStack_ec = lbl_821CC160;
  uStack_108 = *(undefined4 *)(iVar5 + 0xae4);
  uStack_110 = *(undefined4 *)(param_1 + 0x10);
  piVar7 = *(int **)((*(uint *)(iVar5 + 0xaf0) % 3 + 5) * 4 + param_1);
  iVar5 = *piVar7;
  uStack_10c = 4;
  puVar9 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar9 = in_register_000104b0;
  puVar9[1] = in_register_000104b4;
  puVar9[2] = in_register_000104b8;
  puVar9[3] = in_vr75;
  uStack_dc = uStack_ec;
  uStack_f0 = 1;
  uStack_e8 = 0;
  uStack_e0 = 0xffffffff;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0xffffffff;
  **(int **)(param_1 + 0x10) = iVar5;
  iStack_104 = iVar4;
  fn_82540870(*(undefined4 *)(param_1 + 0x10),auStack_80);
  fn_82540B48(*(undefined4 *)(param_1 + 0x10),auStack_c0);
  fn_82540C50(*(undefined4 *)(param_1 + 0x10));
  iVar4 = *(int *)(param_1 + 0x10);
  iVar12 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4);
  uVar1 = *(undefined4 *)(iVar12 + 0x160);
  uVar2 = *(undefined4 *)(iVar12 + 0x164);
  uVar3 = *(undefined4 *)(iVar12 + 0x16c);
  *(undefined4 *)(iVar4 + 0xabcc) = *(undefined4 *)(iVar12 + 0x168);
  *(undefined4 *)(iVar4 + 0xabd0) = uVar3;
  *(undefined4 *)(iVar4 + 0xabd4) = uVar2;
  *(undefined4 *)(iVar4 + 0xabd8) = uVar1;
  fn_825C7348(1);
  uVar8 = fn_825C7348(0);
  fn_82623298(piVar7,uVar8);
  fn_82639EA8(iVar5,((ulonglong)*(uint *)(param_1 + 8) & 0x7fffff) * 0x200 +
                          (ulonglong)*(uint *)(param_1 + 4) + 0x174);
  *(undefined4 *)(iVar5 + 0x2f14) = 0;
  *(uint *)(iVar5 + 0x2934) = *(uint *)(iVar5 + 0x2934) & 0xfffffffd;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x20800;
  *(uint *)(iVar5 + 0x2934) = *(uint *)(iVar5 + 0x2934) & 0xfffffffb;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x800;
  *(uint *)(iVar5 + 0x29c0) = *(uint *)(iVar5 + 0x29c0) | 1;
  *(ulonglong *)(iVar5 + 0x20) = *(ulonglong *)(iVar5 + 0x20) | 0x800000000;
  fn_82637B30(iVar5,0);
  puVar9 = &lbl_8326B370;
  *(uint *)(iVar5 + 0x293c) = *(uint *)(iVar5 + 0x293c) & 0xfffffff7;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x40200;
  *(uint *)(iVar5 + 0x2948) = *(uint *)(iVar5 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x40;
  uVar11 = *(uint *)(param_1 + 4);
  uVar10 = (ulonglong)uVar11;
  if (((ulonglong)*(uint *)(param_1 + 8) & 0x7fffff) * 0x200 + uVar10 == -0x174) {
    uVar8 = 0xffffffff8326b090;
  }
  else {
    puVar9 = &lbl_8326B370;
    uVar8 = fn_825444B8();
    uVar11 = (uint)uVar10;
  }
  fn_8252DCF8((double)*(float *)(uVar11 + 0xaf4),(double)*(float *)(uVar11 + 0xaf8),
                    (double)*(float *)(uVar11 + 0xafc),(double)*(float *)(uVar11 + 0xb00),
                    (double)*(float *)(uVar11 + 0xb04),(double)*(float *)(uVar11 + 0xb08),iVar5,
                    uVar8,puVar9[0x2d]);
  *(uint *)(iVar5 + 0x29c0) = *(uint *)(iVar5 + 0x29c0) & 0xfffffffe;
  *(ulonglong *)(iVar5 + 0x20) = *(ulonglong *)(iVar5 + 0x20) | 0x800000000;
  *(uint *)(iVar5 + 0x2948) = *(uint *)(iVar5 + 0x2948) & 0xfffffff8 | 2;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x40;
  *(uint *)(iVar5 + 0x293c) = *(uint *)(iVar5 + 0x293c) | 8;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x40200;
  piVar6 = *(int **)(param_1 + 4);
  fn_8257DE30(*(undefined4 *)(*piVar6 + 0xb8),3,&uStack_110,piVar6[0x2ba],
                    piVar6 + *(int *)(param_1 + 8) * 0x80 + 0x5d);
  fn_82623338(piVar7);
  return;
}

