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
extern unsigned int *auStack_18;
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822462F0();
extern int fn_8284A658();
extern int fn_8284B898();
extern int fn_8284C1A0();
extern int fn_82BA02A8();
extern unsigned int iStack00000014;
extern unsigned int lbl_821961F0;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_60;


longlong fn_8284C288(int param_1,undefined4 param_2)

{
  undefined4 uVar2;
  undefined8 uVar1;
  int iStack00000014;
  undefined4 uStack0000001c;
  uint uStack_60;
  uint auStack_5c [3];
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined1 auStack_18 [4];
  undefined1 *puStack_14;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack_60 = fn_8284A658(param_1,param_2);
  uStack_24 = uStack_60;
  fn_82BA02A8(&uStack_60,iStack00000014);
  auStack_5c[0] = *(uint *)(iStack00000014 + 4);
  uStack_20 = auStack_5c[0];
  fn_82BA02A8(auStack_5c,iStack00000014);
  if (auStack_5c[0] != uStack_60) {
    uStack_1c = uStack_60;
    uVar2 = fn_822462F0(uStack0000001c,(ulonglong)uStack_60 + 0xc);
    if ((int)LZCOUNT(uVar2) != 0) goto LAB_8284c3b4;
  }
  uStack_30 = 0;
  uStack_2c = uStack_60;
  puStack_14 = auStack_18;
  fn_82230300(auStack_50,0,0);
  fn_82230218(auStack_50,uStack0000001c,0,lbl_821961F0);
  uStack_34 = uStack_30;
  uVar1 = fn_8284C1A0(iStack00000014,auStack_50);
  fn_8284B898(&uStack_28,iStack00000014,uStack_2c,uVar1);
  uStack_60 = uStack_28;
  fn_82230300(auStack_50,1,0);
LAB_8284c3b4:
  return (ulonglong)uStack_60 + 0x28;
}

