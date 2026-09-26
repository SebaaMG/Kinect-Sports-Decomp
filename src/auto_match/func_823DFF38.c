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
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_823E0308();
extern int fn_823E1410();
extern int fn_82F68CC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82194CFF;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8
fn_823DFF38(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4,int param_5,
             int param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  ulonglong in_r0;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar13;
  longlong lVar12;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 *in_stack_0000006c;
  int *apiStack_100 [8];
  undefined4 auStack_e0 [4];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar17 = 0;
  if (param_6 - 1U < 0xb) {
    in_r0 = (ulonglong)(byte)(&lbl_82194CFF)[param_6];
    switch(param_6) {
    default:
      uVar17 = 0x7c;
      break;
    case 2:
    case 3:
      uVar17 = 0x42;
      break;
    case 4:
    case 9:
    case 10:
      break;
    case 5:
    case 6:
    case 0xb:
      uVar17 = 0x4c;
    }
  }
  iVar9 = (int)in_r0;
  uVar16 = 0;
  piVar14 = (int *)**(int **)(param_2 + 8);
  apiStack_100[0] = piVar14;
  if (piVar14 != *(int **)(param_2 + 8)) {
    do {
      if ((((-(ulonglong)(piVar14[0x28] != 0) & 2 | (ulonglong)(piVar14[0x27] != 0)) & param_4) != 0
          ) && (iVar9 = fn_823E0308(param_1,param_2,param_3,piVar14[3],param_5,param_6,
                                          -(ulonglong)(piVar14[0x28] != 0),param_8,uVar17),
               iVar9 != 0)) {
        uVar16 = uVar16 + 1;
      }
      fn_823E1410(apiStack_100);
      fVar8 = lbl_8218E8E8;
      iVar9 = (int)in_r0;
      piVar14 = apiStack_100[0];
    } while (apiStack_100[0] != *(int **)(param_2 + 8));
    if ((uVar16 & 0xffffffff) != 0) {
      iVar11 = 0;
      iVar9 = 0;
      iVar10 = 0;
      iVar13 = 0;
      uVar18 = uVar16;
      do {
        iVar15 = iVar13 + *(int *)(param_2 + 0x14);
        iVar3 = *(int *)(*(int *)(param_5 + 0x114) + 0x48);
        fVar1 = *(float *)(iVar3 + 0x40);
        fVar4 = *(float *)(iVar15 + 0x58) - *(float *)(iVar15 + 0x5c);
        fVar2 = *(float *)(iVar3 + 0x44);
        fVar5 = fVar1 / fVar2;
        if (fVar4 <= fVar5) {
          fVar1 = fVar2 * fVar4 * fVar4 * fVar8;
        }
        else {
          fVar1 = (fVar4 - fVar5) * fVar1 + fVar5 * fVar5 * fVar2 * fVar8;
        }
        if (ABS(*(float *)(iVar13 + *(int *)(param_2 + 0x14) + 0x60)) <= fVar1) {
          iVar11 = iVar11 + 1;
          *(int *)(*(int *)(param_2 + 0x18) + iVar10) = iVar9;
          iVar10 = iVar10 + 4;
        }
        iVar9 = iVar9 + 1;
        iVar13 = iVar13 + 0x70;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      iVar9 = 0;
      if (iVar11 == 0) {
        iVar10 = 1;
        if (1 < (uVar16 & 0xffffffff)) {
          lVar12 = uVar16 - 1;
          iVar11 = 0;
          iVar13 = 0x70;
          do {
            if (*(float *)(iVar13 + *(int *)(param_2 + 0x14) + 0x60) <
                *(float *)(iVar11 + *(int *)(param_2 + 0x14) + 0x60)) {
              iVar11 = iVar13;
              iVar9 = iVar10;
            }
            iVar10 = iVar10 + 1;
            iVar13 = iVar13 + 0x70;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
      else {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar9 = *(int *)((int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                              (float)(longlong)iVar11) * 4 + *(int *)(param_2 + 0x18));
      }
      iVar9 = iVar9 * 0x70;
      *in_stack_0000006c = *(undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x50);
      in_stack_0000006c[0x18] = *(undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x54);
      puVar6 = (undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) & 0xfffffff0);
      uVar19 = puVar6[1];
      uVar20 = puVar6[2];
      uVar21 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(in_stack_0000006c + 4) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar19;
      puVar7[2] = uVar20;
      puVar7[3] = uVar21;
      puVar6 = (undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x10U & 0xfffffff0);
      uVar19 = puVar6[1];
      uVar20 = puVar6[2];
      uVar21 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(in_stack_0000006c + 0xc) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar19;
      puVar7[2] = uVar20;
      puVar7[3] = uVar21;
      puVar6 = (undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x20U & 0xfffffff0);
      uVar19 = puVar6[1];
      uVar20 = puVar6[2];
      uVar21 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(in_stack_0000006c + 8) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar19;
      puVar7[2] = uVar20;
      puVar7[3] = uVar21;
      puVar6 = (undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x30U & 0xfffffff0);
      uVar19 = puVar6[1];
      uVar20 = puVar6[2];
      uVar21 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(in_stack_0000006c + 0x10) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar19;
      puVar7[2] = uVar20;
      puVar7[3] = uVar21;
      puVar6 = (undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x40U & 0xfffffff0);
      uVar19 = puVar6[1];
      uVar20 = puVar6[2];
      uVar21 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(in_stack_0000006c + 0x14) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar19;
      puVar7[2] = uVar20;
      puVar7[3] = uVar21;
      in_stack_0000006c[0x19] = *(undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x58);
      in_stack_0000006c[0x1a] = *(undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 0x5c);
      in_stack_0000006c[0x1b] = *(undefined4 *)(iVar9 + *(int *)(param_2 + 0x14) + 100);
      return 1;
    }
  }
  uStack_80 = lbl_821CC160;
  puVar6 = (undefined4 *)((uint)(&lbl_82196750 + iVar9) & 0xfffffff0);
  uVar19 = puVar6[1];
  uVar20 = puVar6[2];
  uVar21 = puVar6[3];
  auStack_e0[0] = 0;
  puVar7 = (undefined4 *)((uint)(auStack_d0 + iVar9) & 0xfffffff0);
  *puVar7 = *puVar6;
  puVar7[1] = uVar19;
  puVar7[2] = uVar20;
  puVar7[3] = uVar21;
  puVar6 = (undefined4 *)((uint)(auStack_90 + iVar9) & 0xfffffff0);
  *puVar6 = in_register_000104d0;
  puVar6[1] = in_register_000104d4;
  puVar6[2] = in_register_000104d8;
  puVar6[3] = in_vr77;
  uStack_7c = uStack_80;
  fn_82F68CC0(in_stack_0000006c,auStack_e0,0x70);
  return 0;
}

