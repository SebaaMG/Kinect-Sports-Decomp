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
extern unsigned int lbl_831AE520;
extern unsigned int lbl_831AE620;
extern unsigned int lbl_831AE660;
extern unsigned int lbl_831AE760;
extern unsigned int lbl_831AE7A0;
extern unsigned int lbl_831AE8A0;
extern unsigned int lbl_831AE8E0;
extern unsigned int lbl_831AE9E0;


void fn_82F0E0D8(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1b24);
  uVar3 = *(uint *)(param_1 + 0x1b28);
  uVar5 = uVar2;
  if (uVar3 < uVar2) {
    uVar5 = uVar3;
  }
  uVar4 = (ulonglong)(uVar3 < uVar2);
  if (*(uint *)(param_1 + 0x1b2c) < uVar5) {
    uVar4 = 2;
    uVar5 = *(uint *)(param_1 + 0x1b2c);
  }
  if (*(uint *)(param_1 + 0x1b30) < uVar5) {
    uVar4 = 3;
  }
  uVar2 = *(uint *)(param_1 + 0x7958);
  if ((uVar2 != 0xffffffff) && (uVar4 = (ulonglong)uVar2 - 4, (int)uVar2 < 4)) {
    uVar4 = (ulonglong)uVar2;
  }
  if (3 < (uVar4 & 0xffffffff)) {
    return;
  }
  bVar1 = (int)uVar4 != 0;
  if (uVar4 == 1 && bVar1) {
    *(undefined **)(param_1 + 0x5140) = &lbl_831AE660;
    *(undefined **)(param_1 + 0x5144) = &lbl_831AE760;
    *(undefined4 *)(param_1 + 0x5160) = 1;
    return;
  }
  if (uVar4 != 2 || !bVar1) {
    if (!bVar1) {
      *(undefined **)(param_1 + 0x5140) = &lbl_831AE520;
      *(undefined **)(param_1 + 0x5144) = &lbl_831AE620;
      *(undefined4 *)(param_1 + 0x5160) = 0;
      return;
    }
    *(undefined **)(param_1 + 0x5140) = &lbl_831AE8E0;
    *(undefined **)(param_1 + 0x5144) = &lbl_831AE9E0;
    *(undefined4 *)(param_1 + 0x5160) = 3;
    return;
  }
  *(undefined **)(param_1 + 0x5140) = &lbl_831AE7A0;
  *(undefined **)(param_1 + 0x5144) = &lbl_831AE8A0;
  *(undefined4 *)(param_1 + 0x5160) = 2;
  return;
}

