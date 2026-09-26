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


void fn_82C9CDC8(byte *param_1,uint param_2,int param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  char cVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  byte *pbVar18;
  
  if (0 < (int)param_4) {
    pbVar13 = param_1 + -param_2;
    pbVar18 = param_1 + param_2 * 2;
    pbVar16 = param_1 + (param_2 & 0x7fffffff) * -2;
    pbVar15 = param_1 + param_2 * -3;
    pbVar14 = param_1 + (param_2 & 0x3fffffff) * -4;
    do {
      bVar1 = *pbVar13;
      bVar2 = *param_1;
      uVar8 = (ulonglong)bVar1 - (ulonglong)bVar2;
      iVar5 = (int)uVar8;
      uVar17 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (uVar8 & 1) != 0);
      if (uVar17 != 0) {
        iVar5 = (int)((((ulonglong)*pbVar16 - (ulonglong)param_1[param_2]) + 2 & 0xffffffff) << 1) -
                (iVar5 + (int)((uVar8 & 0xffffffff) << 2));
        uVar3 = iVar5 >> 3;
        if ((((longlong)(int)uVar3 ^ uVar17) & 0x80000000) != 0) {
          uVar4 = iVar5 >> 0x1f;
          iVar5 = (uVar3 ^ uVar4) - uVar4;
          if (iVar5 < param_3) {
            uVar8 = (ulonglong)*pbVar16 - (ulonglong)*pbVar15;
            uVar10 = (ulonglong)*pbVar18 - (ulonglong)param_1[param_2];
            iVar7 = (int)((((ulonglong)*pbVar14 - (ulonglong)bVar1) + 2 & 0xffffffff) << 1) +
                    (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2);
            iVar6 = (int)((((ulonglong)bVar2 - (ulonglong)pbVar18[param_2]) + 2 & 0xffffffff) << 1)
                    + (int)uVar10 + (int)((uVar10 & 0xffffffff) << 2);
            uVar3 = iVar6 >> 0x1f;
            uVar4 = iVar7 >> 0x1f;
            iVar6 = (iVar6 >> 3 ^ uVar3) - uVar3;
            iVar7 = (iVar7 >> 3 ^ uVar4) - uVar4;
            if (iVar7 < iVar6) {
              iVar6 = iVar7;
            }
            if (iVar6 < iVar5) {
              iVar5 = (iVar5 - iVar6) * 5 >> 3;
              uVar8 = (ulonglong)((int)uVar17 >> 0x1f);
              lVar9 = (uVar17 ^ uVar8) - uVar8;
              lVar11 = (longlong)iVar5;
              if ((int)lVar9 <= iVar5) {
                lVar11 = lVar9;
              }
              cVar12 = (char)lVar11;
              if (bVar1 < bVar2) {
                cVar12 = -cVar12;
              }
              *pbVar13 = bVar1 - cVar12;
              *param_1 = cVar12 + bVar2;
            }
          }
        }
      }
      param_1 = param_1 + 1;
      pbVar18 = pbVar18 + 1;
      pbVar13 = pbVar13 + 1;
      pbVar16 = pbVar16 + 1;
      pbVar15 = pbVar15 + 1;
      pbVar14 = pbVar14 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

