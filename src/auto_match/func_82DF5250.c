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
extern int fn_830B3138();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82144D04;
extern unsigned int lbl_82186E6C;


undefined4 * fn_82DF5250(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fn_830B3138();
  uVar3 = lbl_82186E6C;
  uVar2 = lbl_8200DFF4;
  uVar1 = lbl_82002AE0;
  *param_1 = &lbl_82144D04;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar3;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((int)param_1 + 0x5d) = 1;
  return param_1;
}

