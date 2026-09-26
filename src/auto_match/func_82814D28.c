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
extern int fn_82820EF8();


void fn_82814D28(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x1c);
  fn_82820EF8(uVar2 + 0x1c,4);
  fn_82820EF8(uVar2 + 0x20,4);
  fn_82820EF8(uVar2 + 0x24,4);
  fn_82820EF8(uVar2 + 0x2c,4);
  fn_82820EF8(uVar2 + 0x30,4);
  fn_82820EF8(uVar2 + 0x3c,4);
  fn_82820EF8(uVar2 + 0x40,4);
  fn_82820EF8(uVar2 + 0x34,4);
  fn_82820EF8(uVar2 + 0x38,4);
  fn_82820EF8(uVar2 + 0x44,4);
  fn_82820EF8(uVar2 + 0x48,4);
  fn_82820EF8(uVar2 + 0x28,4);
  fn_82820EF8(uVar2 + 0x51,1);
  fn_82820EF8(uVar2 + 0x54,4);
  lVar3 = uVar2 + 0x68;
  lVar1 = 2;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x1c) + 0x50) & 1) != 1) {
      fn_82820EF8(lVar3 + -0x10,4);
      fn_82820EF8(lVar3,4);
    }
    lVar1 = lVar1 + -1;
    lVar3 = lVar3 + 0x14;
  } while (lVar1 != 0);
  return;
}

