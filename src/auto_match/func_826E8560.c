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
extern int fn_826E7800();


byte fn_826E8560(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(byte *)(param_1 + 0x15) == 0) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7800(param_1,1);
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(undefined1 *)(param_1 + 0x15) = 7;
    bVar2 = bVar1 >> 7;
    *(byte *)(param_1 + 0x14) = bVar1 & 0x7f;
  }
  else {
    uVar3 = *(byte *)(param_1 + 0x15) + 0xff;
    *(char *)(param_1 + 0x15) = (char)uVar3;
    bVar2 = *(byte *)(param_1 + 0x14) >> (uVar3 & 0x3f);
    *(byte *)(param_1 + 0x14) = (char)(1 << (uVar3 & 0x3f)) - 1U & *(byte *)(param_1 + 0x14);
  }
  return bVar2;
}

