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


void fn_827CF458(int param_1,int param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  int iVar16;
  ulonglong uVar17;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  uVar10 = *(uint *)(param_1 + 0x1c);
  uVar13 = (ulonglong)*(uint *)(param_1 + 0xdc);
  uVar9 = ((ulonglong)uVar2 & 0xfffffff) * 0x10 - (ulonglong)uVar10;
  if ((0 < (longlong)uVar9) && (0 < (int)*(uint *)(param_1 + 0xdc))) {
    puVar11 = (uint *)(param_3 + -1);
    do {
      puVar11 = puVar11 + 1;
      lVar14 = (ulonglong)*puVar11 + (ulonglong)uVar10;
      lVar6 = lVar14 + -1;
      uVar1 = *(undefined1 *)((int)lVar14 + -1);
      uVar17 = uVar9;
      uVar5 = uVar9 & 0xffffffff;
      while (uVar5 != 0) {
        lVar6 = lVar6 + 1;
        *(undefined1 *)lVar6 = uVar1;
        uVar17 = uVar17 - 1;
        uVar5 = uVar17;
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  iVar16 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      uVar10 = 1;
      if ((uVar2 & 0x1fffffff) != 0) {
        pbVar15 = (byte *)(param_3[1] + -1);
        pbVar12 = (byte *)(*param_3 + -1);
        puVar8 = (undefined1 *)(*param_4 + -1);
        lVar6 = ((ulonglong)uVar2 & 0x1fffffff) << 3;
        do {
          pbVar3 = pbVar15 + 1;
          pbVar15 = pbVar15 + 2;
          pbVar4 = pbVar12 + 1;
          pbVar12 = pbVar12 + 2;
          iVar7 = (uint)*pbVar3 + (uint)*pbVar15 + (uint)*pbVar4 + (uint)*pbVar12 + uVar10;
          uVar10 = uVar10 ^ 3;
          puVar8 = puVar8 + 1;
          *puVar8 = (char)(iVar7 >> 2);
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      iVar16 = iVar16 + 1;
      param_3 = param_3 + 2;
      param_4 = param_4 + 1;
    } while (iVar16 < *(int *)(param_2 + 0xc));
  }
  return;
}

