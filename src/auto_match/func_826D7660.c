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


uint fn_826D7660(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(uint *)(iVar1 + 0x28) ^ *(uint *)(iVar1 + 0x24) ^ *(uint *)(iVar1 + 0x20) ^
          *(uint *)(iVar1 + 0x1c) ^ *(uint *)(iVar1 + 0x18) ^ *(uint *)(iVar1 + 0x14) ^
          *(uint *)(iVar1 + 0x10) ^ *(uint *)(iVar1 + 0xc) ^ *(uint *)(iVar1 + 8) ^
          *(uint *)(param_2 + 8);
  return uVar2 >> 7 ^ uVar2;
}

