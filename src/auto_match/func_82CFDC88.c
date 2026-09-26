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
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CEAC20();
extern int fn_82CFBE30();
extern int fn_82CFD510();
extern int fn_82D04AB8();
extern int fn_82D04B90();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_82CFDC88(int param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uStack_70;
  uint uStack_6c;
  
  uVar6 = 0xffffffff82196ea4;
  bVar1 = *(byte *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0xffffffff82196ea4;
  }
  else {
    uVar3 = fn_82CEAC20();
  }
  if (*(uint **)(param_1 + 8) != (uint *)0x0) {
    uVar6 = (ulonglong)**(uint **)(param_1 + 8);
  }
  fn_82CE7EE0(&uStack_70);
  if (((((bVar1 < 0x14) || (bVar1 == 0x1c)) || (bVar1 == 0x1e)) ||
      ((bVar1 == 0x1d || (bVar1 == 0x20)))) || (bVar1 == 0x21)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) || (bVar1 == 0x1b)) {
    if (*(short *)(param_1 + 0xe) == 0) {
      fn_82D04AB8(&uStack_70,*(undefined4 *)((uint)bVar1 * 0xc + -0x7ce8097c));
      goto LAB_82cfdf1c;
    }
    uVar3 = 0xffffffff82133c0c;
  }
  else {
    if (bVar1 == 0x14) {
      if (*(int *)(param_1 + 4) == 0) {
        if (*(char *)(param_1 + 0xd) == '\x02') {
          fn_82D04AB8(&uStack_70,0xffffffff82133c20);
        }
        else {
          fn_82D04AB8(&uStack_70,0xffffffff82133ce0);
        }
      }
      else {
        uVar3 = fn_82CEAC20();
        fn_82D04B90(&uStack_70,0xffffffff82133ce8,uVar3);
      }
      goto LAB_82cfdf1c;
    }
    if ((bVar1 == 0x16) || (bVar1 == 0x1a)) {
      uVar5 = (uint)*(byte *)(param_1 + 0xd);
      cVar4 = fn_82CFD510(*(byte *)(param_1 + 0xd));
      if (cVar4 == '\0') {
        if (uVar5 == 0x14) {
          if (*(int *)(param_1 + 4) == 0) {
            fn_82D04B90(&uStack_70,0xffffffff82133c68);
            goto LAB_82cfdf1c;
          }
          uVar3 = 0xffffffff82133c78;
        }
        else {
          if (uVar5 != 0x19) goto LAB_82cfdf1c;
          uVar3 = 0xffffffff82133c54;
        }
      }
      else {
        uVar3 = 0xffffffff82133c88;
      }
    }
    else {
      if (bVar1 == 0x18) {
        fn_82D04B90(&uStack_70,0xffffffff82133cd8,uVar6);
        goto LAB_82cfdf1c;
      }
      if (bVar1 == 0x1f) {
        fn_82D04B90(&uStack_70,0xffffffff82133ccc,uVar6);
        goto LAB_82cfdf1c;
      }
      if (bVar1 != 0x19) goto LAB_82cfdf1c;
      if (*(short *)(param_1 + 0xe) == 0) {
        fn_82D04B90(&uStack_70,0xffffffff82133cc0,uVar3);
        goto LAB_82cfdf1c;
      }
      uVar3 = 0xffffffff82133cb0;
    }
  }
  fn_82D04B90(&uStack_70,uVar3);
LAB_82cfdf1c:
  fn_82CFBE30(param_2,uStack_70,param_3);
  fn_82CE7E68(&uStack_70);
  return (ulonglong)uStack_6c - 1;
}

