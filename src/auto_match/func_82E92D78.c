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
extern unsigned int fStack_a0;
extern int fn_82E91B28();
extern int fn_82E91F20();
extern int fn_82E92350();
extern int fn_82E92718();
extern int fn_82E92C20();
extern unsigned int lbl_82021544;
extern unsigned int lbl_8215F710;
extern unsigned int lbl_821AAD20;


void fn_82E92D78(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fStack_a0;
  int aiStack_9c [39];
  
  uVar8 = (ulonglong)(uint)param_1[6];
  uVar6 = (ulonglong)(uint)param_1[5];
  if (uVar8 != uVar6) {
    if (uVar8 < uVar6) {
      lVar7 = (uint)param_1[1] - uVar6;
    }
    else {
      lVar7 = -uVar6;
    }
    uVar8 = uVar8 + lVar7;
    if ((uVar8 & 0xffffffff) != 0) {
      dVar17 = (double)lbl_821AAD20;
      dVar19 = (double)lbl_82021544;
      dVar18 = lbl_8215F710;
      iVar11 = aiStack_9c[0];
      iVar15 = aiStack_9c[0];
      iVar16 = aiStack_9c[0];
      iVar14 = aiStack_9c[0];
      iVar12 = aiStack_9c[0];
      iVar13 = aiStack_9c[0];
      do {
        iVar10 = param_1[5];
        iVar3 = iVar10 * 0x28 + *param_1;
        fn_82E91B28(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar10 * 0x28 + *param_1),
                      param_1[3],param_1[2]);
        if (param_1[7] != 0) {
          if (iVar10 == 0) {
            iVar10 = param_1[1];
          }
          iVar14 = iVar10 + -1;
          iVar10 = *(int *)(iVar3 + 4);
          iVar16 = iVar14 * 0x28 + *param_1;
          iVar1 = *(int *)(iVar16 + 4);
          if (((iVar1 == 0) || (*(int *)(iVar10 + 0x818) == 0)) || (*(int *)(iVar1 + 0x818) == 0)) {
LAB_82e92eb8:
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
            fStack_a0 = *(float *)(iVar10 + 0x14) /
                        (float)((double)*(float *)(iVar1 + 0x14) + dVar19);
            if ((double)fStack_a0 <= dVar18) goto LAB_82e92eb8;
          }
          *(undefined4 *)(iVar3 + 0xc) = uVar4;
          uVar4 = fn_82E92718(iVar10,*(undefined4 *)(iVar16 + 4),param_1[4],&fStack_a0,aiStack_9c)
          ;
          *(undefined4 *)(iVar3 + 8) = uVar4;
        }
        if (1 < (uint)param_1[7]) {
          iVar12 = iVar14;
          if (iVar14 == 0) {
            iVar12 = param_1[1];
          }
          iVar12 = iVar12 + -1;
          iVar15 = iVar12 * 0x28 + *param_1;
          uVar4 = fn_82E92718(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar15 + 4),param_1[4],
                                &fStack_a0,aiStack_9c);
          *(undefined4 *)(iVar3 + 0x10) = uVar4;
        }
        if (2 < (uint)param_1[7]) {
          iVar13 = iVar12;
          if (iVar12 == 0) {
            iVar13 = param_1[1];
          }
          iVar13 = iVar13 + -1;
          iVar11 = iVar13 * 0x28 + *param_1;
          uVar4 = fn_82E92718(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar11 + 4),param_1[4],
                                &fStack_a0,aiStack_9c);
          *(undefined4 *)(iVar3 + 0x18) = uVar4;
        }
        *(undefined4 *)(iVar3 + 0x24) = 1;
        uVar2 = param_1[1];
        trapWord(6,(ulonglong)uVar2,0);
        uVar9 = param_1[7] + 1;
        param_1[7] = uVar9;
        param_1[5] = uVar9 - (uVar9 / uVar2) * uVar2;
        if (param_1[8] != 0) {
          fn_82E92350(param_1);
        }
        if (3 < (uint)param_1[7]) {
          if (param_1[8] != 0) {
            fn_82E92C20(param_1);
            piVar5 = param_1 + 9;
            if (param_1[9] != 0) {
              uVar6 = (ulonglong)(uint)param_1[7] - 3;
              if (param_1[10] < (int)((ulonglong)(uint)param_1[7] - 3)) {
                uVar6 = (ulonglong)(uint)param_1[10];
              }
              if ((int)((ulonglong)(uint)param_1[1] - 3) <= (int)uVar6) {
                uVar6 = (ulonglong)(uint)param_1[1] - 3;
              }
              iVar10 = iVar13;
              if (0 < (int)uVar6) {
                do {
                  *(undefined4 *)(iVar10 * 0x28 + *param_1 + 0x20) = 4;
                  if (iVar10 == 0) {
                    iVar10 = param_1[1];
                  }
                  uVar6 = uVar6 - 1;
                  iVar10 = iVar10 + -1;
                } while (uVar6 != 0);
              }
              if (0 < param_1[10]) {
                piVar5 = (int *)fn_82E91F20();
              }
              piVar5[3] = (int)(float)dVar17;
              *piVar5 = 0;
              piVar5[4] = (int)(float)dVar17;
              piVar5[1] = 0;
              piVar5[5] = 0;
              piVar5[6] = 0;
              piVar5[7] = 0;
              piVar5[8] = 0;
              piVar5[9] = 0;
            }
          }
          if (*(int *)(iVar15 + 8) != 0) {
            if (*(int *)(iVar15 + 0xc) == 0) {
LAB_82e9311c:
              if (((*(int *)(iVar11 + 0x20) == 0) && (*(int *)(iVar16 + 0x10) != 0)) &&
                 ((*(int *)(iVar3 + 0x18) != 0 &&
                  ((*(int *)(iVar16 + 8) == 0 && (*(int *)(iVar3 + 8) == 0)))))) {
                *(undefined4 *)(iVar15 + 0x20) = 2;
              }
            }
            else {
              if (*(int *)(iVar3 + 0x18) != 0) {
                iVar10 = *(int *)(iVar3 + 4);
                if (((iVar10 == 0) || (*(int *)(*(int *)(iVar15 + 4) + 0x818) == 0)) ||
                   ((*(int *)(iVar10 + 0x818) == 0 ||
                    (fStack_a0 = *(float *)(*(int *)(iVar15 + 4) + 0x14) /
                                 (float)((double)*(float *)(iVar10 + 0x14) + dVar19),
                    (double)fStack_a0 <= dVar18)))) goto LAB_82e9311c;
              }
              *(undefined4 *)(iVar15 + 0x20) = 3;
              if (*(int *)(iVar16 + 0x14) == 0) {
                *(undefined4 *)(iVar16 + 8) = 0;
                *(undefined4 *)(iVar16 + 0x20) = 0;
              }
              else {
                *(undefined4 *)(iVar16 + 0x20) = 3;
                *(undefined4 *)(iVar3 + 8) = 0;
                *(undefined4 *)(iVar3 + 0x20) = 0;
              }
            }
          }
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

