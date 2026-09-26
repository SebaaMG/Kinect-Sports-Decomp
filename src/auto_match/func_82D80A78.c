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
extern int fn_82CE8268();
extern int fn_82CE8920();
extern int fn_83088FB0();
extern int fn_830893D0();
extern unsigned int lbl_82DA7910;


void fn_82D80A78(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined **)(iVar1 + -0x7cdc1dd0) = &lbl_82DA7910;
    iVar1 = uVar2 << 2;
  } while (uVar2 < 0x11);
  if (*(int *)(param_1 + 0x60) < 2) {
    *(undefined4 *)(param_1 + 0x60) = 2;
  }
  fn_82CE8920(param_1,0,0xc,1);
  fn_82CE8268(param_1,0,0x8323e23000000011,0x82daa4a082daa858);
  fn_82CE8268(param_1,1,0x8323e23000000011,0x82daa4a082daa858);
  fn_830893D0(param_1);
  fn_83088FB0(param_1);
  return;
}

