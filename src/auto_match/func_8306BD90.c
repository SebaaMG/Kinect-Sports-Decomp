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


longlong fn_8306BD90(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlEnterCriticalSection(0xffffffff83265098);
  }
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 * 0x41c64e6d + 0x3039;
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlLeaveCriticalSection(0xffffffff83265098);
  }
  return (((ulonglong)uVar1 & 0xffff) * 0x4e6d + 0x3039 >> 0x10) +
         ((ulonglong)uVar1 & 0xffff) * 0x41c6 + (longlong)((int)uVar1 >> 0x10) * 0x41c64e6d;
}

