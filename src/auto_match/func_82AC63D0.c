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


undefined8 fn_82AC63D0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(uint *)(param_2 + 0x30) ^ *(uint *)(param_1 + 0x30)) & 0x800000) == 0) {
    uVar1 = *(uint *)(param_2 + 0x4c);
    uVar2 = *(uint *)(param_1 + 0x4c);
    uVar3 = uVar2 >> 0x18 & 1;
    if (uVar3 != (uVar1 >> 0x18 & 1)) {
      return 0;
    }
    if (uVar3 != 0) {
      if (((uVar2 ^ uVar1) & 0x2000000) != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c)) {
        return 0;
      }
      if (((**(uint **)(param_2 + 0x48) ^ **(uint **)(param_1 + 0x48)) & 0x1ffe000) != 0) {
        return 0;
      }
      if (uVar3 != 0) {
        return 1;
      }
    }
    if (((uVar2 & 0x400000) == 0) || (((uVar2 ^ uVar1) & 0x800000) == 0)) {
      return 1;
    }
  }
  return 0;
}

