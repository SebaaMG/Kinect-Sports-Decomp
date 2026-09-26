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


ulonglong fn_82C4DE10(ulonglong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 1) & 7;
  if ((int)uVar1 == 0) {
    uVar1 = 8;
  }
  *param_2 = (int)uVar1;
  return *param_1 >> (0x40 - uVar1 & 0x7f) & 0xffffffff;
}

