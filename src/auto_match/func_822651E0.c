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
extern int fn_82265680();
extern int fn_82266D28();
extern int fn_82528BF8();
extern int fn_82528E38();
extern int fn_82F68CC0();
extern unsigned int lbl_821CC160;


int fn_822651E0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  
  fn_82F68CC0(param_1,param_2,0xd0);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  uVar1 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x100) = param_5;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0x510) = 2;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x51c) = 0;
  *(undefined4 *)(param_1 + 0x520) = param_3;
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  fn_82266D28(param_1 + 0x524,0);
  *(undefined4 *)(param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined4 *)(param_1 + 0x630) = 0;
  *(undefined4 *)(param_1 + 0x53c) = 1;
  *(undefined4 *)(param_1 + 0x62c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *param_4;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd4);
  fn_82265680(param_1);
  uVar1 = fn_82528BF8(param_6,param_1,param_1 + 0x5a4,0x40,0,1);
  *(undefined4 *)(param_1 + 0x624) = uVar1;
  fn_82528E38(param_1 + 0x628,0x40017,0xffffffff82266cc0,param_1);
  return param_1;
}

