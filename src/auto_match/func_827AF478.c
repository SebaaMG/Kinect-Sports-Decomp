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


void fn_827AF478(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if ((int)param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  do {
    if (puVar1 != (undefined4 *)0x1c) {
      puVar1[-6] = 0;
      puVar1[-4] = 0;
      puVar1[-7] = 0xffffffff;
      puVar1[-5] = 0xffffffff;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[-1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
    }
    puVar1 = puVar1 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

