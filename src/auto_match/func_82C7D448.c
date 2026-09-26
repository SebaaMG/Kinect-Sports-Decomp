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


undefined8 fn_82C7D448(int param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int aiStack_80 [32];
  
  uVar3 = ((ulonglong)*(uint *)(param_1 + 0x8c) + 1 & 0xffffffff) >> 1;
  uVar15 = (uint)uVar3;
  uVar13 = 0;
  uVar4 = ((ulonglong)*(uint *)(param_1 + 0x88) + 1 & 0xffffffff) >> 1;
  uVar18 = (uint)uVar4;
  iVar8 = (int)param_2;
  if ((uVar3 == ((ulonglong)(longlong)(int)uVar15 / 3) * 3) &&
     (uVar4 != ((ulonglong)(longlong)(int)uVar18 / 3) * 3)) {
    uVar20 = uVar4 & 1;
    iVar14 = 0;
    if (uVar15 != 0) {
      lVar16 = 0;
      do {
        uVar17 = uVar20;
        if ((uint)uVar20 < uVar18) {
          do {
            iVar7 = (int)lVar16 + (int)uVar17;
            uVar10 = fn_82C57C50(*(undefined4 *)(param_1 + 0x54),0xffffffff820fd638,
                                   0xffffffff820fd678,aiStack_80);
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            *(byte *)(iVar7 + iVar8) = (byte)aiStack_80[0] & 1;
            iVar9 = uVar18 * 2 + iVar8;
            *(byte *)(iVar7 + iVar8 + 1) = (byte)(aiStack_80[0] >> 1) & 1;
            iVar5 = aiStack_80[0] >> 3;
            *(byte *)(uVar18 + iVar8 + iVar7) = (byte)(aiStack_80[0] >> 2) & 1;
            iVar6 = aiStack_80[0] >> 4;
            aiStack_80[0] = aiStack_80[0] >> 5;
            *(byte *)(uVar18 + iVar8 + iVar7 + 1) = (byte)iVar5 & 1;
            uVar17 = uVar17 + 2;
            *(byte *)(iVar9 + iVar7) = (byte)iVar6 & 1;
            *(byte *)(iVar9 + iVar7 + 1) = (byte)aiStack_80[0] & 1;
          } while ((int)uVar17 < (int)uVar18);
        }
        iVar14 = iVar14 + 3;
        lVar16 = uVar4 * 3 + lVar16;
      } while (iVar14 < (int)uVar15);
    }
  }
  else {
    uVar17 = uVar3 & 1;
    uVar13 = (uint)uVar17;
    uVar20 = uVar4 + ((ulonglong)(longlong)(int)uVar18 / 3) * -3;
    if (uVar13 < uVar15) {
      lVar16 = (longlong)(int)uVar18 * (longlong)(int)uVar13;
      do {
        iVar14 = (int)uVar20;
        uVar19 = uVar20;
        while (iVar14 < (int)uVar18) {
          iVar14 = (int)lVar16 + (int)uVar19;
          uVar10 = fn_82C57C50(*(undefined4 *)(param_1 + 0x54),0xffffffff820fd638,
                                 0xffffffff820fd678,aiStack_80);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          *(byte *)(iVar14 + iVar8) = (byte)aiStack_80[0] & 1;
          iVar5 = uVar18 + iVar8;
          *(byte *)(iVar14 + iVar8 + 1) = (byte)(aiStack_80[0] >> 1) & 1;
          *(byte *)(iVar14 + iVar8 + 2) = (byte)(aiStack_80[0] >> 2) & 1;
          iVar7 = aiStack_80[0] >> 4;
          *(byte *)(iVar5 + iVar14) = (byte)(aiStack_80[0] >> 3) & 1;
          aiStack_80[0] = aiStack_80[0] >> 5;
          uVar19 = uVar19 + 3;
          *(byte *)(iVar5 + iVar14 + 1) = (byte)iVar7 & 1;
          *(byte *)(iVar5 + iVar14 + 2) = (byte)aiStack_80[0] & 1;
          iVar14 = (int)uVar19;
        }
        uVar17 = uVar17 + 2;
        lVar16 = lVar16 + uVar4 * 2;
      } while ((int)uVar17 < (int)uVar15);
    }
  }
  iVar14 = (int)uVar20;
  uVar17 = uVar20;
  lVar16 = param_2;
  if (0 < iVar14) {
    do {
      plVar1 = *(longlong **)(param_1 + 0x54);
      lVar11 = *plVar1;
      uVar2 = *(uint *)(plVar1 + 1);
      *plVar1 = lVar11 << 1;
      *(int *)(plVar1 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar11 < 0) {
        if (uVar15 != 0) {
          lVar11 = lVar16 - uVar4;
          uVar19 = uVar3;
          do {
            plVar1 = *(longlong **)(param_1 + 0x54);
            lVar12 = *plVar1;
            uVar2 = *(uint *)(plVar1 + 1);
            *plVar1 = lVar12 << 1;
            *(int *)(plVar1 + 1) = (int)((ulonglong)uVar2 - 1);
            if ((longlong)((ulonglong)uVar2 - 1) < 0) {
              fn_82C4E5E8();
            }
            uVar19 = uVar19 - 1;
            lVar11 = lVar11 + uVar4;
            *(byte *)lVar11 = (byte)((ulonglong)lVar12 >> 0x3f);
          } while (uVar19 != 0);
        }
      }
      else if (uVar15 != 0) {
        lVar11 = lVar16 - uVar4;
        uVar19 = uVar3;
        do {
          lVar11 = lVar11 + uVar4;
          *(undefined1 *)lVar11 = 0;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      uVar17 = uVar17 - 1;
      lVar16 = lVar16 + 1;
    } while (uVar17 != 0);
  }
  if (uVar13 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x54);
    lVar16 = *plVar1;
    uVar13 = *(uint *)(plVar1 + 1);
    *plVar1 = lVar16 << 1;
    *(int *)(plVar1 + 1) = (int)((ulonglong)uVar13 - 1);
    if ((longlong)((ulonglong)uVar13 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar16 < 0) {
      if (iVar14 < (int)uVar18) {
        do {
          plVar1 = *(longlong **)(param_1 + 0x54);
          lVar16 = *plVar1;
          uVar13 = *(uint *)(plVar1 + 1);
          *plVar1 = lVar16 << 1;
          *(int *)(plVar1 + 1) = (int)((ulonglong)uVar13 - 1);
          if ((longlong)((ulonglong)uVar13 - 1) < 0) {
            fn_82C4E5E8();
          }
          *(byte *)((int)uVar20 + iVar8) = (byte)((ulonglong)lVar16 >> 0x3f);
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar18);
        return 0;
      }
    }
    else if (iVar14 < (int)uVar18) {
      lVar16 = uVar20 + param_2 + -1;
      for (lVar11 = uVar4 - uVar20; lVar11 != 0; lVar11 = lVar11 + -1) {
        lVar16 = lVar16 + 1;
        *(undefined1 *)lVar16 = 0;
      }
    }
  }
  return 0;
}

