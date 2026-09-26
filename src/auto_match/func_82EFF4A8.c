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
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;
extern unsigned int lbl_8325F874;
extern unsigned int lbl_8325F878;
extern unsigned int lbl_8325F880;
extern unsigned int lbl_8325F884;
extern unsigned int lbl_8325F88C;


void fn_82EFF4A8(int param_1)

{
  if ((((*(int *)(param_1 + 0x1f28) != 0) || (*(int *)(param_1 + 0x1fa8) == 0)) ||
      (lbl_83248E44 != 0)) || (lbl_83248E48 != 0)) {
    *(undefined4 *)(param_1 + 0x1f24) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x1f18) <= *(int *)(param_1 + 0x1f10)) {
    *(undefined4 *)(param_1 + 0x1f24) = 0;
    lbl_8325F884 = lbl_8325F88C;
    return;
  }
  *(undefined4 *)(param_1 + 0x1f24) = 1;
  if (*(int *)(param_1 + 0x1f1c) <= *(int *)(param_1 + 0x1f10)) {
    lbl_8325F88C = lbl_8325F880;
    lbl_8325F884 = lbl_8325F880;
    return;
  }
  if (*(int *)(param_1 + 0x2a4) < 0xb) {
    lbl_8325F88C = lbl_8325F880;
    lbl_8325F884 = lbl_8325F880;
    return;
  }
  if (0xe < *(int *)(param_1 + 0x2a4)) {
    lbl_8325F88C = lbl_8325F874;
    lbl_8325F884 = lbl_8325F874;
    return;
  }
  lbl_8325F88C = lbl_8325F878;
  lbl_8325F884 = lbl_8325F878;
  return;
}

