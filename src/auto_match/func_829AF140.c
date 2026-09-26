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


void fn_829AF140(int param_1,ushort param_2,int param_3)

{
  uint uVar1;
  
  *(ushort *)(param_1 + 0x61e) = param_2 & 0xff;
  *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) | 0x8000;
  if (param_3 == 1) {
    uVar1 = *(uint *)(param_1 + 0x55c) | 0x80;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x55c) & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x55c) = uVar1;
  if (*(char *)(param_1 + 0x616) == '\x02') {
    *(undefined1 *)(param_1 + 0x61b) = 4;
  }
  if (*(char *)(param_1 + 0x616) != '\0') {
    return;
  }
  if (*(byte *)(param_1 + 0x617) < 8) {
    return;
  }
  *(undefined1 *)(param_1 + 0x61b) = 2;
  return;
}

