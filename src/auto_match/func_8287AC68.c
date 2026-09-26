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
extern int fn_82834F10();
extern int fn_82879A60();
extern unsigned int lbl_82022CAC;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;


undefined4 *
fn_8287AC68(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = &lbl_82022CAC;
  fn_82879A60(param_1 + 1);
  uVar1 = lbl_821AAD20;
  param_1[0x24] = *param_4;
  param_1[0x25] = param_4[1];
  param_1[0x26] = param_4[2];
  param_1[0x27] = *param_4;
  param_1[0x28] = param_4[1];
  param_1[0x29] = param_4[2];
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = lbl_821CA1A0;
  param_1[0x2f] = lbl_821CA1A4;
  param_1[0x30] = lbl_821CA1A8;
  param_1[0x31] = lbl_821CA1A0;
  param_1[0x32] = lbl_821CA1A4;
  param_1[0x33] = lbl_821CA1A8;
  param_1[0x34] = lbl_821CA1A0;
  param_1[0x35] = lbl_821CA1A4;
  param_1[0x36] = lbl_821CA1A8;
  param_1[0x37] = lbl_821CA1A0;
  param_1[0x38] = lbl_821CA1A4;
  uVar2 = lbl_821CA1A8;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = uVar1;
  param_1[0x39] = uVar2;
  param_1[0x3c] = uVar1;
  fn_82834F10(param_1 + 0x2a,4,param_3,0xffffffff821ca1a0,0xffffffff821ca1a0,
                    0xffffffff821ca1a0);
  return param_1;
}

