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
extern unsigned int lbl_82196582;


ulonglong fn_8294A8A8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  iVar5 = *(int *)(param_1 * 4 + *(int *)(param_3 + 0x14));
  iVar6 = *(int *)(param_2 * 4 + *(int *)(param_3 + 0x14));
  uVar3 = *(uint *)(iVar5 + 0x60);
  uVar4 = *(uint *)(iVar6 + 0x60);
  pbVar9 = *(byte **)(uVar3 + 0x24);
  if (*(byte **)(uVar3 + 0x24) == (byte *)0x0) {
    pbVar9 = &lbl_82196582;
  }
  pbVar8 = &lbl_82196582;
  if (*(byte **)(uVar4 + 0x24) != (byte *)0x0) {
    pbVar8 = *(byte **)(uVar4 + 0x24);
  }
  do {
    bVar1 = *pbVar9;
    bVar2 = *pbVar8;
    iVar7 = (uint)bVar1 - (uint)bVar2;
    if (bVar1 == 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while ((uint)bVar1 == (uint)bVar2);
  if (0 < iVar7) {
    return 1;
  }
  if (-1 < iVar7) {
    pbVar9 = *(byte **)(*(int *)(uVar4 + 0x14) + 0x18);
    pbVar8 = *(byte **)(*(int *)(uVar3 + 0x14) + 0x18);
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar9;
      iVar7 = (uint)bVar1 - (uint)bVar2;
      if (bVar1 == 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while ((uint)bVar1 == (uint)bVar2);
    if (0 < iVar7) {
      return 1;
    }
    if (-1 < iVar7) {
      if (uVar4 < uVar3) {
        return 1;
      }
      if ((uVar4 <= uVar3) && (*(uint *)(iVar6 + 0x74) <= *(uint *)(iVar5 + 0x74))) {
        if (*(uint *)(iVar6 + 0x74) < *(uint *)(iVar5 + 0x74)) {
          return 1;
        }
        if (*(uint *)(iVar6 + 0x10) <= *(uint *)(iVar5 + 0x10)) {
          return -(ulonglong)(*(uint *)(iVar6 + 0x10) < *(uint *)(iVar5 + 0x10)) & 1;
        }
      }
    }
  }
  return 0xffffffffffffffff;
}

