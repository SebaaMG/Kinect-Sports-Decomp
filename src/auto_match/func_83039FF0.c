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


undefined8 fn_83039FF0(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(byte *)(param_1 + 0x4d) < 3) || (cVar1 = *(char *)(param_1 + 0x4c), cVar1 == '\b')) ||
      (cVar1 == '\t')) || ((cVar1 == '\n' || (uVar2 = 1, cVar1 == '\v')))) {
    uVar2 = 0;
  }
  return uVar2;
}

