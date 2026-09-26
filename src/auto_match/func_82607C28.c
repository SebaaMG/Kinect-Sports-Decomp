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
extern int fn_8251E370();
extern int fn_82604E98();
extern unsigned int lbl_821914B0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CA924;


undefined4 * fn_82607C28(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_82604E98();
  *param_1 = &lbl_821CA924;
  fn_8251E370(param_1 + 0x28,0x560,1);
  fn_8251E370(param_1 + 0x98,0x80,0xc);
  fn_8251E370(param_1 + 0x9d,0x30,8);
  fn_8251E370(param_1 + 0xa2,0x30,0xc);
  fn_8251E370(param_1 + 0xa7,0x30,0xc);
  fn_8251E370(param_1 + 0xac,0x30,8);
  uVar1 = lbl_821914B0;
  param_1[0xb1] = lbl_82192480;
  param_1[0xb2] = uVar1;
  return param_1;
}

