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
extern int fn_82FA4F18();
extern int fn_82FA5190();
extern int fn_82FA5358();
extern int fn_82FA57F0();


void fn_82FF90A8(int param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = fn_82FA4F18(*(undefined4 *)(param_1 + 0x18));
    if ((uVar1 & 8) == 0) {
      fn_82FA5190(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10));
    }
    else {
      fn_82FA5358();
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(char *)(param_1 + 0x1c) != '\0') {
      fn_82FA57F0(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
  }
  return;
}

