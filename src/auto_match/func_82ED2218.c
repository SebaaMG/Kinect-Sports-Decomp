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


longlong fn_82ED2218(int param_1)

{
  ulonglong uVar1;
  
  if ((-1 < (int)*(uint *)(param_1 + 0x2c)) &&
     (((uVar1 = (ulonglong)*(uint *)(param_1 + 0x30), -1 < (int)*(uint *)(param_1 + 0x30) ||
       (uVar1 = ((ulonglong)*(uint *)(param_1 + 0x2c) - (ulonglong)*(uint *)(param_1 + 0x28)) + 1,
       -1 < (longlong)uVar1)) || (uVar1 = *(uint *)(param_1 + 0x1c) + uVar1, -1 < (int)uVar1)))) {
    return uVar1 * 0x402c + (ulonglong)*(uint *)(param_1 + 0x18);
  }
  return 0;
}

