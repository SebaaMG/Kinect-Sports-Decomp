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


void fn_82C81C38(int param_1,int *param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  
  uVar6 = 0;
  uVar5 = 0xff;
  iVar9 = -1;
  iVar2 = param_4 * 5;
  pbVar8 = (byte *)(param_4 * 2 + param_1 + -1);
  do {
    pbVar7 = (byte *)((param_1 - param_4) + iVar9);
    pbVar10 = pbVar8 + param_4;
    pbVar4 = (byte *)(param_1 + param_4 + iVar9);
    lVar11 = 2;
    pbVar3 = pbVar8;
    do {
      bVar1 = *pbVar7;
      if (uVar6 < bVar1) {
        uVar6 = (uint)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (uint)bVar1;
      }
      bVar1 = pbVar7[param_4];
      if (uVar6 < bVar1) {
        uVar6 = (uint)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (uint)bVar1;
      }
      bVar1 = *pbVar4;
      if (uVar6 < bVar1) {
        uVar6 = (uint)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (uint)bVar1;
      }
      bVar1 = *pbVar3;
      if (uVar6 < bVar1) {
        uVar6 = (uint)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (uint)bVar1;
      }
      bVar1 = *pbVar10;
      if (uVar6 < bVar1) {
        uVar6 = (uint)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (uint)bVar1;
      }
      pbVar7 = pbVar7 + iVar2;
      pbVar4 = pbVar4 + iVar2;
      pbVar3 = pbVar3 + iVar2;
      pbVar10 = pbVar10 + iVar2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar9 = iVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (iVar9 < 9);
  *param_2 = (int)(uVar5 + uVar6 + 1) >> 1;
  *param_3 = uVar6 - uVar5;
  return;
}

