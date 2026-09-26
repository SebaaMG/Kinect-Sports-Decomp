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


void fn_82BD0910(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_1;
  uVar3 = 0;
  if (*puVar1 == 0) {
    return;
  }
  puVar2 = puVar1 + 1;
  do {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
  } while (uVar3 < *puVar1);
  return;
}

