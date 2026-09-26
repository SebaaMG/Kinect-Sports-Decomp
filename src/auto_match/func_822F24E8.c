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
extern int fn_822C16B8();
extern int fn_823B3908();
extern int fn_8265C9E0();
extern int fn_8265CA20();


void fn_822F24E8(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1e4);
  uVar2 = fn_8265C9E0(0x30);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_823B3908(uVar2,uVar1);
  }
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
  if ((uVar2 & 0xffffffff) != uVar3) {
    if (uVar3 != 0) {
      fn_822C16B8(uVar3 + 8);
      fn_8265CA20(uVar3);
    }
    *(int *)(param_1 + 0x24) = (int)uVar2;
  }
  return;
}

