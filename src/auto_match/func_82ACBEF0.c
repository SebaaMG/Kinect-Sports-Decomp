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
extern int fn_82ABE250();


int fn_82ACBEF0(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = fn_82ABE250(param_1,0x20,0x36);
  puVar2 = (uint *)fn_82ABE250(param_1,8,0x24);
  *(uint **)(iVar1 + 4) = puVar2;
  puVar2[1] = (uint)puVar2 | 1;
  *puVar2 = (uint)(puVar2 + 1) | 1;
  return iVar1;
}

