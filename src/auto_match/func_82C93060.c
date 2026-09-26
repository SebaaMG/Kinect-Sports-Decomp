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
extern int fn_82C4E1D0();
extern unsigned int uStack00000024;


undefined8
fn_82C93060(int param_1,int param_2,ulonglong param_3,uint param_4,uint *param_5,int *param_6,
             uint *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int *piVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uVar18;
  ulonglong uVar17;
  undefined4 *puVar19;
  undefined4 *puVar21;
  longlong lVar20;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined4 *puVar25;
  int iVar27;
  int iVar28;
  undefined4 *puVar29;
  longlong lVar26;
  undefined4 *puVar31;
  ulonglong uVar30;
  int *piVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  uint uStack00000024;
  uint *puStack00000044;
  int *piStack0000004c;
  
  uStack00000024 = (uint)param_3;
  iVar37 = 1;
  if ((*(int *)(param_1 + 0x120) == 0) || (bVar15 = false, *(int *)(param_1 + 0x120) == 4)) {
    bVar15 = true;
  }
  if (*(int *)(param_1 + 0x567c) == 1) {
    iVar27 = *(int *)(param_1 + 0x50d0);
  }
  else {
    iVar27 = 0;
  }
  iVar1 = *(int *)(param_1 + 0xec0);
  iVar2 = *(int *)(param_1 + 0xdc);
  iVar3 = *(int *)(param_1 + 0xe0);
  iVar4 = *(int *)(param_1 + 0xec4);
  iVar5 = *(int *)(param_1 + 0xec8);
  iVar6 = *(int *)(param_1 + 0xed0);
  iVar7 = *(int *)(param_1 + 0xed4);
  iVar24 = (*(int *)(param_1 + 0xcc) >> 1) * iVar27;
  iVar8 = *(int *)(param_1 + 0xee4);
  iVar27 = (*(int *)(param_1 + 0xd0) >> 1) * iVar27;
  if ((param_2 == 1) && (param_5 != (uint *)0x0)) {
    puStack00000044 = param_7;
    piStack0000004c = param_8;
    if (*param_5 < *(uint *)(param_1 + 0x8c)) {
      do {
        uVar18 = *param_5;
        uVar33 = iVar37 * param_4;
        iVar36 = uVar18 * *(int *)(param_1 + 0xe4) + uVar33 * 0x10;
        iVar38 = uVar18 * *(int *)(param_1 + 0xe8) + uVar33 * 8;
        iVar39 = iVar36 + iVar1 + iVar2 + iVar24;
        iVar34 = iVar38 + iVar4 + iVar3 + iVar27;
        iVar35 = iVar38 + iVar5 + iVar3 + iVar27;
        iVar40 = iVar38 + iVar6 + iVar3 + iVar27;
        if (((*(int *)(param_1 + 0x55b4) != 0) &&
            (*(int *)(*(int *)(param_1 + 0x55d0) + uVar18 * 4) != 0)) &&
           ((iVar37 == 0 || (0 < (int)param_3)))) {
          lVar20 = 0;
          iVar37 = 4;
          uVar17 = (ulonglong)*(uint *)(param_1 + 0x55c8) + (ulonglong)*(uint *)(param_1 + 0x5604);
          for (uVar30 = 1;
              (uVar30 & 0xffffffff) <=
              ((ulonglong)*(uint *)(param_1 + 0x55d8) +
               (((param_3 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(param_3 == 0) & 0xffffffff);
              uVar30 = uVar30 + 1) {
            puVar13 = (uint *)(*(int *)(param_1 + 0x55c4) + iVar37);
            iVar37 = iVar37 + 4;
            uVar17 = *puVar13 + uVar17;
          }
          if ((uVar30 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x55bc)) {
            lVar26 = (uVar30 & 0x3fffffff) << 2;
            do {
              iVar37 = (int)lVar26;
              uVar30 = uVar30 + 1;
              lVar26 = lVar26 + 4;
              lVar20 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x55c4) + iVar37) + lVar20;
            } while ((uVar30 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x55bc));
          }
          if ((uVar17 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x5604)) {
            fn_82C4E1D0(*(int *)(param_1 + 0x50),uVar17 - 1,lVar20 + 1,
                              *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18),
                              *(int *)(param_1 + 0x3cb0) == 7);
            uVar18 = 0;
            while( true ) {
              plVar10 = *(longlong **)(param_1 + 0x50);
              if (*plVar10 < 0) break;
              uVar18 = uVar18 + 1;
              *plVar10 = *plVar10 << 1;
              *(int *)(plVar10 + 1) = *(int *)(plVar10 + 1) + -1;
              if (7 < uVar18) {
                return 1;
              }
            }
            if (7 < uVar18) goto LAB_82c93130;
            *param_5 = *param_5 - 1;
            if (param_6 != (int *)0x0) {
              *param_6 = *param_6 + -0x10;
            }
            uVar18 = *param_5 + 1;
            uVar33 = *(int *)(param_1 + 0x88) * uVar18;
            if ((int)param_3 < 0) {
              uVar18 = *param_5;
            }
            if (puStack00000044 != (uint *)0x0) {
              *puStack00000044 = uVar33;
            }
            if (*piStack0000004c != 0) {
              piVar32 = piStack0000004c + 3;
              do {
                uVar11 = piVar32[1];
                if ((ulonglong)uVar11 == 0) {
                  *(uint *)piVar32[-3] = *piVar32 * uVar18 + piVar32[-1] * uVar33 + piVar32[-2];
                }
                else {
                  trapWord(6,(ulonglong)uVar11,0);
                  *(uint *)piVar32[-3] =
                       (uVar33 - (uVar33 / uVar11) * uVar11) * piVar32[-1] + *piVar32 * uVar18 +
                       piVar32[-2];
                }
                piVar14 = piVar32 + 2;
                piVar32 = piVar32 + 5;
              } while (*piVar14 != 0);
            }
            goto LAB_82c935b4;
          }
          goto LAB_82c93130;
        }
        if ((*(int *)(param_1 + 0x120) != 2) || (*(int *)(param_1 + 0xd68) != 0)) {
          if ((bVar15) && (*(longlong *)(param_1 + 0xe30) == 1)) {
            iVar37 = *(int *)(param_1 + 0x567c);
            iVar36 = (iVar37 == 1) + 1;
            if ((iVar37 != 1) || (iVar38 = 1, *(int *)(param_1 + 0x54c8) == 0)) {
              iVar38 = iVar36;
            }
            if (iVar37 == 1) {
              iVar37 = *(int *)(param_1 + 0x50d0);
              if (7 < iVar37) goto LAB_82c93398;
            }
            else {
              iVar37 = 0;
            }
            do {
              iVar40 = *(int *)(param_1 + 0xcc) >> 2;
              iVar28 = *(int *)(param_1 + 0xd0) * iVar37;
              puVar31 = (undefined4 *)(iVar37 * 2 * *(int *)(param_1 + 0xcc) + iVar39);
              puVar23 = (undefined4 *)(iVar28 + iVar34);
              puVar22 = (undefined4 *)(iVar28 + iVar35);
              uVar18 = (*(int *)(param_1 + 0xd0) >> 2) * iVar38 & 0x3fffffff;
              puVar25 = puVar31 + iVar40 * iVar36;
              puVar29 = puVar31 + -(iVar40 * iVar38 & 0x3fffffffU);
              puVar21 = puVar23 + -uVar18;
              puVar19 = puVar22 + -uVar18;
              if ((*param_5 != 0) && (uVar18 = uVar33, (int)uVar33 < *(int *)(param_1 + 0x88))) {
                do {
                  uVar9 = *puVar29;
                  uVar18 = uVar18 + 1;
                  *puVar31 = uVar9;
                  *puVar25 = uVar9;
                  uVar9 = puVar29[1];
                  puVar31[1] = uVar9;
                  puVar25[1] = uVar9;
                  uVar9 = puVar29[2];
                  puVar31[2] = uVar9;
                  puVar25[2] = uVar9;
                  uVar9 = puVar29[3];
                  puVar29 = puVar29 + 4;
                  puVar31[3] = uVar9;
                  puVar25[3] = uVar9;
                  puVar31 = puVar31 + 4;
                  *puVar23 = *puVar21;
                  puVar25 = puVar25 + 4;
                  puVar12 = puVar21 + 1;
                  puVar21 = puVar21 + 2;
                  puVar23[1] = *puVar12;
                  *puVar22 = *puVar19;
                  puVar23 = puVar23 + 2;
                  puVar12 = puVar19 + 1;
                  puVar19 = puVar19 + 2;
                  puVar22[1] = *puVar12;
                  puVar22 = puVar22 + 2;
                } while ((int)uVar18 < *(int *)(param_1 + 0x88));
              }
              iVar37 = iVar37 + iVar36;
            } while (iVar37 < 8);
          }
          else {
            param_4 = uVar33;
            if (*(uint *)(param_1 + 0x88) <= uVar33) goto LAB_82c9339c;
            iVar38 = (iVar38 + iVar7 + iVar3 + iVar27) - iVar40;
            iVar37 = (iVar36 + iVar8 + iVar24) - iVar39;
            iVar35 = iVar35 - iVar40;
            iVar34 = iVar34 - iVar40;
            do {
              (**(code **)(param_1 + 0xc54))
                        (iVar39,iVar34 + iVar40,iVar35 + iVar40,iVar37 + iVar39,iVar40,
                         iVar38 + iVar40,*(undefined4 *)(param_1 + 0xcc),
                         *(undefined4 *)(param_1 + 0xd0));
              param_4 = param_4 + 1;
              iVar40 = iVar40 + 8;
              iVar39 = iVar39 + 0x10;
            } while (param_4 < *(uint *)(param_1 + 0x88));
          }
LAB_82c93398:
          param_3 = (ulonglong)uStack00000024;
        }
LAB_82c9339c:
        iVar37 = 0;
        if (param_6 != (int *)0x0) {
          *param_6 = *param_6 + 0x10;
        }
        uVar18 = *param_5;
        *param_5 = uVar18 + 1;
      } while (uVar18 + 1 < *(uint *)(param_1 + 0x8c));
      uVar16 = 0;
      *(undefined4 *)(param_1 + 0xbbc) = 0;
    }
    else {
LAB_82c935b4:
      uVar16 = 0;
      *(undefined4 *)(param_1 + 0xbbc) = 0;
    }
  }
  else {
LAB_82c93130:
    uVar16 = 1;
  }
  return uVar16;
}

