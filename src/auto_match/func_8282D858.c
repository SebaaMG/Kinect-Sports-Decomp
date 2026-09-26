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
extern int fn_828252D0();
extern int fn_8282ABD0();
extern int fn_8282B1C8();
extern int fn_8282B788();
extern int fn_828319F8();
extern int fn_82832C80();


void fn_8282D858(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 1000) = 1;
  if (*(char *)(param_1 + 0x3ef) == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    fn_8282B788(param_1);
    fn_82832C80(param_1);
  }
  fn_8282B1C8(param_1);
  fn_8282ABD0(param_1);
  fn_828319F8(param_1,0);
  lVar1 = ((ulonglong)*(uint *)(param_1 + 0x24) * 0x42 + (ulonglong)*(uint *)(param_1 + 0x3c) * 5 +
           (ulonglong)*(uint *)(param_1 + 0x2c) * 5 +
           ((ulonglong)*(uint *)(param_1 + 0x44) + (ulonglong)*(uint *)(param_1 + 0x34)) * 3 +
           (ulonglong)*(uint *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x40) +
           (ulonglong)*(uint *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x30) + 0x44 &
          0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x28) * 0xe +
          (ulonglong)*(byte *)(param_1 + 0x51) * 0x21;
  if (*(char *)(param_1 + 0x3f0) != '\0') {
    lVar1 = (((ulonglong)*(uint *)(param_1 + 0x3e0) & 0x7fffffff) * 2 +
             (ulonglong)*(byte *)(param_1 + 0x51) & 0x1fffffff) * 8 + lVar1;
  }
  uVar2 = fn_828252D0(lVar1);
  *(undefined4 *)(param_1 + 0x2e4) = uVar2;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  return;
}

