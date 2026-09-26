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
extern int fn_82E6E6F0();
extern unsigned int lbl_8215ED00;


undefined4 *
fn_82E6EC58(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  param_1[1] = 1;
  *param_1 = &lbl_8215ED00;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 1000;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  uVar1 = fn_82E6E6F0();
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  return param_1;
}

