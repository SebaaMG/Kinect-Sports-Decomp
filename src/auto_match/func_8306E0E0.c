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
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


void fn_8306E0E0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = lbl_82186E74;
  *(undefined4 *)(param_1 + 0x14ed0) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x14ed4) = 0;
  *(undefined4 *)(param_1 + 0x14ed8) = uVar1;
  *(undefined4 *)(param_1 + 0x14d68) = 0;
  *(undefined4 *)(param_1 + 0x14d6c) = 0;
  uVar1 = lbl_82002AE0;
  *(undefined4 *)(param_1 + 0x14d70) = 0;
  *(undefined4 *)(param_1 + 0x14d98) = *(undefined4 *)(param_1 + 0x14d48);
  *(undefined4 *)(param_1 + 0x14d74) = 0;
  *(undefined4 *)(param_1 + 0x14d9c) = *(undefined4 *)(param_1 + 0x14d4c);
  *(undefined4 *)(param_1 + 0x14d78) = 0;
  *(undefined4 *)(param_1 + 0x14da0) = *(undefined4 *)(param_1 + 0x14d50);
  *(undefined4 *)(param_1 + 0x14d7c) = 0;
  *(undefined4 *)(param_1 + 0x14da4) = *(undefined4 *)(param_1 + 0x14d50);
  *(undefined4 *)(param_1 + 0x14d80) = 0;
  *(undefined4 *)(param_1 + 0x14da8) = *(undefined4 *)(param_1 + 0x14d54);
  *(undefined4 *)(param_1 + 0x14d84) = 0;
  *(undefined4 *)(param_1 + 0x14dac) = *(undefined4 *)(param_1 + 0x14d54);
  *(undefined4 *)(param_1 + 0x14d88) = 0;
  *(undefined4 *)(param_1 + 0x14db0) = *(undefined4 *)(param_1 + 0x14d58);
  *(undefined4 *)(param_1 + 0x14d8c) = 0;
  *(undefined4 *)(param_1 + 0x14dbc) = uVar1;
  *(undefined4 *)(param_1 + 0x14d90) = 0;
  *(undefined4 *)(param_1 + 0x14dc0) = uVar1;
  *(undefined4 *)(param_1 + 0x14d94) = 0;
  *(undefined4 *)(param_1 + 0x14db8) = uVar1;
  *(undefined4 *)(param_1 + 0x14db4) = 0x1e;
  return;
}

