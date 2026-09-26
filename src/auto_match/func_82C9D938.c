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


void fn_82C9D938(byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  byte *pbVar12;
  longlong lVar11;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  char cVar16;
  int iVar17;
  byte *pbVar18;
  ulonglong uVar19;
  
  lVar13 = (longlong)(param_4 >> 2);
  if (0 < lVar13) {
    do {
      param_1 = param_1 + 2;
      iVar17 = 0;
      do {
        pbVar18 = param_1 + -param_2;
        bVar1 = *param_1;
        pbVar12 = pbVar18 + -param_2;
        bVar2 = *pbVar18;
        uVar9 = (ulonglong)bVar2 - (ulonglong)bVar1;
        iVar10 = (int)uVar9;
        uVar19 = (longlong)(iVar10 >> 1) + (ulonglong)(iVar10 < 0 && (uVar9 & 1) != 0);
        if (uVar19 == 0) {
LAB_82c9da98:
          if (iVar17 == 0) {
            param_1 = param_1 + 2;
            break;
          }
        }
        else {
          iVar10 = (int)((((ulonglong)*pbVar12 - (ulonglong)param_1[param_2]) + 2 & 0xffffffff) << 1
                        ) - (iVar10 + (int)((uVar9 & 0xffffffff) << 2));
          uVar3 = iVar10 >> 3;
          uVar4 = iVar10 >> 0x1f;
          iVar10 = (uVar3 ^ uVar4) - uVar4;
          if (param_3 <= iVar10) goto LAB_82c9da98;
          uVar9 = (ulonglong)*pbVar12 - (ulonglong)pbVar12[-param_2];
          uVar14 = (ulonglong)param_1[param_2 * 2] - (ulonglong)param_1[param_2];
          iVar8 = (int)((((ulonglong)(pbVar12 + -param_2)[-param_2] - (ulonglong)bVar2) + 2 &
                        0xffffffff) << 1) + (int)uVar9 + (int)((uVar9 & 0xffffffff) << 2);
          iVar7 = (int)((((ulonglong)bVar1 - (ulonglong)(param_1 + param_2 * 2)[param_2]) + 2 &
                        0xffffffff) << 1) + (int)uVar14 + (int)((uVar14 & 0xffffffff) << 2);
          uVar4 = iVar7 >> 0x1f;
          uVar5 = iVar8 >> 0x1f;
          iVar7 = (iVar7 >> 3 ^ uVar4) - uVar4;
          iVar8 = (iVar8 >> 3 ^ uVar5) - uVar5;
          if (iVar8 < iVar7) {
            iVar7 = iVar8;
          }
          if (iVar10 <= iVar7) goto LAB_82c9da98;
          if ((((longlong)(int)uVar3 ^ uVar19) & 0x80000000) != 0) {
            iVar10 = (iVar10 - iVar7) * 5 >> 3;
            uVar9 = (ulonglong)((int)uVar19 >> 0x1f);
            lVar11 = (uVar19 ^ uVar9) - uVar9;
            lVar15 = (longlong)iVar10;
            if ((int)lVar11 <= iVar10) {
              lVar15 = lVar11;
            }
            cVar16 = (char)lVar15;
            if (bVar2 < bVar1) {
              cVar16 = -cVar16;
            }
            *pbVar18 = bVar2 - cVar16;
            *param_1 = cVar16 + bVar1;
          }
        }
        pcVar6 = &lbl_820FDE78 + iVar17;
        iVar17 = iVar17 + 1;
        param_1 = param_1 + *pcVar6;
      } while (iVar17 < 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

