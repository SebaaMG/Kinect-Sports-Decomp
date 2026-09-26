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
extern int fn_82F68CC0();


undefined8 fn_82C18288(int *param_1,longlong param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  
  uVar2 = param_1[0x53];
  uVar22 = (ulonglong)uVar2;
  uVar10 = param_1[0x55];
  iVar3 = *param_1;
  uVar4 = param_1[0x5a];
  uVar25 = (ulonglong)uVar4;
  uVar5 = param_1[0x52];
  uVar16 = (ulonglong)uVar5;
  iVar14 = (int)((longlong)(int)(uint)*param_3 * (longlong)(int)uVar2);
  if (iVar14 < (int)uVar10) {
    param_1[0x55] = uVar10 - iVar14;
    if ((*param_3 != 0) && (lVar23 = 0, 0 < (int)uVar4)) {
      iVar14 = 0;
      do {
        uVar7 = (**(code **)(iVar3 + 0x20c))
                          (param_2,*(undefined4 *)(iVar3 + 0x58),*(undefined2 *)(iVar3 + 0x6e),
                           (longlong)(int)(*param_3 - 1) * (longlong)(int)uVar4 + lVar23);
        lVar23 = lVar23 + 1;
        *(undefined4 *)(param_1[0x56] + iVar14) = uVar7;
        iVar14 = iVar14 + 4;
      } while ((int)lVar23 < (int)uVar4);
    }
    *param_3 = 0;
    return 0;
  }
  uVar12 = (longlong)(int)(uint)*param_3 * (longlong)(int)uVar2 - (ulonglong)uVar10;
  uVar6 = *(uint *)(iVar3 + 0x58);
  uVar1 = (int)param_4 / (int)uVar6;
  iVar14 = (int)uVar12 / (int)uVar5;
  trapWord(6,(ulonglong)uVar6,0);
  iVar15 = iVar14 + 1;
  trapWord(6,uVar16,0);
  trapWord(6,uVar25,0);
  trapWord(5,uVar16 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,(ulonglong)uVar6 &
             ~((((ulonglong)param_4 & 0x7fffffff) << 1 | (ulonglong)(param_4 >> 0x1f)) - 1),0xffff);
  trapWord(5,uVar25 & ~((((ulonglong)uVar1 & 0x7fffffff) << 1 | (ulonglong)(uVar1 >> 0x1f)) - 1),
           0xffff);
  if ((int)uVar1 / (int)uVar4 < iVar15) {
    return 0xffffffff80070057;
  }
  uVar12 = (longlong)iVar14 * (longlong)(int)uVar5 + (ulonglong)uVar10;
  lVar23 = 0;
  iVar8 = (int)uVar12 / (int)uVar2;
  trapWord(6,uVar22,0);
  trapWord(5,uVar22 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if (0 < (int)uVar4) {
    iVar9 = 0;
    do {
      uVar7 = (**(code **)(iVar3 + 0x20c))
                        (param_2,*(undefined4 *)(iVar3 + 0x58),*(undefined2 *)(iVar3 + 0x6e),
                         (longlong)(int)(*param_3 - 1) * (longlong)(int)uVar4 + lVar23);
      lVar23 = lVar23 + 1;
      *(undefined4 *)(iVar9 + param_1[0x57]) = uVar7;
      iVar9 = iVar9 + 4;
    } while ((int)lVar23 < (int)uVar4);
  }
  iVar9 = *(int *)(iVar3 + 0x58);
  uVar19 = (longlong)(iVar9 * iVar8) * (longlong)(int)uVar4 + param_2;
  iVar17 = iVar8;
  if (iVar8 <= iVar14) {
    iVar17 = iVar14;
  }
  lVar23 = (longlong)(iVar9 * iVar17) * (longlong)(int)uVar4 + param_2;
  iVar17 = 0;
  if (iVar14 < iVar8) {
    iVar17 = iVar8 - iVar14;
  }
  uVar18 = (longlong)iVar9 * (longlong)(int)uVar4 + param_2;
  lVar20 = uVar12 - (longlong)iVar8 * (longlong)(int)uVar2;
  if ((uVar18 & 0xffffffff) <= (uVar19 & 0xffffffff)) {
    do {
      lVar24 = 0;
      if (0 < (int)uVar4) {
        iVar14 = (int)lVar20;
        lVar21 = -uVar25;
        do {
          if (iVar14 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (**(code **)(iVar3 + 0x20c))
                              (uVar19,*(undefined4 *)(iVar3 + 0x58),*(undefined2 *)(iVar3 + 0x6e),
                               lVar24);
          }
          iVar9 = (**(code **)(iVar3 + 0x20c))
                            (uVar19,*(undefined4 *)(iVar3 + 0x58),*(undefined2 *)(iVar3 + 0x6e),
                             lVar21);
          uVar13 = (longlong)iVar9 * (longlong)(int)(uVar2 - iVar14) +
                   (longlong)iVar8 * (longlong)iVar14;
          uVar11 = uVar22 & ~(((uVar13 & 0x7fffffff) << 1 | (uVar13 & 0xffffffff) >> 0x1f) - 1);
          trapWord(6,uVar22,0);
          trapWord(5,uVar11,0xffff);
          (**(code **)(iVar3 + 0x208))((int)uVar13 / (int)uVar2,lVar23,iVar3,lVar24,uVar11);
          lVar24 = lVar24 + 1;
          lVar21 = lVar21 + 1;
        } while ((int)lVar24 < (int)uVar4);
      }
      lVar20 = lVar20 - uVar16;
      if (lVar20 < 1) {
        trapWord(6,uVar22,0);
        uVar11 = (lVar20 - uVar22) + 1;
        iVar14 = (int)uVar11 / (int)uVar2;
        trapWord(5,uVar22 & ~(((uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        lVar20 = lVar20 - (longlong)iVar14 * (longlong)(int)uVar2;
        uVar19 = (longlong)(*(int *)(iVar3 + 0x58) * iVar14) * (longlong)(int)uVar4 + uVar19;
      }
      lVar23 = lVar23 - (longlong)*(int *)(iVar3 + 0x58) * (longlong)(int)uVar4;
    } while ((uVar18 & 0xffffffff) <= (uVar19 & 0xffffffff));
  }
  if ((0 < param_1[0x55]) && (param_1[0x55] < (int)uVar2)) {
    lVar24 = 0;
    if ((int)uVar4 < 1) goto LAB_82c1862c;
    iVar14 = 0;
    do {
      iVar8 = (**(code **)(iVar3 + 0x20c))
                        (param_2,*(undefined4 *)(iVar3 + 0x58),*(undefined2 *)(iVar3 + 0x6e),lVar24)
      ;
      uVar10 = *(int *)(param_1[0x56] + iVar14) * (uVar2 - (int)lVar20) + iVar8 * (int)lVar20;
      trapWord(6,uVar22,0);
      trapWord(5,uVar22 & ~((((ulonglong)uVar10 & 0x7fffffff) << 1 | (ulonglong)(uVar10 >> 0x1f)) -
                           1),0xffff);
      (**(code **)(iVar3 + 0x208))((int)uVar10 / (int)uVar2,lVar23,iVar3,lVar24);
      lVar24 = lVar24 + 1;
      iVar14 = iVar14 + 4;
    } while ((int)lVar24 < (int)uVar4);
  }
  if (0 < (int)uVar4) {
    iVar14 = 0;
    do {
      *(undefined4 *)(param_1[0x56] + iVar14) = *(undefined4 *)(iVar14 + param_1[0x57]);
      iVar14 = iVar14 + 4;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
LAB_82c1862c:
  param_1[0x55] = ((int)uVar12 - *param_3 * uVar2) + uVar5;
  if (iVar17 != 0) {
    fn_82F68CC0(param_2,(longlong)(*(int *)(iVar3 + 0x58) * iVar17) * (longlong)(int)uVar4 +
                         param_2,(longlong)(iVar15 * *(int *)(iVar3 + 0x58)) * (longlong)(int)uVar4)
    ;
  }
  *param_3 = (ushort)iVar15;
  return 0;
}

