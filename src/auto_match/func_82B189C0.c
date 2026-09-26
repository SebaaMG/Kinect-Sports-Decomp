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
extern int fn_82ABE0E8();


undefined8 fn_82B189C0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x40);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      iVar2 = (*(uint *)(iVar1 + 0x20) & 0xfffffffe) - 0x28;
    }
    else {
      iVar2 = 0;
    }
    if ((*(uint *)(iVar2 + 8) & 0x3f80) == 0x2d00) {
      if ((((*(uint *)(iVar2 + 8) >> 0x1b & 1) != 0) ||
          (iVar2 = fn_82ABE0E8(iVar2,param_1), iVar2 == 3)) || (iVar2 == 4)) {
        return 1;
      }
      if (iVar2 == 8) {
        return 0;
      }
      if (iVar2 == 9) {
        return 0;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x40);
  } while( true );
}

