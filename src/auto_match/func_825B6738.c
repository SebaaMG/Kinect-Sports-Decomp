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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_8251CAF8();
extern int fn_8251DC90();
extern int fn_8251FA58();
extern int fn_825269D0();
extern int fn_82530620();
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern int fn_82544F40();
extern int fn_82546930();
extern int fn_82546CC0();
extern int fn_82547650();
extern int fn_82558B08();
extern int fn_825597C0();
extern int fn_825602B8();
extern int fn_825611A8();
extern int fn_825640F0();
extern int fn_825765A0();
extern int fn_8258A688();
extern int fn_825B6458();
extern int fn_82631C78();
extern int fn_82645110();
extern int fn_82645688();
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B468;
extern unsigned int lbl_8326B46C;
extern unsigned int lbl_8326B490;
extern unsigned int lbl_8327F8A0;
extern unsigned int lbl_8327FC0C;
extern unsigned int lbl_83282210;
extern unsigned int lbl_83282228;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_d4;
extern unsigned int uStack_dc;


void fn_825B6738(void)

{
  bool bVar1;
  undefined8 in_r0;
  int iVar3;
  longlong lVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar13;
  ulonglong uVar12;
  int *piVar14;
  longlong lVar15;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined4 uStack_d4;
  undefined4 auStack_d0 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (lbl_8327FC0C != 0) {
    iVar3 = fn_825597C0();
    if (iVar3 == 0) {
      if (lbl_8329618C == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(lbl_8329618C + 4);
      }
      fn_82546930();
      fn_82A1E810(lbl_8326B490);
      fn_82A1E7D8(lbl_8326B490);
      lVar10 = 0;
      iVar4 = 0;
      lVar15 = 0x1a;
      do {
        iVar5 = lbl_8320A898;
        uVar7 = lVar10 + 0x20;
        iVar8 = iVar4 + lbl_8320A898;
        lVar10 = lVar10 + 1;
        iVar4 = iVar4 + 0x18;
        *(uint *)(iVar8 + 0x494) = *(uint *)(iVar8 + 0x494) | 0x18;
        *(ulonglong *)(iVar5 + 0x18) =
             0x8000000000000000U >> (uVar7 & 0x7f) | *(ulonglong *)(iVar5 + 0x18);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fn_82544F40();
      iVar4 = lbl_8320A898;
      lbl_83296BB0 = 1;
      lbl_83296BB4 = 1;
      fn_82530948(lbl_8320A898);
      fn_825315E0(iVar4);
      fn_82531118();
      if (lbl_8329618C == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lbl_8329618C + 4);
      }
      if (iVar4 != 0) {
        iVar4 = *(int *)((*(int *)(iVar3 + 0x40) + 0x22c) * 4 + iVar3);
        *(undefined4 *)(iVar4 + 0x1a0004) = 0;
        *(undefined4 *)(iVar4 + 0x1a0000) = 0;
        uStack_dc = 0;
        puVar9 = *(undefined4 **)(iVar3 + 0x314);
        for (puVar13 = *(undefined4 **)(iVar3 + 0x310); puVar13 < puVar9; puVar13 = puVar13 + 2) {
          (**(code **)(*(int *)*puVar13 + 0x30))((int *)*puVar13,auStack_e0,iVar4);
        }
      }
      fn_825269D0(0x19,0);
      if (lbl_8329618C == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lbl_8329618C + 4);
      }
      if (iVar4 != 0) {
        puVar13 = *(undefined4 **)(iVar3 + 0x8ac);
        uVar12 = ZEXT48(puVar13);
        uVar6 = 0;
        uVar7 = 0;
        lVar15 = 0;
        lVar10 = uVar12 + 0xbab0;
        do {
          lVar2 = fn_825602B8(lVar15);
          uVar7 = lVar2 + uVar7;
          if ((int)lVar2 != *(int *)lVar10) {
            uVar6 = 1;
          }
          lVar15 = lVar15 + 1;
          lVar10 = lVar10 + 4;
        } while ((int)lVar15 < 2);
        if ((uVar7 & 0xffffffff) != 0) {
          if ((lbl_8326B468 != 0) || ((int)uVar6 != 0)) {
            puVar9 = &uStack_d4;
            lVar10 = uVar12 + 0xc;
            lVar15 = 5;
            do {
              lVar10 = lVar10 + 4;
              puVar9 = puVar9 + 1;
              *puVar9 = *(undefined4 *)lVar10;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            auStack_d0[0] = (undefined4)uVar7;
            if (uVar12 != 0) {
              (**(code **)*puVar13)(uVar12,1);
            }
            *(undefined4 *)(iVar3 + 0x8ac) = 0;
            bVar1 = lbl_8326B468 != 0;
            if (bVar1) {
              fn_82547650();
              fn_82645688(lbl_8320A898);
              fn_82546CC0(0xffffffff8326b42c);
              fn_825640F0(0xffffffff8326b42c);
              lbl_8326B468 = 0;
              fn_82530620();
              fn_825611A8();
            }
            lbl_8326B46C = (uint)bVar1;
            fn_8251DC90(iVar3,auStack_d0);
            uVar12 = (ulonglong)*(uint *)(iVar3 + 0x8ac);
          }
          fn_8258A688(uVar12);
          lVar10 = 0;
          lVar15 = uVar12 + 0xbb94;
          do {
            iVar4 = fn_825602B8(lVar10);
            if (iVar4 != 0) {
              fn_82631C78(lbl_8320A898,0,0x28,0x58);
              (**(code **)(*(int *)*(undefined4 *)lVar15 + 8))();
            }
            lVar10 = lVar10 + 1;
            lVar15 = lVar15 + 4;
          } while ((int)lVar10 < 2);
          lVar10 = 0;
          lVar15 = uVar12 + 0xbad4;
          do {
            iVar5 = fn_825602B8(lVar10);
            iVar4 = (int)uVar12;
            if (iVar5 != 0) {
              if ((*(uint *)(iVar4 + 0x14) & 0x40000000) != 0) {
                fn_82631C78(lbl_8320A898,0,0x70,0x10);
                lVar2 = lVar15 + -0x18;
                lVar11 = 2;
                do {
                  lVar2 = lVar2 + 8;
                  (**(code **)(*(int *)*(undefined4 *)lVar2 + 8))();
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
              if ((*(uint *)(iVar4 + 0x14) & 0x80000000) != 0) {
                fn_82631C78(lbl_8320A898,0,(ulonglong)*(uint *)(iVar4 + 0xbbbc),
                                  0x80 - (ulonglong)*(uint *)(iVar4 + 0xbbbc));
                (**(code **)(*(int *)*(undefined4 *)lVar15 + 8))();
              }
              fn_82631C78(lbl_8320A898,0,0x20,0x60);
              (**(code **)(*(int *)((undefined4 *)lVar15)[2] + 8))();
            }
            lVar10 = lVar10 + 1;
            lVar15 = lVar15 + 4;
          } while ((int)lVar10 < 2);
          fn_82631C78(lbl_8320A898,0,0x20,0x60);
          (**(code **)(**(int **)(iVar4 + 48000) + 8))();
          fn_82631C78(lbl_8320A898,0,(ulonglong)*(uint *)(iVar4 + 0xbbbc),
                            0x80 - (ulonglong)*(uint *)(iVar4 + 0xbbbc));
          (**(code **)(**(int **)(iVar4 + 0xbb88) + 8))();
          iVar4 = (int)in_r0;
          uVar7 = (ulonglong)lbl_83282228;
          if ((0 < (int)lbl_83282228) && (lbl_83282228 = (uint)(uVar7 - 1), uVar7 - 1 == 0)) {
            piVar14 = &lbl_83282210;
            do {
              if (*piVar14 != 0) {
                fn_8251FA58();
                *piVar14 = 0;
              }
              iVar4 = (int)in_r0;
              piVar14 = piVar14 + 1;
            } while ((int)piVar14 < -0x7cd7ddd8);
          }
          uStack_a8 = *(undefined4 *)(iVar3 + 0x44);
          uStack_b0 = lbl_8327F8A0;
          puVar13 = (undefined4 *)((uint)(auStack_a0 + iVar4) & 0xfffffff0);
          *puVar13 = in_register_000104b0;
          puVar13[1] = in_register_000104b4;
          puVar13[2] = in_register_000104b8;
          puVar13[3] = in_vr75;
          uStack_ac = 4;
          uStack_8c = lbl_821CC160;
          uStack_7c = lbl_821CC160;
          uStack_a4 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0xffffffff;
          iVar4 = *(int *)(iVar3 + 0x7c);
          while (iVar4 != 0) {
            piVar14 = (int *)(iVar4 + -0x38);
            iVar4 = *(int *)(iVar4 + 4);
            (**(code **)(*piVar14 + 0x20))(piVar14,&uStack_b0);
          }
        }
      }
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x93c) != 0)) {
        fn_825765A0((double)*(float *)(iVar3 + 0x828),*(int *)(iVar3 + 0x93c),iVar3);
      }
      fn_825269D0(0x3d,0);
      fn_825B6458();
      if (lbl_8329618C == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lbl_8329618C + 4);
      }
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar3 + 0x8ac);
        (**(code **)(**(int **)(iVar3 + 0xbb84) + 8))();
        *(undefined4 *)(iVar3 + 0x28) = 0;
      }
      fn_8251CAF8();
      fn_82544F40();
      *(undefined4 *)(lbl_8320A898 + 0x2ab0) = *(undefined4 *)(lbl_8320A898 + 0x2a9c);
      fn_82645110();
    }
    else {
      fn_82558B08();
    }
  }
  return;
}

