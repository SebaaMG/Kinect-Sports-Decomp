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
extern int fn_8268CC00();
extern unsigned int lbl_8200E82C;
extern unsigned int lbl_821AAD20;


undefined4 *
fn_8270E3B0(double param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  param_2[1] = 1;
  *param_2 = &lbl_8200E82C;
  fn_8268CC00(param_2 + 6);
  fn_8268CC00(param_2 + 0xc);
  uVar1 = lbl_821AAD20;
  param_2[0x13] = lbl_821AAD20;
  param_2[0x14] = uVar1;
  param_2[0x15] = uVar1;
  param_2[0x16] = uVar1;
  param_2[0x18] = uVar1;
  param_2[0x19] = uVar1;
  param_2[0x1a] = uVar1;
  param_2[0x1b] = uVar1;
  fn_8268CC00(param_2 + 0x1c);
  puVar4 = param_2 + 0x22;
  lVar5 = 8;
  do {
    fn_8268CC00(puVar4);
    lVar5 = lVar5 + -1;
    puVar4 = puVar4 + 6;
  } while (-1 < lVar5);
  param_2[0x58] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  param_2[2] = *param_3;
  param_2[3] = param_3[1];
  param_2[4] = param_3[2];
  param_2[5] = param_3[3];
  param_2[6] = *param_4;
  param_2[7] = param_4[1];
  param_2[8] = param_4[2];
  param_2[9] = param_4[3];
  param_2[10] = param_4[4];
  param_2[0xb] = param_4[5];
  param_2[0xc] = *param_5;
  param_2[0xd] = param_5[1];
  param_2[0xe] = param_5[2];
  param_2[0xf] = param_5[3];
  param_2[0x10] = param_5[4];
  param_2[0x11] = param_5[5];
  param_2[0x12] = (float)param_1;
  uVar1 = param_7[3];
  uVar2 = param_7[2];
  uVar3 = param_7[1];
  param_2[0x13] = *param_7;
  param_2[0x14] = uVar3;
  param_2[0x15] = uVar2;
  param_2[0x16] = uVar1;
  *(undefined1 *)(param_2 + 0x17) = 0;
  return param_2;
}

