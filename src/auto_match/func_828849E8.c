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
extern unsigned int *auStack_60;
extern unsigned int *auStack_7c;
extern int fn_82880428();
extern int fn_82880BD8();
extern int fn_82881A08();
extern int fn_828846A0();
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0908();
extern int fn_82CE0978();
extern int fn_82CE0BB0();
extern unsigned int lbl_831599F4;
extern unsigned int lbl_832129F4;
extern unsigned int lbl_83212A08;
extern unsigned int uStack_6c;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


undefined8 fn_828849E8(void)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uStack_80;
  undefined4 auStack_7c [3];
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined1 auStack_60 [72];
  
  if (lbl_831599F4 == 0xffffffff) {
    uVar1 = fn_82CE08B8(2,2,0x11);
    lbl_831599F4 = (uint)uVar1;
    if (lbl_831599F4 == 0xffffffff) {
      fn_82CE0BB0();
      uVar1 = (ulonglong)lbl_831599F4;
    }
    uStack_80 = 1;
    iVar3 = fn_82CE08F0(uVar1,0xffffffff8004667e,&uStack_80);
    if (iVar3 == -1) {
      fn_82CE0BB0();
    }
    auStack_7c[0] = 1;
    iVar3 = fn_82CE0908(lbl_831599F4,0xffff,0x20,auStack_7c,4);
    if (iVar3 == -1) {
      fn_82CE0BB0();
    }
    uStack_70 = 2;
    uStack_6c = 0;
    uStack_6e = 0x3e9;
    iVar3 = fn_82CE0978(lbl_831599F4,&uStack_70,0x10);
    if (iVar3 == -1) {
      fn_82CE0BB0();
    }
  }
  uVar2 = fn_82880BD8();
  if ((((int)uVar2 < 0) && (lbl_83212A08 < lbl_832129F4)) &&
     (uVar2 = fn_82881A08(), -1 < (int)uVar2)) {
    fn_82880428(auStack_60);
    fn_828846A0(auStack_60,uVar2);
  }
  return uVar2;
}

