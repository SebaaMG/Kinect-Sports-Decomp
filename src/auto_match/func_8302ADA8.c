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
extern int fn_83008328();
extern unsigned int lbl_8217C7B0;
extern unsigned int lbl_821AAD20;


undefined4 * fn_8302ADA8(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  fn_83008328();
  *param_1 = &lbl_8217C7B0;
  *(undefined2 *)(param_1 + 8) = 0;
  uVar1 = lbl_821AAD20;
  param_1[4] = lbl_821AAD20;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[9] = 0;
  param_1[0xb] = param_4;
  param_1[10] = (param_3 & 1) << 0x1e | param_1[10] & 0x3fffffff;
  return param_1;
}

