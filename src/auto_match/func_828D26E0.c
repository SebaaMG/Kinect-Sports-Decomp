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
extern int fn_82230360();
extern int fn_8224BE90();
extern int fn_828D1F90();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828D26E0(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar2;
  char *pcVar6;
  char acStack_120 [288];
  
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if (iVar3 - iVar4 < 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_828E9FF8(param_2,2);
  }
  *(int *)(param_1 + 0x80) = iVar3;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (iVar3 == 0) {
    fn_828D1F90(param_2,param_1 + 0x84,0x24,0);
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_828E9FF8(param_2,2);
    }
    *(undefined4 *)(param_1 + 0xa8) = uVar5;
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_828E9FF8(param_2,0x10);
    }
    *(undefined4 *)(param_1 + 0xac) = uVar5;
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = fn_828E9FF8(param_2,1);
    }
    *(char *)(param_1 + 0xb0) = '\x01' - (lVar2 == 0);
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if ((iVar3 - iVar4 < 1) || (iVar3 = fn_828E9FF8(param_2,1), iVar3 == 0)) {
      iVar3 = 1;
    }
    else {
      iVar3 = fn_828E9DA8(param_2);
      iVar4 = fn_828E9D90(param_2);
      if (iVar3 - iVar4 < 2) {
        iVar3 = 1;
      }
      else {
        iVar3 = fn_828E9FF8(param_2,2);
        iVar3 = iVar3 + 1;
      }
    }
    *(int *)(param_1 + 0xb4) = iVar3;
  }
  else if ((iVar3 == 1) || (iVar3 == 3)) {
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < 0x10) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    else {
      uVar5 = fn_828E9FF8(param_2,0x10);
      *(undefined4 *)(param_1 + 0xac) = uVar5;
    }
  }
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if ((0 < iVar3 - iVar4) && (iVar3 = fn_828E9FF8(param_2,1), iVar3 != 0)) {
    fn_8224BE90(param_2,acStack_120,0x100,1,0,0);
    pcVar6 = acStack_120;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    fn_82230360(param_1 + 0xb8,acStack_120,pcVar6 + (-1 - (int)acStack_120));
  }
  return;
}

