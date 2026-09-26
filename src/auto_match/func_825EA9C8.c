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
extern unsigned int fStack_ec;
extern unsigned int fStack_fc;
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_8257FF90();
extern int fn_825EA908();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_8263DE70();
extern int fn_8263E9F0();
extern int fn_8263FB38();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_100;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_130;
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


void fn_825EA9C8(int param_1)

{
  int iVar1;
  int iVar2;
  int in_r0;
  int *piVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  double dVar7;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
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
  
  iVar1 = *(int *)(param_1 + 4);
  piVar3 = *(int **)((*(uint *)(iVar1 + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar2 = *piVar3;
  if (((*(int *)(iVar1 + 0xca4) == 0) && (*(int *)(param_1 + 0x30) == 0)) &&
     (*(int *)(iVar1 + 0xd30) != 0)) {
    fn_82623298(piVar3,*(undefined4 *)(iVar1 + 0xd34),*(undefined4 *)(iVar1 + 0xd38));
    dVar7 = (double)lbl_821CC160;
    fn_8263DE70(dVar7,iVar2,0,0,1,0);
    fn_8263E9F0(dVar7,iVar2,0,0,0,0,*(undefined4 *)(iVar1 + 0xd30),0,0);
    fn_82623338(*(undefined4 *)
                       ((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1));
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    if (((*(int *)(iVar1 + 0xca0) == 0) || (*(int *)(iVar1 + 0xd30) == 0)) ||
       (*(int *)(iVar1 + 0xca4) == 0)) {
      fn_82623298(piVar3,0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
      fStack_fc = lbl_821CC160;
      uStack_114 = *(undefined4 *)(param_1 + 0x10);
      uStack_118 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xae4);
      uStack_120 = *(undefined4 *)(param_1 + 0x18);
      dVar7 = (double)lbl_821CC160;
      uStack_11c = 4;
      puVar5 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
      *puVar5 = in_register_000104b0;
      puVar5[1] = in_register_000104b4;
      puVar5[2] = in_register_000104b8;
      puVar5[3] = in_vr75;
      fStack_ec = fStack_fc;
      uStack_100 = 1;
      uStack_f8 = 0;
      uStack_f0 = 0xffffffff;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0xffffffff;
      fn_82F68CC0(auStack_d0,iVar1 + 0xcb0,0x40);
      fn_82F68CC0(auStack_90,iVar1 + 0xcf0,0x40);
      **(int **)(param_1 + 0x18) = iVar2;
      fn_82540870(*(undefined4 *)(param_1 + 0x18),auStack_d0);
      fn_82540B48(*(undefined4 *)(param_1 + 0x18),auStack_90);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xabb8) = *(undefined4 *)(param_1 + 0x10);
      fn_82623298(*(undefined4 *)
                         ((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1),
                        *(undefined4 *)(iVar1 + 0xd34),*(undefined4 *)(iVar1 + 0xd38));
      fn_82540438(((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                        (ulonglong)*(uint *)(param_1 + 4) + 0x174,*(undefined4 *)(param_1 + 0x18),4)
      ;
      fStack_12c = (float)dVar7;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0x140;
      uStack_134 = 0xb4;
      uStack_130 = lbl_821CA460;
      fn_82639EA8(iVar2,&uStack_140);
      *(undefined4 *)(iVar2 + 0x2f14) = 1;
      *(uint *)(iVar2 + 0x2934) =
           (-(uint)(*(int *)(iVar2 + 0x3158) != 0) & 1) << 1 |
           *(uint *)(iVar2 + 0x2934) & 0xfffffffd;
      *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x20800;
      *(uint *)(iVar2 + 0x2934) = *(uint *)(iVar2 + 0x2934) | 4;
      *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x800;
      *(uint *)(iVar2 + 0x2934) = *(uint *)(iVar2 + 0x2934) & 0xffffff8f | 0x60;
      uVar4 = *(ulonglong *)(iVar2 + 0x10);
      *(ulonglong *)(iVar2 + 0x10) = uVar4 | 0x20800;
      *(uint *)(iVar2 + 0x293c) = *(uint *)(iVar2 + 0x293c) & 0xfffffff7;
      *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x40200;
      fn_8263DE70(dVar7,iVar2,0,0,0x11,0,uVar4,0,0);
      uVar4 = (ulonglong)*(uint *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
      if (uVar4 != 0) {
        iVar6 = 0;
        do {
          puVar5 = (undefined4 *)
                   (*(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8)) + iVar6);
          if (puVar5[5] != 0) {
            fn_825EA908(param_1,*puVar5,&uStack_120);
          }
          uVar4 = uVar4 - 1;
          iVar6 = iVar6 + 0x18;
        } while (uVar4 != 0);
      }
      fn_8257FF90(*(undefined4 *)(**(int **)(param_1 + 4) + 0x7e4),&uStack_120,
                        *(undefined4 *)(param_1 + 0x10),iVar2,0);
      fn_8263FB38(dVar7,iVar2,0,0,*(undefined4 *)(iVar1 + 0xd30),0,0,0,0);
      piVar3 = *(int **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
    }
    fn_82623338(piVar3);
  }
  return;
}

