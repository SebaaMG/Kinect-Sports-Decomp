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
extern int fn_82FC8FD0();
extern int fn_82FC9D50();
extern int fn_82FCA2D8();


void fn_82FBCAE0(int param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  
  dVar3 = (double)*(float *)(*(int *)(param_1 + 4) + 0x18);
  if (dVar3 != (double)*(float *)(param_1 + 0x60)) {
    if (*(int *)(param_1 + 8) == 0) {
      fn_82FCA2D8(dVar3,*(undefined4 *)(param_1 + 0xc));
    }
    else {
      fn_82FC9D50();
    }
    *(float *)(param_1 + 0x60) = (float)dVar3;
  }
  dVar3 = (double)*(float *)(*(int *)(param_1 + 4) + 0x1c);
  if (dVar3 != (double)*(float *)(param_1 + 100)) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x104) != 0) {
      lVar2 = 0;
      do {
        fn_82FC8FD0(dVar3,(ulonglong)*(uint *)(param_1 + 0x10) + lVar2);
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar1 < *(uint *)(param_1 + 0x104));
    }
    *(float *)(param_1 + 100) = (float)dVar3;
  }
  (**(code **)(param_1 + 0x68))(param_1,param_2);
  return;
}

