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


void fn_827CF198(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  byte *pbVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  
  uVar18 = *(uint *)(param_1 + 0xdc);
  uVar19 = (ulonglong)uVar18;
  uVar4 = *(uint *)(param_1 + 0xd8);
  uVar5 = *(uint *)(param_2 + 0xc);
  uVar6 = *(uint *)(param_2 + 8);
  uVar7 = *(uint *)(param_2 + 0x1c);
  iVar1 = (int)uVar18 / (int)uVar5;
  iVar2 = (int)uVar4 / (int)uVar6;
  uVar8 = *(uint *)(param_1 + 0x1c);
  lVar22 = ((ulonglong)uVar7 & 0x1fffffff) << 3;
  uVar23 = (longlong)iVar1 * (longlong)iVar2;
  trapWord(6,(ulonglong)uVar6,0);
  trapWord(6,(ulonglong)uVar5,0);
  iVar24 = (int)uVar23;
  uVar17 = (longlong)iVar2 * (longlong)(int)lVar22 - (ulonglong)uVar8;
  trapWord(5,(ulonglong)uVar6 &
             ~((((ulonglong)uVar4 & 0x7fffffff) << 1 | (ulonglong)(uVar4 >> 0x1f)) - 1),0xffff);
  trapWord(5,(ulonglong)uVar5 &
             ~((((ulonglong)uVar18 & 0x7fffffff) << 1 | (ulonglong)(uVar18 >> 0x1f)) - 1),0xffff);
  if ((0 < (longlong)uVar17) && (0 < (int)uVar18)) {
    puVar13 = (uint *)(param_3 + -1);
    do {
      puVar13 = puVar13 + 1;
      lVar16 = (ulonglong)*puVar13 + (ulonglong)uVar8;
      lVar10 = lVar16 + -1;
      uVar3 = *(undefined1 *)((int)lVar16 + -1);
      uVar25 = uVar17;
      uVar9 = uVar17 & 0xffffffff;
      while (uVar9 != 0) {
        lVar10 = lVar10 + 1;
        *(undefined1 *)lVar10 = uVar3;
        uVar25 = uVar25 - 1;
        uVar9 = uVar25;
      }
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  iVar21 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      iVar15 = 0;
      if ((uVar7 & 0x1fffffff) != 0) {
        puVar11 = (undefined1 *)(*param_4 + -1);
        lVar10 = lVar22;
        do {
          iVar12 = 0;
          lVar16 = (longlong)iVar1;
          piVar14 = param_3;
          if (0 < iVar1) {
            do {
              if (0 < iVar2) {
                pbVar20 = (byte *)(*piVar14 + iVar15 + -1);
                iVar26 = iVar2;
                do {
                  pbVar20 = pbVar20 + 1;
                  iVar12 = (uint)*pbVar20 + iVar12;
                  iVar26 = iVar26 + -1;
                } while (iVar26 != 0);
              }
              lVar16 = lVar16 + -1;
              piVar14 = piVar14 + 1;
            } while (lVar16 != 0);
          }
          uVar18 = iVar12 + (iVar24 >> 1) + (uint)(iVar24 < 0 && (uVar23 & 1) != 0);
          lVar10 = lVar10 + -1;
          trapWord(6,uVar23,0);
          puVar11 = puVar11 + 1;
          *puVar11 = (char)((int)uVar18 / iVar24);
          iVar15 = iVar15 + iVar2;
          trapWord(5,uVar23 & ~((((ulonglong)uVar18 & 0x7fffffff) << 1 | (ulonglong)(uVar18 >> 0x1f)
                                ) - 1),0xffff);
        } while (lVar10 != 0);
      }
      iVar21 = iVar21 + 1;
      param_3 = param_3 + iVar1;
      param_4 = param_4 + 1;
    } while (iVar21 < *(int *)(param_2 + 0xc));
  }
  return;
}

