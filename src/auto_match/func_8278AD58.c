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
extern int fn_826861D8();


ulonglong fn_8278AD58(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = fn_826861D8(*(undefined4 *)(param_2 + 0x14));
  return uVar4 ^ (uVar3 ^ uVar2 ^ uVar1) >> 7 ^ (ulonglong)uVar3 ^ (ulonglong)uVar2 ^
         (ulonglong)uVar1;
}

