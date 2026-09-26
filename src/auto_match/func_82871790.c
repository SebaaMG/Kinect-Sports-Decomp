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
extern int fn_8287AC68();
extern unsigned int lbl_82021F9C;


undefined4 * fn_82871790(double param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *in_r7;
  
  fn_8287AC68();
  *param_2 = &lbl_82021F9C;
  param_2[0x3d] = *in_r7;
  param_2[0x3e] = in_r7[1];
  uVar1 = in_r7[2];
  param_2[0x40] = (float)param_1;
  param_2[0x3f] = uVar1;
  return param_2;
}

