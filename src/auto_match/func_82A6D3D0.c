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
extern unsigned int *auStack_a8;
extern int fn_82A6D090();
extern int fn_82A75588();
extern unsigned int iStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82A6D3D0(int *param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  short sVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  short sVar18;
  int iVar20;
  longlong lVar19;
  int iVar21;
  short sVar24;
  int *piVar22;
  short *psVar23;
  longlong lVar25;
  int *piVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar32;
  ulonglong uVar31;
  int iVar33;
  int *piStack00000014;
  uint uStack_b0;
  int iStack_ac;
  uint auStack_a8 [42];
  
  iVar4 = *param_1;
  uVar10 = 0;
  uVar16 = 0;
  uVar2 = *(ushort *)(iVar4 + 0x22);
  uVar30 = (ulonglong)uVar2;
  lVar25 = 0;
  iVar20 = *(int *)(iVar4 + 0x100);
  uVar5 = *(uint *)(iVar4 + 0xe4);
  lVar27 = (longlong)iVar20 * (longlong)(int)(uint)uVar2;
  if (uVar5 == 1) {
    if (uVar2 != 0) {
      iVar20 = 0;
      do {
        iVar32 = iVar20 * 0x6f0;
        sVar11 = (short)iVar20 + 1;
        iVar20 = (int)sVar11;
        puVar14 = (undefined2 *)
                  (*(int *)(iVar32 + *(int *)(iVar4 + 0x140) + 0x1a8) + param_2 * 0x1c);
        **(undefined2 **)(puVar14 + 4) = (short)*(undefined4 *)(iVar4 + 0x100);
        **(undefined2 **)(puVar14 + 6) = 0;
        *puVar14 = 1;
      } while ((int)sVar11 < (int)(uint)*(ushort *)(iVar4 + 0x22));
    }
    uVar10 = 0;
  }
  else {
    if (*(int *)(iVar4 + 0xb0) == 0) {
      if (uVar5 == 4) {
        uVar16 = 1;
        lVar25 = 1;
        lVar19 = 2;
      }
      else if (uVar5 == 0x10) {
        lVar25 = 2;
        uVar16 = 1;
        lVar19 = 3;
      }
      else {
        uVar15 = 0;
        sVar11 = 0;
        uVar16 = uVar5;
        while (1 < uVar16) {
          uVar15 = uVar15 + 1;
          sVar11 = (short)uVar15;
          uVar16 = uVar5 >> (uVar15 & 0x3f);
        }
        lVar25 = 0;
        uVar16 = (int)(short)(sVar11 + 1) - 1;
        uVar5 = uVar16;
        while (1 < uVar5) {
          lVar25 = lVar25 + 1;
          uVar5 = uVar16 >> ((uint)lVar25 & 0x3f);
        }
        lVar25 = lVar25 + 1;
        uVar16 = 0;
        lVar19 = lVar25;
      }
    }
    else {
      lVar19 = 0;
      uVar15 = uVar5 - 1;
      while (1 < uVar15) {
        lVar19 = lVar19 + 1;
        uVar15 = uVar5 - 1 >> ((uint)lVar19 & 0x3f);
      }
      lVar19 = lVar19 + 1;
    }
    if (uVar2 != 0) {
      iVar32 = 0;
      do {
        lVar13 = 0;
        lVar12 = 0;
        iVar17 = 0;
        iVar6 = *(int *)(iVar32 * 0x6f0 + *(int *)(iVar4 + 0x140) + 0x1a8);
        iVar33 = iVar6 + param_2 * 0x1c;
        sVar11 = *(short *)(iVar6 + param_2 * 0x1c);
        if (1 < sVar11) {
          iVar6 = *(int *)(iVar33 + 8);
          iVar21 = 0;
          do {
            iVar8 = iVar6 + iVar21;
            psVar7 = (short *)(iVar6 + iVar21);
            iVar17 = iVar17 + 2;
            iVar21 = iVar21 + 4;
            lVar13 = lVar13 - *psVar7;
            lVar12 = lVar12 - *(short *)(iVar8 + 2);
          } while (iVar17 < sVar11 + -1);
        }
        if (iVar17 < sVar11) {
          lVar27 = lVar27 - *(short *)(iVar17 * 2 + *(int *)(iVar33 + 8));
        }
        sVar11 = (short)iVar32 + 1;
        iVar32 = (int)sVar11;
        lVar27 = lVar13 + lVar12 + lVar27;
      } while ((int)sVar11 < (int)(uint)uVar2);
    }
    if (0 < (int)lVar27) {
      piVar26 = param_1 + 0x38;
      piStack00000014 = param_1;
      do {
        piVar22 = piStack00000014;
        iStack_ac = 0;
        uStack_b0 = 0;
        bVar9 = false;
        sVar11 = (short)(iVar20 / *(int *)(iVar4 + 0xe4));
        uVar28 = 0;
        uVar10 = fn_82A75588(piVar26,uVar30 + lVar19 + 1);
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        iVar32 = (int)lVar27;
        if (iVar32 == (uint)*(ushort *)(iVar4 + 0x22) * *(int *)(iVar4 + 0x100)) {
          uVar10 = fn_82A6D090(piVar26,1,&iStack_ac);
          if ((int)uVar10 < 0) {
            return uVar10;
          }
          if (iStack_ac == 0) {
            piVar22[0x20] = 0;
          }
          else {
            piVar22[0x20] = 1;
          }
        }
        uVar2 = *(ushort *)(iVar4 + 0x22);
        sVar24 = (short)*(undefined4 *)(iVar4 + 0x100);
        if (uVar2 != 0) {
          sVar18 = 0;
          piVar22 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
          do {
            sVar3 = **(short **)(param_2 * 0x1c + *piVar22 + 0xc);
            if (sVar3 < sVar24) {
              sVar24 = sVar3;
            }
            sVar18 = sVar18 + 1;
            piVar22 = piVar22 + 0x1bc;
          } while ((int)sVar18 < (int)(uint)uVar2);
        }
        uVar30 = (ulonglong)uVar2;
        if (piStack00000014[0x20] == 0) {
          iStack_ac = 0;
          uVar30 = uVar28;
          if (uVar2 == 0) goto LAB_82a6d734;
          sVar18 = 0;
          piVar22 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
          do {
            if (sVar24 == **(short **)(param_2 * 0x1c + *piVar22 + 0xc)) {
              uVar28 = uVar28 + 1;
              iStack_ac = 1;
            }
            sVar18 = sVar18 + 1;
            piVar22 = piVar22 + 0x1bc;
          } while ((int)sVar18 < (int)(uint)uVar2);
          uVar30 = uVar28;
          if ((int)uVar28 < 2) goto LAB_82a6d734;
        }
        else {
LAB_82a6d734:
          uVar28 = uVar30;
          bVar9 = true;
        }
        iVar20 = (int)uVar28;
        bVar1 = iVar32 / iVar20 == (int)sVar11;
        if (bVar1) {
          bVar9 = true;
        }
        uVar29 = 0xffffffffffffffff;
        if (!bVar9) {
          uVar30 = 0x18;
          if (iVar20 < 0x19) {
            uVar30 = uVar28;
          }
          uVar29 = 0;
          uVar31 = uVar28;
          while (iVar20 != 0) {
            uVar10 = fn_82A6D090(piVar26,uVar30,auStack_a8);
            if ((int)uVar10 < 0) {
              return uVar10;
            }
            uVar31 = uVar31 - uVar30;
            iVar20 = (int)uVar31;
            uVar30 = 0x18;
            if (iVar20 < 0x19) {
              uVar30 = uVar31;
            }
            uVar29 = (auStack_a8[0] | uVar29) << ((longlong)(int)uVar30 & 0x7fU);
          }
        }
        if (!bVar1) {
          if (uVar16 == 0) {
            uVar10 = fn_82A6D090(piVar26,lVar19,&uStack_b0);
            if ((int)uVar10 < 0) {
              return uVar10;
            }
          }
          else {
            uVar10 = fn_82A6D090(piVar26,uVar16,&uStack_b0);
            if ((int)uVar10 < 0) {
              return uVar10;
            }
            if (uVar16 <= uStack_b0) {
              uVar10 = fn_82A6D090(piVar26,lVar25,&uStack_b0);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              uStack_b0 = uStack_b0 + uVar16;
            }
          }
          if (*(int *)(iVar4 + 0xb0) == 0) {
            sVar11 = (short)(*(int *)(iVar4 + 0x100) / (1 << (uStack_b0 & 0x3f)));
          }
          else {
            sVar11 = (short)(*(int *)(iVar4 + 0x100) / *(int *)(iVar4 + 0xe4)) *
                     ((short)uStack_b0 + 1);
          }
        }
        if (((int)sVar11 < *(int *)(iVar4 + 0xec)) ||
           (iVar20 = *(int *)(iVar4 + 0x100), iVar20 < sVar11)) {
          return 0xffffffff80040002;
        }
        sVar18 = 0;
        if (*(short *)(iVar4 + 0x22) == 0) {
          return 0xffffffff80040002;
        }
        piVar22 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
        do {
          psVar23 = (short *)(param_2 * 0x1c + *piVar22);
          sVar3 = *psVar23;
          psVar7 = *(short **)(psVar23 + 6);
          if (0x20 < sVar3) {
            return 0xffffffff80040002;
          }
          if ((sVar24 == *psVar7) &&
             (uVar28 = uVar28 - 1, (1L << ((longlong)(int)uVar28 & 0x7fU) & uVar29) != 0)) {
            if (0x1f < sVar3) {
              return 0xffffffff80040002;
            }
            lVar27 = lVar27 - sVar11;
            *(short *)(sVar3 * 2 + *(int *)(psVar23 + 4)) = sVar11;
            *psVar23 = *psVar23 + 1;
            sVar3 = *psVar7;
            *psVar7 = sVar3 + sVar11;
            if (lVar27 < 0) {
              return 0xffffffff80040002;
            }
            iVar20 = *(int *)(iVar4 + 0x100);
            if (iVar20 < (short)(sVar3 + sVar11)) {
              return 0xffffffff80040002;
            }
          }
          sVar18 = sVar18 + 1;
          uVar30 = (ulonglong)*(ushort *)(iVar4 + 0x22);
          piVar22 = piVar22 + 0x1bc;
        } while ((int)sVar18 < (int)(uint)*(ushort *)(iVar4 + 0x22));
        if (iVar32 <= (int)lVar27) {
          return 0xffffffff80040002;
        }
      } while (0 < (int)lVar27);
    }
    if ((int)uVar30 != 0) {
      iVar20 = 0;
      do {
        iVar32 = iVar20 * 0x6f0;
        sVar11 = (short)iVar20 + 1;
        iVar20 = (int)sVar11;
        **(undefined2 **)(*(int *)(iVar32 + *(int *)(iVar4 + 0x140) + 0x1a8) + param_2 * 0x1c + 0xc)
             = 0;
      } while ((int)sVar11 < (int)(uint)*(ushort *)(iVar4 + 0x22));
    }
  }
  return uVar10;
}

