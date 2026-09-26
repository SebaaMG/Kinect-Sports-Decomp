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


undefined8
fn_82C2ECD8(int param_1,int param_2,ulonglong param_3,undefined8 param_4,int param_5,
             ulonglong param_6,longlong param_7)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  uVar4 = 0;
  uVar1 = (int)uVar2 / (int)param_3;
  trapWord(6,param_3,0);
  trapWord(5,param_3 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),
           0xffff);
  uVar5 = uVar1;
  while (1 < uVar5) {
    uVar4 = uVar4 + 1;
    uVar5 = uVar1 >> (uVar4 & 0x3f);
  }
  uVar1 = (int)uVar2 / (int)param_6;
  trapWord(6,param_6,0);
  uVar5 = 0;
  trapWord(5,param_6 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),
           0xffff);
  uVar2 = uVar1;
  while (1 < uVar2) {
    uVar5 = uVar5 + 1;
    uVar2 = uVar1 >> (uVar5 & 0x3f);
  }
  iVar7 = 0;
  if (0 < (int)param_7) {
    puVar6 = (undefined4 *)(param_5 + -4);
    do {
      pbVar3 = (byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x15c) + uVar5 * 4) + uVar4 * 4) +
                       iVar7);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *(undefined4 *)((uint)*pbVar3 * 4 + param_2);
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return 0;
}

