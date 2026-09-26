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
extern unsigned int lbl_82022FC8;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_821422F4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82DB4590(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = lbl_82022FC8;
  *(undefined2 *)((int)param_1 + 6) = 1;
  uVar2 = lbl_820288C0;
  *param_1 = &lbl_821422F4;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return;
}

