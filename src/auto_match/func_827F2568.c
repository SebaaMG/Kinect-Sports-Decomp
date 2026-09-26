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
extern int fn_827F3A60();
extern int fn_827F3B30();
extern int fn_827F3B90();
extern int fn_827F3BA8();
extern int fn_827F3C08();
extern int fn_827F3C18();
extern int fn_82F68CC0();


void fn_827F2568(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar16;
  longlong lVar15;
  byte bVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar21;
  ulonglong uVar20;
  int aiStack_80 [32];
  
  bVar1 = *(byte *)(param_1 + 0x53);
  if ((uint)*(byte *)(param_1 + 0x54) == (uint)bVar1) {
    piVar2 = *(int **)((bVar1 + 8) * 4 + param_1);
    if ((*(byte *)((uint)(bVar1 >> 3) + param_1 + 0x52) >> (bVar1 & 7) & 1) != 0) {
      uVar8 = fn_827F3A60(piVar2);
      uVar9 = fn_827F3BA8(piVar2);
      uVar10 = fn_827F3BA8(param_1);
      fn_82F68CC0(uVar10,uVar9,uVar8);
      return;
    }
    uVar8 = fn_827F3BA8(param_1);
    fn_827F3B30(piVar2,uVar8);
    uVar8 = fn_827F3C18(param_1);
    uVar9 = fn_827F3C08(param_1);
    fn_827F3B90(piVar2,uVar9,uVar8);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_827F3B30(piVar2,0);
    fn_827F3B90(piVar2,0,0);
    return;
  }
  bVar5 = false;
  lVar11 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  uVar4 = lVar11 + 0xfU & 0xfffffff0;
  uVar12 = fn_827F3A60(param_1);
  bVar1 = *(byte *)(param_1 + 0x54);
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  aiStack_80[2] = 0;
  aiStack_80[3] = 0;
  uVar18 = 0;
  uVar16 = (uint)bVar1;
  uVar14 = ~(uint)(*(byte *)((uint)(bVar1 >> 3) + param_1 + 0x52) >> (bVar1 & 7)) & 1;
  while (uVar16 != *(byte *)(param_1 + 0x53)) {
    uVar16 = uVar16 + 1 & 3;
    uVar14 = (~(uint)(*(byte *)(param_1 + 0x52) >> uVar16) & 1) + uVar14;
  }
  if ((int)uVar14 < 1) goto LAB_827f274c;
  uVar16 = uVar14;
  if ((int)uVar14 < 1) {
LAB_827f2708:
    uVar19 = uVar16;
    iVar21 = 1;
    if ((*(byte *)((uint)(bVar1 >> 3) + param_1 + 0x52) >> (bVar1 & 7) & 1) != 0) goto LAB_827f2728;
  }
  else {
    uVar19 = 1;
    uVar16 = 1;
    if ((int)uVar14 < 2) goto LAB_827f2708;
LAB_827f2728:
    iVar21 = 0;
  }
  lVar11 = fn_827F3C18(param_1);
  uVar18 = (lVar11 - (longlong)(int)(uVar19 - iVar21) * (longlong)(int)uVar12 & 0xffffffffU) /
           (ulonglong)uVar19 - uVar4 & 0xfffffff0;
LAB_827f274c:
  lVar11 = fn_827F3C08(param_1);
  uVar20 = (ulonglong)*(byte *)(param_1 + 0x54);
  iVar21 = 0;
  while( true ) {
    uVar14 = (uint)uVar20;
    if ((*(byte *)((uVar14 >> 3) + param_1 + 0x52) >> (uVar14 & 7) & 1) == 0) {
      lVar13 = lVar11;
      if (uVar14 == *(byte *)(param_1 + 0x54)) {
        lVar13 = fn_827F3BA8(param_1);
      }
      iVar6 = (int)(uVar20 << 2);
      iVar7 = (uVar14 + 8) * 4;
      uVar3 = *(undefined4 *)(iVar7 + param_1);
      lVar15 = (-(ulonglong)(*(byte *)(param_1 + 0x54) != uVar20) & uVar12) + lVar11;
      lVar11 = lVar15 + uVar18;
      *(int *)((int)aiStack_80 + iVar6) = (int)lVar11;
      lVar11 = lVar11 + uVar4;
      fn_827F3B30(uVar3,lVar13);
      fn_827F3B90(*(undefined4 *)(iVar7 + param_1),lVar15,uVar18);
      piVar2 = *(int **)((int)aiStack_80 + iVar6);
      (**(code **)(**(int **)(param_1 + 4) + 0xc))
                (*(int **)(param_1 + 4),piVar2,*(undefined4 *)(iVar7 + param_1));
      (**(code **)(*piVar2 + 4))(piVar2);
      iVar21 = iVar21 + 1;
    }
    if (uVar14 == *(byte *)(param_1 + 0x53)) break;
    uVar20 = uVar20 + 1 & 3;
    if (0 < iVar21) {
LAB_827f2848:
      if (aiStack_80[*(byte *)(param_1 + 0x54)] == 0) {
        uVar8 = fn_827F3A60(*(undefined4 *)((*(byte *)(param_1 + 0x54) + 8) * 4 + param_1));
        uVar9 = fn_827F3BA8(*(undefined4 *)((*(byte *)(param_1 + 0x54) + 8) * 4 + param_1));
        uVar10 = fn_827F3BA8(param_1);
        fn_82F68CC0(uVar10,uVar9,uVar8);
      }
      bVar1 = *(byte *)(param_1 + 0x54);
      uVar14 = (uint)bVar1;
      uVar16 = (uint)bVar1;
      if (bVar1 != *(byte *)(param_1 + 0x53)) {
        do {
          uVar19 = uVar14;
          piVar2 = (int *)aiStack_80[uVar19];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            (**(code **)(*piVar2 + 0xc))(piVar2);
          }
          if (uVar19 != uVar16) {
            (**(code **)(**(int **)((uVar16 + 0xc) * 4 + param_1) + 0xc))();
          }
          if (piVar2 != (int *)0x0) {
            if (!bVar5) {
              bVar1 = *(byte *)(((uint)uVar20 >> 3) + param_1 + 0x52) >> ((uint)uVar20 & 7);
              bVar17 = bVar1 & 1;
              if ((bVar1 & 1) != 0) {
                do {
                  if ((uint)uVar20 == (uint)*(byte *)(param_1 + 0x53)) {
                    bVar5 = true;
                    break;
                  }
                  uVar20 = uVar20 + 1 & 3;
                  bVar17 = *(byte *)(param_1 + 0x52) & 1;
                } while ((*(byte *)(param_1 + 0x52) & 1) != 0);
              }
              if (bVar17 == 0) {
                lVar13 = lVar11;
                if (uVar19 != uVar16) {
                  lVar13 = fn_827F3BA8(*(undefined4 *)((uVar19 + 8) * 4 + param_1));
                }
                lVar11 = (-(ulonglong)(uVar16 == uVar19) & uVar12) + lVar11;
                uVar8 = fn_827F3C08(*(undefined4 *)((uVar19 + 8) * 4 + param_1));
                iVar21 = ((uint)uVar20 + 8) * 4;
                uVar3 = *(undefined4 *)(iVar21 + param_1);
                *(int **)((int)aiStack_80 + (int)(uVar20 << 2)) = piVar2;
                fn_827F3B30(uVar3,lVar13);
                fn_827F3B90(*(undefined4 *)(iVar21 + param_1),uVar8,uVar18);
                (**(code **)(**(int **)(param_1 + 4) + 0xc))
                          (*(int **)(param_1 + 4),piVar2,*(undefined4 *)(iVar21 + param_1));
                (**(code **)(*piVar2 + 4))(piVar2);
                if ((uint)uVar20 == (uint)*(byte *)(param_1 + 0x53)) {
                  bVar5 = true;
                }
                else {
                  uVar20 = uVar20 + 1 & 3;
                }
              }
            }
            iVar21 = (uVar19 + 8) * 4;
            fn_827F3B30(*(undefined4 *)(iVar21 + param_1),0);
            fn_827F3B90(*(undefined4 *)(iVar21 + param_1),0,0);
            aiStack_80[uVar19] = 0;
          }
          uVar14 = uVar19 + 1 & 3;
          uVar16 = uVar19;
        } while (uVar19 != *(byte *)(param_1 + 0x53));
      }
      return;
    }
  }
  bVar5 = true;
  goto LAB_827f2848;
}

