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
extern int fn_82DF0A60();
extern unsigned int lbl_82145980;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82DF47E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  fn_82DF0A60();
  uVar1 = lbl_821AAD20;
  param_1[9] = lbl_82186E74;
  param_1[8] = 5;
  param_1[10] = uVar1;
  *param_1 = &lbl_82145980;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
  return param_1;
}

