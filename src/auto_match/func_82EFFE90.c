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


void fn_82EFFE90(int param_1)

{
  int iVar1;
  
  if ((((lbl_83248E44 != 0) || (lbl_83248E48 != 0)) || (*(int *)(param_1 + 0x1f28) != 0)) ||
     (*(int *)(param_1 + 0x1fa8) == 0)) {
    *(undefined4 *)(param_1 + 0x1f24) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1ee0);
  *(undefined4 *)(param_1 + 0x1f24) = 1;
  if (0x59 < iVar1) {
    *(undefined4 *)(param_1 + 0x1f24) = 0;
    lbl_8325F884 = lbl_8325F88C;
    return;
  }
  if (0x3b < iVar1) {
    lbl_8325F88C = lbl_8325F880;
    lbl_8325F884 = lbl_8325F880;
    return;
  }
  if (0x1d < iVar1) {
    lbl_8325F88C = lbl_8325F878;
    lbl_8325F884 = lbl_8325F878;
    return;
  }
  lbl_8325F88C = lbl_8325F874;
  lbl_8325F884 = lbl_8325F874;
  return;
}

