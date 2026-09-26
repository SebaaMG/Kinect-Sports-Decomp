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
extern int fn_8268F6B8();
extern unsigned int lbl_820054D0;
extern unsigned int lbl_820054E8;


undefined4 * fn_8267B430(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *param_1 = &lbl_820054E8;
  param_1[1] = 0;
  param_1[2] = &lbl_820054D0;
  if (param_1 + 4 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_8268F6B8(param_1 + 4,param_1 + 2,param_3,param_2,1);
  }
  param_1[3] = uVar1;
  return param_1;
}

