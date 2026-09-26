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
extern int fn_82414950();
extern int fn_82536590();


void fn_82425060(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0x1ac == 1) {
    if ((iVar1 == *(int *)(iVar2 + 0x2b20)) && (*(int *)(iVar2 + 0xc0c) != 0)) {
      fn_82536590(iVar2 + 0xe2c,0);
    }
    uVar3 = 0x1a;
  }
  else {
    if ((iVar1 == *(int *)(iVar2 + 0x2b20)) && (*(int *)(iVar2 + 0xc0c) != 0)) {
      fn_82536590(iVar2 + 0xe34,0);
    }
    uVar3 = 0x1b;
  }
  fn_82414950(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2b50),0,uVar3);
  return;
}

