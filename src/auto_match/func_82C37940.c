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


longlong fn_82C37940(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar4 = param_2 - *(int *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x18) & uVar4;
  iVar1 = ((*(uint *)(param_1 + 0x10) & uVar4) >> (*(uint *)(param_1 + 0x14) & 0x3f)) * 4;
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (longlong)*(int *)(*(int *)(param_1 + 8) + iVar1) * (longlong)(int)uVar5 +
           (ulonglong)*(uint *)(*(int *)(param_1 + 4) + iVar1);
  }
  puVar6 = (uint *)(iVar1 + *(int *)(param_1 + 4));
  uVar2 = 1 << (*(uint *)(param_1 + 0x14) & 0x3f);
  uVar4 = *puVar6;
  trapWord(6,(ulonglong)uVar2,0);
  uVar3 = (longlong)(int)(puVar6[1] - uVar4) * (longlong)(int)uVar5;
  trapWord(5,(ulonglong)uVar2 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  return (longlong)((int)uVar3 / (int)uVar2) + (ulonglong)uVar4;
}

