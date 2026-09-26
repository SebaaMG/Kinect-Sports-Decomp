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
extern int fn_82975B00();


undefined8 fn_82996E58(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar14;
  ulonglong uVar12;
  longlong lVar13;
  int iVar16;
  uint uVar17;
  longlong lVar15;
  int *piVar18;
  ulonglong uVar19;
  
  puVar1 = *(uint **)(param_1 + 0x104);
  if (((*puVar1 & 0xfffff) == 4) && (puVar1[1] == 4)) {
    piVar18 = (int *)puVar1[2];
    uVar14 = 0;
    iVar2 = piVar18[3];
    do {
      if (*(int *)(uVar14 + puVar1[2]) == *(int *)(puVar1[2] + 0xc)) goto LAB_8299701c;
      uVar14 = uVar14 + 4;
    } while (uVar14 < 0xc);
    iVar3 = *(int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x48);
    iVar10 = -1;
    if ((iVar3 != -1) &&
       (puVar6 = *(uint **)(iVar3 * 4 + *(int *)(param_1 + 0x18)),
       (*puVar6 & 0xfff00000) == 0x10000000)) {
      uVar14 = 0;
      if (puVar6[3] != 0) {
        iVar16 = 0;
        do {
          if (iVar2 == *(int *)(iVar16 + puVar6[4])) {
            iVar10 = *(int *)(puVar6[2] + iVar16);
          }
          uVar14 = uVar14 + 1;
          iVar16 = iVar16 + 4;
        } while (uVar14 < puVar6[3]);
      }
    }
    uVar14 = 0;
    do {
      if (*(int *)(uVar14 + (int)piVar18) == iVar10) {
LAB_8299701c:
        *puVar1 = 0x11000003;
        return 0;
      }
      uVar14 = uVar14 + 4;
    } while (uVar14 < 0xc);
    uVar14 = 0;
    do {
      iVar10 = *(int *)(*(int *)(*piVar18 * 4 + *(int *)(param_1 + 0x14)) + 0x48);
      if (iVar10 != -1) {
        puVar6 = *(uint **)(iVar10 * 4 + *(int *)(param_1 + 0x18));
        puVar7 = *(uint **)(iVar3 * 4 + *(int *)(param_1 + 0x18));
        uVar4 = *puVar6;
        uVar5 = *puVar7;
        if (((uVar5 ^ uVar4) & 0xfff00000) == 0) {
          uVar11 = (ulonglong)uVar5 & 0xfffff;
          uVar9 = (ulonglong)uVar4 & 0xfffff;
          if (((uVar5 & 0xfffff) != 0) && ((uVar4 & 0xfffff) != 0)) {
            trapWord(6,uVar11,0);
            trapWord(6,uVar9,0);
            uVar19 = puVar7[1] / uVar11;
            if ((uVar19 == puVar6[1] / uVar9) &&
               ((uVar11 == puVar7[3] && (uVar11 = (ulonglong)puVar6[3], uVar9 == uVar11)))) {
              uVar12 = 0;
              uVar9 = 0xffffffffffffffff;
              if (uVar11 != 0) {
                iVar10 = 0;
                do {
                  uVar9 = uVar12;
                  if (*(int *)(iVar10 + puVar6[4]) == *piVar18) break;
                  uVar12 = uVar12 + 1;
                  iVar10 = iVar10 + 4;
                  uVar9 = 0xffffffffffffffff;
                } while ((uVar12 & 0xffffffff) < uVar11);
              }
              uVar17 = 0;
              if (uVar11 != 0) {
                iVar10 = 0;
LAB_82997048:
                if (*(int *)(iVar10 + puVar7[4]) != iVar2) goto code_r0x82997054;
                if ((uVar17 != 0xffffffff) && ((int)uVar9 != -1)) {
                  bVar8 = true;
                  if (uVar19 != 0) {
                    lVar15 = ((ulonglong)uVar17 & 0x3fffffff) << 2;
                    lVar13 = (uVar9 & 0x3fffffff) << 2;
                    do {
                      iVar10 = (int)lVar15;
                      lVar15 = ((ulonglong)uVar5 & 0xfffff) * 4 + lVar15;
                      iVar16 = (int)lVar13;
                      lVar13 = ((ulonglong)uVar4 & 0xfffff) * 4 + lVar13;
                      bVar8 = (bool)(*(int *)(iVar16 + puVar6[2]) == *(int *)(iVar10 + puVar7[2]) &
                                    bVar8);
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                    if (!bVar8) goto LAB_829970cc;
                  }
                  **(undefined4 **)(param_1 + 0x104) = 0x11000003;
                  *(undefined4 *)(*(int *)(param_1 + 0x104) + 4) = 3;
                  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0xc) = 3;
                  return 0;
                }
              }
            }
          }
        }
      }
LAB_829970cc:
      uVar14 = uVar14 + 1;
      piVar18 = piVar18 + 1;
    } while (uVar14 < 3);
    fn_82975B00(param_1,puVar1[0xf],0x11c0,0xffffffff82050dfc,*(undefined1 *)(param_1 + 0xcb));
  }
  else {
    fn_82975B00(param_1,puVar1[0xf],0x12d4,0xffffffff82050dd4);
  }
  return 0xffffffff80004005;
code_r0x82997054:
  uVar17 = uVar17 + 1;
  iVar10 = iVar10 + 4;
  if (uVar11 <= uVar17) goto LAB_829970cc;
  goto LAB_82997048;
}

