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


uint fn_82802448(int param_1,ulonglong param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2 & 0x1f;
  puVar1 = (uint *)(((uint)((param_2 & 0xffffffff) >> 3) & 0x1ffffffc) + param_1);
  return ((puVar1[1] << 1) << (0x1f - uVar2 & 0x3f) | *puVar1 >> uVar2) &
         (1 << (param_3 & 0x3f)) - 1U;
}

