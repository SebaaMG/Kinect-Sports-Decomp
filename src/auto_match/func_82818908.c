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


int fn_82818908(int param_1,ulonglong param_2)

{
  code *pcVar1;
  char cVar2;
  
  param_2 = param_2 & 0xffff;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x20);
  if (pcVar1 == (code *)0x0) {
    cVar2 = '\0';
    for (; *(char *)(param_1 + 0x75) = cVar2, 1 < param_2; param_2 = param_2 >> 1) {
      cVar2 = *(char *)(param_1 + 0x75) + '\x01';
    }
  }
  else {
    (*pcVar1)();
  }
  return 1 << (*(byte *)(param_1 + 0x75) & 0x3f);
}

