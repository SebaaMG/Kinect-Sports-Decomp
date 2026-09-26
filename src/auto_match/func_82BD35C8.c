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
extern int fn_82AB15D0();


undefined8 fn_82BD35C8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_1 & 0x400000) != 0) {
    uVar2 = 0;
    do {
      if (uVar2 == 0) {
        uVar1 = param_1[1] & 3;
LAB_82bd3660:
        if ((uVar1 == 2) || (uVar1 == 3)) {
          return 1;
        }
      }
      else {
        if (uVar2 == 1) {
          uVar1 = param_1[1] >> 2 & 3;
          goto LAB_82bd3660;
        }
        if (uVar2 < 3) {
          uVar1 = param_1[1] >> 4 & 3;
          goto LAB_82bd3660;
        }
        if (uVar2 == 3) {
          uVar1 = param_1[1] >> 6 & 3;
          goto LAB_82bd3660;
        }
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e8618,0xa6);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
  }
  return 0;
}

