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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_13c;
extern unsigned int fStack_140;
extern unsigned int fStack_144;
extern unsigned int fStack_148;
extern unsigned int fStack_14c;
extern unsigned int fStack_150;
extern unsigned int fStack_fc;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8268D280();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269A240();
extern int fn_8269A2C8();
extern int fn_826B44A0();
extern int fn_826BD928();
extern int fn_826C59F8();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;


void fn_826CA540(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar6;
  undefined8 uVar4;
  char cVar9;
  undefined1 uVar10;
  char *pcVar7;
  ulonglong uVar5;
  int *piVar8;
  longlong lVar11;
  byte bVar12;
  double dVar13;
  double dVar14;
  int aiStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  piVar6 = (int *)fn_826C59F8();
  if (piVar6 == (int *)0x0) {
    return;
  }
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 0;
  fn_8268CC00(auStack_80);
  (**(code **)(*piVar6 + 0x28))(&fStack_150,piVar6,auStack_80);
  if ((fStack_148 != fStack_150) || (bVar3 = true, fStack_144 != fStack_14c)) {
    bVar3 = false;
  }
  if (bVar3) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 2) {
    if (*(int *)(param_1 + 0x1c) != 1) {
      return;
    }
    pcVar7 = (char *)fn_826957D0(param_1,0);
    piVar8 = (int *)0x0;
    if (*pcVar7 == '\a') {
      uVar5 = fn_82695370(pcVar7,*(undefined4 *)(param_1 + 0x18));
      if ((uVar5 & 0xffffffff) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)fn_826BD928(uVar5 + 0x68);
      }
    }
    else {
      fn_82696D38(aiStack_160,pcVar7,*(undefined4 *)(param_1 + 0x18),0xffffffffffffffff,0);
      auStack_f0[0] = 0;
      cVar9 = fn_826B44A0(*(undefined4 *)(param_1 + 0x18),aiStack_160,auStack_f0,0,0,0,0);
      if (cVar9 != '\0') {
        uVar5 = fn_82695370(auStack_f0,*(undefined4 *)(param_1 + 0x18));
        if ((uVar5 & 0xffffffff) == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)fn_826BD928(uVar5 + 0x68);
        }
      }
      fn_82696330(auStack_f0);
      lVar11 = (ulonglong)*(uint *)(aiStack_160[0] + 8) - 1;
      *(int *)(aiStack_160[0] + 8) = (int)lVar11;
      if (lVar11 == 0) {
        fn_826944C8(aiStack_160[0]);
      }
    }
    if (piVar8 == (int *)0x0) {
      return;
    }
    fn_8268CC00(auStack_60);
    (**(code **)(*piVar8 + 0x28))(&fStack_110,piVar8,auStack_60);
    if ((fStack_108 != fStack_110) || (bVar3 = true, fStack_104 != fStack_10c)) {
      bVar3 = false;
    }
    if (bVar3) {
      return;
    }
    fn_8268CC00(auStack_e0);
    fn_8269A240(piVar6,auStack_e0);
    dVar13 = (double)lbl_821AAD20;
    fStack_130 = lbl_821AAD20;
    fStack_12c = lbl_821AAD20;
    fStack_128 = lbl_821AAD20;
    fStack_124 = lbl_821AAD20;
    fn_8268D280(auStack_e0,&fStack_130,&fStack_150);
    fn_8268CC00(auStack_c0);
    fn_8269A240(piVar8,auStack_c0);
    fStack_120 = (float)dVar13;
    fStack_11c = (float)dVar13;
    fStack_118 = (float)dVar13;
    fStack_114 = (float)dVar13;
    fn_8268D280(auStack_c0,&fStack_120,&fStack_110);
    if ((((fStack_124 < fStack_11c) || (fStack_114 < fStack_12c)) || (fStack_118 < fStack_130)) ||
       (uVar10 = 1, fStack_128 < fStack_120)) {
      uVar10 = 0;
    }
    puVar1 = *(undefined1 **)(param_1 + 4);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    bVar12 = false;
    uVar4 = fn_826957D0(param_1,1);
    dVar13 = (double)fn_826972E0(uVar4,uVar2);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    dVar14 = (double)(float)dVar13;
    uVar4 = fn_826957D0(param_1,0);
    dVar13 = (double)fn_826972E0(uVar4,uVar2);
    fStack_fc = (float)(dVar14 * (double)lbl_8200571C);
    fStack_100 = (float)((double)(float)dVar13 * (double)lbl_8200571C);
    if (2 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,2);
      cVar9 = fn_82695608(uVar4,uVar2);
      bVar12 = cVar9 != '\0';
    }
    if (3 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,3);
      cVar9 = fn_82695608(uVar4,uVar2);
      bVar12 = -(cVar9 != '\0') & 2U | bVar12;
    }
    fn_8268CC00(auStack_a0);
    fn_8269A2C8(piVar6,auStack_a0);
    fn_8268D008(auStack_a0,&fStack_140,&fStack_100);
    if ((*(byte *)((int)piVar6 + 0x66) & 1) == 0) {
      if (((fStack_148 < fStack_140) || (fStack_140 < fStack_150)) ||
         ((fStack_144 < fStack_13c || (bVar3 = true, fStack_13c < fStack_14c)))) {
        bVar3 = false;
      }
      if (!bVar3) {
        puVar1 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar1);
        *puVar1 = 2;
        puVar1[4] = 0;
        return;
      }
      if ((bVar12 & 1) == 0) {
        puVar1 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar1);
        *puVar1 = 2;
        puVar1[4] = 1;
        return;
      }
    }
    uVar10 = (**(code **)(*piVar6 + 0x30))(piVar6,&fStack_140,bVar12);
    puVar1 = *(undefined1 **)(param_1 + 4);
  }
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = uVar10;
  return;
}

