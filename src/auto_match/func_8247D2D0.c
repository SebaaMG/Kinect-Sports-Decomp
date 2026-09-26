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
extern unsigned int *auStack_70;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82F68CC0();
extern unsigned int lbl_821BD574;
extern unsigned int lbl_821CC160;


undefined4 *
fn_8247D2D0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [112];
  
  param_1[1] = 3;
  uVar1 = lbl_821CC160;
  *param_1 = &lbl_821BD574;
  param_1[3] = uVar1;
  param_1[2] = 0;
  uVar2 = fn_822C5B18(auStack_70,param_5);
  fn_82F68CC0(param_1 + 4,param_2,0x44);
  param_1[0x17] = param_3;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  fn_822C5B18(param_1 + 0x18,uVar2);
  param_1[0x1e] = param_6;
  param_1[0x1f] = param_4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  fn_82359C18(uVar2);
  param_1[0x24] = param_3;
  fn_82359C18(param_5);
  return param_1;
}

