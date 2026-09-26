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
extern int fn_82954BD0();
extern unsigned int lbl_82051CA8;
extern unsigned int lbl_8315BEA8;
extern unsigned int lbl_8315C0E8;


undefined4 * fn_829A6298(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  fn_82954BD0(param_1,param_3);
  param_1[0x57] = param_2;
  *param_1 = &lbl_82051CA8;
  param_1[0x3d] = &lbl_8315BEA8;
  param_1[0x3e] = &lbl_8315C0E8;
  return param_1;
}

