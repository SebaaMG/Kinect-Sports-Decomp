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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_82CE7E68();
extern int fn_82CFBE40();
extern int fn_82CFBE68();
extern int fn_82CFD9A0();
extern int fn_82D052F0();


undefined8 fn_82CFDB58(longlong param_1)

{
  int iVar4;
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 auStack_b0 [12];
  undefined4 auStack_80 [12];
  undefined4 auStack_50 [14];
  
  iVar4 = thunk_FUN_82f65390(param_1,0xffffffff82133c38,8);
  if (iVar4 == 0) {
    lVar1 = fn_82CFBE40(param_1 + 8);
    fn_82D052F0(auStack_80,param_1 + 8,lVar1 + -1);
    uVar2 = fn_82CFD9A0(auStack_80[0]);
    fn_82CE7E68(auStack_80);
  }
  else {
    iVar4 = thunk_FUN_82f65390(param_1,0xffffffff82133c28,0xe);
    if (iVar4 == 0) {
      lVar1 = fn_82CFBE40(param_1 + 0xe);
      fn_82D052F0(auStack_b0,param_1 + 0xe,lVar1 + -1);
      uVar2 = fn_82CFD9A0(auStack_b0[0]);
      fn_82CE7E68(auStack_b0);
    }
    else {
      uVar3 = thunk_FUN_82f66570(param_1,0x5b);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        lVar1 = thunk_FUN_82f66570(param_1,0x5d);
        fn_82D052F0(auStack_50,uVar3 + 1,(lVar1 - uVar3) + -1);
        uVar2 = fn_82CFBE68(auStack_50[0],0);
        fn_82CE7E68(auStack_50);
      }
    }
  }
  return uVar2;
}

