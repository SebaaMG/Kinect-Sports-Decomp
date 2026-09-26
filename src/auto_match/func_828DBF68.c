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
extern int fn_828B5FC8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA180();


void fn_828DBF68(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char acStack_120 [288];
  
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 < 4) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828E9FF8(param_2,4);
  }
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (0x3f < iVar2 - iVar3) {
    fn_828EA180(param_2,param_1 + 0x98,8);
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if ((iVar2 - iVar3 < 1) || (iVar2 = fn_828E9FF8(param_2,1), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    else {
      iVar2 = fn_828E9DA8(param_2);
      iVar3 = fn_828E9D90(param_2);
      if (iVar2 - iVar3 < 4) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      else {
        uVar4 = fn_828E9FF8(param_2,4);
        *(undefined4 *)(param_1 + 0xa0) = uVar4;
      }
    }
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,2);
    }
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 0x10) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,0x10);
    }
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if ((iVar2 - iVar3 < 1) || (iVar2 = fn_828E9FF8(param_2,1), iVar2 == 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = fn_828E9DA8(param_2);
      iVar3 = fn_828E9D90(param_2);
      if (iVar2 - iVar3 < 2) {
        iVar2 = 1;
      }
      else {
        iVar2 = fn_828E9FF8(param_2,2);
        iVar2 = iVar2 + 1;
      }
    }
    *(int *)(param_1 + 0x88) = iVar2;
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,2);
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 0x10) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,0x10);
    }
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    fn_828B5FC8(param_1 + 0xc0,*(undefined4 *)(param_1 + 0x6c),param_2);
  }
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if ((0 < iVar2 - iVar3) && (iVar2 = fn_828E9FF8(param_2,1), iVar2 != 0)) {
    fn_8224BE90(param_2,acStack_120,0x100,1,0,0);
    pcVar5 = acStack_120;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    fn_82230360(param_1 + 0xa4,acStack_120,pcVar5 + (-1 - (int)acStack_120));
  }
  return;
}

