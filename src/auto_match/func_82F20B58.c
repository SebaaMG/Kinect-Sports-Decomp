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


void fn_82F20B58(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar10;
  longlong lVar9;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  lVar11 = (longlong)(param_4 >> 2);
  if (0 < lVar11) {
    do {
      param_1 = param_2 * 2 + param_1;
      iVar14 = 0;
      piVar15 = (int *)0x831b8f30;
      do {
        bVar1 = *(byte *)(param_1 + 4);
        bVar2 = *(byte *)(param_1 + 5);
        uVar17 = (ulonglong)bVar1 - (ulonglong)bVar2;
        iVar7 = (int)uVar17;
        iVar6 = (int)((((ulonglong)*(byte *)(param_1 + 3) - (ulonglong)*(byte *)(param_1 + 6)) + 2 &
                      0xffffffff) << 1) - (iVar7 + (int)((uVar17 & 0xffffffff) << 2));
        uVar3 = iVar6 >> 3;
        uVar4 = iVar6 >> 0x1f;
        lVar16 = (longlong)(int)(uVar3 ^ uVar4) - (longlong)(int)uVar4;
        if ((int)lVar16 < param_3) {
          uVar8 = (ulonglong)*(byte *)(param_1 + 3) - (ulonglong)*(byte *)(param_1 + 2);
          uVar12 = (ulonglong)*(byte *)(param_1 + 7) - (ulonglong)*(byte *)(param_1 + 6);
          iVar6 = (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2) +
                  (int)((((ulonglong)*(byte *)(param_1 + 1) - (ulonglong)bVar1) + 2 & 0xffffffff) <<
                       1);
          iVar10 = (int)((((ulonglong)bVar2 - (ulonglong)*(byte *)(param_1 + 8)) + 2 & 0xffffffff)
                        << 1) + (int)uVar12 + (int)((uVar12 & 0xffffffff) << 2);
          uVar4 = iVar10 >> 0x1f;
          uVar5 = iVar6 >> 0x1f;
          lVar13 = (longlong)(int)(iVar10 >> 3 ^ uVar4) - (longlong)(int)uVar4;
          lVar9 = (longlong)(int)(iVar6 >> 3 ^ uVar5) - (longlong)(int)uVar5;
          if ((int)lVar9 < (int)lVar13) {
            lVar13 = lVar9;
          }
          if ((int)lVar16 <= (int)lVar13) goto LAB_82f20ccc;
          lVar9 = (longlong)(iVar7 >> 1) + (ulonglong)(iVar7 < 0 && (uVar17 & 1) != 0);
          iVar7 = (int)lVar9;
          if (lVar9 < 1) {
            if (-1 < iVar7) goto LAB_82f20ccc;
            if (-1 < (int)uVar3) {
              iVar6 = (int)(lVar13 - lVar16) + (int)((lVar13 - lVar16 & 0xffffffffU) << 2) + 7 >> 3;
              lVar16 = (longlong)iVar6;
              if (iVar6 < iVar7) {
                lVar16 = lVar9;
              }
              goto LAB_82f20cb8;
            }
          }
          else if ((int)uVar3 < 0) {
            iVar6 = (int)(lVar16 - lVar13) + (int)((lVar16 - lVar13 & 0xffffffffU) << 2) >> 3;
            lVar16 = (longlong)iVar6;
            if (iVar7 < iVar6) {
              *(byte *)(param_1 + 4) = bVar1 - (char)lVar9;
              *(byte *)(param_1 + 5) = (char)lVar9 + bVar2;
            }
            else {
LAB_82f20cb8:
              *(byte *)(param_1 + 4) = bVar1 - (char)lVar16;
              *(byte *)(param_1 + 5) = (char)lVar16 + bVar2;
            }
          }
        }
        else {
LAB_82f20ccc:
          if (iVar14 == 0) {
            param_1 = param_2 * 2 + param_1;
            break;
          }
        }
        iVar7 = *piVar15;
        piVar15 = piVar15 + 1;
        param_1 = param_2 * iVar7 + param_1;
        iVar14 = iVar14 + 1;
      } while ((int)piVar15 < -0x7ce470c0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

