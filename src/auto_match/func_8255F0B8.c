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
extern int fn_827F2F90();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821C5284;
extern unsigned int lbl_821CC160;


undefined4 * fn_8255F0B8(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  fn_827F2F90(param_1,param_2,0,0,0,0);
  param_1[0x5f] = param_3;
  uVar2 = lbl_821CC160;
  uVar1 = lbl_821917B4;
  param_1[0x44] = 0;
  param_1[0x61] = uVar1;
  *param_1 = &lbl_821C5284;
  param_1[0x62] = uVar2;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 1;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  return param_1;
}

