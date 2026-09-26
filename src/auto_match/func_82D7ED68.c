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
extern int fn_82D93708();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8213A16C;
extern unsigned int lbl_8213A1DC;
extern unsigned int lbl_8213A624;
extern unsigned int lbl_8213B28C;
extern unsigned int lbl_8213B304;
extern unsigned int lbl_8213B63C;
extern unsigned int lbl_8213CA2C;
extern unsigned int lbl_8213CD14;
extern unsigned int lbl_821415C4;


undefined4 * fn_82D7ED68(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  fn_82D93708();
  *param_1 = &lbl_821415C4;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((int)param_1 + 0xb2) = 0x8000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  puVar4 = param_1 + 0x38;
  param_1[0x2f] = 0x80000000;
  param_1[0x30] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x80000000;
  param_1[0x38] = &lbl_8213A16C;
  uVar2 = (undefined2)((uint)uVar1 >> 0x10);
  if (param_2 != 0) {
    *(undefined2 *)((int)param_1 + 0x1fe) = uVar2;
  }
  *puVar4 = &lbl_8213B63C;
  param_1[0x80] = 0;
  *(undefined2 *)(param_1 + 0x81) = 0;
  *(undefined2 *)((int)param_1 + 0x206) = 0x8000;
  param_1[0x82] = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  *(undefined2 *)((int)param_1 + 0x20e) = 0x8000;
  if ((param_2 != 0) && (uVar5 = (uint)*(byte *)(param_1 + 0x3a), uVar5 - 2 < 6)) {
    if (uVar5 == 3) {
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined2 *)((int)param_1 + 0x1fe) = uVar2;
        *puVar4 = &lbl_8213A1DC;
      }
    }
    else {
      if (uVar5 == 4) {
        if (puVar4 == (undefined4 *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213B28C;
      }
      else if (uVar5 == 5) {
        if (puVar4 == (undefined4 *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213B304;
      }
      else if (uVar5 == 6) {
        if (puVar4 == (undefined4 *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213CD14;
      }
      else if (uVar5 == 2) {
        if (puVar4 == (undefined4 *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213CA2C;
      }
      else {
        if (puVar4 == (undefined4 *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213A624;
      }
      *(undefined2 *)((int)param_1 + 0x1fe) = uVar2;
      *puVar4 = ppuVar3;
    }
  }
  return param_1;
}

