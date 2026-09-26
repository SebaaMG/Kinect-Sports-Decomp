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
extern int fn_82F68CC0();


undefined8 fn_82AA8E20(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  puVar4 = *(uint **)(param_1 + 0xe8);
  lVar6 = ((ulonglong)*(uint *)(param_1 + 0x14) + 0x1b & 0x3fffffff) * 4 +
          (ulonglong)*(uint *)(param_1 + 0x68) + (ulonglong)*(uint *)(param_1 + 0x24);
  uVar7 = (uint)lVar6;
  if ((int)puVar4[1] < (int)uVar7) {
    uVar1 = 0xfffffffffffffff5;
  }
  else {
    puVar4[2] = uVar7;
    if ((int)puVar4[1] < (int)(*(int *)(param_1 + 0x30) * 4 + uVar7)) {
      uVar1 = 0xfffffffffffffff4;
    }
    else {
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x70),(ulonglong)*puVar4 + lVar6);
      uVar3 = 0;
      puVar4[2] = *(int *)(param_1 + 0x30) * 4 + puVar4[2];
      uVar7 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar2 = 0;
        do {
          uVar3 = uVar3 + 1;
          puVar4 = (uint *)(iVar2 + *(int *)(param_1 + 0x70));
          iVar2 = iVar2 + 4;
          *puVar4 = (uint)(byte)*puVar4 << 0x18 | (uint)*(byte *)((int)puVar4 + 2) << 0x10 |
                    (uint)*(byte *)((int)puVar4 + 1) << 8 | (uint)*(byte *)puVar4;
          uVar7 = *(uint *)(param_1 + 0x30);
        } while (uVar3 < uVar7);
      }
      iVar2 = 0;
      lVar6 = ((ulonglong)uVar7 & 0x3fffffff) * 4 + lVar6;
      if (0 < (int)uVar7) {
        iVar5 = 0;
        do {
          iVar2 = iVar2 + 1;
          *(int *)(iVar5 + *(int *)(param_1 + 0x74)) = (int)lVar6;
          puVar4 = (uint *)(iVar5 + *(int *)(param_1 + 0x70));
          iVar5 = iVar5 + 4;
          lVar6 = (ulonglong)*puVar4 + lVar6;
        } while (iVar2 < *(int *)(param_1 + 0x30));
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

