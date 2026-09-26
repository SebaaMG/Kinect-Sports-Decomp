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


undefined8 fn_8307DE78(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1[1] & 0x30000) != 0) {
    param_1[1] = param_1[1] | 0x10000;
    return 0;
  }
  uVar3 = 0;
  if (*param_1 != 0) {
    iVar4 = 0;
    do {
      uVar1 = *(ushort *)(param_1[2] + iVar4 + 0x50);
      uVar2 = 1 << (uVar1 & 0x1f);
      *(uint *)(((uVar1 >> 5) + 0x1ffa8690) * 4) =
           uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
      enforceInOrderExecutionIO();
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x60;
    } while (uVar3 < *param_1);
  }
  param_1[1] = param_1[1] | 0x10000;
  return 0;
}

