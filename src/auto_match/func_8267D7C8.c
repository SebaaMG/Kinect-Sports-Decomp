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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8267EC58();
extern U64 storeWordConditionalIndexed();


void fn_8267D7C8(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  char in_RESERVE;
  byte in_cr0;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (ZEXT48(puVar1) != 0) {
    sync(1);
    do {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar1 + 1,0,ZEXT48(puVar1));
        *puVar1 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (*param_2 != 0) {
      fn_8267EC58();
    }
    *param_2 = (int)puVar1;
  }
  return;
}

