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
extern int fn_82ABDD90();


bool fn_82B176C0(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if (4 < uVar2) {
    if (uVar2 < 9) {
      return true;
    }
    if (0x18 < uVar2) {
      if (uVar2 < 0x1d) {
        return true;
      }
      if (uVar2 == 0x7c) {
        uVar2 = *(uint *)(param_2 + 8);
        iVar1 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
        return (*(uint *)(iVar1 + param_2 + -8) & 0x60000000) == 0x20000000;
      }
    }
  }
  return false;
}

