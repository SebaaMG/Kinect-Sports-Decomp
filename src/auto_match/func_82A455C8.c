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


undefined8 fn_82A455C8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  uVar3 = 1;
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  uVar5 = uVar2 >> 0x16 & 0x1f;
  param_3 = param_3 >> (7 - (uVar1 >> 0x1d & 1) & 0x3f);
  if (param_3 < uVar5) {
    uVar4 = ((uVar2 >> 0x1b) - param_3) + uVar5;
    if (uVar5 <= uVar4) {
      uVar4 = uVar4 - uVar5;
    }
  }
  else {
    uVar3 = 0;
    uVar4 = puVar6[2] & 0x3ffffff;
  }
  if (uVar2 >> 0x1b != uVar4) {
    puVar6[0xc] = 1;
    *puVar6 = uVar4 << 0x1b | uVar2 & 0x7ffffff;
  }
  if ((uVar1 & 0x80000000) == 0x80000000) {
    return uVar3;
  }
  puVar6[0xc] = 1;
  puVar6[1] = uVar1 | 0x80000000;
  return uVar3;
}

