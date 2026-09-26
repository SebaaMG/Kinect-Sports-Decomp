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
extern int fn_82359C18();
extern int fn_82409F90();
extern int fn_824557C0();
extern unsigned int iStack_2c;
extern unsigned int lbl_821B7F24;


void fn_82409D38(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined **ppuStack_30;
  int iStack_2c;
  undefined ***pppuStack_20;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xe0) == 0) {
    fn_82409F90(param_1,4);
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = *(uint *)(iVar1 + 0x6b0);
    if (*(int *)(iVar1 + 0x710) == 0) {
      uVar3 = uVar3 | 1;
    }
    else {
      uVar3 = uVar3 | 4;
    }
    *(uint *)(iVar1 + 0x6b0) = uVar3;
    *(undefined4 *)(iVar1 + 0x710) = 1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x70);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) == 0)) {
      pppuStack_20 = &ppuStack_30;
      ppuStack_30 = &lbl_821B7F24;
      iStack_2c = param_1;
      fn_824557C0((ulonglong)*(uint *)(param_1 + 8) + 0x7f0,&ppuStack_30);
      fn_82359C18(&ppuStack_30);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    fn_82409F90(param_1,uVar2);
  }
  return;
}

