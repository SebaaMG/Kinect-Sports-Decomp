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
extern int fn_8265CA20();
extern int fn_82F691F0();
extern unsigned int lbl_831751D0;


undefined8 fn_82BF72C8(int param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0)) && (param_2 != 0)) {
    if (*(int *)(param_1 + 8) != 0) {
      fn_8265CA20();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (param_3 == 0) {
      *(uint *)(param_1 + 0xc) = param_2;
      return 1;
    }
    uVar2 = param_2 << 2;
    if (param_2 <= uVar2) {
      uVar1 = (*(code *)lbl_831751D0)(uVar2);
      *(int *)(param_1 + 8) = (int)uVar1;
      if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar1,0,uVar2);
      }
    }
  }
  return 0;
}

