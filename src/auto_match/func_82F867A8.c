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


void fn_82F867A8(ushort *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar4 = 0x80000000;
  uVar1 = *param_2;
  uVar5 = *(ushort *)param_2 >> 4 & 0x7ff;
  uVar2 = param_2[1];
  uVar3 = *(ushort *)param_2 & 0x8000;
  if (uVar5 == 0) {
    if (((uVar1 & 0xfffff) == 0) && (uVar2 == 0)) {
      *param_1 = uVar3;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    uVar5 = 0x3c01;
    uVar4 = 0;
  }
  else if (uVar5 == 0x7ff) {
    uVar5 = 0x7fff;
  }
  else {
    uVar5 = uVar5 + 0x3c00;
  }
  *(uint *)(param_1 + 3) = uVar2 << 0xb;
  *(uint *)(param_1 + 1) = uVar2 >> 0x15 | (uVar1 & 0xfffff) << 0xb | uVar4;
  for (; uVar4 == 0; uVar4 = uVar4 & 0x40000000) {
    uVar1 = *(uint *)(param_1 + 3);
    uVar4 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 3) = uVar1 << 1;
    *(uint *)(param_1 + 1) = uVar1 >> 0x1f | uVar4 << 1;
    uVar5 = uVar5 - 1;
  }
  *param_1 = uVar3 | uVar5;
  return;
}

