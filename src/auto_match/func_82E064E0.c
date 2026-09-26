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
extern unsigned int *auStack_b4;
extern int fn_82CE5410();
extern int fn_82D06A28();
extern int fn_82E061F8();
extern unsigned int iStack_bc;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_b8;


undefined8 fn_82E064E0(int param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_r0;
  int iVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  int iVar7;
  undefined4 in_register_00010070;
  undefined4 in_register_00010074;
  undefined4 in_register_00010078;
  undefined4 in_vr7;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  undefined1 *puStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined1 auStack_b4 [180];
  
  puStack_c0 = auStack_b4;
  uStack_b8 = 0x80000020;
  iStack_bc = 0;
  iVar5 = fn_82E061F8(*(undefined4 *)(param_1 + 0x14),param_2,&puStack_c0);
  if (iVar5 == 0) {
    iVar5 = 0;
    puVar2 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar2 = in_register_000100d0;
    puVar2[1] = in_register_000100d4;
    puVar2[2] = in_register_000100d8;
    puVar2[3] = in_vr13;
    puVar2 = (undefined4 *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
    *puVar2 = in_register_000100b0;
    puVar2[1] = in_register_000100b4;
    puVar2[2] = in_register_000100b8;
    puVar2[3] = in_vr11;
    puVar2 = (undefined4 *)((int)param_3 + in_r0 + 0x20 & 0xfffffff0);
    *puVar2 = in_register_00010090;
    puVar2[1] = in_register_00010094;
    puVar2[2] = in_register_00010098;
    puVar2[3] = in_vr9;
    uVar3 = lbl_82002AE0;
    puVar2 = (undefined4 *)((int)param_3 + in_r0 + 0x30 & 0xfffffff0);
    *puVar2 = in_register_00010070;
    puVar2[1] = in_register_00010074;
    puVar2[2] = in_register_00010078;
    puVar2[3] = in_vr7;
    *param_3 = uVar3;
    param_3[5] = uVar3;
    param_3[10] = uVar3;
    param_3[0xf] = uVar3;
    if (0 < iStack_bc) {
      iVar7 = 0;
      do {
        uVar1 = *(uint *)(*(int *)(puStack_c0 + iVar7) + 0x20);
        uVar6 = param_4;
        if ((int)uVar1 <= (int)param_4) {
          uVar6 = (ulonglong)uVar1 - 1;
        }
        fn_82D06A28(param_3,(ulonglong)*(uint *)(*(int *)(puStack_c0 + iVar7) + 0x1c) +
                                  (uVar6 & 0x3ffffff) * 0x40);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar5 < iStack_bc);
    }
    iVar5 = fn_82CE5410();
    iStack_bc = 0;
    if ((uStack_b8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),puStack_c0,uStack_b8 & 0x3fffffff,4);
    }
    uVar4 = 0;
  }
  else {
    iVar5 = fn_82CE5410();
    iStack_bc = 0;
    if ((uStack_b8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),puStack_c0,uStack_b8 & 0x3fffffff,4);
    }
    uVar4 = 1;
  }
  return uVar4;
}

