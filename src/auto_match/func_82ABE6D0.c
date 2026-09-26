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


uint fn_82ABE6D0(uint param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((param_1 & 0xfffffffe) + 0x28);
  if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
    if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
       (uVar4 = *(uint *)(param_1 + 0x14) & 0x1fff, uVar4 != 0x1fff)) {
      uVar3 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
      if ((uVar3 == 0) || (bVar2 = true, 0x1f < uVar3)) {
        bVar2 = false;
      }
      if (bVar2) {
        if (((*(byte *)(uVar1 + 0x10) & 1) != 0) && ((*(uint *)(uVar1 + 0x14) & 0x1fff) == uVar4)) {
          uVar4 = *(uint *)(uVar1 + 8) >> 7 & 0x7f;
          if ((uVar4 < 0x20) || (bVar2 = true, 0x52 < uVar4)) {
            bVar2 = false;
          }
          if (bVar2) {
            return uVar1;
          }
        }
      }
    }
  }
  return 0;
}

