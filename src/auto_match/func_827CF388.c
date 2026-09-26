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


void fn_827CF388(int param_1,int param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  uVar10 = *(uint *)(param_1 + 0x1c);
  uVar11 = (ulonglong)*(uint *)(param_1 + 0xdc);
  uVar7 = ((ulonglong)uVar2 & 0xfffffff) * 0x10 - (ulonglong)uVar10;
  if ((0 < (longlong)uVar7) && (0 < (int)*(uint *)(param_1 + 0xdc))) {
    puVar9 = (uint *)(param_3 + -1);
    do {
      puVar9 = puVar9 + 1;
      lVar12 = (ulonglong)*puVar9 + (ulonglong)uVar10;
      lVar5 = lVar12 + -1;
      uVar1 = *(undefined1 *)((int)lVar12 + -1);
      uVar15 = uVar7;
      uVar4 = uVar7 & 0xffffffff;
      while (uVar4 != 0) {
        lVar5 = lVar5 + 1;
        *(undefined1 *)lVar5 = uVar1;
        uVar15 = uVar15 - 1;
        uVar4 = uVar15;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  iVar14 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    param_4 = param_4 - (int)param_3;
    do {
      uVar10 = 0;
      if ((uVar2 & 0x1fffffff) != 0) {
        pbVar13 = (byte *)(*param_3 + -1);
        puVar8 = (undefined1 *)(*(int *)(param_4 + (int)param_3) + -1);
        lVar5 = ((ulonglong)uVar2 & 0x1fffffff) << 3;
        do {
          pbVar3 = pbVar13 + 1;
          pbVar13 = pbVar13 + 2;
          iVar6 = (uint)*pbVar3 + (uint)*pbVar13 + uVar10;
          uVar10 = uVar10 ^ 1;
          puVar8 = puVar8 + 1;
          *puVar8 = (char)(iVar6 >> 1);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      iVar14 = iVar14 + 1;
      param_3 = param_3 + 1;
    } while (iVar14 < *(int *)(param_2 + 0xc));
  }
  return;
}

