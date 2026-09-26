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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_82195528;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821958F0;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822A4C18(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  iVar1 = *param_1;
  if (param_2 == *(int *)(iVar1 + 0x54)) {
    return;
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    return;
  }
  uStack_30 = 0;
  uStack_2c = 0;
  if (param_2 == 0) {
    uVar4 = 0;
    uVar2 = 0xffffffff821ac32c;
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 1) {
      fn_82273CD8(&uStack_30,3);
      uStack_28 = lbl_82195528;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          fn_82273CD8(&uStack_30,3);
          uStack_28 = lbl_821958F0;
          goto LAB_822a4ca0;
        }
        if (iVar1 != 4) goto LAB_822a4d0c;
      }
      fn_82273CD8(&uStack_30,3);
      uStack_28 = lbl_82195830;
    }
LAB_822a4ca0:
    iVar1 = *param_1;
    uVar4 = 1;
    uVar2 = 0xffffffff821ac314;
    puVar3 = &uStack_30;
  }
  fn_82672C20(*(undefined4 *)(iVar1 + 0x28),uVar2,puVar3,uVar4);
LAB_822a4d0c:
  *(int *)(*param_1 + 0x54) = param_2;
  fn_82273C88(&uStack_30);
  return;
}

