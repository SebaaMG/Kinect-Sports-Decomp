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


void fn_82A3B8B8(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    cVar2 = '\0';
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = (int)uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        cVar2 = cVar2 + '\x01';
      }
    }
    *(char *)(param_1 + 0x872 + uVar3) = cVar2;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x100);
  return;
}

