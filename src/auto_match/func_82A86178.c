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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A84FA0();
extern int fn_82A85FD0();
extern unsigned int lbl_832234E4;


ulonglong fn_82A86178(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint auStack_30 [12];
  
  if (lbl_832234E4 == 0) {
    uVar1 = 0;
    auStack_30[0] = 0;
    uVar2 = fn_8265C940(0x1100,0x20980000);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82A84FA0(uVar2,param_1,auStack_30);
      uVar1 = (ulonglong)auStack_30[0];
    }
    if ((uVar2 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff8007000e;
    }
    else if ((int)uVar1 < 0) {
      fn_82A85FD0(uVar2);
      fn_8265C990(uVar2,0x20980000);
      uVar2 = 0;
    }
    lbl_832234E4 = (int)uVar2;
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

