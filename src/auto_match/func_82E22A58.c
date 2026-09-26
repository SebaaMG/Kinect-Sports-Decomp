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


ulonglong fn_82E22A58(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = ((ulonglong)uVar1 + (longlong)(int)(uVar1 / 0x1f31d) * -0x1f31d) * 0x41a7 +
          ((ulonglong)uVar1 / 0x1f31d) * -0xb14;
  if ((longlong)uVar2 < 1) {
    uVar2 = uVar2 - 0x80000001;
  }
  *(int *)(param_1 + 4) = (int)uVar2;
  uVar2 = uVar2 & 0xffffffff;
  return (uVar2 >> 0x18 ^ uVar2 >> 0x10 ^ uVar2 >> 8 ^ uVar2) & 0xff;
}

