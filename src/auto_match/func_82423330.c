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
extern int fn_82424398();
extern int fn_82424630();
extern unsigned int lbl_821B86B0;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82423330(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar2 = 0;
  *param_1 = &lbl_821B86B0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = lbl_821CC160;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = uVar1;
  param_1[0xf] = *param_2;
  if (param_2[2] == 0) {
    fn_82424630(param_1,param_2 + 1);
  }
  else {
    fn_82424398(param_1,param_2 + 2);
  }
  param_1[0x10] = param_2[5];
  param_1[0x11] = param_2[6];
  param_1[0x12] = param_2[8];
  if ((param_2[4] == 0) || (uVar1 = 0, param_2[4] == 2)) {
    uVar1 = 1;
  }
  param_1[0x15] = uVar1;
  if ((param_2[4] == 1) || (param_2[4] == 2)) {
    uVar2 = 1;
  }
  param_1[0x16] = uVar2;
  param_1[0x13] = param_2[7];
  param_1[0x14] = param_2[8];
  return param_1;
}

