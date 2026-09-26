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
extern int fn_822315A0();
extern int fn_8227D7E8();
extern int fn_8227D908();
extern int fn_822997C8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821B7D68;
extern unsigned int lbl_821B7D8C;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82404F30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  param_1[3] = param_5;
  param_1[5] = param_4;
  param_1[2] = param_2;
  param_1[4] = param_3;
  *param_1 = &lbl_821B7D68;
  param_1[1] = 7;
  param_1[6] = 8;
  uVar2 = lbl_821CC160;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = uVar2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = *param_6;
  param_1[0xf] = *(undefined4 *)(param_8 + 0x148);
  uVar1 = *(undefined4 *)(param_8 + 0x148);
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x12] = 0;
  fn_82F68CC0(param_1 + 0x13,param_6,0x54);
  param_1[0x28] = param_7;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_821B7D8C;
    puVar3[1] = 1;
    puVar3[2] = 1;
    puVar3[3] = 0;
  }
  if (param_1[0x2a] != 0) {
    fn_822315A0();
  }
  param_1[0x2a] = puVar3;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_821B7D8C;
    puVar3[1] = 1;
    puVar3[2] = 1;
    puVar3[3] = 0;
  }
  if (param_1[0x2c] != 0) {
    fn_822315A0();
  }
  param_1[0x2c] = puVar3;
  param_1[0x2b] = 0;
  fn_8227D7E8(param_1 + 0x30);
  fn_822997C8(param_1 + 0x44);
  fn_8227D908(param_1 + 0x30,4);
  return param_1;
}

