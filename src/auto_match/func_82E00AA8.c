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
extern unsigned int lbl_82057518;
extern unsigned int lbl_8214161C;
extern unsigned int lbl_82145C14;
extern unsigned int lbl_82145C24;
extern unsigned int lbl_821475E4;


void fn_82E00AA8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &lbl_821475E4;
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  param_1[5] = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 1;
  param_1[9] = &lbl_8214161C;
  param_1[7] = &lbl_82145C24;
  uVar1 = lbl_82057518;
  param_1[9] = &lbl_82145C14;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 2;
  return;
}

