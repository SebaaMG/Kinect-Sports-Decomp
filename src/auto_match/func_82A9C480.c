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
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9C480(int param_1,undefined8 param_2)

{
  longlong lVar1;
  uint *puVar3;
  ulonglong uVar2;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2b00);
  if (*(int *)(param_1 + 0x84) != 0) {
    fn_82A99D88(param_2,0xffffffff820d2ac0);
  }
  fn_82A9A860(param_2);
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82A99BC8(param_2);
    fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2af8);
    fn_82A9A860(param_2);
    puVar3 = *(uint **)(param_1 + 0x20);
    if (puVar3 < puVar3 + *(int *)(param_1 + 0x24) * 2) {
      do {
        fn_82A99BC8(param_2);
        fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8202936c);
        lVar1 = -0x7de69a7e;
        if (*puVar3 != 0xffffffff) {
          lVar1 = (ulonglong)*(uint *)(param_1 + 0x2c) + (ulonglong)*puVar3;
        }
        fn_82A99D88(param_2,0xffffffff820d2ac0,lVar1);
        lVar1 = -0x7de69a7e;
        if (puVar3[1] != 0xffffffff) {
          lVar1 = (ulonglong)*(uint *)(param_1 + 0x2c) + (ulonglong)puVar3[1];
        }
        fn_82A99D88(param_2,0xffffffff8204f43c,lVar1);
        fn_82A9A810(param_2);
        puVar3 = puVar3 + 2;
      } while (puVar3 < (uint *)(*(int *)(param_1 + 0x24) * 8 + *(int *)(param_1 + 0x20)));
    }
    fn_82A99C28(param_2,0xffffffff820d2af8);
  }
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8200ed34);
  fn_82A9A860(param_2);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x38);
  if (uVar2 < ((ulonglong)*(uint *)(param_1 + 0x3c) * 0x28 + uVar2 & 0xffffffff)) {
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a88);
      fn_82A99D88(param_2,0xffffffff820d2ac0,uVar2);
      fn_82A99D88(param_2,0xffffffff8204f43c,uVar2 + 0x20);
      fn_82A9A810(param_2);
      uVar2 = uVar2 + 0x28;
    } while ((uVar2 & 0xffffffff) <
             (ulonglong)(*(int *)(param_1 + 0x3c) * 0x28 + *(uint *)(param_1 + 0x38)));
  }
  fn_82A99C28(param_2,0xffffffff8200ed34);
  fn_82A99C28(param_2,0xffffffff820d2b00);
  return;
}

