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
extern unsigned int *auStack_80;
extern int fn_82570110();
extern int fn_82631C78();
extern int fn_82647738();
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B498;
extern unsigned int lbl_8326B4A8;
extern unsigned int lbl_8326B4AC;
extern int (*lbl_8326C004)();
extern int (*lbl_8327F7E8)();
extern unsigned int lbl_8327F8A0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_825904E0(int param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_r0;
  undefined4 *puVar4;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uStack_6c = lbl_821CC160;
  uStack_88 = *(undefined4 *)(param_1 + 0x44);
  uStack_9c = (undefined4)param_2;
  uStack_8c = 8;
  iVar1 = *(int *)(param_1 + 0x894);
  puStack_98 = &uStack_90;
  uStack_a0 = 0;
  uStack_90 = lbl_8327F8A0;
  puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_000104b0;
  puVar4[1] = in_register_000104b4;
  puVar4[2] = in_register_000104b8;
  puVar4[3] = in_vr75;
  uStack_5c = uStack_6c;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_84 = uStack_9c;
  if (iVar1 != 0) {
    fn_82570110();
  }
  iVar1 = *(int *)(param_1 + 0x8ac);
  if ((*(uint *)(iVar1 + 0x14) & 0x10000000) != 0) {
    fn_82631C78(lbl_8320A898,0,(ulonglong)*(uint *)(iVar1 + 0xbbbc),
                      0x80 - (ulonglong)*(uint *)(iVar1 + 0xbbbc));
    (**(code **)(**(int **)((int)((param_2 + 0x2ed3U & 0xffffffff) << 2) + iVar1) + 8))();
    if (lbl_8327F7E8 != (code *)0x0) {
      (*lbl_8327F7E8)(*(undefined4 *)(iVar1 + 0x24),param_2);
    }
    if ((*(uint *)(iVar1 + 0x14) & 0x8000000) != 0) {
      if (lbl_8326B498 == 0) {
        fn_82A1E7D8(lbl_8326B4AC);
        lbl_8326B498 = fn_82647738(lbl_8320A898);
        fn_82A1E810(lbl_8326B4A8);
      }
      (**(code **)(**(int **)((int)((param_2 + 0x2edcU & 0xffffffff) << 2) + iVar1) + 8))();
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(*(int *)(iVar1 + -0x38) + 0x28))(iVar1 + -0x38,&uStack_a0);
  }
  puVar4 = *(undefined4 **)(param_1 + 0xa0);
  for (puVar2 = (undefined4 *)*puVar4; puVar2 != puVar4; puVar2 = (undefined4 *)*puVar2) {
    piVar3 = (int *)puVar2[2];
    if (piVar3[2] == 2) {
      (**(code **)(*piVar3 + 0x24))(piVar3,&uStack_a0);
    }
    puVar4 = *(undefined4 **)(param_1 + 0xa0);
  }
  if (lbl_8326C004 != (code *)0x0) {
    (*lbl_8326C004)(param_1,param_2,0);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x8ac) + 0x2c) + 0x34) == 1) {
    (**(code **)(**(int **)((int)((param_2 + 0x2ed7U & 0xffffffff) << 2) + *(int *)(param_1 + 0x8ac)
                           ) + 8))();
  }
  return;
}

