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
extern int fn_82418130();
extern unsigned int lbl_821CC160;


void fn_82412B58(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2[0xc];
  if ((*(int *)(param_3 + 0x1a0) != 0) || (iVar5 = 0, *(int *)(param_3 + 0x1e0) != 0)) {
    iVar5 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x200);
  *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x2a8) + *(float *)(param_1 + 0x20c);
  if (*(int *)(*param_2 + 0xcb8) == 0) goto LAB_82412c7c;
  iVar2 = param_2[0x20];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
LAB_82412c24:
      uVar3 = 4;
    }
    else if (iVar2 == 2) {
      uVar3 = 6;
    }
    else if (iVar2 == 3) {
      uVar3 = 7;
    }
    else if (iVar2 == 4) {
      uVar3 = 8;
    }
    else {
      if (iVar2 == 5) goto LAB_82412c24;
      if (iVar2 != 6) goto LAB_82412c64;
      uVar3 = 9;
    }
    *(undefined4 *)(param_1 + 0x200) = uVar3;
LAB_82412c64:
    *(undefined4 *)(param_1 + 0x2a4) = 1;
    goto LAB_82412cd8;
  }
  if (iVar4 == 1) {
    if (iVar1 == 0) goto LAB_82412cd8;
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x200) = 2;
      goto LAB_82412cd8;
    }
    iVar5 = *(int *)(iVar1 + 0x3c);
LAB_82412cc4:
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x200) = 3;
      uVar3 = fn_82418130();
      *(undefined4 *)(param_1 + 0x2d8) = uVar3;
    }
  }
  else {
    if (iVar4 == 2) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) == 0)) goto LAB_82412cc4;
    }
    else {
      if (iVar4 != 3) {
        if ((iVar4 != 4) && ((iVar4 < 6 || (9 < iVar4)))) goto LAB_82412cd8;
        *(undefined4 *)(param_1 + 0x200) = 1;
        goto LAB_82412c64;
      }
      if ((iVar1 != 0) && (iVar5 == 0)) goto LAB_82412cd8;
    }
LAB_82412c7c:
    *(undefined4 *)(param_1 + 0x200) = 1;
  }
LAB_82412cd8:
  uVar3 = lbl_821CC160;
  if (iVar4 != *(int *)(param_1 + 0x200)) {
    if (*(int *)(param_1 + 0x200) == 3) {
      *(undefined4 *)(param_1 + 0x280) = lbl_821CC160;
      *(undefined4 *)(param_1 + 0x284) = 1;
    }
    *(undefined4 *)(param_1 + 0x20c) = uVar3;
    *(undefined1 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  return;
}

