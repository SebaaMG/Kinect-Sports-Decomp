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
extern int fn_82A3AAB8();
extern int fn_82A3B5D8();
extern int fn_82A3B6A8();
extern int fn_82A3B710();
extern int fn_82A3BE88();
extern int fn_82A3BF58();
extern int fn_82A3C0B0();
extern int fn_82A3C188();
extern int fn_82A3C650();
extern int fn_82A3CCB0();
extern int fn_82A3CED8();


void fn_82A39BB0(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar3;
  ulonglong uVar2;
  
  uVar1 = fn_82A3CED8(param_1,0,0,param_2);
  uVar3 = fn_82A3CCB0(param_1,param_3);
  fn_82A3B5D8(param_1,1);
  uVar2 = fn_82A3BF58(param_1);
  if (((uVar1 & 0xffffffff) <= (uVar2 & 0xffffffff)) &&
     (*(uint *)(param_1 + 0x97c) <= *(uint *)(param_1 + 0x980))) {
    uVar3 = 3;
  }
  fn_82A3AAB8(param_1,3,uVar3 & 0xff);
  fn_82A3AAB8(param_1,8,(uVar1 & 0xffffffff) >> 0x10 & 0xff);
  fn_82A3AAB8(param_1,8,(uVar1 & 0xffffffff) >> 8 & 0xff);
  fn_82A3AAB8(param_1,8,uVar1 & 0xff);
  if (uVar3 == 1) {
    fn_82A3B6A8(param_1);
    fn_82A3C188(param_1,param_2);
  }
  else {
    if (uVar3 != 2) {
      if (uVar3 == 3) {
        fn_82A3BE88(param_1,param_3);
        fn_82A3C0B0(param_1,*(undefined4 *)(param_1 + 0x980),uVar1);
      }
      goto LAB_82a39cd4;
    }
    fn_82A3B710(param_1);
    fn_82A3B6A8(param_1);
    fn_82A3C650(param_1,param_2);
  }
  fn_82A3BE88(param_1,param_3);
LAB_82a39cd4:
  *(int *)(param_1 + 0x980) = *(int *)(param_1 + 0x980) + (int)uVar1;
  return;
}

