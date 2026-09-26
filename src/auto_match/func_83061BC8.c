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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int fStack_78;
extern int fn_8265CA20();
extern int fn_82825F40();
extern int fn_8305D660();
extern int fn_8305D670();
extern int fn_8305D680();
extern int fn_8305E840();
extern int fn_83062778();
extern int fn_83062A80();
extern int fn_83065B90();
extern int fn_83065BA8();
extern int fn_83065C40();
extern int fn_8306AB80();
extern unsigned int iStack_74;


undefined8 fn_83061BC8(double param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar3;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_80 [8];
  float fStack_78;
  int iStack_74;
  int aiStack_70 [4];
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  
  fStack_78 = (float)param_1;
  iVar8 = 0;
  fn_83062778(auStack_60,&fStack_78,auStack_80);
  iVar4 = fn_83065B90(param_2[6] << 2);
  puVar5 = (undefined4 *)fn_83065B90(param_2[6] << 2);
  iVar6 = fn_83065B90(param_2[6] << 2);
  iVar9 = 0;
  if (0 < param_2[6]) {
    iVar7 = 0;
    puVar12 = puVar5;
    do {
      fStack_78 = (float)(iVar7 + *param_2);
      iStack_74 = iVar9;
      fn_83062A80(aiStack_70,auStack_60,&fStack_78);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
      *(undefined4 *)((iVar4 - (int)puVar5) + (int)puVar12) = *(undefined4 *)(aiStack_70[0] + 0x10);
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    } while (iVar9 < param_2[6]);
  }
  piVar10 = param_2 + 1;
  for (iVar9 = param_2[1]; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
    lVar3 = 0;
    iVar7 = fn_8305D680(iVar9);
    if (0 < iVar7) {
      piVar11 = (int *)(iVar8 * 4 + iVar6 + -4);
      do {
        iVar7 = fn_8305D670(iVar9,lVar3);
        iVar7 = *(int *)(iVar7 * 4 + iVar4);
        if (puVar5[iVar7] == -1) {
          piVar11 = piVar11 + 1;
          *piVar11 = iVar7;
          puVar5[iVar7] = iVar8;
          iVar8 = iVar8 + 1;
        }
        lVar3 = lVar3 + 1;
        iVar7 = fn_8305D680(iVar9);
      } while ((int)lVar3 < iVar7);
    }
  }
  if (iVar8 < param_2[6]) {
    for (iVar9 = *piVar10; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
      lVar3 = 0;
      iVar7 = fn_8305D680(iVar9);
      if (0 < iVar7) {
        do {
          iVar7 = fn_8305D670(iVar9,lVar3);
          fn_8305D660(iVar9,lVar3,puVar5[*(int *)(iVar7 * 4 + iVar4)]);
          lVar3 = lVar3 + 1;
          iVar7 = fn_8305D680(iVar9);
        } while ((int)lVar3 < iVar7);
      }
    }
    fn_83065BA8(iVar4);
    fn_83065BA8(puVar5);
    puVar5 = (undefined4 *)fn_83065B90(iVar8 * 0xc);
    if (0 < iVar8) {
      piVar11 = (int *)(iVar6 + -4);
      iVar4 = iVar8;
      puVar12 = puVar5;
      do {
        piVar11 = piVar11 + 1;
        iVar4 = iVar4 + -1;
        iVar9 = *piVar11 * 0xc + *param_2;
        *puVar12 = *(undefined4 *)(*piVar11 * 0xc + *param_2);
        puVar12[1] = *(undefined4 *)(iVar9 + 4);
        puVar12[2] = *(undefined4 *)(iVar9 + 8);
        puVar12 = puVar12 + 3;
      } while (iVar4 != 0);
    }
    fn_83065BA8(*param_2);
    *param_2 = (int)puVar5;
    param_2[6] = iVar8;
    param_2[7] = iVar8;
    fn_83065BA8(iVar6);
    iVar4 = *piVar10;
    while (iVar4 != 0) {
      bVar2 = false;
      do {
        bVar1 = false;
        iVar6 = fn_8305D680(iVar4);
        if (iVar6 < 3) {
          bVar2 = true;
          break;
        }
        lVar3 = fn_8305D680(iVar4);
        iVar6 = fn_8305D670(iVar4,lVar3 + -1);
        lVar3 = 0;
        iVar8 = fn_8305D680(iVar4);
        if (0 < iVar8) {
          do {
            iVar8 = fn_8305D670(iVar4,lVar3);
            if (iVar8 == iVar6) {
              fn_8305E840(iVar4,lVar3);
              bVar1 = true;
            }
            lVar3 = lVar3 + 1;
            iVar9 = fn_8305D680(iVar4);
            iVar6 = iVar8;
          } while ((int)lVar3 < iVar9);
        }
      } while (bVar1);
      if (bVar2) {
        iVar6 = *(int *)(iVar4 + 4);
        fn_8306AB80(piVar10,iVar4);
        *(undefined4 *)(iVar4 + 0x28) = 0;
        fn_83065C40(iVar4);
        iVar4 = iVar6;
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
      }
    }
    fn_82825F40(&fStack_78,auStack_60,*puStack_5c);
    uVar13 = 1;
  }
  else {
    fn_83065BA8(iVar4);
    fn_83065BA8(puVar5);
    fn_83065BA8(iVar6);
    fn_82825F40(&fStack_78,auStack_60,*puStack_5c);
    uVar13 = 0;
  }
  fn_8265CA20(puStack_5c);
  return uVar13;
}

