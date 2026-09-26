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
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_827150C8();
extern unsigned int lbl_8200F484;
extern unsigned int lbl_8200F488;
extern unsigned int lbl_8200F588;


undefined4 * fn_827151A8(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  
  fn_827150C8();
  *param_1 = &lbl_8200F488;
  param_1[4] = &lbl_8200F588;
  param_1[0xd] = &lbl_8200F484;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xd,param_1,param_2,0xffffffff8200f45c,auStack_20);
  return param_1;
}

