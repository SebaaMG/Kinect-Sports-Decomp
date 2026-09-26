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
extern int fn_82C57C50();
extern int fn_82CA6740();


undefined8 fn_82C57F70(int param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  undefined8 uVar6;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar10;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int aiStack_50 [20];
  
  uVar13 = 0;
  uVar9 = (longlong)*(int *)(param_1 + 0x50d0) * (longlong)*(int *)(param_1 + 0x90);
  lVar17 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x1fffffff) * 8 +
           (ulonglong)*(uint *)(param_1 + 0x110);
  iVar7 = fn_82CA6740(*(undefined4 *)(param_1 + 0x8c),3);
  iVar5 = (int)lVar17;
  if ((iVar7 == 0) && (iVar7 = fn_82CA6740(*(undefined4 *)(param_1 + 0x88),3), iVar7 != 0)) {
    uVar11 = *(uint *)(param_1 + 0x88);
    iVar7 = 0;
    uVar9 = (ulonglong)uVar11 & 1;
    if (0 < *(int *)(param_1 + 0x8c)) {
      do {
        uVar15 = uVar9;
        if ((int)uVar9 < (int)uVar11) {
          do {
            iVar16 = uVar11 * iVar7 + (int)uVar15;
            uVar6 = fn_82C57C50(*(undefined4 *)(param_1 + 0x54),0xffffffff820fc1bc,
                                  0xffffffff820fc1f8,aiStack_50);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            uVar15 = uVar15 + 2;
            puVar12 = (uint *)(iVar16 * 0x18 + iVar5);
            *puVar12 = aiStack_50[0] << 0x1f | *puVar12 & 0x7fffffff;
            puVar12[6] = (aiStack_50[0] >> 1) << 0x1f | puVar12[6] & 0x7fffffff;
            iVar16 = iVar16 + *(int *)(param_1 + 0x88);
            puVar12 = (uint *)(iVar16 * 0x18 + iVar5);
            *puVar12 = (aiStack_50[0] >> 2) << 0x1f | *puVar12 & 0x7fffffff;
            iVar4 = aiStack_50[0] >> 4;
            puVar12[6] = (aiStack_50[0] >> 3) << 0x1f | puVar12[6] & 0x7fffffff;
            aiStack_50[0] = aiStack_50[0] >> 5;
            puVar12 = (uint *)((iVar16 + *(int *)(param_1 + 0x88)) * 0x18 + iVar5);
            *puVar12 = iVar4 << 0x1f | *puVar12 & 0x7fffffff;
            puVar12[6] = aiStack_50[0] << 0x1f | puVar12[6] & 0x7fffffff;
            uVar11 = *(uint *)(param_1 + 0x88);
          } while ((int)uVar15 < (int)uVar11);
        }
        iVar7 = iVar7 + 3;
      } while (iVar7 < *(int *)(param_1 + 0x8c));
    }
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x8c) & 1;
    uVar9 = fn_82CA6740(*(undefined4 *)(param_1 + 0x88),3);
    uVar11 = uVar13;
    if ((int)uVar13 < *(int *)(param_1 + 0x8c)) {
      do {
        iVar7 = *(int *)(param_1 + 0x88);
        uVar15 = uVar9;
        if ((int)uVar9 < iVar7) {
          do {
            lVar14 = (longlong)iVar7 * (longlong)(int)uVar11 + uVar15;
            uVar6 = fn_82C57C50(*(undefined4 *)(param_1 + 0x54),0xffffffff820fc1bc,
                                  0xffffffff820fc1f8,aiStack_50);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar12 = (uint *)((int)lVar14 * 0x18 + iVar5);
            iVar7 = (int)((lVar14 + 2U + (lVar14 + 2U & 0x7fffffff) * 2 & 0xffffffff) << 3);
            uVar15 = uVar15 + 3;
            uVar3 = *(uint *)(iVar7 + iVar5);
            *puVar12 = aiStack_50[0] << 0x1f | *puVar12 & 0x7fffffff;
            puVar12[6] = (aiStack_50[0] >> 1) << 0x1f | puVar12[6] & 0x7fffffff;
            *(uint *)(iVar7 + iVar5) = (aiStack_50[0] >> 2) << 0x1f | uVar3 & 0x7fffffff;
            lVar14 = lVar14 + (ulonglong)*(uint *)(param_1 + 0x88);
            uVar10 = lVar14 + 2;
            puVar12 = (uint *)((int)lVar14 * 0x18 + iVar5);
            iVar16 = (int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            uVar3 = *(uint *)(iVar16 + iVar5);
            iVar7 = aiStack_50[0] >> 4;
            *puVar12 = (aiStack_50[0] >> 3) << 0x1f | *puVar12 & 0x7fffffff;
            aiStack_50[0] = aiStack_50[0] >> 5;
            puVar12[6] = iVar7 << 0x1f | puVar12[6] & 0x7fffffff;
            *(uint *)(iVar16 + iVar5) = aiStack_50[0] << 0x1f | uVar3 & 0x7fffffff;
            iVar7 = *(int *)(param_1 + 0x88);
          } while ((int)uVar15 < iVar7);
        }
        uVar11 = uVar11 + 2;
      } while ((int)uVar11 < *(int *)(param_1 + 0x8c));
    }
  }
  lVar14 = 0;
  iVar7 = (int)uVar9;
  if (0 < iVar7) {
    do {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar8 = *plVar1;
      uVar11 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar8 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar11 - 1);
      if ((longlong)((ulonglong)uVar11 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar8 < 0) {
        iVar16 = 0;
        if (0 < *(int *)(param_1 + 0x8c)) {
          do {
            puVar2 = *(ulonglong **)(param_1 + 0x54);
            uVar15 = *puVar2;
            uVar11 = *(uint *)(puVar2 + 1);
            *puVar2 = uVar15 << 1;
            *(int *)(puVar2 + 1) = (int)((ulonglong)uVar11 - 1);
            if ((longlong)((ulonglong)uVar11 - 1) < 0) {
              fn_82C4E5E8();
            }
            uVar10 = (longlong)iVar16 * (longlong)*(int *)(param_1 + 0x88) + lVar14;
            iVar16 = iVar16 + 1;
            iVar4 = (int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(uint *)(iVar4 + iVar5) =
                 (uint)((uVar15 >> 0x3f) << 0x1f) | *(uint *)(iVar4 + iVar5) & 0x7fffffff;
          } while (iVar16 < *(int *)(param_1 + 0x8c));
        }
      }
      else {
        iVar16 = 0;
        if (0 < *(int *)(param_1 + 0x8c)) {
          do {
            uVar15 = (longlong)iVar16 * (longlong)*(int *)(param_1 + 0x88) + lVar14;
            iVar16 = iVar16 + 1;
            iVar4 = (int)((uVar15 + (uVar15 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(uint *)(iVar4 + iVar5) = *(uint *)(iVar4 + iVar5) & 0x7fffffff;
          } while (iVar16 < *(int *)(param_1 + 0x8c));
        }
      }
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < iVar7);
  }
  if (uVar13 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x54);
    lVar14 = *plVar1;
    uVar13 = *(uint *)(plVar1 + 1);
    *plVar1 = lVar14 << 1;
    *(int *)(plVar1 + 1) = (int)((ulonglong)uVar13 - 1);
    if ((longlong)((ulonglong)uVar13 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar14 < 0) {
      if (iVar7 < *(int *)(param_1 + 0x88)) {
        lVar17 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x1fffffff) * 8 + lVar17 + -0x18;
        do {
          puVar2 = *(ulonglong **)(param_1 + 0x54);
          uVar15 = *puVar2;
          uVar13 = *(uint *)(puVar2 + 1);
          *puVar2 = uVar15 << 1;
          *(int *)(puVar2 + 1) = (int)((ulonglong)uVar13 - 1);
          if ((longlong)((ulonglong)uVar13 - 1) < 0) {
            fn_82C4E5E8();
          }
          iVar5 = (int)lVar17;
          uVar9 = uVar9 + 1;
          lVar17 = lVar17 + 0x18;
          *(uint *)lVar17 = (uint)((uVar15 >> 0x3f) << 0x1f) | *(uint *)(iVar5 + 0x18) & 0x7fffffff;
        } while ((int)uVar9 < *(int *)(param_1 + 0x88));
        return 0;
      }
    }
    else if (iVar7 < *(int *)(param_1 + 0x88)) {
      lVar17 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x1fffffff) * 8 + lVar17 + -0x18;
      do {
        iVar5 = (int)lVar17;
        uVar9 = uVar9 + 1;
        lVar17 = lVar17 + 0x18;
        *(uint *)lVar17 = *(uint *)(iVar5 + 0x18) & 0x7fffffff;
      } while ((int)uVar9 < *(int *)(param_1 + 0x88));
    }
  }
  return 0;
}

