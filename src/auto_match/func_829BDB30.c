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
extern int fn_829BCB40();
extern int fn_829BCCA8();
extern int fn_829BD4C0();
extern unsigned int iStack_1a4;
extern unsigned int iStack_1b8;
extern unsigned int lbl_820548B8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;


undefined8 fn_829BDB30(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  int *piStack_1b0;
  uint uStack_1ac;
  int iStack_1a4;
  int aiStack_1a0 [104];
  
  iVar2 = param_1[0x66];
  uStack_1ac = -1 << (param_1[0x68] & 0x3fU);
  iVar3 = param_1[0x70];
  uVar5 = 1 << (param_1[0x68] & 0x3fU);
  if (((param_1[0x46] != 0) && (*(int *)(iVar3 + 0x28) == 0)) &&
     (iVar8 = fn_829BD4C0(), iVar8 == 0)) {
    return 0;
  }
  if (*(int *)(iVar3 + 8) == 0) {
    iVar13 = 0;
    iVar8 = *param_2;
    iVar15 = param_1[0x65];
    uStack_1c0 = *(undefined4 *)param_1[6];
    uStack_1bc = ((undefined4 *)param_1[6])[1];
    iVar9 = *(int *)(iVar3 + 0x14);
    iVar11 = *(int *)(iVar3 + 0xc);
    uVar19 = (ulonglong)*(uint *)(iVar3 + 0x10);
    iVar4 = *(int *)(iVar3 + 0x3c);
    piStack_1b0 = param_1;
    if (iVar9 == 0) {
      iVar14 = 0;
      if (iVar15 <= iVar2) {
        piVar18 = &iStack_1a4;
        do {
          if ((int)uVar19 < 8) {
            iVar9 = fn_829BCB40(&uStack_1c0,iVar11,uVar19,0);
            if (iVar9 == 0) goto LAB_829bdf38;
            uVar19 = (ulonglong)uStack_1b4;
            iVar11 = iStack_1b8;
            if (7 < (int)uStack_1b4) goto LAB_829bdc30;
            uVar12 = 1;
LAB_829bdc64:
            uVar10 = fn_829BCCA8(&uStack_1c0,iVar11,uVar19,iVar4,uVar12);
            if ((int)uVar10 < 0) goto LAB_829bdf38;
            uVar19 = (ulonglong)uStack_1b4;
            iVar11 = iStack_1b8;
          }
          else {
LAB_829bdc30:
            uVar6 = iVar11 >> ((int)uVar19 - 8U & 0x3f) & 0xff;
            uVar10 = *(uint *)((uVar6 + 0x24) * 4 + iVar4);
            if (uVar10 == 0) {
              uVar12 = 9;
              goto LAB_829bdc64;
            }
            uVar19 = uVar19 - uVar10;
            uVar10 = (uint)*(byte *)(uVar6 + iVar4 + 0x490);
          }
          uVar6 = (int)uVar10 >> 4;
          lVar16 = (longlong)(int)uVar6;
          if ((uVar10 & 0xf) == 0) {
            uVar10 = 0;
            if (uVar6 != 0xf) {
              iVar9 = 1 << (uVar6 & 0x3f);
              if (uVar6 != 0) {
                if ((int)uVar19 < (int)uVar6) {
                  iVar11 = fn_829BCB40(&uStack_1c0,iVar11,uVar19,lVar16);
                  if (iVar11 == 0) goto LAB_829bdf38;
                  uVar19 = (ulonglong)uStack_1b4;
                  iVar11 = iStack_1b8;
                }
                uVar19 = uVar19 - lVar16;
                iVar9 = (iVar11 >> ((uint)uVar19 & 0x3f) & iVar9 - 1U) + iVar9;
              }
              iVar14 = 0;
              if (iVar9 != 0) goto LAB_829bde54;
              break;
            }
          }
          else {
            if ((uVar10 & 0xf) != 1) {
              *(undefined4 *)(*param_1 + 0x14) = 0x76;
              (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
            }
            if ((int)uVar19 < 1) {
              iVar9 = fn_829BCB40(&uStack_1c0,iVar11,uVar19,1);
              if (iVar9 == 0) goto LAB_829bdf38;
              uVar19 = (ulonglong)uStack_1b4;
              iVar11 = iStack_1b8;
            }
            uVar19 = uVar19 - 1;
            uVar10 = uStack_1ac;
            if ((iVar11 >> ((uint)uVar19 & 0x3f) & 1U) != 0) {
              uVar10 = uVar5;
            }
          }
          piVar17 = (int *)(&lbl_820548B8 + iVar15 * 4);
          do {
            iVar9 = *piVar17 * 2;
            if (*(short *)(iVar9 + iVar8) == 0) {
              lVar16 = lVar16 + -1;
              if (lVar16 < 0) break;
            }
            else {
              if ((int)uVar19 < 1) {
                iVar11 = fn_829BCB40(&uStack_1c0,iVar11,uVar19,1);
                if (iVar11 == 0) goto LAB_829bdf38;
                uVar19 = (ulonglong)uStack_1b4;
                iVar11 = iStack_1b8;
              }
              uVar19 = uVar19 - 1;
              if (((iVar11 >> ((uint)uVar19 & 0x3f) & 1U) != 0) &&
                 (sVar1 = *(short *)(iVar9 + iVar8), ((int)sVar1 & uVar5) == 0)) {
                if (sVar1 < 0) {
                  *(short *)(iVar9 + iVar8) = sVar1 + (short)uStack_1ac;
                }
                else {
                  *(short *)(iVar9 + iVar8) = sVar1 + (short)uVar5;
                }
              }
            }
            iVar15 = iVar15 + 1;
            piVar17 = piVar17 + 1;
          } while (iVar15 <= iVar2);
          if (uVar10 != 0) {
            iVar13 = iVar13 + 1;
            iVar9 = *(int *)(&lbl_820548B8 + iVar15 * 4);
            piVar18 = piVar18 + 1;
            *piVar18 = iVar9;
            *(short *)(iVar9 * 2 + iVar8) = (short)uVar10;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 <= iVar2);
      }
    }
    else {
LAB_829bde54:
      uVar10 = uStack_1ac;
      if (iVar15 <= iVar2) {
        piVar18 = (int *)(&lbl_820548B8 + iVar15 * 4);
        do {
          iVar4 = *piVar18 * 2;
          if (*(short *)(iVar4 + iVar8) != 0) {
            if ((int)uVar19 < 1) {
              iVar11 = fn_829BCB40(&uStack_1c0,iVar11,uVar19,1);
              if (iVar11 == 0) {
LAB_829bdf38:
                if (iVar13 < 1) {
                  return 0;
                }
                piVar18 = aiStack_1a0 + iVar13;
                do {
                  piVar18 = piVar18 + -1;
                  *(undefined2 *)(*piVar18 * 2 + iVar8) = 0;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                return 0;
              }
              uVar19 = (ulonglong)uStack_1b4;
              iVar11 = iStack_1b8;
            }
            uVar19 = uVar19 - 1;
            if (((iVar11 >> ((uint)uVar19 & 0x3f) & 1U) != 0) &&
               (sVar1 = *(short *)(iVar4 + iVar8), ((int)sVar1 & uVar5) == 0)) {
              sVar7 = (short)uVar5;
              if (sVar1 < 0) {
                sVar7 = (short)uVar10;
              }
              *(short *)(iVar4 + iVar8) = sVar1 + sVar7;
            }
          }
          iVar15 = iVar15 + 1;
          piVar18 = piVar18 + 1;
        } while (iVar15 <= iVar2);
      }
      iVar14 = iVar9 + -1;
    }
    *(undefined4 *)param_1[6] = uStack_1c0;
    *(undefined4 *)(param_1[6] + 4) = uStack_1bc;
    *(int *)(iVar3 + 0xc) = iVar11;
    *(int *)(iVar3 + 0x10) = (int)uVar19;
    *(int *)(iVar3 + 0x14) = iVar14;
  }
  *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + -1;
  return 1;
}

