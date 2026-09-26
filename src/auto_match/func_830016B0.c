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
extern int fn_83005EF8();
extern unsigned int lbl_8217BDC0;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_821AAD20;


undefined4 * fn_830016B0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_83005EF8();
  *param_1 = &lbl_8217BDC0;
  param_1[7] = &lbl_8217C940;
  param_1[0x12] = 0;
  uVar1 = lbl_821AAD20;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}

