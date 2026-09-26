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
extern int fn_828767B8();
extern unsigned int lbl_82022734;
extern unsigned int lbl_8321188C;


undefined4 *
fn_82877590(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &lbl_82022734;
  fn_828767B8(param_1 + 2);
  uVar1 = *param_2;
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[7] = uVar1;
  lbl_8321188C = lbl_8321188C + 1;
  param_1[8] = lbl_8321188C;
  return param_1;
}

