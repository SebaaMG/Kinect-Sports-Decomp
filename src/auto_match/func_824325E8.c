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
extern int fn_8242E3E0();
extern unsigned int lbl_821916F4;
extern unsigned int lbl_821958A0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C7AF8;
extern unsigned int lbl_831C7B88;
extern unsigned int lbl_831C7C18;
extern unsigned int lbl_831C7CA8;
extern unsigned int lbl_831C7D38;
extern unsigned int lbl_831C7DC8;
extern unsigned int lbl_831C7E58;
extern unsigned int lbl_831C7EE8;
extern unsigned int lbl_831C7F78;
extern unsigned int lbl_831C8008;
extern unsigned int lbl_831C8098;
extern unsigned int lbl_831C80B0;
extern unsigned int lbl_831C80B4;
extern unsigned int lbl_831C8104;


void fn_824325E8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  if ((-1 < param_2) && (param_2 < 2)) {
    *(int *)(*(int *)(param_1 + 0x244) + 0x94) = param_2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x9c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x244) + 0xa0) = 0;
  uVar1 = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0x244) + 0xa4) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x14) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x244) + 0x94) == 0) {
    iVar5 = *(int *)(param_1 + 0x244);
    iVar3 = *(int *)(iVar5 + 8);
    if (iVar3 == 1) {
      puVar4 = &lbl_831C7AF8;
    }
    else if (iVar3 == 2) {
      iVar3 = fn_8242E3E0(*(undefined4 *)(param_1 + 0x240));
      uVar1 = lbl_821958A0;
      iVar5 = *(int *)(param_1 + 0x244);
      if (iVar3 != 0) {
        *(undefined **)(iVar5 + 0x98) = &lbl_831C8098;
        lbl_831C8104 = uVar1;
        lbl_831C80B0 = lbl_821916F4;
        lbl_831C80B4 = lbl_821916F4;
        goto LAB_8243279c;
      }
      puVar4 = &lbl_831C8008;
    }
    else if (iVar3 == 3) {
      puVar4 = &lbl_831C7EE8;
    }
    else if (iVar3 == 5) {
      if (*(int *)(iVar5 + 0x60) == 0) {
        puVar4 = &lbl_831C7CA8;
      }
      else {
        puVar4 = &lbl_831C7C18;
      }
    }
    else {
      puVar4 = &lbl_831C7DC8;
    }
    *(undefined **)(iVar5 + 0x98) = puVar4;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x244) + 8);
    if (iVar5 == 1) {
      puVar4 = &lbl_831C7B88;
    }
    else if (iVar5 == 2) {
      puVar4 = &lbl_831C8098;
    }
    else if (iVar5 == 3) {
      puVar4 = &lbl_831C7F78;
    }
    else if (iVar5 == 5) {
      puVar4 = &lbl_831C7D38;
    }
    else {
      puVar4 = &lbl_831C7E58;
    }
    *(undefined **)(*(int *)(param_1 + 0x244) + 0x98) = puVar4;
  }
LAB_8243279c:
  *(int *)(*(int *)(param_1 + 0x244) + 0x94) = 1 - *(int *)(*(int *)(param_1 + 0x244) + 0x94);
  *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x18) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x244) + 0x98) + 0x68);
  iVar5 = *(int *)(*(int *)(param_1 + 0x244) + 0x98);
  iVar3 = *(int *)(*(int *)(param_1 + 0x240) + 0x94);
  uVar1 = *(undefined4 *)(iVar5 + 0x68);
  uVar2 = *(undefined4 *)(iVar5 + 0x70);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar5 + 0x6c);
    *(undefined4 *)(iVar3 + 0x28) = uVar2;
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
  }
  return;
}

