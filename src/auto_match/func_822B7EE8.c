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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822980B0();
extern int fn_822B7E80();
extern int fn_8234AF90();
extern int fn_8234B900();
extern int fn_8234D8D0();
extern int fn_8251FA58();
extern unsigned int lbl_821A7E94;


void fn_822B7EE8(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  fn_822B7E80(param_1 + 0x36c);
  *(undefined ***)(param_1 + 0x358) = &lbl_821A7E94;
  *(undefined ***)(param_1 + 0x34c) = &lbl_821A7E94;
  *(undefined ***)(param_1 + 0x340) = &lbl_821A7E94;
  if (*(int *)(param_1 + 0x338) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x330) != 0) {
    fn_822315A0();
  }
  fn_8234AF90(param_1 + 0x2c0);
  lVar2 = 1;
  iVar3 = param_1 + 0x2c0;
  do {
    iVar3 = iVar3 + -0x2c;
    fn_8234B900(iVar3);
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  *(undefined ***)(param_1 + 0x154) = &lbl_821A7E94;
  *(undefined ***)(param_1 + 0x150) = &lbl_821A7E94;
  fn_8234D8D0(param_1 + 0x70);
  fn_82230300(param_1 + 0x34,1,0);
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_822315A0();
  }
  fn_8251FA58(*(undefined4 *)(param_1 + 0x24));
  fn_822980B0(param_1 + 0x14);
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

