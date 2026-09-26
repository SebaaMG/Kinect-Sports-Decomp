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


undefined8 fn_82ABDA60(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
  if (((uVar1 == 0x1e) || (uVar1 == 0x37)) || (uVar2 = 0, uVar1 == 0x38)) {
    uVar2 = 1;
  }
  return uVar2;
}

