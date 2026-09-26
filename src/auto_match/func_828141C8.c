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
extern int fn_82813538();
extern int fn_82813A10();
extern int fn_82813FD0();
extern unsigned int lbl_8201E080;
extern unsigned int lbl_8320A3FC;
extern unsigned int lbl_8320A420;


undefined4 * fn_828141C8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puStack_20;
  undefined4 *puStack_1c;
  
  *param_1 = &lbl_8201E080;
  fn_82813FD0(param_1 + 2,0);
  fn_82813FD0(param_1 + 0x12,0);
  fn_82813FD0(param_1 + 0x22,0);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  uVar1 = KeTlsAlloc();
  param_1[0x36] = uVar1;
  fn_82813A10(0xffffffff8320a3fc);
  puStack_20 = &lbl_8320A3FC;
  puStack_1c = &lbl_8320A420;
  param_1[0x32] = lbl_8320A420;
  lbl_8320A420 = param_1;
  fn_82813538(&puStack_20);
  return param_1;
}

