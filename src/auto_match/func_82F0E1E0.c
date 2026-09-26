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
extern unsigned int lbl_831AEA20;
extern unsigned int lbl_831AEC68;
extern unsigned int lbl_831AEEB0;
extern unsigned int lbl_831AF0F8;
extern unsigned int lbl_831AF340;
extern unsigned int lbl_831AF598;
extern unsigned int lbl_831AF7F0;
extern unsigned int lbl_831AFA48;


void fn_82F0E1E0(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x1b14);
  uVar3 = *(uint *)(param_1 + 0x1b18);
  uVar6 = uVar2;
  if (uVar3 < uVar2) {
    uVar6 = uVar3;
  }
  uVar4 = (ulonglong)(uVar3 < uVar2);
  if (*(uint *)(param_1 + 0x1b1c) < uVar6) {
    uVar4 = 2;
    uVar6 = *(uint *)(param_1 + 0x1b1c);
  }
  if (*(uint *)(param_1 + 0x1b20) < uVar6) {
    uVar4 = 3;
  }
  uVar2 = *(uint *)(param_1 + 0x7954);
  if ((uVar2 != 0xffffffff) && (uVar4 = (ulonglong)uVar2 - 4, (int)uVar2 < 4)) {
    uVar4 = (ulonglong)uVar2;
  }
  if ((uVar4 & 0xffffffff) < 4) {
    bVar1 = (int)uVar4 != 0;
    if (uVar4 == 1 && bVar1) {
      *(undefined4 *)(param_1 + 0x5164) = 1;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AEC68;
      }
      else {
        puVar5 = &lbl_831AF598;
      }
    }
    else if (uVar4 == 2 && bVar1) {
      *(undefined4 *)(param_1 + 0x5164) = 2;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AEEB0;
      }
      else {
        puVar5 = &lbl_831AF7F0;
      }
    }
    else if (bVar1) {
      *(undefined4 *)(param_1 + 0x5164) = 3;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AF0F8;
      }
      else {
        puVar5 = &lbl_831AFA48;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x5164) = 0;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AEA20;
      }
      else {
        puVar5 = &lbl_831AF340;
      }
    }
    *(undefined **)(param_1 + 0x5150) = puVar5;
  }
  *(int *)(param_1 + 0x51a0) = *(int *)(param_1 + 0x5164) * 0x2000 + -0x7ce604e8;
  if (*(int *)(param_1 + 0xaf0) == 1) {
    *(undefined4 *)(param_1 + 0x5158) = *(undefined4 *)(param_1 + 0x5150);
    return;
  }
  *(undefined4 *)(param_1 + 0x515c) = *(undefined4 *)(param_1 + 0x5150);
  return;
}

