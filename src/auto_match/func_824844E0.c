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
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225D168();
extern int fn_8251FA58();
extern int fn_82529320();


void fn_824844E0(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x18dc) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x18dc) = 0;
  }
  uVar1 = fn_8225C590();
  fn_8225D168(uVar1,*(undefined4 *)(param_1 + 0x18e0));
  if (*(int *)(param_1 + 0x18e4) != 0) {
    fn_82529320(*(int *)(param_1 + 0x18e4),0);
    *(undefined4 *)(param_1 + 0x18e4) = 0;
  }
  if (*(int *)(param_1 + 0x18f0) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x18f0) = 0;
  }
  if (*(int *)(param_1 + 0x18f4) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x18f4) = 0;
  }
  if (*(int *)(param_1 + 0x18f8) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x18f8) = 0;
  }
  if (*(int *)(param_1 + 0x18fc) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x18fc) = 0;
  }
  if (*(int *)(param_1 + 0x1900) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x1900) = 0;
  }
  if (*(int *)(param_1 + 0x1904) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x1904) = 0;
  }
  if (*(int *)(param_1 + 0x1908) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x1908) = 0;
  }
  if (*(int *)(param_1 + 0x190c) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x190c) = 0;
  }
  lVar2 = 3;
  param_1 = param_1 + 0x1cb8;
  do {
    param_1 = param_1 + -0x420;
    fn_82230300(param_1,1,0);
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  return;
}

