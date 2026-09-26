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
extern int fn_82930378();
extern unsigned int lbl_82054188;


undefined4 *
fn_829B3208(undefined4 *param_1,undefined8 *param_2,int param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  
  fn_82930378(param_1,0x1b);
  *param_1 = &lbl_82054188;
  bVar1 = param_3 == 3;
  *(undefined8 *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 6) = param_2[1];
  *(undefined8 *)(param_1 + 8) = param_2[2];
  *(undefined8 *)(param_1 + 10) = param_2[3];
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[bVar1 + 0xd] = param_4;
  param_1[bVar1 + 0xf] = param_5;
  param_1[bVar1 + 0x11] = param_6;
  param_1[0x13] = param_7;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  return param_1;
}

