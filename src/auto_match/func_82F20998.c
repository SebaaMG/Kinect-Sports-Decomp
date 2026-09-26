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


void fn_82F20998(byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar10;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  int iVar19;
  
  lVar11 = (longlong)(param_4 >> 2);
  if (0 < lVar11) {
    do {
      param_1 = param_1 + 2;
      iVar14 = 0;
      piVar15 = (int *)0x831b8f30;
      do {
        pbVar18 = param_1 + -param_2;
        bVar1 = *param_1;
        pbVar10 = pbVar18 + -param_2;
        bVar2 = *pbVar18;
        uVar17 = (ulonglong)bVar2 - (ulonglong)bVar1;
        iVar7 = (int)uVar17;
        iVar19 = (int)((((ulonglong)*pbVar10 - (ulonglong)param_1[param_2]) + 2 & 0xffffffff) << 1)
                 - (iVar7 + (int)((uVar17 & 0xffffffff) << 2));
        uVar3 = iVar19 >> 3;
        uVar4 = iVar19 >> 0x1f;
        lVar16 = (longlong)(int)(uVar3 ^ uVar4) - (longlong)(int)uVar4;
        if ((int)lVar16 < param_3) {
          uVar8 = (ulonglong)*pbVar10 - (ulonglong)pbVar10[-param_2];
          uVar12 = (ulonglong)param_1[param_2 * 2] - (ulonglong)param_1[param_2];
          iVar6 = (int)((((ulonglong)(pbVar10 + -param_2)[-param_2] - (ulonglong)bVar2) + 2 &
                        0xffffffff) << 1) + (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2);
          iVar19 = (int)((((ulonglong)bVar1 - (ulonglong)(param_1 + param_2 * 2)[param_2]) + 2 &
                         0xffffffff) << 1) + (int)uVar12 + (int)((uVar12 & 0xffffffff) << 2);
          uVar4 = iVar19 >> 0x1f;
          uVar5 = iVar6 >> 0x1f;
          lVar13 = (longlong)(int)(iVar19 >> 3 ^ uVar4) - (longlong)(int)uVar4;
          lVar9 = (longlong)(int)(iVar6 >> 3 ^ uVar5) - (longlong)(int)uVar5;
          if ((int)lVar9 < (int)lVar13) {
            lVar13 = lVar9;
          }
          if ((int)lVar16 <= (int)lVar13) goto LAB_82f20b20;
          lVar9 = (longlong)(iVar7 >> 1) + (ulonglong)(iVar7 < 0 && (uVar17 & 1) != 0);
          iVar7 = (int)lVar9;
          if (lVar9 < 1) {
            if (-1 < iVar7) goto LAB_82f20b20;
            if (-1 < (int)uVar3) {
              iVar19 = (int)(lVar13 - lVar16) + (int)((lVar13 - lVar16 & 0xffffffffU) << 2) + 7 >> 3
              ;
              lVar16 = (longlong)iVar19;
              if (iVar19 < iVar7) {
                lVar16 = lVar9;
              }
              goto LAB_82f20b0c;
            }
          }
          else if ((int)uVar3 < 0) {
            iVar19 = (int)(lVar16 - lVar13) + (int)((lVar16 - lVar13 & 0xffffffffU) << 2) >> 3;
            lVar16 = (longlong)iVar19;
            if (iVar7 < iVar19) {
              *pbVar18 = bVar2 - (char)lVar9;
              *param_1 = (char)lVar9 + bVar1;
            }
            else {
LAB_82f20b0c:
              *pbVar18 = bVar2 - (char)lVar16;
              *param_1 = (char)lVar16 + bVar1;
            }
          }
        }
        else {
LAB_82f20b20:
          if (iVar14 == 0) {
            param_1 = param_1 + 2;
            break;
          }
        }
        iVar7 = *piVar15;
        piVar15 = piVar15 + 1;
        param_1 = param_1 + iVar7;
        iVar14 = iVar14 + 1;
      } while ((int)piVar15 < -0x7ce470c0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

