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


longlong fn_82E76C40(int param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = *(char *)(param_1 + 0x151);
  lVar2 = 0;
  if (cVar1 == '\x01') {
    lVar2 = 1;
  }
  else if (cVar1 == '\x02') {
    lVar2 = 2;
  }
  else if (cVar1 == '\x03') {
    lVar2 = 4;
  }
  cVar1 = *(char *)(param_1 + 0x153);
  lVar3 = 0;
  if (cVar1 == '\x01') {
    lVar3 = 1;
  }
  else if (cVar1 == '\x02') {
    lVar3 = 2;
  }
  else if (cVar1 == '\x03') {
    lVar3 = 4;
  }
  cVar1 = *(char *)(param_1 + 0x152);
  lVar4 = 0;
  if (cVar1 == '\x01') {
    lVar4 = 1;
  }
  else if (cVar1 == '\x02') {
    lVar4 = 2;
  }
  else if (cVar1 == '\x03') {
    lVar4 = 4;
  }
  lVar4 = lVar4 + lVar3 + lVar2;
  if (*(int *)(param_1 + 0x154) == 0) {
    return lVar4 + 8;
  }
  return lVar4 + 9;
}

