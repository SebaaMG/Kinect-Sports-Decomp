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


void fn_82CF6C78(int param_1)

{
  undefined8 in_r0;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = 0;
  lVar5 = 0x23;
  do {
    iVar4 = iVar2 << 4;
    if (iVar4 < 0x11) {
      iVar3 = 1;
    }
    else if (iVar4 < 0x21) {
      iVar3 = 2;
    }
    else if (iVar4 < 0x31) {
      iVar3 = 3;
    }
    else if (iVar4 < 0x41) {
      iVar3 = 4;
    }
    else if (iVar4 < 0x61) {
      iVar3 = 5;
    }
    else if (iVar4 < 0x81) {
      iVar3 = 6;
    }
    else if (iVar4 < 0xa1) {
      iVar3 = 7;
    }
    else if (iVar4 < 0xc1) {
      iVar3 = 8;
    }
    else if (iVar4 < 0x101) {
      iVar3 = 9;
    }
    else if (iVar4 < 0x141) {
      iVar3 = 10;
    }
    else if (iVar4 < 0x201) {
      iVar3 = 0xb;
    }
    else if (iVar4 < 0x221) {
      iVar3 = 0xc;
    }
    else if (iVar4 < 0x401) {
      iVar3 = 0xd;
    }
    else if (iVar4 < 0x801) {
      iVar3 = 0xe;
    }
    else if (iVar4 < 0x1001) {
      iVar3 = 0xf;
    }
    else if (iVar4 < 0x2001) {
      iVar3 = 0x10;
    }
    else {
      trapWord(0x1f,in_r0,0x16);
      iVar3 = -1;
    }
    *(char *)(param_1 + 0xd8 + iVar2) = (char)iVar3;
    iVar2 = iVar2 + 1;
    *(int *)((iVar3 + 0x25) * 4 + param_1) = iVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar2 = 0x400;
  piVar1 = (int *)(param_1 + 0xf8);
  lVar5 = 8;
  do {
    if (iVar2 < 0x11) {
      iVar4 = 1;
    }
    else if (iVar2 < 0x21) {
      iVar4 = 2;
    }
    else if (iVar2 < 0x31) {
      iVar4 = 3;
    }
    else if (iVar2 < 0x41) {
      iVar4 = 4;
    }
    else if (iVar2 < 0x61) {
      iVar4 = 5;
    }
    else if (iVar2 < 0x81) {
      iVar4 = 6;
    }
    else if (iVar2 < 0xa1) {
      iVar4 = 7;
    }
    else if (iVar2 < 0xc1) {
      iVar4 = 8;
    }
    else if (iVar2 < 0x101) {
      iVar4 = 9;
    }
    else if (iVar2 < 0x141) {
      iVar4 = 10;
    }
    else if (iVar2 < 0x201) {
      iVar4 = 0xb;
    }
    else if (iVar2 < 0x221) {
      iVar4 = 0xc;
    }
    else if (iVar2 < 0x401) {
      iVar4 = 0xd;
    }
    else if (iVar2 < 0x801) {
      iVar4 = 0xe;
    }
    else if (iVar2 < 0x1001) {
      iVar4 = 0xf;
    }
    else if (iVar2 < 0x2001) {
      iVar4 = 0x10;
    }
    else {
      trapWord(0x1f,in_r0,0x16);
      iVar4 = -1;
    }
    piVar1 = piVar1 + 1;
    *piVar1 = iVar4;
    *(int *)((iVar4 + 0x25) * 4 + param_1) = iVar2;
    iVar2 = iVar2 + 0x400;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

