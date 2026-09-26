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
extern int fn_828B5608();
extern int fn_828BDDA0();
extern unsigned int lbl_82023ABC;
extern unsigned int lbl_82023AC0;
extern unsigned int lbl_82023C3C;
extern unsigned int lbl_82197140;


undefined4 * fn_828BF150(undefined4 *param_1)

{
  fn_828BDDA0();
  param_1[0x20] = 0;
  *param_1 = &lbl_82023AC0;
  param_1[0x14] = &lbl_82023ABC;
  param_1[0x21] = 0;
  param_1[0x22] = &lbl_82197140;
  param_1[0x23] = 9;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = &lbl_82023C3C;
  fn_828B5608(param_1 + 0x28);
  param_1[0x2a] = 2;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0xffffffff;
  return param_1;
}

