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


void fn_82C9CF48(int param_1,int param_2,int param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  char cVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  if (0 < (int)param_4) {
    pbVar17 = (byte *)(param_1 + 5);
    pbVar18 = (byte *)(param_1 + 4);
    pbVar19 = (byte *)(param_1 + 7);
    pbVar20 = (byte *)(param_1 + 8);
    pbVar21 = (byte *)(param_1 + 1);
    pbVar6 = (byte *)(param_1 + 2);
    pbVar16 = (byte *)(param_1 + 6);
    pbVar5 = (byte *)(param_1 + 3);
    do {
      bVar1 = *pbVar18;
      bVar2 = *pbVar17;
      uVar10 = (ulonglong)bVar1 - (ulonglong)bVar2;
      iVar8 = (int)uVar10;
      uVar15 = (longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (uVar10 & 1) != 0);
      if (uVar15 != 0) {
        iVar8 = (int)((((ulonglong)*pbVar5 - (ulonglong)*pbVar16) + 2 & 0xffffffff) << 1) -
                (iVar8 + (int)((uVar10 & 0xffffffff) << 2));
        uVar3 = iVar8 >> 3;
        if ((((longlong)(int)uVar3 ^ uVar15) & 0x80000000) != 0) {
          uVar4 = iVar8 >> 0x1f;
          iVar8 = (uVar3 ^ uVar4) - uVar4;
          if (iVar8 < param_3) {
            uVar12 = (ulonglong)*pbVar5 - (ulonglong)*pbVar6;
            uVar10 = (ulonglong)*pbVar19 - (ulonglong)*pbVar16;
            iVar9 = (int)((((ulonglong)*pbVar21 - (ulonglong)bVar1) + 2 & 0xffffffff) << 1) +
                    (int)uVar12 + (int)((uVar12 & 0xffffffff) << 2);
            iVar7 = (int)((((ulonglong)bVar2 - (ulonglong)*pbVar20) + 2 & 0xffffffff) << 1) +
                    (int)uVar10 + (int)((uVar10 & 0xffffffff) << 2);
            uVar3 = iVar7 >> 0x1f;
            uVar4 = iVar9 >> 0x1f;
            iVar7 = (iVar7 >> 3 ^ uVar3) - uVar3;
            iVar9 = (iVar9 >> 3 ^ uVar4) - uVar4;
            if (iVar9 < iVar7) {
              iVar7 = iVar9;
            }
            if (iVar7 < iVar8) {
              iVar8 = (iVar8 - iVar7) * 5 >> 3;
              uVar10 = (ulonglong)((int)uVar15 >> 0x1f);
              lVar11 = (uVar15 ^ uVar10) - uVar10;
              lVar13 = (longlong)iVar8;
              if ((int)lVar11 <= iVar8) {
                lVar13 = lVar11;
              }
              cVar14 = (char)lVar13;
              if (bVar1 < bVar2) {
                cVar14 = -cVar14;
              }
              *pbVar18 = bVar1 - cVar14;
              *pbVar17 = cVar14 + bVar2;
            }
          }
        }
      }
      pbVar5 = pbVar5 + param_2;
      pbVar16 = pbVar16 + param_2;
      pbVar6 = pbVar6 + param_2;
      pbVar21 = pbVar21 + param_2;
      pbVar20 = pbVar20 + param_2;
      pbVar19 = pbVar19 + param_2;
      pbVar18 = pbVar18 + param_2;
      pbVar17 = pbVar17 + param_2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

