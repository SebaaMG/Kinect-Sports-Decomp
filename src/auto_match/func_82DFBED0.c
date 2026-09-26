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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82146CD4;
extern unsigned int lbl_821AAD20;


void fn_82DFBED0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = lbl_821AAD20;
  *(undefined2 *)((int)param_1 + 6) = 1;
  uVar1 = lbl_82002AE0;
  *param_1 = &lbl_82146CD4;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return;
}

