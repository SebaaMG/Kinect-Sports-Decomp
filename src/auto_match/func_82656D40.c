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


void fn_82656D40(int param_1,int param_2)

{
  uint uVar1;
  uint uVar3;
  ulonglong uVar2;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  
  uVar6 = param_2 + *(int *)(param_1 + 0x17c);
  uVar1 = *(uint *)(param_1 + 0x254) >> 0x14 & 0x3f;
  *(uint *)(param_1 + 0x17c) = uVar6;
  uVar4 = (*(ushort *)(param_1 + 0xe) + 0xac) * 0x200 + uVar6;
  if (uVar1 == (*(uint *)(param_1 + 0x254) >> 0xe & 0x3f) - 1) {
    uVar3 = *(uint *)(param_1 + 0x180);
  }
  else {
    uVar3 = 0xfff00000;
  }
  if (uVar6 <= uVar4) {
    if (uVar4 <= uVar3) {
      return;
    }
    if (uVar3 == 0) {
      return;
    }
  }
  *(uint *)((uVar1 + 0x2e) * 4 + param_1) = uVar6;
  uVar1 = *(uint *)(param_1 + 0x254);
  uVar2 = (ulonglong)(uVar1 >> 0xe) & 0x3f;
  uVar5 = ((ulonglong)(uVar1 >> 0x14) & 0x3f) + 1;
  trapWord(6,uVar2,0);
  uVar2 = uVar5 - (longlong)(int)(uVar5 / uVar2) * (longlong)(int)uVar2 & 0x3f;
  *(uint *)(param_1 + 0x254) = (uint)(uVar2 << 0x14) | uVar1 & 0xfc0fffff;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x17c) = 0x800;
    *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) | 0x20;
    return;
  }
  *(undefined4 *)(param_1 + 0x17c) = 0;
  return;
}

