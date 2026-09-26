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


void fn_82F41ED8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  longlong lVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong lVar22;
  
  lVar19 = (longlong)(param_6 >> 2);
  if (0 < lVar19) {
    lVar21 = ((ulonglong)(uint)(param_2 + 0xf >> 4) & 0x3fffffff) << 2;
    do {
      if (0 < (int)lVar21) {
        pbVar17 = (byte *)(param_1 + -1);
        pbVar20 = (byte *)(param_1 + param_3 + 3);
        pbVar18 = (byte *)(param_3 * 3 + param_1 + 2);
        puVar16 = (undefined1 *)(param_4 + -1);
        lVar22 = lVar21;
        do {
          pbVar3 = pbVar20 + (-2 - param_3);
          pbVar4 = pbVar20 + (-3 - param_3);
          pbVar5 = pbVar20 + (-1 - param_3);
          pbVar6 = pbVar20 + -3;
          pbVar7 = pbVar20 + -2;
          pbVar8 = pbVar20 + -1;
          pbVar17 = pbVar17 + 4;
          pbVar9 = pbVar18 + (-2 - param_3);
          pbVar10 = pbVar18 + (-1 - param_3);
          pbVar11 = pbVar18 + (1 - param_3);
          bVar1 = *pbVar20;
          pbVar12 = pbVar18 + -1;
          pbVar13 = pbVar18 + -2;
          pbVar14 = pbVar20 + param_3 + -1;
          pbVar15 = pbVar18 + 1;
          bVar2 = *pbVar18;
          pbVar20 = pbVar20 + 4;
          pbVar18 = pbVar18 + 4;
          puVar16 = puVar16 + 1;
          *puVar16 = (char)((int)((uint)*pbVar13 + (uint)*pbVar12 + (uint)*pbVar15 + (uint)bVar2 +
                                 (uint)*pbVar9 + (uint)*pbVar10 + (uint)*pbVar11 + (uint)*pbVar14 +
                                 (uint)*pbVar6 + (uint)*pbVar7 + (uint)*pbVar8 + (uint)bVar1 +
                                 (uint)*pbVar3 + (uint)*pbVar4 + (uint)*pbVar5 + (uint)*pbVar17 + 8)
                           >> 4);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      lVar19 = lVar19 + -1;
      param_4 = param_4 + param_5;
      param_1 = param_3 * 4 + param_1;
    } while (lVar19 != 0);
  }
  return;
}

