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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_82F68CC0();


undefined8 fn_82AA8BD0(int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(param_1 + 0xe8);
  lVar3 = ((ulonglong)*(uint *)(param_1 + 0x14) + 10 & 0x3fffffff) * 4 +
          (ulonglong)*(uint *)(param_1 + 0x24);
  uVar4 = (uint)lVar3;
  if ((int)puVar1[1] < (int)uVar4) {
    uVar2 = 0xfffffffffffffff5;
  }
  else {
    puVar1[2] = uVar4;
    if ((int)puVar1[1] < (int)(uVar4 + 0x44)) {
      uVar2 = 0xfffffffffffffff4;
    }
    else {
      fn_82F68CC0((byte *)(param_1 + 0x28),(ulonglong)*puVar1 + lVar3,0x44);
      uVar2 = 0;
      puVar1[2] = puVar1[2] + 0x44;
      *(uint *)(param_1 + 0x28) =
           (uint)*(byte *)(param_1 + 0x2b) << 0x18 | (uint)*(byte *)(param_1 + 0x2a) << 0x10 |
           (uint)*(byte *)(param_1 + 0x29) << 8 | (uint)*(byte *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x2c) =
           (uint)*(byte *)(param_1 + 0x2f) << 0x18 | (uint)*(byte *)(param_1 + 0x2e) << 0x10 |
           (uint)*(byte *)(param_1 + 0x2d) << 8 | (uint)*(byte *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x30) =
           (uint)*(byte *)(param_1 + 0x33) << 0x18 | (uint)*(byte *)(param_1 + 0x32) << 0x10 |
           (uint)*(byte *)(param_1 + 0x31) << 8 | (uint)*(byte *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x34) =
           (uint)*(byte *)(param_1 + 0x37) << 0x18 | (uint)*(byte *)(param_1 + 0x36) << 0x10 |
           (uint)*(byte *)(param_1 + 0x35) << 8 | (uint)*(byte *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x38) =
           (uint)*(byte *)(param_1 + 0x3b) << 0x18 | (uint)*(byte *)(param_1 + 0x3a) << 0x10 |
           (uint)*(byte *)(param_1 + 0x39) << 8 | (uint)*(byte *)(param_1 + 0x38);
      *(ushort *)(param_1 + 0x3c) =
           CONCAT11(*(undefined1 *)(param_1 + 0x3d),*(undefined1 *)(param_1 + 0x3c));
      *(ushort *)(param_1 + 0x3e) =
           CONCAT11(*(undefined1 *)(param_1 + 0x3f),*(undefined1 *)(param_1 + 0x3e));
      *(uint *)(param_1 + 0x40) =
           (uint)*(byte *)(param_1 + 0x43) << 0x18 | (uint)*(byte *)(param_1 + 0x42) << 0x10 |
           (uint)*(byte *)(param_1 + 0x41) << 8 | (uint)*(byte *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x44) =
           (uint)*(byte *)(param_1 + 0x47) << 0x18 | (uint)*(byte *)(param_1 + 0x46) << 0x10 |
           (uint)*(byte *)(param_1 + 0x45) << 8 | (uint)*(byte *)(param_1 + 0x44);
      *(uint *)(param_1 + 0x48) =
           (uint)*(byte *)(param_1 + 0x4b) << 0x18 | (uint)*(byte *)(param_1 + 0x4a) << 0x10 |
           (uint)*(byte *)(param_1 + 0x49) << 8 | (uint)*(byte *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x4c) =
           (uint)*(byte *)(param_1 + 0x4f) << 0x18 | (uint)*(byte *)(param_1 + 0x4e) << 0x10 |
           (uint)*(byte *)(param_1 + 0x4d) << 8 | (uint)*(byte *)(param_1 + 0x4c);
      *(uint *)(param_1 + 0x50) =
           (uint)*(byte *)(param_1 + 0x53) << 0x18 | (uint)*(byte *)(param_1 + 0x52) << 0x10 |
           (uint)*(byte *)(param_1 + 0x51) << 8 | (uint)*(byte *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x54) =
           (uint)*(byte *)(param_1 + 0x57) << 0x18 | (uint)*(byte *)(param_1 + 0x56) << 0x10 |
           (uint)*(byte *)(param_1 + 0x55) << 8 | (uint)*(byte *)(param_1 + 0x54);
      *(ushort *)(param_1 + 0x58) =
           CONCAT11(*(undefined1 *)(param_1 + 0x59),*(undefined1 *)(param_1 + 0x58));
      *(ushort *)(param_1 + 0x5a) =
           CONCAT11(*(undefined1 *)(param_1 + 0x5b),*(undefined1 *)(param_1 + 0x5a));
      *(ushort *)(param_1 + 0x5c) =
           CONCAT11(*(undefined1 *)(param_1 + 0x5d),*(undefined1 *)(param_1 + 0x5c));
      *(ushort *)(param_1 + 0x5e) =
           CONCAT11(*(undefined1 *)(param_1 + 0x5f),*(undefined1 *)(param_1 + 0x5e));
      *(ushort *)(param_1 + 0x60) =
           CONCAT11(*(undefined1 *)(param_1 + 0x61),*(undefined1 *)(param_1 + 0x60));
      *(ushort *)(param_1 + 0x62) =
           CONCAT11(*(undefined1 *)(param_1 + 99),*(undefined1 *)(param_1 + 0x62));
      *(uint *)(param_1 + 100) =
           (uint)*(byte *)(param_1 + 0x67) << 0x18 | (uint)*(byte *)(param_1 + 0x66) << 0x10 |
           (uint)*(byte *)(param_1 + 0x65) << 8 | (uint)*(byte *)(param_1 + 100);
      *(uint *)(param_1 + 0x68) =
           (uint)*(byte *)(param_1 + 0x6b) << 0x18 | (uint)*(byte *)(param_1 + 0x6a) << 0x10 |
           (uint)*(byte *)(param_1 + 0x69) << 8 | (uint)*(byte *)(param_1 + 0x68);
    }
  }
  return uVar2;
}

