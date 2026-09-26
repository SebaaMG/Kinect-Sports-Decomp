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
extern int fn_82C4E5E8();
extern int fn_82C57AF0();
extern int fn_82C57F70();
extern int fn_82C58408();
extern int fn_82C7E4E8();
extern unsigned int uStack_50;


undefined8 fn_82C7F300(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  undefined4 uStack_50;
  
  iVar2 = *(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x5788) == 0) {
    uVar7 = fn_82C58408();
    return uVar7;
  }
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  uVar9 = *puVar3;
  uVar4 = *(uint *)(puVar3 + 1);
  *puVar3 = uVar9 << 1;
  *(int *)(puVar3 + 1) = (int)((ulonglong)uVar4 - 1);
  if ((longlong)((ulonglong)uVar4 - 1) < 0) {
    fn_82C4E5E8();
  }
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  uVar16 = 3;
  lVar15 = 0;
  uVar10 = (ulonglong)*(uint *)(puVar3 + 1);
  uVar12 = uVar10 + 0x10;
  if ((uVar12 & 0xffffffff) < 3) {
    do {
      if ((uVar12 & 0xffffffff) == 0) break;
      uVar16 = uVar16 - uVar12;
      *(int *)(puVar3 + 1) = (int)(uVar10 - uVar12);
      lVar15 = (ulonglong)(uint)((int)(*puVar3 >> (0x40 - uVar12 & 0x7f)) << ((uint)uVar16 & 0x3f))
               + lVar15;
      *puVar3 = *puVar3 << (uVar12 & 0x7f);
      if ((longlong)(uVar10 - uVar12) < 0) {
        fn_82C4E5E8(puVar3);
      }
      uVar10 = (ulonglong)*(uint *)(puVar3 + 1);
      uVar12 = uVar10 + 0x10;
    } while ((uVar12 & 0xffffffff) < (uVar16 & 0xffffffff));
  }
  *(int *)(puVar3 + 1) = (int)(uVar10 - uVar16);
  uVar12 = (*puVar3 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar15;
  *puVar3 = *puVar3 << (uVar16 & 0x7f);
  if ((longlong)(uVar10 - uVar16) < 0) {
    fn_82C4E5E8(puVar3);
  }
  if ((uVar12 & 0xffffffff) < 8) {
    bVar1 = (int)uVar12 != 0;
    if (uVar12 == 1 && bVar1) {
      uStack_50 = 1;
      fn_82C57AF0(iVar2,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x54));
    }
    else {
      if (uVar12 == 2 && bVar1) {
        uStack_50 = 2;
        fn_82C57AF0(iVar2,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x54));
LAB_82c7f464:
        lVar15 = 0;
        puVar13 = *(uint **)(param_1 + 0x110);
        if (0 < *(int *)(param_1 + 0x8c)) {
          do {
            lVar11 = 0;
            if (0 < *(int *)(param_1 + 0x88)) {
              do {
                if (lVar11 + lVar15 == 0) {
LAB_82c7f764:
                  uVar10 = uVar9 >> 0x3f;
                }
                else if ((int)lVar15 == 0) {
                  uVar10 = (ulonglong)(puVar13[-6] >> 0x1f);
                }
                else if ((int)lVar11 == 0) {
                  uVar10 = (ulonglong)(puVar13[*(int *)(param_1 + 0x88) * -6] >> 0x1f);
                }
                else {
                  uVar10 = (ulonglong)(puVar13[-6] >> 0x1f);
                  if ((ulonglong)(puVar13[-6] >> 0x1f) !=
                      (ulonglong)(puVar13[*(int *)(param_1 + 0x88) * -6] >> 0x1f))
                  goto LAB_82c7f764;
                }
                lVar11 = lVar11 + 1;
                *puVar13 = *puVar13 & 0x7fffffff | ((uint)(uVar10 << 0x1f) ^ *puVar13) & 0x80000000;
                puVar13 = puVar13 + 6;
              } while ((int)lVar11 < *(int *)(param_1 + 0x88));
            }
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < *(int *)(param_1 + 0x8c));
        }
        goto LAB_82c7f7e4;
      }
      if (uVar12 == 3 && bVar1) {
        uStack_50 = 3;
        uVar7 = fn_82C57F70(param_1);
        iVar8 = (int)uVar7;
joined_r0x82c7f4b4:
        if (iVar8 != 0) {
          return uVar7;
        }
      }
      else {
        if (uVar12 == 4 && bVar1) {
          uStack_50 = 4;
          uVar7 = fn_82C57F70(param_1);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          goto LAB_82c7f464;
        }
        if (uVar12 == 5 && bVar1) {
          uStack_50 = 5;
          iVar8 = 0;
          if (0 < *(int *)(param_1 + 0x8c)) {
            do {
              plVar5 = *(longlong **)(param_1 + 0x54);
              lVar15 = *plVar5;
              uVar4 = *(uint *)(plVar5 + 1);
              *plVar5 = lVar15 << 1;
              *(int *)(plVar5 + 1) = (int)((ulonglong)uVar4 - 1);
              if ((longlong)((ulonglong)uVar4 - 1) < 0) {
                fn_82C4E5E8();
              }
              if (lVar15 < 0) {
                iVar17 = 0;
                if (0 < *(int *)(param_1 + 0x88)) {
                  do {
                    puVar3 = *(ulonglong **)(param_1 + 0x54);
                    uVar10 = *puVar3;
                    uVar4 = *(uint *)(puVar3 + 1);
                    *puVar3 = uVar10 << 1;
                    *(int *)(puVar3 + 1) = (int)((ulonglong)uVar4 - 1);
                    if ((longlong)((ulonglong)uVar4 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    iVar14 = *(int *)(param_1 + 0x88) * iVar8 + iVar17;
                    iVar17 = iVar17 + 1;
                    iVar14 = iVar14 * 0x18;
                    *(uint *)(iVar14 + iVar2) =
                         (uint)((uVar10 >> 0x3f) << 0x1f) | *(uint *)(iVar14 + iVar2) & 0x7fffffff;
                  } while (iVar17 < *(int *)(param_1 + 0x88));
                }
              }
              else {
                iVar17 = 0;
                if (0 < *(int *)(param_1 + 0x88)) {
                  do {
                    iVar14 = *(int *)(param_1 + 0x88) * iVar8 + iVar17;
                    iVar17 = iVar17 + 1;
                    iVar14 = iVar14 * 0x18;
                    *(uint *)(iVar14 + iVar2) = *(uint *)(iVar14 + iVar2) & 0x7fffffff;
                  } while (iVar17 < *(int *)(param_1 + 0x88));
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(param_1 + 0x8c));
          }
        }
        else if (uVar12 == 6 && bVar1) {
          uStack_50 = 6;
          lVar15 = 0;
          if (0 < *(int *)(param_1 + 0x88)) {
            do {
              plVar5 = *(longlong **)(param_1 + 0x54);
              lVar11 = *plVar5;
              uVar4 = *(uint *)(plVar5 + 1);
              *plVar5 = lVar11 << 1;
              *(int *)(plVar5 + 1) = (int)((ulonglong)uVar4 - 1);
              if ((longlong)((ulonglong)uVar4 - 1) < 0) {
                fn_82C4E5E8();
              }
              if (lVar11 < 0) {
                iVar8 = 0;
                if (0 < *(int *)(param_1 + 0x8c)) {
                  do {
                    puVar3 = *(ulonglong **)(param_1 + 0x54);
                    uVar10 = *puVar3;
                    uVar4 = *(uint *)(puVar3 + 1);
                    *puVar3 = uVar10 << 1;
                    *(int *)(puVar3 + 1) = (int)((ulonglong)uVar4 - 1);
                    if ((longlong)((ulonglong)uVar4 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    uVar12 = (longlong)*(int *)(param_1 + 0x88) * (longlong)iVar8 + lVar15;
                    iVar8 = iVar8 + 1;
                    iVar17 = (int)((uVar12 + (uVar12 & 0x7fffffff) * 2 & 0xffffffff) << 3);
                    *(uint *)(iVar17 + iVar2) =
                         (uint)((uVar10 >> 0x3f) << 0x1f) | *(uint *)(iVar17 + iVar2) & 0x7fffffff;
                  } while (iVar8 < *(int *)(param_1 + 0x8c));
                }
              }
              else {
                iVar8 = 0;
                if (0 < *(int *)(param_1 + 0x8c)) {
                  do {
                    uVar10 = (longlong)*(int *)(param_1 + 0x88) * (longlong)iVar8 + lVar15;
                    iVar8 = iVar8 + 1;
                    iVar17 = (int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 3);
                    *(uint *)(iVar17 + iVar2) = *(uint *)(iVar17 + iVar2) & 0x7fffffff;
                  } while (iVar8 < *(int *)(param_1 + 0x8c));
                }
              }
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < *(int *)(param_1 + 0x88));
          }
        }
        else {
          if (bVar1) {
            uStack_50 = 7;
            uVar7 = fn_82C7E4E8(param_1);
            iVar8 = (int)uVar7;
            goto joined_r0x82c7f4b4;
          }
          uStack_50 = 0;
        }
      }
    }
  }
  if (((longlong)uVar9 < 0) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x90))) {
    puVar13 = (uint *)(iVar2 + -0x18);
    do {
      puVar6 = puVar13 + 6;
      iVar8 = iVar8 + 1;
      puVar13 = puVar13 + 6;
      *puVar13 = *puVar6 & 0x7fffffff | ~*puVar6 & 0x80000000;
    } while (iVar8 < *(int *)(param_1 + 0x90));
  }
LAB_82c7f7e4:
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x15c) = uStack_50;
  }
  else if (param_2 == 5) {
    *(undefined4 *)(param_1 + 0x548c) = uStack_50;
  }
  else if (param_2 == 4) {
    *(undefined4 *)(param_1 + 0x50e4) = uStack_50;
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x3a14) = uStack_50;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x50d4) = uStack_50;
  }
  else {
    *(undefined4 *)(param_1 + 0x160) = uStack_50;
  }
  return 0;
}

