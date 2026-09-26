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


void fn_82A2CA20(int param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  
  if (param_3 < param_3 + 0x1000) {
    pbVar6 = (byte *)(param_3 + 0x29);
    lVar4 = (ulonglong)(((param_3 + 0x1000) - param_3) - 1 >> 6) + 1;
    do {
      if ((pbVar6[-1] & 0x80) == 0) {
        uVar2 = ((ulonglong)*(uint *)(pbVar6 + 0xb) + 0xfff & 0xffffffff) >> 0xc;
        if (uVar2 < ((ulonglong)pbVar6[2] * 0x100 + (ulonglong)pbVar6[1]) * 0x100 +
                    (ulonglong)*pbVar6) {
          *pbVar6 = (byte)uVar2;
          pbVar6[1] = (byte)(uVar2 >> 8);
          pbVar6[2] = (byte)(uVar2 >> 0x10);
        }
      }
      pbVar6 = pbVar6 + 0x40;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar2 = (param_2 & 0xffffffff) >> 6;
  puVar5 = *(undefined4 **)(param_1 + 0x80);
  while (puVar5 != (undefined4 *)(param_1 + 0x80)) {
    iVar1 = puVar5[-0x12];
    puVar5 = (undefined4 *)*puVar5;
    if (((((*(byte *)(iVar1 + 0x35) & 2) == 0) && (uVar2 <= *(ushort *)(iVar1 + 0x36))) &&
        ((ulonglong)*(ushort *)(iVar1 + 0x36) < uVar2 + 0x40)) &&
       (uVar3 = *(int *)(iVar1 + 0x18) + 0xfffU & 0xfffff000, uVar3 < *(uint *)(iVar1 + 0x1c))) {
      *(uint *)(iVar1 + 0x1c) = uVar3;
    }
  }
  return;
}

