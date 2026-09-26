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
extern int fn_8255DEA0();


uint fn_822CBDA0(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    return param_2;
  }
  if (*(int *)(param_2 + 0x8c0) != 0) {
    if (*(int *)((*(int *)(*(int *)(param_2 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_2 + 0x8c0))
        != 0) {
      uVar2 = *(uint *)(param_1 + 0x44);
      uVar4 = 4;
      if (uVar2 == 0) {
        uVar4 = 4;
      }
      else if (uVar2 == 1) {
        uVar4 = 0;
      }
      else if (uVar2 < 3) {
        uVar4 = 1;
      }
      else if (uVar2 == 3) {
        uVar4 = 0xd;
      }
      else if (uVar2 < 5) {
        uVar4 = 0xc;
      }
      else if (uVar2 == 5) {
        uVar4 = 0xf;
      }
      else if (uVar2 < 7) {
        uVar4 = 0xe;
      }
      if ((*(int *)(param_2 + 0x8c0) == 0) ||
         (piVar3 = *(int **)(*(int *)(param_2 + 0x8c0) + 0x1b4), piVar3 == (int *)0x0)) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        uVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,uVar4);
      }
      bVar1 = (int)uVar4 != -1;
      if (bVar1) {
        fn_8255DEA0(param_2,uVar4,param_1 + 0x50);
      }
      return (uint)bVar1;
    }
    return param_2;
  }
  return param_2;
}

