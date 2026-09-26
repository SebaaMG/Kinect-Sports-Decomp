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


uint fn_82A45350(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar2 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  puVar3 = puVar2;
  if ((*(uint *)(param_1 + 4) & 0x20000) == 0) {
    puVar3 = (uint *)puVar2[0x10];
  }
  if ((puVar3[1] & 0x80000000) == 0) {
    uVar4 = *puVar3 >> 0x16 & 0x1f;
  }
  else {
    uVar4 = *puVar3 >> 0x1b;
    uVar1 = puVar3[9] & 0x1f;
    if (uVar4 < uVar1) {
      uVar4 = ((*puVar3 >> 0x16 & 0x1f) - uVar1) + uVar4;
    }
    else {
      uVar4 = uVar4 - uVar1;
    }
  }
  return uVar4 * 0x100 - (uint)*(ushort *)((int)puVar2 + 0x52) >> (puVar3[1] >> 0x1d & 1) + 1;
}

