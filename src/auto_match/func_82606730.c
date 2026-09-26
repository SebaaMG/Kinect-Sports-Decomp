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
extern int fn_82606610();
extern int fn_826066A0();
extern int fn_82A1EFC0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_821CE890;
extern unsigned int lbl_831BF720;
extern unsigned int lbl_831BF728;


void fn_82606730(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r0;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  fn_82606610();
  fn_826066A0(param_1);
  *(undefined4 *)(param_1 + 0x88) = lbl_831BF720;
  uVar3 = lbl_831BF728;
  uVar2 = lbl_821CC160;
  puVar4 = (undefined4 *)((uint)(&lbl_821CE890 + in_r0) & 0xfffffff0);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  lVar5 = 6;
  puVar4 = (undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x140) = 1;
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  puVar1 = (undefined4 *)(param_1 + 0x90U & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1 = (undefined4 *)(param_1 + 0x130U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa0);
  fn_82A1EFC0(param_1 + 0x160,0,0x100);
  return;
}

