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
extern int fn_82ABE9F0();
extern int fn_82ACC398();


void fn_82ACC558(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  fn_82ACC398();
  if ((~(uint)*(uint **)(param_1 + 4) & 1) == 0) {
    uVar2 = 0x1f;
  }
  else {
    uVar2 = ((ulonglong)**(uint **)(param_1 + 4) & 0x7ffffff) * 0x20 - 1;
  }
  *(int *)(param_1 + 0xc) = (int)uVar2;
  uVar1 = fn_82ABE9F0(param_2,(uVar2 & 0x3fffffff) << 2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

