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
extern int fn_82F691F0();


void fn_82266CC0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *(uint *)(uVar1 + 0x62c);
  if (uVar2 == 0) {
    if ((*param_1 & 1) == 0) {
      return;
    }
  }
  else if (uVar2 == 1) {
    if ((*param_1 & 2) == 0) {
      return;
    }
  }
  else if (uVar2 < 3) {
    if ((*param_1 & 4) == 0) {
      return;
    }
  }
  else {
    if (uVar2 != 3) {
      return;
    }
    if ((*param_1 & 8) == 0) {
      return;
    }
  }
  if (*(int *)(uVar1 + 0x104) == 0x3e5) {
    *(undefined4 *)(uVar1 + 0x630) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1 + 0x104,0,0x1c);
}

