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
extern int fn_8265CA20();
extern int fn_8284A910();
extern unsigned int uStack00000014;


void fn_8284B4A8(uint param_1,undefined4 *param_2)

{
  uint uStack00000014;
  undefined4 *puStack0000001c;
  undefined4 *puStack_10;
  
  uStack00000014 = param_1;
  puStack_10 = param_2;
  while (*(char *)((int)puStack_10 + 0x2d) == '\0') {
    puStack0000001c = puStack_10;
    fn_8284B4A8(uStack00000014,puStack_10[2]);
    puStack_10 = (undefined4 *)*puStack_10;
    fn_8284A910((ulonglong)uStack00000014 + 0xd,puStack0000001c + 3);
    fn_8265CA20(puStack0000001c);
  }
  return;
}

