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


uint fn_82AC8750(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = uVar1 >> 0x19 & 7;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      uVar4 = uVar4 + 1;
      uVar5 = 1 << ((uVar1 >> 5 & 0xff) >> (uVar3 & 0x3f) & 3) | uVar5;
      uVar3 = uVar3 + 2;
    } while (uVar4 < uVar2);
  }
  return uVar1 >> 0xd & 0xff0 | uVar5 & 0xf;
}

