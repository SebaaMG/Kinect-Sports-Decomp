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
extern unsigned int lbl_821AAD20;


undefined8
fn_83026A78(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,undefined2 param_5,
             ulonglong param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_4;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xba) = 1;
  *(undefined2 *)(param_1 + 0xbe) = param_5;
  trapWord(6,param_6,0);
  *(undefined4 *)(param_1 + 0x58) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x30) = 0x10000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  bVar2 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  *(int *)(param_1 + 0x40) = (int)(48000 / (param_6 & 0xffffffff));
  *(float *)(param_1 + 0x54) = (float)*param_3 / (float)(param_6 & 0xffffffff);
  for (uVar3 = param_3[1] >> 0xe; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    bVar2 = bVar2 + 1;
  }
  uVar3 = (uint)bVar2;
  *(byte *)(param_1 + 0x5d) = bVar2;
  *(byte *)(param_1 + 0x5e) = (byte)(param_3[1] >> 3) & 0x1f;
  uVar1 = param_3[1] >> 8 & 0x3f;
  if (uVar1 == 8) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x5c) = 5;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined1 *)(param_1 + 0x5c) = 4;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x5c) = 7;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x5c) = 6;
      return 1;
    }
  }
  else if (uVar1 == 0x10) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(undefined1 *)(param_1 + 0x5c) = 1;
        *(undefined4 *)(param_1 + 0x50) = 0;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(undefined1 *)(param_1 + 0x5c) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x5c) = 3;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x5c) = 2;
      return 1;
    }
  }
  else if ((uVar1 == 0x20) && (uVar3 - 1 < 6)) {
    if (uVar3 == 2) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x5c) = 9;
      return 1;
    }
    if ((uVar3 != 3) && (uVar3 != 4)) {
      if ((uVar3 != 5) && (uVar3 == 1)) {
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x5c) = 8;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x5c) = 0xb;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 10;
    return 1;
  }
  return 2;
}

