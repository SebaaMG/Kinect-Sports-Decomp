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
extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_821BEBB8;
extern unsigned int lbl_821BEFDC;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_30;


undefined4 * fn_824994F8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined2 uStack_30;
  
  *param_1 = &lbl_821BEFDC;
  param_1[5] = 0;
  param_1[4] = &lbl_821BEBB8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  *(undefined1 *)((int)param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x24) = uStack_30;
  param_1[0x26] = 0;
  uVar1 = fn_8248F890(0xa0);
  param_1[0x25] = uVar1;
  *(undefined4 *)uVar1 = uVar1;
  *(undefined4 *)(param_1[0x25] + 4) = param_1[0x25];
  uVar1 = lbl_821CA460;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = uVar1;
  fn_82497430(param_1 + 0x24,8);
  return param_1;
}

