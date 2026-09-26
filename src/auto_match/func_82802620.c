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


void fn_82802620(int param_1,int *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  uint *puVar17;
  uint uVar18;
  
  uVar3 = *(uint *)(param_4 + 4);
  fVar1 = *(float *)(param_1 + 0x10);
  puVar17 = *(uint **)(param_1 + 0x20);
  uVar14 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar13 = 0;
    pfVar16 = (float *)(param_3 + -4);
    pfVar12 = (float *)(*param_2 + -0xc);
    do {
      if ((*(int *)(param_1 + 0x14) == 0) || (*(char *)(*(int *)(param_1 + 0x14) + uVar13) != '\0'))
      {
        uVar15 = 0;
        if (*(short *)((int)param_2 + 10) != 0) {
          do {
            uVar7 = (*(uint *)((int)param_2 + (uVar14 >> 3 & 0x1ffffffc) + 0x10) &
                    3 << (uVar14 & 0x1f)) >> (uVar14 & 0x1f);
            if (uVar7 == 0) {
              fVar2 = *(float *)(uVar15 * 4 + param_2[3]);
            }
            else if (uVar7 == 1) {
              pfVar12 = pfVar12 + 4;
              fVar2 = *pfVar12;
            }
            else {
              if (uVar7 == 3) {
                fVar4 = pfVar12[6];
                uVar6 = (longlong)(int)fVar4 * (longlong)*(int *)(param_4 + 4);
                puVar11 = (uint *)(((uint)((uVar6 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                  (int)pfVar12[3]);
                uVar7 = (uint)uVar6 & 0x1f;
                uVar9 = (1 << ((uint)fVar4 & 0x3f)) - 1;
                fVar2 = (float)(((puVar11[1] << 1) << (0x1f - uVar7 & 0x3f) | *puVar11 >> uVar7) &
                               uVar9) * pfVar12[5] + pfVar12[4];
                if (*(int *)(param_1 + 4) != 0) {
                  uVar6 = (longlong)*(int *)(param_4 + 8) * (longlong)(int)fVar4;
                  uVar15 = (uint)uVar6 & 0x1f;
                  puVar11 = (uint *)(((uint)((uVar6 & 0xffffffff) >> 3) & 0x1ffffffc) +
                                    (int)pfVar12[3]);
                  pfVar16 = pfVar16 + 1;
                  *pfVar16 = (((float)(((puVar11[1] << 1) << (0x1f - uVar15 & 0x3f) |
                                       *puVar11 >> uVar15) & uVar9) * pfVar12[5] + pfVar12[4]) -
                             fVar2) * *(float *)(param_1 + 0x10) + fVar2;
                  break;
                }
              }
              else {
                uVar7 = *puVar17 & 0x1f;
                puVar11 = (uint *)((*puVar17 >> 3 & 0x1ffffffc) + (int)pfVar12[3]);
                iVar8 = (int)pfVar12[6] + (uint)*(ushort *)(param_2 + 2);
                uVar7 = ((puVar11[1] << 1) << (0x1f - uVar7 & 0x3f) | *puVar11 >> uVar7) &
                        (1 << (*(ushort *)(param_2 + 2) & 0x3f)) - 1U;
                if (uVar3 < uVar7) {
                  uVar7 = 0;
                  *puVar17 = 0;
                }
                fVar4 = pfVar12[3];
                uVar9 = *puVar17 + iVar8 & 0x1f;
                puVar11 = (uint *)((*puVar17 + iVar8 >> 3 & 0x1ffffffc) + (int)fVar4);
                uVar18 = *puVar11 >> uVar9;
                uVar9 = (puVar11[1] << 1) << (0x1f - uVar9 & 0x3f);
                while( true ) {
                  uVar10 = (uVar9 | uVar18) & (1 << (*(ushort *)(param_2 + 2) & 0x3f)) - 1U;
                  if (uVar3 < uVar10) break;
                  uVar9 = *puVar17 + iVar8 + iVar8;
                  *puVar17 = *puVar17 + iVar8;
                  fVar4 = pfVar12[3];
                  uVar7 = uVar9 & 0x1f;
                  puVar11 = (uint *)((uVar9 >> 3 & 0x1ffffffc) + (int)fVar4);
                  uVar18 = *puVar11 >> uVar7;
                  uVar9 = (puVar11[1] << 1) << (0x1f - uVar7 & 0x3f);
                  uVar7 = uVar10;
                }
                uVar9 = *puVar17 + (uint)*(ushort *)(param_2 + 2);
                puVar11 = (uint *)((uVar9 >> 3 & 0x1ffffffc) + (int)fVar4);
                uVar18 = (1 << ((uint)pfVar12[6] & 0x3f)) - 1;
                fVar2 = (float)(((puVar11[1] << 1) << (0x1f - (uVar9 & 0x1f) & 0x3f) |
                                *puVar11 >> (uVar9 & 0x1f)) & uVar18) * pfVar12[5] + pfVar12[4];
                if (*(int *)(param_1 + 4) != 0) {
                  uVar5 = uVar9 + iVar8 & 0x1f;
                  puVar11 = (uint *)((uVar9 + iVar8 >> 3 & 0x1ffffffc) + (int)fVar4);
                  fVar2 = (((float)(((puVar11[1] << 1) << (0x1f - uVar5 & 0x3f) | *puVar11 >> uVar5)
                                   & uVar18) * pfVar12[5] + pfVar12[4]) - fVar2) *
                          ((((float)uVar3 + fVar1) - (float)uVar7) / (float)(uVar10 - uVar7)) +
                          fVar2;
                }
                puVar17 = puVar17 + 1;
              }
              pfVar12 = pfVar12 + 4;
            }
            pfVar16[1] = fVar2;
            pfVar16 = pfVar16 + 1;
            uVar14 = uVar14 + 2;
            uVar15 = uVar15 + 1 & 0xffff;
          } while (uVar15 < *(ushort *)((int)param_2 + 10));
        }
      }
      else {
        uVar14 = (uint)*(ushort *)((int)param_2 + 10) * 2 + uVar14;
      }
      uVar13 = uVar13 + 1 & 0xffff;
    } while (uVar13 < *(uint *)(param_1 + 8));
  }
  return;
}

