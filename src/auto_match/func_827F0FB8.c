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
extern int fn_827F0978();


void fn_827F0FB8(int param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong uVar4;
  
  uVar4 = fn_827F0978();
  uVar1 = (uint)((uVar4 & 0xffffffff) >> 3) & 0x1ffe;
  uVar3 = ~(ushort)(1 << ((uint)uVar4 & 0xf));
  uVar2 = (uint)((uVar4 & 0xffffffff) >> 3) & 0x1ffe;
  *(ushort *)(uVar1 + param_1 + 0xec) = uVar3 & *(ushort *)(uVar1 + param_1 + 0xec);
  *(ushort *)(uVar2 + param_1 + 0xee) = *(ushort *)(uVar2 + param_1 + 0xee) & uVar3;
  return;
}

