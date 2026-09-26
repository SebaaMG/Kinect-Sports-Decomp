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
extern unsigned int *auStack_90;
extern int fn_825268A8();
extern int fn_82576AD8();
extern int fn_82577848();
extern int fn_8258C000();
extern int fn_8258C840();
extern int fn_82631C78();
extern int fn_82645EA8();
extern int fn_82647738();
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B498;
extern unsigned int lbl_8326B4A8;
extern unsigned int lbl_8326B4AC;
extern int (*lbl_8326C000)();
extern unsigned int lbl_8327F8A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82590188(int param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_r0;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  uStack_7c = lbl_821CC160;
  uStack_98 = *(undefined4 *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x8ac);
  uStack_ac = (undefined4)param_2;
  puStack_a8 = &uStack_a0;
  uStack_b0 = 0;
  uStack_a0 = lbl_8327F8A0;
  puVar5 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000104b0;
  puVar5[1] = in_register_000104b4;
  puVar5[2] = in_register_000104b8;
  puVar5[3] = in_vr75;
  uStack_9c = 4;
  uStack_6c = uStack_7c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xffffffff;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0xffffffff;
  uStack_94 = uStack_ac;
  if ((*(uint *)(iVar1 + 0x14) & 0x4000000) != 0) {
    fn_82631C78(lbl_8320A898,0,0x70,0x10);
    (**(code **)(**(int **)((int)((param_2 + 0x2edeU & 0xffffffff) << 2) + iVar1) + 8))();
  }
  fn_82631C78(lbl_8320A898,0,0x40,0x40);
  (**(code **)(**(int **)((int)((param_2 + 0x2ee3U & 0xffffffff) << 2) + iVar1) + 8))();
  if ((*(uint *)(iVar1 + 0x14) & 0x20000000) != 0) {
    fn_82631C78(lbl_8320A898,0,(ulonglong)*(uint *)(iVar1 + 0xbbbc),
                      0x80 - (ulonglong)*(uint *)(iVar1 + 0xbbbc));
    uVar6 = 2;
    do {
      if ((uVar6 & 0xffffffff) == 0) {
        uVar4 = 3;
      }
      else if ((uVar6 & 0xffffffff) == 1) {
        uVar4 = 0xc;
      }
      else {
        uVar4 = 0;
      }
      fn_82645EA8(lbl_8320A898,uVar4);
      lVar7 = 0;
      do {
        (**(code **)(**(int **)((int)((((uVar6 & 0x7fffffff) * 2 + param_2 & 0x3fffffff) * 4 +
                                       0x2eb9 + lVar7 & 0xffffffff) << 2) + iVar1) + 8))();
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < 4);
      uVar6 = uVar6 - 1;
    } while (-1 < (longlong)uVar6);
    fn_82645EA8(lbl_8320A898,0);
    (**(code **)(**(int **)((int)((param_2 + 0x2ed1U & 0xffffffff) << 2) + iVar1) + 8))();
  }
  fn_82631C78(lbl_8320A898,0,0x40,0x40);
  (**(code **)(**(int **)((int)((param_2 + 0x2ed5U & 0xffffffff) << 2) + iVar1) + 8))();
  uVar4 = fn_8258C000();
  fn_8258C840(uVar4,param_2);
  fn_82631C78(lbl_8320A898,0,0x28,0x58);
  (**(code **)(**(int **)((int)((param_2 + 0x2ee7U & 0xffffffff) << 2) + iVar1) + 8))();
  if ((*(uint *)(iVar1 + 0x14) & 0x8000000) != 0) {
    if (lbl_8326B498 == 0) {
      fn_82A1E7D8(lbl_8326B4AC);
      lbl_8326B498 = fn_82647738(lbl_8320A898);
      fn_82A1E810(lbl_8326B4A8);
    }
    (**(code **)(**(int **)((int)((param_2 + 0x2edaU & 0xffffffff) << 2) + iVar1) + 8))();
  }
  if (*(int *)(param_1 + 0x93c) != 0) {
    fn_82576AD8((double)*(float *)(param_1 + 0x828));
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x8c4) + 8)) {
    fn_82577848(*(int *)(param_1 + 0x8c4),param_2);
  }
  if (lbl_8326C000 != (code *)0x0) {
    (*lbl_8326C000)(param_1,param_2,0);
  }
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(*(int *)(iVar1 + -0x38) + 0x28))(iVar1 + -0x38,&uStack_b0);
  }
  puVar5 = *(undefined4 **)(param_1 + 0xa0);
  for (puVar2 = (undefined4 *)*puVar5; puVar2 != puVar5; puVar2 = (undefined4 *)*puVar2) {
    piVar3 = (int *)puVar2[2];
    if (piVar3[2] == 2) {
      (**(code **)(*piVar3 + 0x24))(piVar3,&uStack_b0);
    }
    puVar5 = *(undefined4 **)(param_1 + 0xa0);
  }
  fn_825268A8(1);
  return;
}

