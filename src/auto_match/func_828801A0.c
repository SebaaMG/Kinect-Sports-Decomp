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
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0978();
extern int fn_82CE0BB0();
extern unsigned int lbl_831599F0;
extern unsigned int lbl_832129FC;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


void fn_828801A0(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 auStack_30 [4];
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  
  if (lbl_831599F0 == -1) {
    uVar1 = fn_82CE08B8(2,2,0xfe);
    lbl_831599F0 = (int)uVar1;
    if (lbl_831599F0 == -1) {
      fn_82CE0BB0();
      return;
    }
    auStack_30[0] = 1;
    iVar2 = fn_82CE08F0(uVar1,0xffffffff8004667e,auStack_30);
    if (iVar2 == -1) {
      fn_82CE0BB0();
    }
    uStack_20 = 2;
    uStack_1c = 0;
    uStack_1e = 1000;
    iVar2 = fn_82CE0978(lbl_831599F0,&uStack_20,0x10);
    if (iVar2 == -1) {
      fn_82CE0BB0();
    }
  }
  lbl_832129FC = 1;
  return;
}

