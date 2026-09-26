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
extern unsigned int *auStack_50;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern int fn_82F64988();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_822A4830(int *param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 auStack_50 [64];
  
  *(undefined4 *)(*param_1 + 0x50) = param_2;
  if (*(int *)(*param_1 + 0x28) == 0) {
    return;
  }
  uStack_60 = 0;
  uStack_5c = 0;
  if (param_3 == 1) {
    uVar1 = 0xffffffff821ac1e0;
  }
  else if (param_3 == 2) {
    uVar1 = 0xffffffff821ac1d0;
  }
  else if (param_3 == 3) {
    uVar1 = 0xffffffff821ac1f8;
  }
  else if (param_3 == 4) {
    uVar1 = 0xffffffff821ac1b0;
  }
  else {
    if (param_3 != 5) goto LAB_822a48d4;
    uVar1 = 0xffffffff821ac1c0;
  }
  fn_82F64988(auStack_50,0x20,uVar1);
LAB_822a48d4:
  fn_82273CD8(&uStack_60,5);
  puStack_58 = auStack_50;
  fn_82672C20(*(undefined4 *)(*param_1 + 0x28),0xffffffff821ac2b8,&uStack_60,1);
  fn_82273C88(&uStack_60);
  return;
}

