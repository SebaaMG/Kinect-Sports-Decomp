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
extern int fn_8225F160();
extern int fn_824A2308();
extern int fn_824CD030();
extern int fn_8265C9E0();
extern unsigned int lbl_821C0B48;
extern unsigned int lbl_821CC160;


undefined4 * fn_824CC840(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  undefined4 uVar6;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  param_1[4] = 0;
  *param_1 = &lbl_821C0B48;
  param_1[10] = *(undefined4 *)(param_2 + 0x24);
  uVar2 = lbl_821CC160;
  param_1[0xb] = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  puVar1 = (undefined4 *)((uint)(param_1 + 0x24) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x2e] = uVar2;
  param_1[0xd] = 0;
  param_1[0x2c] = uVar2;
  param_1[0x34] = 0;
  param_1[0x2d] = uVar2;
  param_1[0x35] = 1;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[5] = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[7] = 0xffffffff;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x18) & 0xfffffff0);
  *puVar1 = in_register_000104b0;
  puVar1[1] = in_register_000104b4;
  puVar1[2] = in_register_000104b8;
  puVar1[3] = in_vr75;
  param_1[6] = 0xffffffff;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x1c) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0xc] = uVar6;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x20) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x28) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x30) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  iVar4 = fn_824CD030(param_1);
  if (iVar4 == 0) {
    iVar4 = fn_8225F160();
    *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) + 1;
  }
  else {
    iVar4 = param_1[0xc];
    iVar5 = fn_8225F160();
    *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + 1;
    if (iVar4 == 0) {
      *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
    }
    else {
      *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
    }
  }
  uVar3 = fn_8265C9E0(0x1c);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_824A2308(uVar3,param_1[10]);
  }
  param_1[8] = uVar6;
  return param_1;
}

