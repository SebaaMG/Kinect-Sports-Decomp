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


undefined8 fn_83039CE0(int param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  trapWord(6,param_3,0);
  *(undefined4 *)(param_1 + 0x48) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x20) = 0x10000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  bVar2 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  *(int *)(param_1 + 0x30) = (int)(48000 / (param_3 & 0xffffffff));
  *(float *)(param_1 + 0x44) = (float)*param_2 / (float)(param_3 & 0xffffffff);
  for (uVar3 = param_2[1] >> 0xe; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    bVar2 = bVar2 + 1;
  }
  uVar3 = (uint)bVar2;
  *(byte *)(param_1 + 0x4d) = bVar2;
  *(byte *)(param_1 + 0x4e) = (byte)(param_2[1] >> 3) & 0x1f;
  uVar1 = param_2[1] >> 8 & 0x3f;
  if (uVar1 == 8) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined1 *)(param_1 + 0x4c) = 5;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined1 *)(param_1 + 0x4c) = 4;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined1 *)(param_1 + 0x4c) = 7;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x4c) = 6;
      return 1;
    }
  }
  else if (uVar1 == 0x10) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(undefined1 *)(param_1 + 0x4c) = 0;
          *(undefined4 *)(param_1 + 0x40) = 0;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined1 *)(param_1 + 0x4c) = 3;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x4c) = 2;
      return 1;
    }
  }
  else if ((uVar1 == 0x20) && (uVar3 - 1 < 6)) {
    if (uVar3 == 2) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x4c) = 9;
      return 1;
    }
    if ((uVar3 != 3) && (uVar3 != 4)) {
      if ((uVar3 != 5) && (uVar3 == 1)) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined1 *)(param_1 + 0x4c) = 8;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x4c) = 0xb;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 10;
    return 1;
  }
  return 2;
}

