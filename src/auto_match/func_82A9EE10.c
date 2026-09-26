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
extern unsigned int *auStack_20;
extern int fn_82A9CB40();
extern int fn_82A9CBB8();
extern int fn_82A9CC40();
extern int fn_82F6E7A8();
extern unsigned int iStack_10;
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int uStack_2d;
extern unsigned int uStack_2e;
extern unsigned int uStack_30;


ulonglong fn_82A9EE10(int param_1,ulonglong param_2,uint param_3,undefined1 param_4,int *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 uStack_30;
  char cStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 auStack_20 [4];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x90);
  if (-1 < (int)*(uint *)(param_1 + 0x90)) {
    uVar1 = (ulonglong)*(ushort *)(param_1 + 0x9e);
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x1dc + (ulonglong)*(uint *)(param_1 + 0x10);
    if (uVar1 == 0) {
      lVar2 = lVar2 + -0x1dc;
    }
    else {
      if (uVar1 < (param_2 & 0xffffffff)) {
        *(undefined4 *)(param_1 + 0x90) = 0x80004005;
        return 0xffffffff80004005;
      }
      lVar2 = (param_2 - uVar1) * 0x1dc + lVar2;
    }
    uStack_30 = param_4;
    if (param_3 == 0) {
      cStack_2f = '\x01' - (*param_5 == 0);
      fn_82A9CB40(lVar2 + 0x18c,&uStack_30);
    }
    else if (param_3 == 1) {
      iStack_1c = *param_5;
      iStack_18 = param_5[1];
      iStack_14 = param_5[2];
      iStack_10 = param_5[3];
      auStack_20[0] = param_4;
      fn_82A9CC40(lVar2 + 0x1a4,auStack_20);
    }
    else {
      if (2 < param_3) {
        fn_82F6E7A8(0xffffffff820d2d20);
        return 0xffffffff80004005;
      }
      cStack_2f = (char)*param_5;
      uStack_2e = (undefined1)param_5[1];
      uStack_2d = (undefined1)param_5[2];
      fn_82A9CBB8(lVar2 + 0x198,&uStack_30);
    }
    uVar1 = 0;
  }
  return uVar1;
}

