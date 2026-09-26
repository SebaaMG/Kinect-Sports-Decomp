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
extern int fn_8265C940();


uint fn_829BAA90(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = fn_8265C940(param_2 + 0x10,0x24810000);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = iVar2 + 0x10U & 0xfffffff0;
  *(char *)(uVar1 - 1) = (char)uVar1 - (char)iVar2;
  return uVar1;
}

