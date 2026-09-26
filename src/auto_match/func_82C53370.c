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
extern int fn_82C7A260();
extern int fn_82C7A648();
extern int fn_82C7AA08();
extern int fn_82C7AD70();
extern int fn_82C7AF68();
extern int fn_82C7B198();
extern int fn_82C7B3C0();
extern int fn_82C7B620();
extern int fn_82CAD6A8();
extern int fn_82CADA48();
extern int fn_82CADE98();
extern unsigned int lbl_82CAE220;
extern unsigned int lbl_82CAE568;


void fn_82C53370(int param_1)

{
  *(code **)(param_1 + 0xc7c) = fn_82C7A260;
  *(code **)(param_1 + 0xc80) = fn_82C7AA08;
  *(code **)(param_1 + 0xc90) = fn_82C7A648;
  *(code **)(param_1 + 0xc84) = fn_82C7AD70;
  *(code **)(param_1 + 0xc88) = fn_82C7AF68;
  *(code **)(param_1 + 0xc8c) = fn_82C7B620;
  if (*(int *)(param_1 + 0xf8c) != 0) {
    *(code **)(param_1 + 0xc80) = fn_82C7A648;
    *(code **)(param_1 + 0xc84) = fn_82C7B198;
    *(code **)(param_1 + 0xc88) = fn_82C7B3C0;
  }
  if (*(int *)(param_1 + 0x700) != 0) {
    *(code **)(param_1 + 0xc7c) = fn_82CADA48;
    *(code **)(param_1 + 0xc80) = fn_82CAD6A8;
    *(code **)(param_1 + 0xc84) = fn_82CADE98;
    *(undefined **)(param_1 + 0xc88) = &lbl_82CAE220;
    *(undefined **)(param_1 + 0xc8c) = &lbl_82CAE568;
    *(undefined4 *)(param_1 + 0x708) = 1;
    *(code **)(param_1 + 0xc90) = fn_82CAD6A8;
  }
  if (*(int *)(param_1 + 0x708) != 0) {
    *(undefined4 *)(param_1 + 0x780) = 0;
    *(undefined4 *)(param_1 + 0x784) = 8;
    *(undefined4 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x78c) = 3;
    return;
  }
  *(undefined4 *)(param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0x780) = 8;
  *(undefined4 *)(param_1 + 0x788) = 3;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  return;
}

