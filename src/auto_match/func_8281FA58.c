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
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821B9BC8;


void fn_8281FA58(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  param_1[0x1f] = lbl_821AAD20;
  param_1[0x20] = uVar2;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  *param_1 = &lbl_821B9BC8;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x24) = 500000;
  param_1[0x26] = 2;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 2,0,0x70);
}

