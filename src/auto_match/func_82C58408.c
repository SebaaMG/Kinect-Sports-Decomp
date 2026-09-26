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


undefined8 fn_82C58408(int param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  
  iVar9 = *(int *)(param_1 + 0x50d0);
  iVar12 = *(int *)(param_1 + 0x90);
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  iVar16 = *(int *)(param_1 + 0x110);
  uVar6 = *puVar1;
  uVar2 = *(uint *)(puVar1 + 1);
  *(int *)(puVar1 + 1) = (int)((ulonglong)uVar2 - 1);
  *puVar1 = uVar6 << 1;
  iVar16 = iVar12 * iVar9 * 0x18 + iVar16;
  if ((longlong)((ulonglong)uVar2 - 1) < 0) {
    fn_82C4E5E8();
  }
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar15 = 2;
  lVar14 = 0;
  uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar10 = uVar8 + 0x10;
  if ((uVar10 & 0xffffffff) < 2) {
    do {
      if ((uVar10 & 0xffffffff) == 0) break;
      uVar15 = uVar15 - uVar10;
      *(int *)(puVar1 + 1) = (int)(uVar8 - uVar10);
      lVar14 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar15 & 0x3f))
               + lVar14;
      *puVar1 = *puVar1 << (uVar10 & 0x7f);
      if ((longlong)(uVar8 - uVar10) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar10 = uVar8 + 0x10;
    } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar8 - uVar15);
  uVar10 = (*puVar1 >> (0x40 - uVar15 & 0x7f) & 0xffffffff) + lVar14;
  *puVar1 = *puVar1 << (uVar15 & 0x7f);
  if ((longlong)(uVar8 - uVar15) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((uVar10 & 0xffffffff) == 1) {
    plVar3 = *(longlong **)(param_1 + 0x54);
    lVar14 = *plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
    *plVar3 = lVar14 << 1;
    *(int *)(plVar3 + 1) = (int)((ulonglong)uVar2 - 1);
    if ((longlong)((ulonglong)uVar2 - 1) < 0) {
      fn_82C4E5E8();
    }
    lVar7 = 0;
    if (lVar14 < 0) {
      uVar13 = 6;
      if (0 < *(int *)(param_1 + 0x88)) {
        do {
          plVar3 = *(longlong **)(param_1 + 0x54);
          lVar14 = *plVar3;
          uVar2 = *(uint *)(plVar3 + 1);
          *plVar3 = lVar14 << 1;
          *(int *)(plVar3 + 1) = (int)((ulonglong)uVar2 - 1);
          if ((longlong)((ulonglong)uVar2 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar14 < 0) {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0x8c)) {
              do {
                puVar1 = *(ulonglong **)(param_1 + 0x54);
                uVar8 = *puVar1;
                uVar2 = *(uint *)(puVar1 + 1);
                *puVar1 = uVar8 << 1;
                *(int *)(puVar1 + 1) = (int)((ulonglong)uVar2 - 1);
                if ((longlong)((ulonglong)uVar2 - 1) < 0) {
                  fn_82C4E5E8();
                }
                uVar10 = (longlong)*(int *)(param_1 + 0x88) * (longlong)iVar9 + lVar7;
                iVar9 = iVar9 + 1;
                iVar12 = (int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 3);
                *(uint *)(iVar12 + iVar16) =
                     (uint)((uVar8 >> 0x3f) << 0x1f) | *(uint *)(iVar12 + iVar16) & 0x7fffffff;
              } while (iVar9 < *(int *)(param_1 + 0x8c));
            }
          }
          else {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0x8c)) {
              do {
                uVar8 = (longlong)*(int *)(param_1 + 0x88) * (longlong)iVar9 + lVar7;
                iVar9 = iVar9 + 1;
                iVar12 = (int)((uVar8 + (uVar8 & 0x7fffffff) * 2 & 0xffffffff) << 3);
                *(uint *)(iVar12 + iVar16) = *(uint *)(iVar12 + iVar16) & 0x7fffffff;
              } while (iVar9 < *(int *)(param_1 + 0x8c));
            }
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(param_1 + 0x88));
      }
    }
    else {
      uVar13 = 5;
      if (0 < *(int *)(param_1 + 0x8c)) {
        do {
          plVar3 = *(longlong **)(param_1 + 0x54);
          lVar14 = *plVar3;
          uVar2 = *(uint *)(plVar3 + 1);
          *plVar3 = lVar14 << 1;
          *(int *)(plVar3 + 1) = (int)((ulonglong)uVar2 - 1);
          if ((longlong)((ulonglong)uVar2 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar14 < 0) {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0x88)) {
              do {
                puVar1 = *(ulonglong **)(param_1 + 0x54);
                uVar8 = *puVar1;
                uVar2 = *(uint *)(puVar1 + 1);
                *puVar1 = uVar8 << 1;
                *(int *)(puVar1 + 1) = (int)((ulonglong)uVar2 - 1);
                if ((longlong)((ulonglong)uVar2 - 1) < 0) {
                  fn_82C4E5E8();
                }
                iVar12 = *(int *)(param_1 + 0x88) * (int)lVar7 + iVar9;
                iVar9 = iVar9 + 1;
                iVar12 = iVar12 * 0x18;
                *(uint *)(iVar12 + iVar16) =
                     (uint)((uVar8 >> 0x3f) << 0x1f) | *(uint *)(iVar12 + iVar16) & 0x7fffffff;
              } while (iVar9 < *(int *)(param_1 + 0x88));
            }
          }
          else {
            iVar9 = 0;
            if (0 < *(int *)(param_1 + 0x88)) {
              do {
                iVar12 = *(int *)(param_1 + 0x88) * (int)lVar7 + iVar9;
                iVar9 = iVar9 + 1;
                iVar12 = iVar12 * 0x18;
                *(uint *)(iVar12 + iVar16) = *(uint *)(iVar12 + iVar16) & 0x7fffffff;
              } while (iVar9 < *(int *)(param_1 + 0x88));
            }
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(param_1 + 0x8c));
      }
    }
  }
  else if ((uVar10 & 0xffffffff) == 2) {
    uVar13 = 1;
    fn_82C57AF0(iVar16,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x54));
  }
  else {
    if ((uVar10 & 0xffffffff) != 3) {
      plVar3 = *(longlong **)(param_1 + 0x54);
      lVar14 = *plVar3;
      uVar2 = *(uint *)(plVar3 + 1);
      *plVar3 = lVar14 << 1;
      *(int *)(plVar3 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar14 < 0) {
        uVar13 = 2;
        fn_82C57AF0(iVar16,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x54));
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x54);
        lVar14 = *plVar3;
        uVar2 = *(uint *)(plVar3 + 1);
        *plVar3 = lVar14 << 1;
        *(int *)(plVar3 + 1) = (int)((ulonglong)uVar2 - 1);
        if ((longlong)((ulonglong)uVar2 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (-1 < lVar14) {
          uVar13 = 0;
          goto LAB_82c58618;
        }
        uVar13 = 4;
        uVar5 = fn_82C57F70(param_1);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      lVar14 = 0;
      puVar11 = (uint *)(*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x50d0) * 0x18 +
                        *(int *)(param_1 + 0x110));
      if (0 < *(int *)(param_1 + 0x8c)) {
        do {
          lVar7 = 0;
          if (0 < *(int *)(param_1 + 0x88)) {
            do {
              if (lVar14 + lVar7 == 0) {
LAB_82c58938:
                uVar8 = uVar6 >> 0x3f;
              }
              else if ((int)lVar14 == 0) {
                uVar8 = (ulonglong)(puVar11[-6] >> 0x1f);
              }
              else if ((int)lVar7 == 0) {
                uVar8 = (ulonglong)(puVar11[*(int *)(param_1 + 0x88) * -6] >> 0x1f);
              }
              else {
                uVar8 = (ulonglong)(puVar11[-6] >> 0x1f);
                if ((ulonglong)(puVar11[-6] >> 0x1f) !=
                    (ulonglong)(puVar11[*(int *)(param_1 + 0x88) * -6] >> 0x1f)) goto LAB_82c58938;
              }
              lVar7 = lVar7 + 1;
              *puVar11 = *puVar11 & 0x7fffffff | ((uint)(uVar8 << 0x1f) ^ *puVar11) & 0x80000000;
              puVar11 = puVar11 + 6;
            } while ((int)lVar7 < *(int *)(param_1 + 0x88));
          }
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 < *(int *)(param_1 + 0x8c));
      }
      goto LAB_82c58654;
    }
    uVar13 = 3;
    uVar5 = fn_82C57F70(param_1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
LAB_82c58618:
  if (((longlong)uVar6 < 0) && (iVar9 = 0, 0 < *(int *)(param_1 + 0x90))) {
    puVar11 = (uint *)(iVar16 + -0x18);
    do {
      puVar4 = puVar11 + 6;
      iVar9 = iVar9 + 1;
      puVar11 = puVar11 + 6;
      *puVar11 = *puVar4 & 0x7fffffff | ~*puVar4 & 0x80000000;
    } while (iVar9 < *(int *)(param_1 + 0x90));
  }
LAB_82c58654:
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x15c) = uVar13;
  }
  else if (param_2 == 5) {
    *(undefined4 *)(param_1 + 0x548c) = uVar13;
  }
  else if (param_2 == 4) {
    *(undefined4 *)(param_1 + 0x50e4) = uVar13;
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x3a14) = uVar13;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x50d4) = uVar13;
  }
  else {
    *(undefined4 *)(param_1 + 0x160) = uVar13;
  }
  return 0;
}

