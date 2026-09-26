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
extern unsigned int *auStack_a0;
extern int fn_829BCB40();
extern int fn_829BCCA8();
extern unsigned int iStack_80;
extern unsigned int iStack_88;
extern unsigned int lbl_820548B8;
extern unsigned int lbl_82055048;
extern unsigned int lbl_82055088;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8 fn_829BCDD0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint auStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(iVar1 + 0x24) == 0)) {
    uVar17 = *(uint *)(iVar1 + 0x10);
    *(uint *)(*(int *)(param_1 + 0x1bc) + 0x18) =
         ((int)uVar17 >> 3) + (uint)((int)uVar17 < 0 && (uVar17 & 7) != 0) +
         *(int *)(*(int *)(param_1 + 0x1bc) + 0x18);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    iVar9 = (**(code **)(*(int *)(param_1 + 0x1bc) + 8))();
    if (iVar9 == 0) {
      return 0;
    }
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x14c)) {
      puVar12 = (undefined4 *)(iVar1 + 0x10);
      do {
        iVar9 = iVar9 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = 0;
      } while (iVar9 < *(int *)(param_1 + 0x14c));
    }
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x118);
    if (*(int *)(param_1 + 0x1a4) == 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  if (*(int *)(iVar1 + 8) == 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    auStack_a0[1] = *(undefined4 *)(iVar1 + 0x18);
    iVar13 = 0;
    auStack_a0[2] = *(undefined4 *)(iVar1 + 0x1c);
    auStack_a0[3] = *(undefined4 *)(iVar1 + 0x20);
    uStack_90 = **(undefined4 **)(param_1 + 0x18);
    uStack_8c = (*(undefined4 **)(param_1 + 0x18))[1];
    iVar9 = *(int *)(iVar1 + 0xc);
    uVar10 = (ulonglong)*(uint *)(iVar1 + 0x10);
    if (0 < *(int *)(param_1 + 0x168)) {
      piVar14 = (int *)(param_1 + 0x16c);
      piVar15 = (int *)(iVar1 + 0x70);
      iStack_80 = param_1;
      do {
        puVar3 = (undefined2 *)*param_2;
        iVar16 = piVar15[-10];
        iVar4 = *piVar15;
        if ((int)uVar10 < 8) {
          iVar9 = fn_829BCB40(&uStack_90,iVar9,uVar10,0);
          if (iVar9 == 0) {
            return 0;
          }
          uVar10 = (ulonglong)uStack_84;
          iVar9 = iStack_88;
          if (7 < (int)uStack_84) goto LAB_829bcf4c;
          uVar11 = 1;
LAB_829bcf80:
          uVar8 = fn_829BCCA8(&uStack_90,iVar9,uVar10,iVar16,uVar11);
          if ((int)uVar8 < 0) {
            return 0;
          }
          uVar10 = (ulonglong)uStack_84;
          iVar9 = iStack_88;
        }
        else {
LAB_829bcf4c:
          uVar6 = iVar9 >> ((int)uVar10 - 8U & 0x3f) & 0xff;
          uVar17 = *(uint *)((uVar6 + 0x24) * 4 + iVar16);
          if (uVar17 == 0) {
            uVar11 = 9;
            goto LAB_829bcf80;
          }
          uVar10 = uVar10 - uVar17;
          uVar8 = (ulonglong)*(byte *)(uVar6 + iVar16 + 0x490);
        }
        uVar17 = (uint)uVar8;
        if (uVar17 != 0) {
          if ((int)uVar10 < (int)uVar17) {
            iVar9 = fn_829BCB40(&uStack_90,iVar9,uVar10,uVar8);
            if (iVar9 == 0) {
              return 0;
            }
            uVar10 = (ulonglong)uStack_84;
            iVar9 = iStack_88;
          }
          uVar10 = uVar10 - uVar8;
          iVar16 = (int)((uVar8 & 0xffffffff) << 2);
          uVar8 = (ulonglong)(uint)(1 << (uVar17 & 0x3f)) - 1 &
                  (longlong)(iVar9 >> ((uint)uVar10 & 0x3f));
          if ((int)uVar8 < *(int *)(&lbl_82055048 + iVar16)) {
            uVar8 = *(uint *)(&lbl_82055088 + iVar16) + uVar8;
          }
        }
        if (piVar15[10] != 0) {
          uVar17 = auStack_a0[*piVar14];
          auStack_a0[*piVar14] = (uint)(uVar17 + uVar8);
          *puVar3 = (short)(uVar17 + uVar8);
        }
        iVar16 = 1;
        if (piVar15[0x14] == 0) {
          do {
            if ((int)uVar10 < 8) {
              iVar9 = fn_829BCB40(&uStack_90,iVar9,uVar10,0);
              if (iVar9 == 0) {
                return 0;
              }
              uVar10 = (ulonglong)uStack_84;
              iVar9 = iStack_88;
              if (7 < (int)uStack_84) goto LAB_829bd184;
              uVar11 = 1;
LAB_829bd1b8:
              uVar8 = fn_829BCCA8(&uStack_90,iVar9,uVar10,iVar4,uVar11);
              if ((int)uVar8 < 0) {
                return 0;
              }
              uVar10 = (ulonglong)uStack_84;
              iVar9 = iStack_88;
            }
            else {
LAB_829bd184:
              uVar6 = iVar9 >> ((int)uVar10 - 8U & 0x3f) & 0xff;
              uVar17 = *(uint *)((uVar6 + 0x24) * 4 + iVar4);
              if (uVar17 == 0) {
                uVar11 = 9;
                goto LAB_829bd1b8;
              }
              uVar10 = uVar10 - uVar17;
              uVar8 = (ulonglong)*(byte *)(uVar6 + iVar4 + 0x490);
            }
            uVar7 = uVar8 & 0xf;
            iVar5 = (int)uVar8 >> 4;
            if ((int)uVar7 == 0) {
              if (iVar5 != 0xf) break;
              iVar16 = iVar16 + 0xf;
            }
            else {
              iVar16 = iVar16 + iVar5;
              if ((int)uVar10 < (int)uVar7) {
                iVar9 = fn_829BCB40(&uStack_90,iVar9,uVar10,uVar7);
                if (iVar9 == 0) {
                  return 0;
                }
                uVar10 = (ulonglong)uStack_84;
                iVar9 = iStack_88;
              }
              uVar10 = uVar10 - uVar7;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < 0x40);
        }
        else {
          do {
            if ((int)uVar10 < 8) {
              iVar9 = fn_829BCB40(&uStack_90,iVar9,uVar10,0);
              if (iVar9 == 0) {
                return 0;
              }
              uVar10 = (ulonglong)uStack_84;
              iVar9 = iStack_88;
              if (7 < (int)uStack_84) goto LAB_829bd068;
              uVar11 = 1;
LAB_829bd09c:
              uVar8 = fn_829BCCA8(&uStack_90,iVar9,uVar10,iVar4,uVar11);
              if ((int)uVar8 < 0) {
                return 0;
              }
              uVar10 = (ulonglong)uStack_84;
              iVar9 = iStack_88;
            }
            else {
LAB_829bd068:
              uVar6 = iVar9 >> ((int)uVar10 - 8U & 0x3f) & 0xff;
              uVar17 = *(uint *)((uVar6 + 0x24) * 4 + iVar4);
              if (uVar17 == 0) {
                uVar11 = 9;
                goto LAB_829bd09c;
              }
              uVar10 = uVar10 - uVar17;
              uVar8 = (ulonglong)*(byte *)(uVar6 + iVar4 + 0x490);
            }
            uVar7 = uVar8 & 0xf;
            iVar5 = (int)uVar8 >> 4;
            iVar18 = (int)uVar7;
            if (iVar18 == 0) {
              if (iVar5 != 0xf) break;
              iVar16 = iVar16 + 0xf;
            }
            else {
              iVar16 = iVar16 + iVar5;
              if ((int)uVar10 < iVar18) {
                iVar9 = fn_829BCB40(&uStack_90,iVar9,uVar10,uVar7);
                if (iVar9 == 0) {
                  return 0;
                }
                uVar10 = (ulonglong)uStack_84;
                iVar9 = iStack_88;
              }
              uVar10 = uVar10 - uVar7;
              iVar5 = (int)((uVar8 & 0xf) << 2);
              uVar17 = (1 << iVar18) - 1U & iVar9 >> ((uint)uVar10 & 0x3f);
              if ((int)uVar17 < *(int *)(&lbl_82055048 + iVar5)) {
                uVar17 = *(int *)(&lbl_82055088 + iVar5) + uVar17;
              }
              puVar3[*(int *)(&lbl_820548B8 + iVar16 * 4)] = (short)uVar17;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < 0x40);
        }
        iVar13 = iVar13 + 1;
        param_2 = param_2 + 1;
        piVar15 = piVar15 + 1;
        piVar14 = piVar14 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x168));
    }
    **(undefined4 **)(param_1 + 0x18) = uStack_90;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uStack_8c;
    *(int *)(iVar1 + 0xc) = iVar9;
    *(int *)(iVar1 + 0x10) = (int)uVar10;
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(uint *)(iVar1 + 0x18) = auStack_a0[1];
    *(uint *)(iVar1 + 0x1c) = auStack_a0[2];
    *(uint *)(iVar1 + 0x20) = auStack_a0[3];
  }
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  return 1;
}

