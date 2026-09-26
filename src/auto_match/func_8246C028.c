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
extern float fRam831c6b90;
extern float fRam831c6b94;
extern int fn_82465390();
extern int fn_82471140();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82526AF8();
extern unsigned int lbl_821955F4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6B98;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


/* WARNING: Removing unreachable block (ram,0x8246c088) */

void fn_8246C028(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  int iVar6;
  ulonglong uVar5;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  
  if (param_2 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) == 1) {
      fn_82465390(*(undefined4 *)(param_1 + 8),param_1 + 0x5c);
    }
    *(int *)(param_1 + 4) = param_2;
    if (param_2 == 1) {
      iVar4 = *(int *)(param_1 + 0x1c);
      piVar10 = (int *)(param_1 + 0x1c);
      if (iVar4 != *(int *)(param_1 + 0x20)) {
        for (iVar6 = iVar4; iVar6 != *(int *)(param_1 + 0x20); iVar6 = iVar6 + 0x28) {
        }
        *(int *)(param_1 + 0x20) = iVar4;
      }
      puVar3 = (uint *)(param_1 + 0x14);
      if ((puVar3 != (uint *)0x0) &&
         (uVar5 = (ulonglong)*puVar3, uVar5 != (uVar5 - 1) + (ulonglong)(uVar5 == 0))) {
        iVar4 = fn_8251F720(puVar3,0);
        uVar9 = 0;
        uVar5 = fn_8251FBA8();
        if ((uVar5 & 0xffffffff) / 100 != 0xffffffffffffffff) {
          puVar7 = (undefined4 *)(iVar4 + 0x14);
          do {
            uVar5 = fn_8251FBA8(iVar4);
            if ((uVar9 & 0xffffffff) < (uVar5 & 0xffffffff) / 100) {
              uStack_a0 = puVar7[-5];
              uStack_94 = puVar7[-2];
              uStack_8c = *puVar7;
              uStack_9c = puVar7[-4];
              uStack_90 = puVar7[-1];
              uStack_88 = puVar7[1];
              uStack_84 = puVar7[2];
              uStack_98 = puVar7[-3];
              uStack_80 = puVar7[3];
              lVar11 = fn_82526AF8((ulonglong)lbl_83265A38 - 1,(ulonglong)lbl_83265A3C + 4,
                                         puVar7 + 4);
              uStack_7c = -(uint)(lVar11 != -1) & (int)lVar11 + 1U;
            }
            else {
              uStack_a0 = 0;
              uStack_94 = 0;
              uStack_9c = 0;
              uStack_90 = 0;
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_98 = 0;
            }
            fn_82471140(piVar10,&uStack_a0);
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 0x19;
            uVar5 = fn_8251FBA8(iVar4);
          } while ((uVar9 & 0xffffffff) < (uVar5 & 0xffffffff) / 100 + 1);
        }
        if (iVar4 != 0) {
          fn_8251FA58(iVar4);
        }
      }
      uVar1 = lbl_821955F4;
      if (*(int *)(param_1 + 0x4c) == 0) {
        *(float *)(param_1 + 0x44) = fRam831c6b90;
        *(float *)(param_1 + 0x48) = fRam831c6b94 + fRam831c6b90;
        fn_82465390(*(undefined4 *)(param_1 + 8),param_1 + 0x58);
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = lbl_821955F4;
        *(undefined4 *)(param_1 + 0x48) = uVar1;
      }
      uVar1 = lbl_821CC160;
      puVar7 = (undefined4 *)(param_1 + 0x38);
      lVar11 = 2;
      do {
        puVar7[-1] = uVar1;
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      *(undefined4 *)(param_1 + 0xc) = lbl_831C6B98;
      fVar2 = lbl_821CA460;
      if (*(int *)(param_1 + 0x4c) == 0) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(int *)(param_1 + 0x2c) =
             (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                  (float)(longlong)((*(int *)(param_1 + 0x20) - *piVar10) / 0x28 + -1));
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar4 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) *
                     (float)(longlong)((*(int *)(param_1 + 0x20) - *piVar10) / 0x28 + -1));
        *(int *)(param_1 + 0x30) = iVar4;
        if (*(int *)(param_1 + 0x2c) == iVar4) {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          uVar8 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) *
                        (float)(longlong)((*(int *)(param_1 + 0x20) - *piVar10) / 0x28 + -2));
          if (*(uint *)(param_1 + 0x2c) <= uVar8) {
            uVar8 = uVar8 + 1;
          }
          *(uint *)(param_1 + 0x30) = uVar8;
        }
      }
      else {
        uVar8 = (*(int *)(param_1 + 0x20) - *piVar10) / 0x28;
        if (uVar8 <= *(uint *)(param_1 + 0x2c)) {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          *(int *)(param_1 + 0x2c) =
               (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                    (float)(longlong)(int)(uVar8 - 1));
        }
        uVar8 = (*(int *)(param_1 + 0x20) - *piVar10) / 0x28;
        if (uVar8 <= *(uint *)(param_1 + 0x30)) {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          *(int *)(param_1 + 0x30) =
               (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar2) *
                    (float)(longlong)(int)(uVar8 - 1));
        }
      }
    }
  }
  return;
}

