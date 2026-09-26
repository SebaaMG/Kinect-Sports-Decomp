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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82E09DA8();
extern int fn_82E09E40();
extern int fn_82E0A0F8();
extern int fn_82E0BA38();
extern int fn_82E17B38();
extern unsigned int iStack_9c;
extern unsigned int lbl_8214A688;
extern unsigned int lbl_8214A80C;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


int fn_82E0BC78(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar7;
  char cVar13;
  int iVar8;
  int iVar9;
  undefined8 uVar5;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined8 uVar6;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  int iStack_9c;
  undefined4 *puStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  
  if (param_1[0x1d] == 0) {
    piVar7 = (int *)fn_82E0BA38();
    iVar8 = -1;
    (**(code **)(*param_1 + 0x28))(param_1);
    cVar13 = fn_82E09E40();
    if (cVar13 != '\0') {
      iVar8 = (**(code **)(*param_1 + 0x38))(param_1,0xffffffff8214a894);
    }
    uStack_a8 = 0xffffffff;
    uStack_b0 = 0;
    uStack_ac = 0;
    iVar9 = fn_82CE5410();
    fn_82CEAB00(&uStack_b0,*(undefined4 *)(iVar9 + 0x10),0);
    iVar9 = 0;
    if (0 < *(int *)(param_1[7] + 0x14)) {
      iVar16 = 0;
      iVar15 = 0;
      do {
        if (*(int *)(iVar16 + param_1[9]) != 0) {
          iVar18 = 0;
          iVar3 = *(int *)(iVar16 + param_1[9]);
          iVar17 = param_1[8] + iVar15;
          uVar14 = *(int *)(iVar17 + 0x24) - *(int *)(iVar17 + 0x20);
          if (0 < (longlong)
                  ((longlong)((int)uVar14 >> 2) + (ulonglong)((int)uVar14 < 0 && (uVar14 & 3) != 0))
             ) {
            puVar11 = (undefined4 *)(*(int *)(iVar17 + 0x20) + iVar3 + 8);
            do {
              iVar1 = puVar11[-2];
              if (iVar1 != -1) {
                uVar5 = (**(code **)(*param_1 + 0x3c))(param_1,puVar11[-1],*puVar11);
                uVar5 = (**(code **)(*piVar7 + 0x10))(piVar7,uVar5);
                if ((iVar8 != iVar18) && (cVar13 = fn_82E09DA8(), cVar13 != '\0')) {
                  iVar10 = fn_82CE5410();
                  fn_82CEA160(&uStack_b0,*(undefined4 *)(iVar10 + 0x10),iVar1 + iVar3,uVar5);
                }
              }
              iVar18 = iVar18 + 3;
              puVar11 = puVar11 + 3;
              uVar14 = *(int *)(iVar17 + 0x24) - *(int *)(iVar17 + 0x20);
            } while (iVar18 < (int)(((int)uVar14 >> 2) +
                                   (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0)));
          }
        }
        iVar9 = iVar9 + 1;
        iVar15 = iVar15 + 0x30;
        iVar16 = iVar16 + 4;
      } while (iVar9 < *(int *)(param_1[7] + 0x14));
    }
    iVar8 = fn_82CE5410();
    puVar11 = (undefined4 *)(**(code **)(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0xc)
    ;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0x80000000;
    }
    param_1[0x1d] = (int)puVar11;
    uVar12 = (**(code **)(*param_1 + 0x28))(param_1);
    iStack_9c = param_1[0x1d];
    puStack_98 = &uStack_b0;
    uVar2 = *(undefined4 *)(param_1[7] + 0xc);
    ppuStack_a0 = &lbl_8214A80C;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0xffffffff;
    iVar8 = fn_82CE5410();
    fn_82CEAB00(&uStack_94,*(undefined4 *)(iVar8 + 0x10),0);
    piStack_80 = param_1 + 2;
    uVar4 = uStack_ac & 0x7fffffff;
    iVar8 = param_1[0x1d];
    uStack_88 = uVar2;
    uStack_84 = uVar12;
    iVar9 = fn_82CE5410();
    uVar14 = *(uint *)(iVar8 + 8);
    if ((uVar14 & 0x3fffffff) < uVar4) {
      uVar14 = (uVar14 & 0x3fffffff) << 1;
      if (uVar14 <= uVar4) {
        uVar14 = uVar4;
      }
      fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),iVar8,uVar14,8);
    }
    if ((*(int *)(param_1[7] + 0x20) < 0) || (*(int *)(param_1[7] + 0x24) < 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x3c))(param_1);
    }
    uVar5 = (**(code **)(*piVar7 + 0x10))(piVar7,uVar5);
    uVar6 = fn_82E0A0F8(param_1);
    fn_82E17B38(uVar6,uVar5,&ppuStack_a0);
    iVar8 = fn_82CE5410();
    fn_82CEA4B8(&uStack_94,*(undefined4 *)(iVar8 + 0x10));
    fn_82BA02A8(&uStack_94);
    ppuStack_a0 = &lbl_8214A688;
    iVar8 = fn_82CE5410();
    fn_82CEA4B8(&uStack_b0,*(undefined4 *)(iVar8 + 0x10));
    fn_82BA02A8(&uStack_b0);
  }
  return param_1[0x1d];
}

