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
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327FB00;
extern unsigned int lbl_8327FB04;
extern unsigned int lbl_8327FB08;
extern unsigned int lbl_8327FB0C;
extern unsigned int lbl_8327FB10;
extern unsigned int lbl_8327FB14;
extern unsigned int lbl_8327FB18;
extern unsigned int lbl_8327FB1C;
extern unsigned int lbl_8327FB20;
extern unsigned int lbl_8327FB24;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8254B690(double param_1,int param_2,int param_3,int param_4,undefined8 param_5,int param_6
                  ,int param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int in_r0;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float afStack_60 [4];
  float afStack_50 [20];
  
  fVar16 = lbl_8327FB20;
  fVar14 = lbl_8327FB18;
  fVar12 = lbl_8327FB10;
  fVar11 = lbl_8327FB08;
  fVar9 = lbl_8327FB00;
  uVar8 = lbl_821CC160;
  if (param_7 == 0) {
    iVar18 = 0;
    if (0 < *(int *)(param_3 + 0x24)) {
      do {
        fVar17 = lbl_8327FB24;
        fVar15 = lbl_8327FB1C;
        fVar13 = lbl_8327FB14;
        fVar10 = lbl_8327FB04;
        uVar3 = in_r0 + param_4 & 0xfffffff0;
        uVar4 = in_r0 + param_6 & 0xfffffff0;
        iVar20 = *(int *)((*(int *)(param_3 + 0x20) + iVar18) * 4 + *(int *)(param_2 + 0xcc));
        iVar21 = iVar20 * 0x60 + *(int *)(param_2 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs44,in_vs32); memcpy(in_vs32, &_vt0, 16); }
        fVar1 = *(float *)(iVar21 + 0x2c);
        piVar22 = (int *)(*(int *)(iVar21 + 0x10) * 0x38 + *(int *)(param_2 + 0xc4));
        fVar2 = *(float *)(uVar3 + 4) * *(float *)(uVar4 + 4) + 0.0 +
                *(float *)(uVar3 + 8) * *(float *)(uVar4 + 8);
        pfVar5 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
        *pfVar5 = fVar2;
        pfVar5[1] = fVar2;
        pfVar5[2] = fVar2;
        pfVar5[3] = fVar2;
        fVar2 = (float)((double)afStack_50[0] * param_1);
        if ((fVar1 * fVar10 + fVar2 < fVar9) ||
           ((*(byte *)(*(int *)(*(int *)(param_2 + 4) + 4) + iVar20 * 0x10 + 0xe) & 1) != 0)) {
          iVar20 = piVar22[8];
          piVar22[8] = iVar20 + 1;
LAB_8254b9ac:
          iVar20 = iVar20 + *piVar22;
        }
        else {
          if (fVar1 * lbl_8327FB0C + fVar2 < fVar11) {
            iVar20 = piVar22[2] + piVar22[9];
            piVar22[9] = piVar22[9] + 1;
            goto LAB_8254b9ac;
          }
          if (fVar1 * fVar13 + fVar2 < fVar12) {
            iVar20 = piVar22[10];
            piVar22[10] = iVar20 + 1;
            iVar20 = piVar22[3] + piVar22[2] + iVar20;
            goto LAB_8254b9ac;
          }
          if (fVar1 * fVar15 + fVar2 < fVar14) {
            iVar20 = piVar22[4] + piVar22[3] + piVar22[2] + piVar22[0xb];
            piVar22[0xb] = piVar22[0xb] + 1;
            goto LAB_8254b9ac;
          }
          if (fVar16 <= fVar1 * fVar17 + fVar2) {
            iVar20 = piVar22[0xd];
            iVar19 = piVar22[6] + piVar22[5] + piVar22[4] + piVar22[3];
            piVar22[0xd] = iVar20 + 1;
          }
          else {
            iVar20 = piVar22[0xc];
            iVar19 = piVar22[5] + piVar22[4] + piVar22[3];
            piVar22[0xc] = iVar20 + 1;
          }
          iVar20 = iVar19 + piVar22[2] + iVar20 + *piVar22;
        }
        iVar19 = iVar20 * 0x10;
        iVar23 = *(int *)(iVar21 + 0x14) * 0x40 + *(int *)(param_2 + 0x8c);
        iVar20 = iVar20 * 0x40 + *(int *)(param_2 + 0x90);
        puVar6 = (undefined4 *)(in_r0 + iVar23 & 0xfffffff0);
        uVar24 = puVar6[1];
        uVar25 = puVar6[2];
        uVar26 = puVar6[3];
        puVar7 = (undefined4 *)(in_r0 + iVar20 & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar24;
        puVar7[2] = uVar25;
        puVar7[3] = uVar26;
        puVar6 = (undefined4 *)(iVar23 + 0x10U & 0xfffffff0);
        uVar24 = puVar6[1];
        uVar25 = puVar6[2];
        uVar26 = puVar6[3];
        puVar7 = (undefined4 *)(iVar20 + 0x10U & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar24;
        puVar7[2] = uVar25;
        puVar7[3] = uVar26;
        puVar6 = (undefined4 *)(iVar23 + 0x20U & 0xfffffff0);
        uVar24 = puVar6[1];
        uVar25 = puVar6[2];
        uVar26 = puVar6[3];
        puVar7 = (undefined4 *)(iVar20 + 0x20U & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar24;
        puVar7[2] = uVar25;
        puVar7[3] = uVar26;
        puVar6 = (undefined4 *)(iVar23 + 0x30U & 0xfffffff0);
        uVar24 = puVar6[1];
        uVar25 = puVar6[2];
        uVar26 = puVar6[3];
        puVar7 = (undefined4 *)(iVar20 + 0x30U & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar24;
        puVar7[2] = uVar25;
        puVar7[3] = uVar26;
        iVar20 = *(int *)(iVar21 + 0x18) * 0x18 + *(int *)(param_2 + 0x28);
        *(float *)(iVar19 + *(int *)(param_2 + 0x94)) =
             (float)(longlong)
                    (*(int *)(iVar20 + 8) * *(int *)(iVar21 + 0x1c) + *(int *)(iVar20 + 0xc));
        if (*(int *)(iVar21 + 0x28) < 0) {
          *(undefined4 *)(iVar19 + *(int *)(param_2 + 0x94) + 8) = uVar8;
        }
        else {
          iVar20 = *(int *)(iVar21 + 0x28) * 0x18 + *(int *)(param_2 + 0x28);
          *(float *)(iVar19 + *(int *)(param_2 + 0x94) + 4) =
               (float)(longlong)
                      (*(int *)(iVar20 + 8) * *(int *)(iVar21 + 0x20) + *(int *)(iVar20 + 0xc));
          *(undefined4 *)(iVar19 + *(int *)(param_2 + 0x94) + 8) = *(undefined4 *)(iVar21 + 0x24);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(param_3 + 0x24));
    }
  }
  else {
    iVar18 = 0;
    if (0 < *(int *)(param_3 + 0x24)) {
      do {
        fVar17 = lbl_8327FB24;
        fVar15 = lbl_8327FB1C;
        fVar13 = lbl_8327FB14;
        fVar10 = lbl_8327FB04;
        uVar3 = in_r0 + param_4 & 0xfffffff0;
        uVar4 = in_r0 + param_6 & 0xfffffff0;
        iVar20 = *(int *)((*(int *)(param_3 + 0x20) + iVar18) * 4 + *(int *)(param_2 + 0xcc));
        iVar21 = iVar20 * 0x60 + *(int *)(param_2 + 8);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs44,in_vs32); memcpy(in_vs32, &_vt1, 16); }
        fVar1 = *(float *)(iVar21 + 0x2c);
        iVar21 = *(int *)(iVar21 + 0x10) * 0x38 + *(int *)(param_2 + 0xc4);
        fVar2 = *(float *)(uVar3 + 4) * *(float *)(uVar4 + 4) + 0.0 +
                *(float *)(uVar3 + 8) * *(float *)(uVar4 + 8);
        pfVar5 = (float *)((int)afStack_60 + in_r0 & 0xfffffff0);
        *pfVar5 = fVar2;
        pfVar5[1] = fVar2;
        pfVar5[2] = fVar2;
        pfVar5[3] = fVar2;
        fVar2 = (float)((double)afStack_60[0] * param_1);
        if ((fVar1 * fVar10 + fVar2 < fVar9) ||
           ((*(byte *)(*(int *)(*(int *)(param_2 + 4) + 4) + iVar20 * 0x10 + 0xe) & 1) != 0)) {
          *(int *)(iVar21 + 8) = *(int *)(iVar21 + 8) + 1;
        }
        else if (fVar11 <= fVar1 * lbl_8327FB0C + fVar2) {
          if (fVar12 <= fVar1 * fVar13 + fVar2) {
            if (fVar14 <= fVar1 * fVar15 + fVar2) {
              if (fVar16 <= fVar1 * fVar17 + fVar2) {
                *(int *)(iVar21 + 0x1c) = *(int *)(iVar21 + 0x1c) + 1;
              }
              else {
                *(int *)(iVar21 + 0x18) = *(int *)(iVar21 + 0x18) + 1;
              }
            }
            else {
              *(int *)(iVar21 + 0x14) = *(int *)(iVar21 + 0x14) + 1;
            }
          }
          else {
            *(int *)(iVar21 + 0x10) = *(int *)(iVar21 + 0x10) + 1;
          }
        }
        else {
          *(int *)(iVar21 + 0xc) = *(int *)(iVar21 + 0xc) + 1;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(param_3 + 0x24));
    }
  }
  return;
}

