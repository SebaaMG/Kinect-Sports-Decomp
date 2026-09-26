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
extern int fn_827597E0();
extern int fn_827A8B38();
extern unsigned int lbl_821AAD20;


undefined4 * fn_827A9B80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_827A8B38(param_1 + 5);
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 0x10;
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  *(undefined1 *)((int)param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x8e) = 0x10;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  *(undefined1 *)((int)param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((int)param_1 + 0x8d) = 0;
  *(undefined1 *)((int)param_1 + 0x8f) = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((int)param_1 + 0x96) = 0;
  fn_827597E0(param_1 + 0x26);
  param_1[0x31] = 0;
  param_1[0x27] = 0xffffffff;
  uVar1 = lbl_821AAD20;
  param_1[6] = lbl_821AAD20;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x32] = 0xffffffff;
  return param_1;
}

