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
extern int fn_82BA02A8();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82E0A0F8();
extern int fn_82E0BA38();
extern int fn_82E0DE40();
extern int fn_82E129F0();
extern int fn_82E16E40();
extern int fn_82E17B38();
extern unsigned int iStack_9c;
extern unsigned int iStack_bc;
extern unsigned int lbl_8214A688;
extern unsigned int lbl_8214A818;
extern unsigned int lbl_8214A824;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;


int fn_82E0CA00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar8;
  int iVar9;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined **ppuStack_c0;
  int iStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **ppuStack_a0;
  int iStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  if (param_1[0x1e] == 0) {
    piVar8 = (int *)fn_82E0BA38();
    if (piVar8 != (int *)0x0) {
      fn_82CE4040();
    }
    iVar9 = fn_82CE5410();
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x40);
    *(undefined2 *)(iVar9 + 4) = 0x40;
    uVar6 = (**(code **)(*param_1 + 0x1c))(param_1);
    iVar9 = fn_82E0DE40(iVar9,param_1[6],uVar6,param_1 + 0x1f);
    param_1[0x1e] = iVar9;
    lVar11 = 0;
    bVar5 = *(int *)(param_1[7] + 0xc) != 1;
    if (0 < *(int *)(param_1[7] + 0x14)) {
      iVar12 = 0;
      iVar9 = 0;
      do {
        if (*(int *)(iVar12 + param_1[9]) != 0) {
          iVar4 = *(int *)(iVar12 + param_1[9]);
          iVar14 = param_1[8] + iVar9;
          if (bVar5) {
            iVar13 = 0;
            uVar10 = *(int *)(iVar14 + 0x20) - *(int *)(iVar14 + 0x1c);
            if (0 < (longlong)
                    ((longlong)((int)uVar10 >> 2) +
                    (ulonglong)((int)uVar10 < 0 && (uVar10 & 3) != 0))) {
              puVar15 = (undefined4 *)(*(int *)(iVar14 + 0x1c) + iVar4 + 8);
              do {
                iVar1 = puVar15[-2];
                if (iVar1 != -1) {
                  uVar6 = (**(code **)(*param_1 + 0x3c))(param_1,puVar15[-1],*puVar15);
                  (**(code **)(*(int *)param_1[0x1e] + 0x14))
                            ((int *)param_1[0x1e],uVar6,iVar1 + iVar4);
                }
                iVar13 = iVar13 + 3;
                puVar15 = puVar15 + 3;
                uVar10 = *(int *)(iVar14 + 0x20) - *(int *)(iVar14 + 0x1c);
              } while (iVar13 < (int)(((int)uVar10 >> 2) +
                                     (uint)((int)uVar10 < 0 && (uVar10 & 3) != 0)));
            }
          }
          iVar13 = 0;
          uVar10 = *(int *)(iVar14 + 0x24) - *(int *)(iVar14 + 0x20);
          if (0 < (longlong)
                  ((longlong)((int)uVar10 >> 2) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 3) != 0))
             ) {
            puVar15 = (undefined4 *)(*(int *)(iVar14 + 0x20) + iVar4 + 8);
            do {
              if (puVar15[-2] != -1) {
                uVar2 = puVar15[-1];
                uVar3 = *puVar15;
                uVar6 = (**(code **)(*param_1 + 0x3c))(param_1,lVar11);
                uVar7 = (**(code **)(*param_1 + 0x3c))(param_1,uVar2,uVar3);
                (**(code **)(*(int *)param_1[0x1e] + 0x1c))((int *)param_1[0x1e],uVar6,uVar7);
              }
              iVar13 = iVar13 + 3;
              puVar15 = puVar15 + 3;
              uVar10 = *(int *)(iVar14 + 0x24) - *(int *)(iVar14 + 0x20);
            } while (iVar13 < (int)(((int)uVar10 >> 2) +
                                   (uint)((int)uVar10 < 0 && (uVar10 & 3) != 0)));
          }
        }
        lVar11 = lVar11 + 1;
        iVar9 = iVar9 + 0x30;
        iVar12 = iVar12 + 4;
      } while ((int)lVar11 < *(int *)(param_1[7] + 0x14));
    }
    if ((*(int *)(param_1[7] + 0x20) < 0) || (*(int *)(param_1[7] + 0x24) < 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x3c))(param_1);
    }
    uVar7 = fn_82E0A0F8(param_1);
    fn_82E16E40(param_1[0x1e],uVar7,uVar6);
    if (!bVar5) {
      uStack_90 = (**(code **)(*param_1 + 0x28))(param_1);
      iStack_9c = param_1[0x1e];
      uStack_94 = *(undefined4 *)(param_1[7] + 0xc);
      ppuStack_a0 = &lbl_8214A818;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0xffffffff;
      piStack_98 = piVar8;
      piStack_8c = param_1 + 2;
      iVar9 = fn_82CE5410();
      fn_82CEAB00(&uStack_88,*(undefined4 *)(iVar9 + 0x10),0);
      if ((*(int *)(param_1[7] + 0x20) < 0) || (*(int *)(param_1[7] + 0x24) < 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x3c))(param_1);
      }
      uVar6 = (**(code **)(*piVar8 + 0x10))(piVar8,uVar6);
      uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
      fn_82E129F0(uVar6,*(undefined4 *)(param_1[7] + 0xc),uVar7,param_1 + 2);
      fn_82E17B38(*(undefined4 *)(param_1[0x1e] + 0x34),uVar6,&ppuStack_a0);
      iVar9 = fn_82CE5410();
      fn_82CEA4B8(&uStack_88,*(undefined4 *)(iVar9 + 0x10));
      fn_82BA02A8(&uStack_88);
      ppuStack_a0 = &lbl_8214A688;
    }
    if (*(int *)(param_1[7] + 0xc) < 7) {
      iStack_bc = param_1[0x1e];
      uStack_b4 = 0;
      uStack_b0 = 0;
      ppuStack_c0 = &lbl_8214A824;
      uStack_ac = 0xffffffff;
      piStack_b8 = piVar8;
      iVar9 = fn_82CE5410();
      fn_82CEAB00(&uStack_b4,*(undefined4 *)(iVar9 + 0x10),0);
      if ((*(int *)(param_1[7] + 0x20) < 0) || (*(int *)(param_1[7] + 0x24) < 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x3c))(param_1);
      }
      uVar6 = (**(code **)(*piVar8 + 0x10))(piVar8,uVar6);
      fn_82E17B38(*(undefined4 *)(param_1[0x1e] + 0x34),uVar6,&ppuStack_c0);
      iVar9 = fn_82CE5410();
      fn_82CEA4B8(&uStack_b4,*(undefined4 *)(iVar9 + 0x10));
      fn_82BA02A8(&uStack_b4);
      ppuStack_c0 = &lbl_8214A688;
    }
    if (piVar8 != (int *)0x0) {
      fn_82CE4118(piVar8);
    }
  }
  return param_1[0x1e];
}

