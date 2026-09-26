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
extern int fn_82ABE940();


void fn_82AF87E0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_2 < 0xb) {
    param_2 = 10;
  }
  uVar2 = fn_82ABE940(param_1,(param_2 + 2) * 8);
  *(uint *)(uVar2 + 0xc) = param_2;
  puVar1 = (uint *)(uVar2 & 0xfffffffe);
  *(undefined4 *)(uVar2 + 8) = 0;
  *puVar1 = *param_1;
  *(uint **)(*param_1 & 0xfffffffe) = puVar1;
  puVar1[1] = (uint)param_1 | 1;
  *param_1 = (uint)(puVar1 + 1);
  return;
}

