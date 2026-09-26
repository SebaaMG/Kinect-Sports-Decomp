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
extern int fn_82675A40();
extern int fn_8267ADA8();
extern int fn_8268CC00();
extern int fn_8268D758();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200527C;
extern unsigned int lbl_821AAD20;


undefined4 * fn_826772B0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  *param_1 = &lbl_8200527C;
  param_1[1] = 1;
  lVar4 = 0x13;
  puVar3 = param_1 + 9;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x1c;
  lVar4 = 0x13;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  fn_8268CC00(param_1 + 0x3b);
  fn_8268CC00(param_1 + 0x41);
  fn_8268CC00(param_1 + 0x47);
  fn_8268D758(param_1 + 0x4d);
  param_1[0x55] = param_1 + 0x55;
  param_1[0x56] = param_1 + 0x55;
  fn_8267ADA8(param_1 + 0x57,0);
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x879) = 0;
  param_1[0x87a] = 0;
  param_1[0x87b] = 0;
  param_1[0x87c] = 0;
  param_1[0x87d] = 0;
  param_1[0x87e] = 0;
  param_1[0x87f] = 0;
  param_1[0x880] = 0;
  fn_8267ADA8(param_1 + 0x881,0);
  puVar3 = param_1 + 0x888;
  lVar4 = 1;
  do {
    fn_82675A40(puVar3);
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 0x1d;
  } while (-1 < lVar4);
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  param_1[8] = 0xf;
  param_1[7] = 0xffffffff;
  lVar4 = 0x120;
  param_1[0x72] = 0xffffffff;
  puVar3 = param_1 + 0x94;
  *(undefined1 *)((int)param_1 + 0xdd) = 0;
  uVar2 = lbl_821AAD20;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  uVar1 = lbl_82002AE0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[0x73] = 1;
  param_1[0x71] = 0;
  param_1[0x36] = 0;
  param_1[0x97] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  do {
    puVar3[6] = uVar2;
    puVar3 = puVar3 + 7;
    *puVar3 = uVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[5] = 0;
  return param_1;
}

