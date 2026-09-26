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
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196B30;
extern unsigned int lbl_82197100;
extern unsigned int lbl_821B3A70;


undefined4 * fn_82381D68(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[2] = param_1 + 1;
  param_1[1] = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[10] = 0;
  *param_1 = &lbl_821B3A70;
  fn_8289D6D0(param_1 + 0xc,4);
  param_1[0xc] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x21,5);
  param_1[0x21] = &lbl_82196B30;
  fn_8289D6D0(param_1 + 0x36,4);
  param_1[0x36] = &lbl_82197100;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return param_1;
}

