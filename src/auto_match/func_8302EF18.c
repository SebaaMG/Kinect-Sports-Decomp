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
extern int fn_8300C9E8();
extern int fn_83033978();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CAA8;
extern unsigned int lbl_8217CAAC;
extern unsigned int lbl_8217CAB8;
extern unsigned int lbl_821968A4;


undefined4 * fn_8302EF18(undefined4 *param_1)

{
  fn_83033978();
  fn_8300C9E8(param_1 + 0x2a);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &lbl_821968A4;
  param_1[7] = &lbl_8217C940;
  *param_1 = &lbl_8217CAB8;
  param_1[0x2a] = &lbl_8217CAAC;
  param_1[0x2b] = &lbl_8217CAA8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0xffffffff;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0xffffffff;
  return param_1;
}

