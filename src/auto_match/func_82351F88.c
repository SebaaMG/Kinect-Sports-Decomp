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
extern int fn_822A97A0();
extern int fn_82350888();
extern int (*lbl_83276778)();
extern int (*lbl_8327677C)();
extern int (*lbl_83276794)();


void fn_82351F88(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)LZCOUNT(*(int *)(param_1 + 0x2c)) >> 5;
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    fn_822A97A0();
    if (*(int *)(param_1 + 0x340) == 0) {
      if (*(int *)(param_1 + 0x3e4) != 0) {
        if (lbl_8327677C != (code *)0x0) {
          (*lbl_8327677C)(0xffffffff821b2130,0xffffffff821b1fb8,0x8c9);
        }
        *(undefined4 *)(param_1 + 0x3e4) = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2c);
      if ((iVar1 == 0) || ((iVar1 != 0 && (*(int *)(iVar1 + 8) == 9)))) {
        *(undefined4 *)(param_1 + 0x340) = 1;
      }
    }
    if (*(int *)(param_1 + 0x340) == 1) {
      if (*(int *)(param_1 + 0x3e4) == 0) {
        if (lbl_83276778 != (code *)0x0) {
          (*lbl_83276778)(0,0,1,0xffffffff821b2130,0xffffffff821b1fb8,0x8db);
        }
        *(undefined4 *)(param_1 + 0x3e4) = 1;
      }
      if (lbl_83276794 == (code *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*lbl_83276794)();
      }
      if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 0x2c) == 0)) {
        uVar2 = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + 100) = 1;
      }
    }
  }
  if (uVar2 != 0) {
    fn_82350888(param_1,8);
  }
  return;
}

