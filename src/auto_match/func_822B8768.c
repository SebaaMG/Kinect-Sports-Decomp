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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8234B020();
extern int fn_8234C258();
extern int fn_8234EED8();
extern int fn_82359C18();
extern int fn_824CA800();
extern int fn_8255F788();
extern int fn_827F3580();
extern int fn_827F5708();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;


void fn_822B8768(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined1 auStack_50 [80];
  
  dVar5 = (double)lbl_821CC160;
  fn_8255F788(dVar5,*(undefined4 *)(param_1 + 0xc));
  uStack_60 = 0;
  fn_824CA800((ulonglong)*(uint *)(param_1 + 0xc) + 400,auStack_70);
  fn_82359C18(auStack_70);
  uVar2 = lbl_821CA460;
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(iVar1 + 0x114) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  puVar4 = *(undefined4 **)(iVar1 + 0xec);
  for (puVar3 = *(undefined4 **)(iVar1 + 0xe8); puVar3 != puVar4; puVar3 = puVar3 + 1) {
    *puVar3 = uVar2;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0xfc);
  for (puVar4 = *(undefined4 **)(iVar1 + 0xf8); puVar4 != puVar3; puVar4 = puVar4 + 1) {
    *puVar4 = uVar2;
  }
  fn_827F5708(dVar5);
  fn_827F3580(dVar5,dVar5,*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  fn_82230360(param_1 + 0x34,0xffffffff821b1d30,9);
  fn_8234EED8(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  puVar4 = (undefined4 *)(param_1 + 0xa0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  if (*(int *)(param_1 + 0x268) != 0) {
    fn_827F3580(dVar5,dVar5);
    fn_827F3580(dVar5,dVar5,*(undefined4 *)(param_1 + 0x294));
    *(undefined4 *)(param_1 + 0x270) = 0;
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    fn_82230110(auStack_50,0xffffffff821ac494);
    fn_8234C258(param_1 + 0x150,0,auStack_50);
    fn_8234C258(param_1 + 0x150,1,auStack_50);
    fn_827F5708(dVar5,*(undefined4 *)(param_1 + 0x278));
    *(undefined4 *)(param_1 + 0x280) = 0;
    fn_827F5708(dVar5,*(undefined4 *)(param_1 + 0x2a4));
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    fn_82230300(auStack_50,1,0);
  }
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x254) = 0;
  fn_8234B020(param_1 + 0x2c0);
  fn_8255F788(dVar5,*(undefined4 *)(param_1 + 0x32c));
  *(float *)(param_1 + 0x33c) = (float)dVar5;
  if (*(int *)(param_1 + 0x334) != 0) {
    fn_827F5708(dVar5);
  }
  *(float *)(param_1 + 0x348) = (float)dVar5;
  *(float *)(param_1 + 0x354) = (float)dVar5;
  *(float *)(param_1 + 0x360) = (float)dVar5;
  *(float *)(param_1 + 0x364) = (float)dVar5;
  return;
}

