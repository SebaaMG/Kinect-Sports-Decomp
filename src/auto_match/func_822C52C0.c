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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_822C5550();
extern int fn_82522ED8();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F3A60();
extern int fn_827F3AB0();
extern int fn_827F3B30();
extern int fn_827F3B90();
extern int fn_827F3C20();
extern int fn_827F3EB0();
extern int fn_827F7210();
extern int fn_827F74C0();
extern int fn_827F94B0();
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


bool fn_822C52C0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  int param_5,float *param_6)

{
  bool bVar1;
  int in_r0;
  undefined4 *puVar9;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 auStack_c0 [4];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  puVar9 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  *puVar9 = in_register_000104d0;
  puVar9[1] = in_register_000104d4;
  puVar9[2] = in_register_000104d8;
  puVar9[3] = in_vr77;
  *param_6 = lbl_821CC160;
  fn_8255F880(auStack_c0,param_2);
  puVar9 = (undefined4 *)fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,auStack_c0);
  fn_827F3C20();
  uVar2 = fn_827F7210();
  bVar1 = (param_3 & 0xffffffff) < (uVar2 & 0xffff);
  if (bVar1) {
    auStack_c0[0] = 0;
    fn_82811438(auStack_b0,auStack_c0,0x10);
    uVar3 = fn_827F3AB0(puVar9);
    uVar4 = fn_82811080(0xffffffff8320a3e0,uVar3,auStack_b0);
    fn_827F3B90(puVar9,uVar4,uVar3);
    uVar3 = fn_827F3A60(puVar9);
    uVar3 = fn_82811080(0xffffffff8320a3e0,uVar3,auStack_b0);
    fn_827F3B30(puVar9,uVar3);
    uVar2 = fn_827F3EB0(puVar9);
    uVar5 = fn_82811080(0xffffffff8320a3e0,(uVar2 & 0x3ffffff) << 6,auStack_b0);
    uVar6 = fn_827F3C20(puVar9);
    fn_827F74C0(uVar6,uVar5);
    lVar7 = fn_827F3EB0(puVar9);
    uVar6 = fn_82811080(0xffffffff8320a3e0,lVar7 * 0x34,auStack_b0);
    fn_82F68CC0(uVar6,*(undefined4 *)(*(int *)(puVar9[0x78] + 0x48) + 0x2c),lVar7 * 0x34);
    uVar8 = fn_827F3C20(puVar9);
    fn_827F94B0(uVar8,uVar6);
    fn_822C5550(param_1,puVar9,param_3);
    uVar8 = fn_827F3C20(puVar9);
    fn_827F94B0(uVar8,0);
    auStack_c0[0] = 3;
    uVar8 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar6,uVar8);
    uVar6 = fn_827F3C20(puVar9);
    fn_827F74C0(uVar6,0);
    auStack_c0[0] = 3;
    uVar6 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar5,uVar6);
    fn_827F3B30(puVar9,0);
    auStack_c0[0] = 3;
    uVar5 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar3,uVar5);
    fn_827F3B90(puVar9,0,0);
    auStack_c0[0] = 3;
    uVar3 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar4,uVar3);
  }
  (**(code **)*puVar9)(puVar9,0);
  fn_82522ED8(puVar9);
  return bVar1;
}

