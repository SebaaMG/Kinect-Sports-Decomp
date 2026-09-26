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
extern int fn_82CAE770();


void fn_82C95078(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  iVar5 = 3;
  piVar6 = (int *)(param_1 + 0xff4);
  iVar2 = -3;
  lVar7 = 0x1f;
  do {
    iVar3 = iVar5 + -1;
    piVar6[-3] = 0;
    iVar4 = iVar3 >> 1;
    piVar6[-4] = iVar3;
    piVar6[-2] = iVar3;
    piVar6[-1] = iVar2 + 1;
    if (iVar4 < 5) {
      *piVar6 = 8;
      if ((*(int *)(param_1 + 0x39e4) != 0) && (iVar4 < 3)) {
        iVar4 = iVar4 << 1;
        goto LAB_82c950f0;
      }
    }
    else {
      iVar4 = (iVar3 >> 2) + 6;
LAB_82c950f0:
      *piVar6 = iVar4;
    }
    piVar6[1] = iVar5;
    iVar4 = iVar5 >> 1;
    piVar6[2] = 0;
    piVar6[3] = iVar5;
    piVar6[4] = iVar2;
    if (iVar4 < 5) {
      piVar6[5] = 8;
      if ((*(int *)(param_1 + 0x39e4) != 0) && (iVar4 < 3)) {
        iVar4 = iVar4 << 1;
        goto LAB_82c95138;
      }
    }
    else {
      iVar4 = (iVar5 >> 2) + 6;
LAB_82c95138:
      piVar6[5] = iVar4;
    }
    piVar6 = piVar6 + 10;
    iVar5 = iVar5 + 2;
    iVar2 = iVar2 + -2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar2 = param_1 + 0xfe4;
  iVar5 = param_1 + 0x1a20;
  lVar7 = 0x3e;
  do {
    fn_82CAE770(iVar2,iVar5);
    lVar7 = lVar7 + -1;
    iVar5 = iVar5 + 0x40;
    iVar2 = iVar2 + 0x14;
  } while (lVar7 != 0);
  iVar2 = 3;
  piVar6 = (int *)(param_1 + 0x14ec);
  lVar7 = 0x1f;
  do {
    iVar5 = iVar2 + -1;
    piVar6[-2] = iVar5;
    uVar1 = iVar5 >> 1;
    if (*(int *)(param_1 + 0x3cb0) < 6) {
      iVar4 = uVar1 - (~uVar1 & 1);
      piVar6[-1] = iVar4;
      *piVar6 = iVar4 + iVar5;
    }
    else {
      piVar6[-1] = uVar1;
      *piVar6 = uVar1 + iVar5;
    }
    piVar6[1] = -*piVar6;
    if ((int)uVar1 < 5) {
      piVar6[2] = 8;
      if ((*(int *)(param_1 + 0x39e4) != 0) && ((int)uVar1 < 3)) {
        iVar5 = uVar1 << 1;
        goto LAB_82c95200;
      }
    }
    else {
      iVar5 = (iVar5 >> 2) + 6;
LAB_82c95200:
      piVar6[2] = iVar5;
    }
    piVar6[3] = iVar2;
    uVar1 = iVar2 >> 1;
    if (*(int *)(param_1 + 0x3cb0) < 6) {
      iVar5 = uVar1 - (~uVar1 & 1);
      piVar6[4] = iVar5;
      piVar6[5] = iVar2 + iVar5;
    }
    else {
      piVar6[4] = uVar1;
      piVar6[5] = uVar1 + iVar2;
    }
    piVar6[6] = -piVar6[5];
    if ((int)uVar1 < 5) {
      piVar6[7] = 8;
      if ((*(int *)(param_1 + 0x39e4) != 0) && ((int)uVar1 < 3)) {
        iVar5 = uVar1 << 1;
        goto LAB_82c9527c;
      }
    }
    else {
      iVar5 = (iVar2 >> 2) + 6;
LAB_82c9527c:
      piVar6[7] = iVar5;
    }
    piVar6 = piVar6 + 10;
    iVar2 = iVar2 + 2;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      iVar2 = param_1 + 0x14e4;
      param_1 = param_1 + 0x2a20;
      lVar7 = 0x3e;
      do {
        fn_82CAE770(iVar2,param_1);
        lVar7 = lVar7 + -1;
        param_1 = param_1 + 0x40;
        iVar2 = iVar2 + 0x14;
      } while (lVar7 != 0);
      return;
    }
  } while( true );
}

