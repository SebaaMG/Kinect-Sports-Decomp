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
extern int fn_8265C940();


int fn_82ABE8C8(int param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = fn_8265C940(param_2 + 0xc,0x618d0000);
  *(int *)(uVar1 + 8) = (int)(param_2 + 0xc);
  puVar2 = (undefined4 *)(uVar1 & 0xfffffffe);
  *puVar2 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 **)(*(uint *)(param_1 + 0x98) & 0xfffffffe) = puVar2;
  puVar2[1] = param_1 + 0x98U | 1;
  *(undefined4 **)(param_1 + 0x98) = puVar2 + 1;
  return uVar1 + 0xc;
}

