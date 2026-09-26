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
extern int fn_826829A0();
extern int fn_8268C210();
extern int fn_826C09B0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8200F198;
extern unsigned int lbl_8200F1EC;


undefined4 * fn_827137E8(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  fn_826C09B0();
  uVar1 = lbl_82005710;
  *param_1 = &lbl_8200F1EC;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  param_1[4] = &lbl_8200F198;
  fn_8268C210(param_1 + 0xe);
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

