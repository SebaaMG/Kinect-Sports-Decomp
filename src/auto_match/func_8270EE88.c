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


longlong fn_8270EE88(int param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  if ((ulonglong)uVar2 < param_3 / 10) {
    uVar2 = (uint)(param_3 / 10);
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar1 = (ulonglong)(int)uVar2;
  trapDoubleWordImmediate(6,uVar1,0);
  return (((uVar1 - *(longlong *)(param_1 + 0x28)) + param_2) / uVar1) * uVar1;
}

