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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_90;
extern int fn_82A29A38();
extern unsigned int stack0x00000000;
extern unsigned int uStack_b0;


void fn_82AA0958(ulonglong param_1,ulonglong param_2,code *param_3,undefined8 param_4,char param_5
                  ,char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uStack_b0;
  uint auStack_90 [36];
  
  iVar6 = (int)param_1;
  if (param_5 != '\0') {
    uVar18 = 0xffffffffffffffff;
    uVar20 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      do {
        if ((uVar18 & 0xffffffff) <= (uVar20 & 0xffffffff)) break;
        uVar14 = (uVar20 & 0xffffffff) / 6;
        iVar5 = (int)(uVar14 >> 1) * 0xc;
        uVar4 = *(undefined4 *)(iVar5 + iVar6);
        puVar7 = (undefined4 *)(iVar5 + iVar6);
        lVar13 = (uVar14 & 1) * 8 + (ZEXT48(&stack0x00000000) - 0xa0);
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        puVar8 = (uint *)lVar13;
        if (((1 << (puVar8[1] >> 0xc & 0xf) & 0x607eU) != 0) && ((int)uVar18 == -1)) {
          uVar18 = ((ulonglong)*puVar8 & 0xfff) * 0xc;
        }
        (*param_3)(lVar13,0,0,0,uVar14,param_4);
        uVar20 = uVar20 + 6;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        *puVar7 = uVar4;
      } while ((uVar20 & 0xffffffff) < (param_2 & 0xffffffff));
    }
  }
  if (param_6 != '\0') {
    uVar20 = (ulonglong)uStack_b0;
    uVar18 = 0xffffffffffffffff;
    do {
      uVar16 = 0xffffffff;
      bVar12 = false;
      uVar14 = param_1;
      if ((param_1 + param_2 & 0xffffffff) <= (param_1 & 0xffffffff)) {
        return;
      }
      do {
        uVar16 = uVar16 + 1;
        uVar15 = (longlong)((int)uVar16 >> 1) + (ulonglong)((int)uVar16 < 0 && (uVar16 & 1) != 0);
        if ((uVar15 & 0xffffffff) == (uVar18 & 0xffffffff)) break;
        puVar8 = (uint *)((int)uVar15 * 0xc + iVar6);
        uVar11 = uVar16 * 8 & 8;
        auStack_90[0] = *puVar8;
        auStack_90[1] = puVar8[1] & 0xffff;
        auStack_90[2] = puVar8[2] << 0x10 | puVar8[1] >> 0x10;
        auStack_90[3] = puVar8[2] >> 0x10;
        uVar3 = *(uint *)((int)auStack_90 + uVar11 + 4);
        if ((uVar3 & 0x800) != 0) {
          fn_82A29A38();
        }
        if ((1 << (uVar3 >> 0xc & 0xf) & 0x607eU) != 0) {
          uVar11 = *(uint *)((int)auStack_90 + uVar11);
          uVar15 = (ulonglong)uVar11 & 0xfff;
          if ((int)uVar18 == -1) {
            uVar18 = uVar15;
            uVar20 = uVar15;
          }
          uVar17 = (ulonglong)(uVar11 >> 0xc) & 7;
          uVar19 = (ulonglong)(uVar11 >> 0x10) & 0xfff;
          uVar21 = ((ulonglong)uVar3 & 3) << 4 | (ulonglong)(uVar11 >> 0x1c);
          lVar13 = uVar15 * 0xc + param_1;
          if ((uVar11 >> 0xc & 7) != 0) {
            do {
              uVar9 = uVar19 & 1;
              uVar10 = uVar21 & 1;
              uVar21 = uVar21 >> 1;
              uVar19 = uVar19 >> 2;
              if ((uVar15 & 0xffffffff) == (uVar20 & 0xffffffff)) {
                (*param_3)(lVar13,1,uVar9,uVar10,uVar15,param_4);
                uVar20 = uVar15 + 1;
              }
              else if ((uVar20 & 0xffffffff) < (uVar15 & 0xffffffff)) {
                bVar12 = true;
              }
              uVar17 = uVar17 - 1;
              lVar13 = lVar13 + 0xc;
              uVar15 = uVar15 + 1;
            } while (uVar17 != 0);
          }
        }
        uVar14 = uVar14 + 6;
      } while ((uVar14 & 0xffffffff) < (param_1 + param_2 & 0xffffffff));
    } while (bVar12);
  }
  return;
}

