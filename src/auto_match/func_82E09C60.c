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


void fn_82E09C60(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((int)param_2 < 1) {
    return;
  }
  puVar2 = (undefined4 *)(param_1 + -0xc);
  do {
    puVar1 = puVar2 + 0xd;
    puVar2[0xe] = *puVar1;
    puVar2 = puVar2 + 0xc;
    *puVar2 = *puVar1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

