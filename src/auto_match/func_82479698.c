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
extern unsigned int *auStack_30;
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_822847A8();
extern unsigned int iStack_4c;
extern unsigned int lbl_821BD03C;
extern unsigned int uStack_20;


void fn_82479698(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuStack_50;
  int iStack_4c;
  undefined ***pppuStack_40;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*(int *)(iVar1 + 0x10) == 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      fn_822819E0(iVar1,param_1 + 0x30);
    }
  }
  else {
    fn_82281868(iVar1,param_1 + 0x30,0);
  }
  pppuStack_40 = &ppuStack_50;
  uStack_20 = 0;
  ppuStack_50 = &lbl_821BD03C;
  iStack_4c = param_1 + 0x10;
  uVar2 = fn_822847A8(0,&ppuStack_50,0,auStack_30,1,1);
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

