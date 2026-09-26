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
extern int fn_82230040();
extern int fn_823D5D78();
extern int fn_8265C9E0();
extern unsigned int iStack00000014;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_24;


void fn_823D5C10(int param_1)

{
  int iVar1;
  int iStack00000014;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  iStack00000014 = param_1;
  fn_823D5D78();
  fn_823D5D78(param_1 + 0x10);
  fn_823D5D78(param_1 + 0x20);
  fn_823D5D78(param_1 + 0x30);
  fn_823D5D78(param_1 + 0x40);
  fn_823D5D78(param_1 + 0x50);
  fn_823D5D78(param_1 + 0x60);
  fn_823D5D78(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x88) = 0;
  iVar1 = fn_8265C9E0(0x50);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x84) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(param_1 + 0x84) + 4) = *(int *)(param_1 + 0x84);
    *(int *)(*(int *)(param_1 + 0x84) + 8) = *(int *)(param_1 + 0x84);
    *(undefined1 *)(*(int *)(param_1 + 0x84) + 0x48) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x84) + 0x49) = 1;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x280) = 0;
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x328) = 0;
    return;
  }
  uStack_24 = 0;
  ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_28);
}

