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
extern unsigned int lbl_820FDE78;


void fn_82C9DAC8(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  char cVar15;
  int iVar16;
  ulonglong uVar17;
  
  lVar12 = (longlong)(param_4 >> 2);
  if (0 < lVar12) {
    do {
      param_1 = param_2 * 2 + param_1;
      iVar16 = 0;
      do {
        bVar1 = *(byte *)(param_1 + 4);
        bVar2 = *(byte *)(param_1 + 5);
        uVar10 = (ulonglong)bVar1 - (ulonglong)bVar2;
        iVar7 = (int)uVar10;
        uVar17 = (longlong)(iVar7 >> 1) + (ulonglong)(iVar7 < 0 && (uVar10 & 1) != 0);
        if (uVar17 == 0) {
LAB_82c9dc14:
          if (iVar16 == 0) {
            param_1 = param_2 * 2 + param_1;
            break;
          }
        }
        else {
          iVar7 = (int)((((ulonglong)*(byte *)(param_1 + 3) - (ulonglong)*(byte *)(param_1 + 6)) + 2
                        & 0xffffffff) << 1) - (iVar7 + (int)((uVar10 & 0xffffffff) << 2));
          uVar3 = iVar7 >> 3;
          uVar4 = iVar7 >> 0x1f;
          iVar7 = (uVar3 ^ uVar4) - uVar4;
          if (param_3 <= iVar7) goto LAB_82c9dc14;
          uVar10 = (ulonglong)*(byte *)(param_1 + 3) - (ulonglong)*(byte *)(param_1 + 2);
          uVar13 = (ulonglong)*(byte *)(param_1 + 7) - (ulonglong)*(byte *)(param_1 + 6);
          iVar9 = (int)uVar10 + (int)((uVar10 & 0xffffffff) << 2) +
                  (int)((((ulonglong)*(byte *)(param_1 + 1) - (ulonglong)bVar1) + 2 & 0xffffffff) <<
                       1);
          iVar8 = (int)((((ulonglong)bVar2 - (ulonglong)*(byte *)(param_1 + 8)) + 2 & 0xffffffff) <<
                       1) + (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
          uVar4 = iVar8 >> 0x1f;
          uVar5 = iVar9 >> 0x1f;
          iVar8 = (iVar8 >> 3 ^ uVar4) - uVar4;
          iVar9 = (iVar9 >> 3 ^ uVar5) - uVar5;
          if (iVar9 < iVar8) {
            iVar8 = iVar9;
          }
          if (iVar7 <= iVar8) goto LAB_82c9dc14;
          if ((((longlong)(int)uVar3 ^ uVar17) & 0x80000000) != 0) {
            iVar7 = (iVar7 - iVar8) * 5 >> 3;
            uVar10 = (ulonglong)((int)uVar17 >> 0x1f);
            lVar11 = (uVar17 ^ uVar10) - uVar10;
            lVar14 = (longlong)iVar7;
            if ((int)lVar11 <= iVar7) {
              lVar14 = lVar11;
            }
            cVar15 = (char)lVar14;
            if (bVar1 < bVar2) {
              cVar15 = -cVar15;
            }
            *(byte *)(param_1 + 4) = bVar1 - cVar15;
            *(byte *)(param_1 + 5) = cVar15 + bVar2;
          }
        }
        pcVar6 = &lbl_820FDE78 + iVar16;
        iVar16 = iVar16 + 1;
        param_1 = *pcVar6 * param_2 + param_1;
      } while (iVar16 < 4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

