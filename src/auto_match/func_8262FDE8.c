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
extern int fn_82645110();


void fn_8262FDE8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar1 + 4) = 0xe00;
  *(undefined4 *)(uVar1 + 8) = 1;
  *(undefined4 *)(uVar1 + 0xc) = 0xe40;
  *(undefined4 *)(uVar1 + 0x10) = 1;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar1 + 0x10);
  return;
}

