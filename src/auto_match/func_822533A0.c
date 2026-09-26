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
extern int fn_8223A060();
extern int fn_8223A0D0();
extern int fn_8223A4D8();
extern int fn_82253938();
extern int fn_82253A28();
extern int fn_82253B40();
extern int fn_82253C58();
extern int fn_82253D70();
extern int fn_82253ED8();
extern int fn_822540D0();
extern int fn_822541F8();
extern int fn_822543D8();
extern int fn_82254628();
extern int fn_822547A0();
extern int fn_822548E8();
extern int fn_82254A78();
extern int fn_82254C08();
extern int fn_82254E40();
extern int fn_82365BD8();
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82197EEC;
extern unsigned int lbl_82197EF4;
extern unsigned int lbl_82197F34;
extern unsigned int lbl_82197F54;
extern unsigned int lbl_82197F64;
extern unsigned int lbl_82197F74;
extern unsigned int lbl_82197F84;
extern unsigned int lbl_82197F94;
extern unsigned int lbl_82197FA4;
extern unsigned int lbl_82197FB4;
extern unsigned int lbl_82197FC4;
extern unsigned int lbl_82197FD4;
extern unsigned int lbl_82197FE4;
extern unsigned int lbl_82198014;


undefined4 * fn_822533A0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_8223A0D0();
  *param_1 = &lbl_82197EEC;
  fn_82253ED8(param_1 + 10,param_2 + 0x28);
  param_1[10] = &lbl_82197EF4;
  fn_82253938(param_1 + 0x2a,param_2 + 0xa8);
  fn_82253A28(param_1 + 0x48,param_2 + 0x120);
  fn_82253A28(param_1 + 100,param_2 + 400);
  fn_82253A28(param_1 + 0x80,param_2 + 0x200);
  fn_82253938(param_1 + 0x9c,param_2 + 0x270);
  fn_82253938(param_1 + 0xba,param_2 + 0x2e8);
  fn_82253938(param_1 + 0xd8,param_2 + 0x360);
  fn_82253938(param_1 + 0xf6,param_2 + 0x3d8);
  puVar3 = param_1 + 0x114;
  fn_8223A4D8(puVar3,param_2 + 0x450);
  param_1[0x114] = &lbl_82196C58;
  puVar2 = param_1 + 0x122;
  if (*(int *)(param_2 + 0x498) == 0) {
    param_1[0x126] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x498) != param_2 + 0x488) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x498))
                      (*(undefined4 **)(param_2 + 0x498),puVar2);
    param_1[0x126] = uVar1;
  }
  puVar2 = param_1 + 0x128;
  if (*(int *)(param_2 + 0x4b0) == 0) {
    param_1[300] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x4b0) != param_2 + 0x4a0) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x4b0))
                      (*(undefined4 **)(param_2 + 0x4b0),puVar2);
    param_1[300] = uVar1;
  }
  *puVar3 = &lbl_82197F34;
  fn_82365BD8(param_1 + 0x12e,param_2 + 0x4b8);
  fn_82365BD8(param_1 + 0x130,param_2 + 0x4c0);
  *puVar3 = &lbl_82197F34;
  fn_82253938(param_1 + 0x132,param_2 + 0x4c8);
  fn_82253B40(param_1 + 0x150,param_2 + 0x540);
  fn_8223A060(param_1 + 0x16c,param_2 + 0x5b0);
  puVar3 = param_1 + 0x186;
  fn_8223A4D8(puVar3,param_2 + 0x618);
  puVar2 = param_1 + 0x194;
  param_1[0x186] = &lbl_82196C58;
  if (*(int *)(param_2 + 0x660) == 0) {
    param_1[0x198] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x660) != param_2 + 0x650) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x660))
                      (*(undefined4 **)(param_2 + 0x660),puVar2);
    param_1[0x198] = uVar1;
  }
  puVar2 = param_1 + 0x19a;
  if (*(int *)(param_2 + 0x678) == 0) {
    param_1[0x19e] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x678) != param_2 + 0x668) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x678))
                      (*(undefined4 **)(param_2 + 0x678),puVar2);
    param_1[0x19e] = uVar1;
  }
  *puVar3 = &lbl_82197F54;
  fn_82365BD8(param_1 + 0x1a0,param_2 + 0x680);
  fn_82365BD8(param_1 + 0x1a2,param_2 + 0x688);
  *puVar3 = &lbl_82197F54;
  fn_822540D0(param_1 + 0x1a4,param_2 + 0x690);
  param_1[0x1a4] = &lbl_82197F64;
  fn_8223A060(param_1 + 0x1c4,param_2 + 0x710);
  puVar3 = param_1 + 0x1de;
  fn_8223A4D8(puVar3,param_2 + 0x778);
  puVar2 = param_1 + 0x1ec;
  param_1[0x1de] = &lbl_82196C58;
  if (*(int *)(param_2 + 0x7c0) == 0) {
    param_1[0x1f0] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x7c0) != param_2 + 0x7b0) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x7c0))
                      (*(undefined4 **)(param_2 + 0x7c0),puVar2);
    param_1[0x1f0] = uVar1;
  }
  puVar2 = param_1 + 0x1f2;
  if (*(int *)(param_2 + 0x7d8) == 0) {
    param_1[0x1f6] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x7d8) != param_2 + 0x7c8) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x7d8))
                      (*(undefined4 **)(param_2 + 0x7d8),puVar2);
    param_1[0x1f6] = uVar1;
  }
  *puVar3 = &lbl_82197F34;
  fn_82365BD8(param_1 + 0x1f8,param_2 + 0x7e0);
  fn_82365BD8(param_1 + 0x1fa,param_2 + 0x7e8);
  *puVar3 = &lbl_82197F34;
  fn_822541F8(param_1 + 0x1fc,param_2 + 0x7f0);
  param_1[0x1fc] = &lbl_82197F74;
  fn_822543D8(param_1 + 0x224,param_2 + 0x890);
  param_1[0x224] = &lbl_82197F84;
  fn_82254628(param_1 + 0x24c,param_2 + 0x930);
  param_1[0x24c] = &lbl_82197F94;
  fn_822547A0(param_1 + 0x270,param_2 + 0x9c0);
  param_1[0x270] = &lbl_82197FA4;
  fn_822548E8(param_1 + 0x296,param_2 + 0xa58);
  param_1[0x296] = &lbl_82197FB4;
  fn_82254A78(param_1 + 0x2be,param_2 + 0xaf8);
  param_1[0x2be] = &lbl_82197FC4;
  fn_82254C08(param_1 + 0x2e6,param_2 + 0xb98);
  param_1[0x2e6] = &lbl_82197FD4;
  fn_82254E40(param_1 + 0x30e,param_2 + 0xc38);
  param_1[0x30e] = &lbl_82197FE4;
  fn_82253C58(param_1 + 0x334,param_2 + 0xcd0);
  fn_82253D70(param_1 + 0x350,param_2 + 0xd40);
  puVar3 = param_1 + 0x36c;
  fn_8223A4D8(puVar3,param_2 + 0xdb0);
  puVar2 = param_1 + 0x37a;
  param_1[0x36c] = &lbl_82196C58;
  if (*(int *)(param_2 + 0xdf8) == 0) {
    param_1[0x37e] = 0;
  }
  else {
    if (*(int *)(param_2 + 0xdf8) != param_2 + 0xde8) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0xdf8))
                      (*(undefined4 **)(param_2 + 0xdf8),puVar2);
    param_1[0x37e] = uVar1;
  }
  puVar2 = param_1 + 0x380;
  if (*(int *)(param_2 + 0xe10) == 0) {
    param_1[900] = 0;
  }
  else {
    if (*(int *)(param_2 + 0xe10) != param_2 + 0xe00) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0xe10))
                      (*(undefined4 **)(param_2 + 0xe10),puVar2);
    param_1[900] = uVar1;
  }
  *puVar3 = &lbl_82198014;
  fn_82365BD8(param_1 + 0x386,param_2 + 0xe18);
  fn_82365BD8(param_1 + 0x388,param_2 + 0xe20);
  fn_82365BD8(param_1 + 0x38a,param_2 + 0xe28);
  fn_82365BD8(param_1 + 0x38c,param_2 + 0xe30);
  *puVar3 = &lbl_82198014;
  return param_1;
}

