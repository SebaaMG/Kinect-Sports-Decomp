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
extern int fn_82F6FA38();
extern unsigned int lbl_83248EAC;


void fn_82E81FC8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7900) != 2) {
    *(uint *)(param_1 + 0x628) = (uint)(*(int *)(param_1 + 0x7900) == 1);
  }
  if (*(int *)(param_1 + 0x7904) != 2) {
    *(uint *)(param_1 + 0x648) = (uint)(*(int *)(param_1 + 0x7904) == 1);
  }
  if (*(int *)(param_1 + 0x7908) != 2) {
    *(uint *)(param_1 + 0x644) = (uint)(*(int *)(param_1 + 0x7908) == 1);
  }
  if (*(int *)(param_1 + 0x790c) != 2) {
    *(uint *)(param_1 + 0x64c) = (uint)(*(int *)(param_1 + 0x790c) == 1);
  }
  if (*(int *)(param_1 + 0x7910) != 2) {
    *(uint *)(param_1 + 0x978) = (uint)LZCOUNT(*(int *)(param_1 + 0x7910) + -1) >> 5;
    if (*(int *)(param_1 + 0x7914) == 4) {
      *(undefined4 *)(param_1 + 0x978) = 2;
    }
    else {
      if (0 < *(int *)(param_1 + 0x7914)) goto LAB_82e82080;
      *(undefined4 *)(param_1 + 0x978) = 0;
    }
    *(undefined4 *)(param_1 + 0x7914) = 0;
  }
LAB_82e82080:
  if (*(int *)(param_1 + 31000) != 2) {
    *(uint *)(param_1 + 0x314) = (uint)(*(int *)(param_1 + 31000) == 1);
  }
  if (*(int *)(param_1 + 0x791c) != 2) {
    *(uint *)(param_1 + 0x920) = (uint)(*(int *)(param_1 + 0x791c) == 1);
  }
  if (*(int *)(param_1 + 0x7920) != 2) {
    *(uint *)(param_1 + 0x5268) = (uint)(*(int *)(param_1 + 0x7920) == 1);
  }
  if (*(int *)(param_1 + 0x7924) != 2) {
    *(uint *)(param_1 + 0xafc) = (uint)(*(int *)(param_1 + 0x7924) == 1);
  }
  if (*(int *)(param_1 + 0x7928) == 0) {
    *(undefined4 *)(param_1 + 0x77a0) = 0;
    *(undefined4 *)(param_1 + 0x77a4) = 0;
  }
  if (*(int *)(param_1 + 0x792c) != 2) {
    *(uint *)(param_1 + 0x8d4) = (uint)(*(int *)(param_1 + 0x792c) == 1);
  }
  iVar3 = *(int *)(param_1 + 0x7934);
  if (iVar3 != 2) {
    *(uint *)(param_1 + 0x1a74) = (uint)(iVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x7938);
  if (iVar1 == 2) goto LAB_82e821b0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x598) = 0;
    *(undefined4 *)(param_1 + 0x5a0) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x793c);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x59c) = 1;
      *(undefined4 *)(param_1 + 0x598) = 1;
      *(undefined4 *)(param_1 + 0x5a0) = 0;
      *(undefined4 *)(param_1 + 0x594) = 1;
      goto LAB_82e821b0;
    }
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x59c) = 1;
      *(undefined4 *)(param_1 + 0x598) = 1;
      *(undefined4 *)(param_1 + 0x5a0) = 0;
      *(undefined4 *)(param_1 + 0x594) = 0;
      goto LAB_82e821b0;
    }
    if (iVar2 != 2) goto LAB_82e821b0;
    *(undefined4 *)(param_1 + 0x598) = 1;
    *(undefined4 *)(param_1 + 0x5a0) = 1;
    *(undefined4 *)(param_1 + 0x594) = 0;
  }
  *(undefined4 *)(param_1 + 0x59c) = 0;
LAB_82e821b0:
  iVar2 = *(int *)(param_1 + 0x7968);
  if (iVar2 != 2) {
    *(int *)(param_1 + 0x78e0) = iVar2;
    *(int *)(param_1 + 0x78dc) = iVar2;
    *(undefined4 *)(param_1 + 0x78a8) = 1;
    *(undefined4 *)(param_1 + 0x78a4) = 1;
    *(undefined4 *)(param_1 + 0x78a0) = 1;
    *(int *)(param_1 + 0x78d8) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x7940);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x78d0) = iVar2;
    *(int *)(param_1 + 0x78cc) = iVar2;
    *(undefined4 *)(param_1 + 0x7898) = 1;
    *(undefined4 *)(param_1 + 0x7894) = 1;
    if (*(int *)(param_1 + 0x868) != -1) {
      *(undefined4 *)(param_1 + 0x789c) = 1;
      *(int *)(param_1 + 0x78d4) = *(int *)(param_1 + 0x868) + iVar2;
    }
    if (0x1f < *(int *)(param_1 + 0x78d4)) {
      *(undefined4 *)(param_1 + 0x78d4) = 0x1f;
    }
  }
  iVar2 = *(int *)(param_1 + 0x7948);
  if ((iVar2 != -1) && ((2 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x7948) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x794c);
  if ((iVar2 != -1) && ((2 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x794c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x795c);
  if ((iVar2 != -1) && ((3 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x795c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7964);
  if ((iVar2 != -1) && ((2 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x7964) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7960);
  if ((iVar2 != -1) && ((3 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x7960) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7954);
  if ((iVar2 != -1) && ((7 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x7954) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7958);
  if ((iVar2 != -1) && ((7 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x7958) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7950);
  if ((iVar2 != -1) && ((7 < iVar2 || (iVar2 < -1)))) {
    *(undefined4 *)(param_1 + 0x7950) = 0;
  }
  if (lbl_83248EAC != 0) {
    return;
  }
  if (iVar3 != 1) {
    if (iVar1 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x793c) != 2) {
      return;
    }
  }
  iVar3 = fn_82F6FA38();
  *(undefined4 *)(iVar3 + 0x14) = 0x3db;
  return;
}

