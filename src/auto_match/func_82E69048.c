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


void fn_82E69048(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x10) != 0x20) {
    iVar3 = -*(int *)(param_1 + 0x10);
    iVar6 = iVar3 + 0x20;
    if (0 < iVar6) {
      lVar5 = (ulonglong)(iVar3 + 0x1fU >> 3) + 1;
      uVar7 = -iVar6;
      do {
        uVar7 = uVar7 + 8;
        pbVar2 = *(byte **)(param_1 + 8);
        if (iVar6 < 8) {
          bVar1 = *(byte *)(param_1 + 0xc);
          bVar4 = (byte)((0xff >> (uVar7 & 0x3f)) << (uVar7 & 0x3f));
          *pbVar2 = *pbVar2 & ~bVar4;
          **(byte **)(param_1 + 8) = bVar1 & bVar4 | **(byte **)(param_1 + 8);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        else {
          *pbVar2 = *(byte *)(param_1 + 0xc);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        iVar6 = iVar6 + -8;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

