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


void fn_827CF548(int param_1,int param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  
  uVar2 = *(uint *)(param_2 + 0x1c);
  uVar3 = *(uint *)(param_1 + 0x1c);
  lVar15 = (ulonglong)*(uint *)(param_1 + 0xdc) + 2;
  uVar14 = ((ulonglong)uVar2 & 0xfffffff) * 0x10 - (ulonglong)uVar3;
  if ((0 < (longlong)uVar14) && (0 < (int)lVar15)) {
    puVar13 = (uint *)(param_3 + -8);
    do {
      puVar13 = puVar13 + 1;
      lVar16 = (ulonglong)*puVar13 + (ulonglong)uVar3;
      lVar12 = lVar16 + -1;
      uVar1 = *(undefined1 *)((int)lVar16 + -1);
      uVar19 = uVar14;
      uVar10 = uVar14 & 0xffffffff;
      while (uVar10 != 0) {
        lVar12 = lVar12 + 1;
        *(undefined1 *)lVar12 = uVar1;
        uVar19 = uVar19 - 1;
        uVar10 = uVar19;
      }
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  iVar17 = 0;
  iVar18 = *(int *)(param_1 + 0xb4) * -0x50 + 0x4000;
  iVar9 = *(int *)(param_1 + 0xb4) * 0x10;
  if (0 < *(int *)(param_2 + 0xc)) {
    uVar14 = ((ulonglong)uVar2 & 0x1fffffff) * 8 - 2;
    puVar11 = (undefined4 *)(param_3 + -4);
    do {
      pbVar4 = (byte *)puVar11[1];
      pbVar5 = (byte *)*puVar11;
      pbVar6 = (byte *)puVar11[3];
      puVar7 = (undefined1 *)*param_4;
      pbVar8 = (byte *)puVar11[2];
      *puVar7 = (char)((((uint)pbVar6[1] + (uint)pbVar5[1] + (uint)pbVar4[2] + (uint)pbVar8[2] +
                         (uint)*pbVar4 + (uint)*pbVar8 + (uint)*pbVar5 + (uint)*pbVar6) * 2 +
                        (uint)pbVar5[2] + (uint)pbVar6[2] + (uint)*pbVar5 + (uint)*pbVar6) * iVar9 +
                       ((uint)pbVar8[1] + (uint)pbVar4[1] + (uint)*pbVar4 + (uint)*pbVar8) * iVar18
                       + 0x8000 >> 0x10);
      uVar19 = uVar14;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
      uVar10 = uVar14 & 0xffffffff;
      while( true ) {
        puVar7 = puVar7 + 1;
        pbVar4 = pbVar4 + 2;
        if (uVar10 == 0) break;
        *puVar7 = (char)((((uint)pbVar6[1] + (uint)pbVar5[1] + (uint)pbVar8[-1] + (uint)pbVar4[-1] +
                           (uint)*pbVar6 + (uint)*pbVar5 + (uint)pbVar4[2] + (uint)pbVar8[2]) * 2 +
                          (uint)pbVar6[-1] + (uint)pbVar5[-1] + (uint)pbVar5[2] + (uint)pbVar6[2]) *
                         iVar9 + ((uint)pbVar8[1] + (uint)pbVar4[1] + (uint)*pbVar8 + (uint)*pbVar4)
                                 * iVar18 + 0x8000 >> 0x10);
        uVar19 = uVar19 - 1;
        pbVar8 = pbVar8 + 2;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
        uVar10 = uVar19;
      }
      iVar17 = iVar17 + 1;
      param_4 = param_4 + 1;
      *puVar7 = (char)((((uint)pbVar8[-1] + (uint)pbVar4[-1] + (uint)*pbVar6 + (uint)*pbVar5 +
                         (uint)pbVar4[1] + (uint)pbVar8[1] + (uint)pbVar5[1] + (uint)pbVar6[1]) * 2
                        + (uint)pbVar6[-1] + (uint)pbVar5[-1] + (uint)pbVar5[1] + (uint)pbVar6[1]) *
                       iVar9 + ((uint)*pbVar8 + (uint)*pbVar4 + (uint)pbVar4[1] + (uint)pbVar8[1]) *
                               iVar18 + 0x8000 >> 0x10);
      puVar11 = puVar11 + 2;
    } while (iVar17 < *(int *)(param_2 + 0xc));
  }
  return;
}

