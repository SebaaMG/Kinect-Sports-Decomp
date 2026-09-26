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


undefined8 fn_82996A48(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x2c) = 0x18;
  *(undefined4 *)(param_1 + 0x38) = 8;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 100) = 0x40;
  *(uint *)(param_1 + 0x6c) = uVar1 & 0xbdffffff | 0x289a4734;
  uVar2 = *(uint *)(param_1 + 200) & 0xffff;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x8000000;
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0x100;
  if (uVar2 == 0x104) {
    *(undefined4 *)(param_1 + 0x44) = 8;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 6;
    *(undefined4 *)(param_1 + 0x4c) = 6;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xadffc77f | 0x2c9fc734;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 2;
    *(undefined4 *)(param_1 + 0x3c) = 4;
    *(undefined4 *)(param_1 + 0x4c) = 4;
    *(undefined4 *)(param_1 + 0x44) = 6;
    *(uint *)(param_1 + 0x6c) =
         (uint)(uVar2 == 0x101) << 0xd | uVar1 & 0xbdfa5fff | 0x289a4734 | 0x14001882;
  }
  return 0;
}

