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
extern int fn_822314E8();
extern int fn_82247000();
extern int fn_822471C8();
extern int fn_822A21A8();
extern int fn_82514888();
extern int fn_8251CC50();
extern int fn_825200A8();
extern int fn_8265CA20();
extern unsigned int lbl_831D12B8;
extern int (*lbl_83276794)();
extern unsigned int lbl_832960A0;
extern unsigned int lbl_8329618C;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82246C58(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar5;
  ulonglong uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    while (iVar1 = fn_82247000(iVar1), iVar1 < 5) {
      fn_822471C8(*(undefined4 *)(param_1 + 0x38),0);
      iVar1 = *(int *)(param_1 + 0x38);
    }
  }
  puVar3 = &lbl_832960A0;
  if (lbl_8329618C == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar1 != 0) {
    iVar5 = -0x7cd69f38;
    do {
      if (iVar1 == *(int *)(iVar5 + 4)) {
        iVar1 = *(int *)(iVar5 + 0x10);
        goto LAB_82246cec;
      }
      iVar5 = iVar5 + 0x30;
    } while (iVar5 < -0x7cd69e78);
    iVar1 = 2;
LAB_82246cec:
    if (iVar1 != 1) {
      puVar2 = (uint *)(param_1 + 0x4c);
      if (puVar2 == (uint *)0x0) {
        return;
      }
      uVar4 = (ulonglong)*puVar2;
      if (uVar4 == (uVar4 - 1) + (ulonglong)(uVar4 == 0)) {
        return;
      }
      iVar1 = fn_825200A8(puVar2,0xffffffff832960a0);
      if (iVar1 == 0) {
        return;
      }
      fn_8251CC50(1,1);
      *puVar3 = 0;
      uVar4 = (ulonglong)(uint)puVar3[0x3a];
      puVar3[0x3a] = 0;
      if (uVar4 == 0) {
        return;
      }
      fn_822314E8(uVar4 + 0x20);
      fn_8265CA20(uVar4);
      return;
    }
    if (lbl_83276794 == (code *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*lbl_83276794)();
    }
    if (iVar1 == 0) {
      return;
    }
    if ((lbl_831D12B8 != 0) && (iVar1 = fn_822A21A8(), iVar1 != 0)) {
      return;
    }
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  fn_82514888(&uStack_30);
  return;
}

