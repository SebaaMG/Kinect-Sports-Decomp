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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820F3FA0;
extern unsigned int lbl_820F99C8;
extern unsigned int uStack_ec;


void fn_82C30CE8(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  uint uStack_ec;
  
  fVar4 = lbl_82005344;
  fVar3 = lbl_82002C28;
  iVar5 = 0x19;
  if (*(int *)(param_1 + 0x3c) < 3) {
    piVar13 = &lbl_820F3FA0;
  }
  else {
    iVar5 = 0x1c;
    piVar13 = (int *)&lbl_820F99C8;
  }
  piVar15 = *(int **)(param_1 + 0x158);
  fVar1 = lbl_82002AE0 / (float)(longlong)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x3c) == 1) {
    iVar7 = 0;
    *piVar15 = 0;
    fVar3 = lbl_82002C5C;
    if (iVar5 != 0) {
      uVar10 = *(uint *)(param_1 + 0xfc);
      piVar6 = piVar15;
      do {
        piVar6 = piVar6 + 1;
        iVar12 = (int)((float)(uVar10 * *piVar13) * fVar1 + fVar3);
        *piVar6 = iVar12;
        uVar10 = *(uint *)(param_1 + 0xfc);
        iVar8 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
        if (iVar8 < iVar12) {
          piVar15[iVar7 + 1] = iVar8;
          **(int **)(param_1 + 0x154) = iVar7 + 1;
          break;
        }
        iVar7 = iVar7 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar7 < iVar5);
    }
  }
  else {
    iVar12 = 0;
    iVar7 = 0;
    uStack_ec = 1;
    if (0 < *(int *)(param_1 + 0xf4)) {
      do {
        *piVar15 = 0;
        uVar14 = *(uint *)(param_1 + 0xfc);
        uVar10 = (int)uVar14 / (int)uStack_ec;
        trapWord(6,(ulonglong)uStack_ec,0);
        trapWord(5,(ulonglong)uStack_ec &
                   ~((((ulonglong)uVar14 & 0x7fffffff) << 1 | (ulonglong)(uVar14 >> 0x1f)) - 1),
                 0xffff);
        if (2 < *(int *)(param_1 + 0x3c)) goto LAB_82c313c8;
        iVar8 = *(int *)(param_1 + 0x50);
        if (iVar8 < 0xac44) {
          if (31999 < iVar8) {
            if (uVar10 == 0x400) {
              *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 0x10;
              piVar15[1] = 6;
              piVar15[6] = 0x37;
              piVar15[3] = 0x14;
              piVar15[4] = 0x1d;
              piVar15[5] = 0x29;
              piVar15[2] = 0xd;
              piVar15[8] = 0x65;
              piVar15[9] = 0x8d;
              piVar15[0xb] = 0xcd;
              piVar15[0xc] = 0xf6;
              piVar15[0xe] = 0x180;
              piVar15[7] = 0x4a;
              piVar15[10] = 0xaa;
              piVar15[0xd] = 0x130;
              piVar15[0xf] = 0x1f0;
              piVar15[0x10] = 0x200;
            }
            else if (uVar10 == 0x200) {
              *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 0xf;
              piVar15[2] = 10;
              piVar15[4] = 0x14;
              piVar15[7] = 0x32;
              piVar15[8] = 0x46;
              piVar15[9] = 0x55;
              piVar15[0xd] = 0xc0;
              piVar15[1] = 5;
              piVar15[3] = 0xf;
              piVar15[5] = 0x1c;
              piVar15[6] = 0x25;
              piVar15[10] = 0x66;
              piVar15[0xb] = 0x7b;
              piVar15[0xc] = 0x98;
              piVar15[0xe] = 0xf8;
              piVar15[0xf] = 0x100;
            }
            else {
              if (uVar10 != 0x100) goto LAB_82c313c8;
              *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 0xb;
              piVar15[1] = 4;
              piVar15[2] = 9;
              piVar15[3] = 0xe;
              piVar15[4] = 0x13;
              piVar15[5] = 0x19;
              piVar15[6] = 0x23;
              piVar15[7] = 0x33;
              piVar15[8] = 0x4c;
              piVar15[9] = 0x60;
              piVar15[10] = 0x7c;
              piVar15[0xb] = 0x80;
            }
            goto LAB_82c30f30;
          }
          if (0x5621 < iVar8) {
            if (uVar10 == 0x200) {
              *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 0xe;
              piVar15[1] = 5;
              piVar15[2] = 0xc;
              piVar15[3] = 0x12;
              piVar15[4] = 0x19;
              piVar15[5] = 0x22;
              piVar15[6] = 0x2e;
              piVar15[7] = 0x3f;
              piVar15[8] = 0x56;
              piVar15[9] = 0x66;
              piVar15[10] = 0x7b;
              piVar15[0xb] = 0x95;
              piVar15[0xc] = 0xb3;
              piVar15[0xd] = 0xdd;
              piVar15[0xe] = 0x100;
            }
            else {
              if (uVar10 != 0x100) goto LAB_82c313c8;
              *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 10;
              piVar15[6] = 0x2b;
              piVar15[7] = 0x3e;
              piVar15[8] = 0x59;
              piVar15[1] = 5;
              piVar15[2] = 0xb;
              piVar15[3] = 0x11;
              piVar15[4] = 0x17;
              piVar15[5] = 0x1f;
              piVar15[9] = 0x6e;
              piVar15[10] = 0x80;
            }
            goto LAB_82c30f30;
          }
LAB_82c313c8:
          iVar11 = 0;
          iVar8 = 1;
          piVar9 = piVar13 + -1;
          piVar6 = piVar15;
          do {
            iVar11 = iVar11 + 1;
            if (*(int *)(param_1 + 0x3c) < 3) {
              iVar2 = (int)(((float)(uint)piVar9[1] * (float)(longlong)(int)uVar10 * fVar1 + fVar4)
                           * fVar3) << 2;
            }
            else {
              trapWord(6,(ulonglong)*(uint *)(param_1 + 0x50),0);
              uVar14 = (int)(((longlong)piVar9[1] * (longlong)(int)uVar10 & 0xffffffffU) /
                            (ulonglong)*(uint *)(param_1 + 0x50)) + 2;
              iVar2 = (((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0)) * 4;
            }
            piVar9 = piVar9 + 1;
            if (*piVar6 < iVar2) {
              piVar6 = piVar6 + 1;
              *piVar6 = iVar2;
              iVar8 = iVar8 + 1;
            }
          } while ((iVar11 < iVar5) &&
                  (*piVar6 < (int)(((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)
                                  )));
          piVar15[iVar8 + -1] = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
          *(int *)(iVar12 + *(int *)(param_1 + 0x154)) = iVar8 + -1;
        }
        else {
          if (uVar10 == 0x400) {
            *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 0x11;
            piVar15[0x10] = 0x168;
            piVar15[1] = 5;
            piVar15[2] = 0xc;
            piVar15[3] = 0x12;
            piVar15[4] = 0x19;
            piVar15[5] = 0x22;
            piVar15[6] = 0x2e;
            piVar15[7] = 0x36;
            piVar15[8] = 0x3f;
            piVar15[9] = 0x56;
            piVar15[10] = 0x66;
            piVar15[0xb] = 0x7b;
            piVar15[0xc] = 0x95;
            piVar15[0xd] = 0xb3;
            piVar15[0xe] = 0xdd;
            piVar15[0xf] = 0x117;
            piVar15[0x11] = 0x200;
          }
          else if (uVar10 == 0x200) {
            *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 0xf;
            piVar15[4] = 0x17;
            piVar15[1] = 5;
            piVar15[8] = 0x33;
            piVar15[9] = 0x3e;
            piVar15[0xb] = 0x59;
            piVar15[0xd] = 0x8b;
            piVar15[0xe] = 0xb4;
            piVar15[2] = 0xb;
            piVar15[3] = 0x11;
            piVar15[5] = 0x1f;
            piVar15[6] = 0x25;
            piVar15[7] = 0x2b;
            piVar15[10] = 0x4a;
            piVar15[0xf] = 0x100;
            piVar15[0xc] = 0x6e;
          }
          else {
            if (uVar10 != 0x100) goto LAB_82c313c8;
            *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x154)) = 0xc;
            piVar15[1] = 4;
            piVar15[2] = 9;
            piVar15[4] = 0x10;
            piVar15[5] = 0x15;
            piVar15[6] = 0x1a;
            piVar15[8] = 0x2d;
            piVar15[3] = 0xc;
            piVar15[7] = 0x25;
            piVar15[9] = 0x37;
            piVar15[10] = 0x46;
            piVar15[0xb] = 0x5a;
            piVar15[0xc] = 0x80;
          }
LAB_82c30f30:
          iVar8 = 0;
          piVar6 = piVar15;
          if (0 < *(int *)(iVar12 + *(int *)(param_1 + 0x154))) {
            do {
              iVar8 = iVar8 + 1;
              uVar10 = piVar6[1] + 2;
              piVar6[1] = (((int)uVar10 >> 2) + (uint)((int)uVar10 < 0 && (uVar10 & 3) != 0)) * 4;
              piVar6 = piVar6 + 1;
            } while (iVar8 < *(int *)(iVar12 + *(int *)(param_1 + 0x154)));
          }
        }
        piVar15 = piVar15 + 0x1d;
        iVar12 = iVar12 + 4;
        iVar7 = iVar7 + 1;
        uStack_ec = uStack_ec << 1 | uStack_ec >> 0x1f;
      } while (iVar7 < *(int *)(param_1 + 0xf4));
    }
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x130) = **(undefined4 **)(param_1 + 0x154);
  if (0 < *(int *)(param_1 + 0xf4)) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xf4));
  }
  return;
}

