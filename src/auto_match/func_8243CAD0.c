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
extern int fn_82381C38();
extern int fn_82381D68();
extern int fn_8289D7E8();
extern unsigned int lbl_821B95C8;
extern unsigned int lbl_821B9610;
extern unsigned int lbl_821B96AC;


undefined4 * fn_8243CAD0(undefined4 *param_1,undefined8 param_2)

{
  fn_82381C38();
  *param_1 = &lbl_821B96AC;
  fn_82381D68(param_1 + 0x3c,param_2,1);
  fn_82381D68(param_1 + 0x8e,param_2,1);
  fn_82381D68(param_1 + 0xe0,param_2,1);
  fn_82381D68(param_1 + 0x132,param_2,1);
  fn_82381D68(param_1 + 0x184,param_2,1);
  fn_82381D68(param_1 + 0x1d6,param_2,1);
  fn_8289D7E8(param_1 + 0x228,4);
  param_1[0x228] = &lbl_821B95C8;
  fn_8289D7E8(param_1 + 0x23d,4);
  param_1[0x23d] = &lbl_821B9610;
  return param_1;
}

