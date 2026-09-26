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
extern int fn_822AF138();
extern int fn_82373530();
extern int fn_8288B760();


undefined8 fn_822B0720(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_2 + 0x1c0) == 0) ||
      (*(int *)(param_2 + 0x2c) != *(int *)(*(int *)(param_2 + 0x1c0) + 0x1e4))) ||
     (iVar1 = fn_82373530(), *(int *)(param_2 + 0x28) != iVar1)) {
    if (*(int *)(param_2 + 0x168) == 0) {
      uVar2 = *(uint *)(param_2 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 == 0) {
      return 1;
    }
    uVar3 = 3;
  }
  else {
    if (*(int *)(param_2 + 0x168) == 0) {
      uVar2 = *(uint *)(param_2 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 == 0) {
      return 1;
    }
    uVar3 = 2;
  }
  fn_822AF138(*(undefined4 *)(param_2 + 0x110),uVar3);
  return 1;
}

