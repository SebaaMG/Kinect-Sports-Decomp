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
extern unsigned int *auStack_100;
extern unsigned int *auStack_130;
extern unsigned int *auStack_160;
extern unsigned int *auStack_190;
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_822A9E20();
extern int fn_82520158();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_83276741;


void fn_82508828(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_190 [48];
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [48];
  
  if (lbl_83276741 == '\0') {
    lbl_83276741 = '\x01';
  }
  fn_82520158(0xffffffff821c2280,param_1,0);
  uVar1 = fn_82864988(auStack_d0,0xffffffff821c2298);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_d0);
  uVar1 = fn_82864988(auStack_130,0xffffffff821c22a4);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_130);
  uVar1 = fn_82864988(auStack_70,0xffffffff821c22b0);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_70);
  uVar1 = fn_82864988(auStack_190,0xffffffff821be96c);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_190);
  uVar1 = fn_82864988(auStack_160,0xffffffff821c22c4);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_160);
  uVar1 = fn_82864988(auStack_100,0xffffffff821c22d4);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_100);
  uVar1 = fn_82864988(auStack_a0,0xffffffff821c22e8);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_a0);
  uVar1 = fn_82864988(auStack_40,0xffffffff821c22f8);
  fn_822A9E20(param_2,uVar1);
  fn_82864898(auStack_40);
  return;
}

