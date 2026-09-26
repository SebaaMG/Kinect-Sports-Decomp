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


undefined8 fn_82ABE190(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  if ((*param_1 & 0xe000000) != 0) {
    uVar2 = *(uint *)(param_1[3] + 8) >> 7 & 0x7f;
    if ((uVar2 == 0x7d) || (bVar1 = false, uVar2 == 0x7c)) {
      bVar1 = true;
    }
    if ((!bVar1) && ((*(uint *)(param_1[3] + 8) >> 5 & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}

