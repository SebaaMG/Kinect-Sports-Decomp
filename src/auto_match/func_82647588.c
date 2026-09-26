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


void fn_82647588(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar1 + 4) = 0xc0004600;
  puVar2 = (undefined4 *)(uVar1 + 8);
  *puVar2 = 0xf;
  if (param_2 == 1) {
    *(undefined4 *)(uVar1 + 0xc) = 0x5c8;
    puVar2 = (undefined4 *)(uVar1 + 0x10);
    *puVar2 = 0x20000;
    *(byte *)(param_1 + 0x2abf) = *(byte *)(param_1 + 0x2abf) & 0xfc;
  }
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) & 0xfb;
  return;
}

