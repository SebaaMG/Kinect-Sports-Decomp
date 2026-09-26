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
extern unsigned int *auStack_130;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1b4;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_90;
extern unsigned int fStack_264;
extern unsigned int fStack_274;
extern int fn_82CE5410();
extern int fn_82D80A40();
extern int fn_82D899D8();
extern int fn_82D8B4B8();
extern int fn_82D92FF0();
extern int fn_82D93128();
extern int fn_82D932A8();
extern int fn_82D9D340();
extern int fn_82D9D3A8();
extern int fn_82D9D520();
extern int fn_83081390();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82131F88;
extern unsigned int lbl_8213B63C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1b8;
extern unsigned int uStack_2c7;
extern unsigned int uStack_98;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


/* WARNING: Type propagation algorithm not settling */

void fn_82D8F080(int param_1,longlong param_2,char param_3,char param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ushort uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined ***pppuVar9;
  int **ppiVar10;
  ushort uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  int *apiStack_2dc [2];
  undefined **appuStack_2d4 [3];
  undefined1 uStack_2c7;
  undefined1 auStack_2c0 [76];
  float fStack_274;
  float fStack_264;
  undefined4 uStack_1b8;
  undefined2 auStack_1b4 [2];
  undefined **appuStack_1b0 [16];
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [52];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  byte bStack_f4;
  byte bStack_f3;
  undefined4 uStack_98;
  undefined1 auStack_90 [144];
  
  uVar13 = (uint)param_2;
  if (param_3 == '\0') {
    iVar7 = param_1 + 0xe0;
    uStack_1b8 = 0;
    lVar15 = 0x12;
    puVar12 = (undefined4 *)((int)appuStack_2d4 + (iVar7 - param_1) + -0xe0);
    appuStack_2d4[1] = &lbl_8213B63C;
    puVar8 = (undefined4 *)(param_1 + 0xdc);
    do {
      puVar4 = puVar8 + 1;
      uVar1 = puVar8[2];
      uVar2 = puVar8[3];
      puVar8 = puVar8 + 4;
      uVar3 = *puVar8;
      puVar12[1] = *puVar4;
      puVar12[2] = uVar1;
      puVar12[3] = uVar2;
      puVar12 = puVar12 + 4;
      *puVar12 = uVar3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if (uVar13 == 5) {
      if (iVar7 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)fn_82D9D520(iVar7,param_1 + 0x120,param_1 + 0x160);
      }
      piVar14 = piVar6 + 4;
      uVar16 = fn_82D92FF0(piVar14,auStack_2c0);
      *(undefined1 *)((int)piVar6 + 9) = uStack_2c7;
      if (fStack_264 != lbl_821AAD20) {
        if (param_5 == 0) {
          fn_83081390((double)(lbl_82002AE0 / fStack_264 + fStack_274),uVar16,piVar14);
        }
        else {
          uVar16 = fn_82D80A40(param_5);
          fn_83081390(uVar16,piVar14);
        }
      }
    }
    else {
      if (iVar7 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)fn_82D9D340(iVar7,param_1 + 0x120,param_1 + 0x160);
      }
      fn_82D932A8(appuStack_2d4 + 1,piVar6);
    }
    if (param_4 == '\0') {
      (**(code **)(*piVar6 + 0x6c))(piVar6,uStack_1b8);
      *(undefined2 *)(piVar6 + 0x47) = auStack_1b4[0];
    }
    else {
      iVar7 = fn_82CE5410();
      puVar8 = (undefined4 *)
               (**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x120);
      *puVar8 = &lbl_8213B63C;
      puVar8[0x46] = 0;
      *(undefined2 *)(puVar8 + 1) = 0x120;
      ppiVar10 = apiStack_2dc;
      lVar15 = 0x12;
      puVar12 = puVar8 + 2;
      do {
        puVar12[-2] = ppiVar10[3];
        ppiVar10 = ppiVar10 + 4;
        puVar12[-1] = *ppiVar10;
        *puVar12 = *(undefined4 *)((int)puVar12 + (int)appuStack_2d4 + (4U - (int)puVar8));
        puVar12[1] = *(undefined4 *)((int)puVar12 + (int)appuStack_2d4 + (8U - (int)puVar8));
        puVar12 = puVar12 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      *(undefined2 *)(puVar8 + 1) = 0x120;
      *(undefined2 *)((int)puVar8 + 6) = 1;
      piVar6[0x46] = (int)puVar8;
      *(short *)(piVar6 + 0x47) = (short)*(char *)(param_1 + 0x2a);
      fn_82D899D8(param_1,param_5,*(undefined4 *)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    pppuVar9 = appuStack_2d4 + 1;
    *(char *)(param_1 + 0x2a) = (char)(param_2 + -5) - ((char)param_2 + -6 + (param_2 + -5 == 0));
  }
  else {
    if (param_4 == '\0') {
      iVar7 = *(int *)(param_1 + 0x1f8);
      (**(code **)(*(int *)(param_1 + 0xe0) + 100))(param_1 + 0xe0,iVar7);
      *(undefined2 *)(iVar7 + 10) = 0;
      *(undefined2 *)(iVar7 + 0xc) = 0;
      puVar8 = (undefined4 *)(iVar7 + -4);
      puVar12 = (undefined4 *)(param_1 + 0xdc);
      lVar15 = 0x12;
      *(char *)(param_1 + 0x2a) = (char)*(undefined2 *)(param_1 + 0x1fc);
      do {
        puVar12[1] = puVar8[1];
        puVar12[2] = puVar8[2];
        puVar12[3] = puVar8[3];
        puVar8 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        *puVar12 = *puVar8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_82f691f0(param_1 + 0x200,0,0);
    }
    if ((*(byte *)(param_1 + 0xe8) == uVar13) || (uVar13 == 1)) goto LAB_82d8f440;
    piVar6 = (int *)(param_1 + 0xe0);
    uStack_98 = 0;
    lVar15 = 0x12;
    puVar12 = (undefined4 *)((int)piVar6 + (int)auStack_1b4 + (-0xe0 - param_1));
    appuStack_1b0[0] = &lbl_8213B63C;
    puVar8 = (undefined4 *)(param_1 + 0xdc);
    do {
      puVar4 = puVar8 + 1;
      uVar1 = puVar8[2];
      uVar2 = puVar8[3];
      puVar8 = puVar8 + 4;
      uVar3 = *puVar8;
      puVar12[1] = *puVar4;
      puVar12[2] = uVar1;
      puVar12[3] = uVar2;
      puVar12 = puVar12 + 4;
      *puVar12 = uVar3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    (**(code **)(*piVar6 + 0x14))(piVar6,auStack_90);
    dVar18 = (double)*(float *)(&lbl_82131F88 + (uint)bStack_f3 * 4);
    dVar17 = (double)*(float *)(&lbl_82131F88 + (uint)bStack_f4 * 4);
    uVar16 = fn_82D93128(appuStack_1b0);
    apiStack_2dc[0] = piVar6;
    fn_82D8B4B8(uVar16,dVar17,dVar18,param_2,auStack_170,auStack_130);
    fn_82D932A8(appuStack_1b0,piVar6);
    pppuVar9 = appuStack_1b0;
    *(undefined4 *)(param_1 + 0x194) = uStack_fc;
    *(undefined4 *)(param_1 + 0x198) = uStack_f8;
  }
  fn_82D9D3A8(pppuVar9);
LAB_82d8f440:
  *(int *)(param_1 + 0x18) = param_1 + 0xf0;
  if (param_5 != 0) {
    uVar11 = (ushort)*(byte *)(param_5 + 0x305);
    if ((*(byte *)(param_5 + 0x307) & 3) < (*(byte *)(param_1 + 0xe9) & 3)) {
      uVar11 = ~uVar11;
    }
    if (*(byte *)(param_5 + 0x307) < *(byte *)(param_1 + 0xe9)) {
      uVar5 = ~(ushort)*(byte *)(param_5 + 0x306) << 0xe;
    }
    else {
      uVar5 = (ushort)*(byte *)(param_5 + 0x306) << 0xe;
    }
    *(ushort *)(param_1 + 0xea) = *(ushort *)(param_1 + 0xea) & 0x3fff | uVar11 << 0xe;
    *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0x3fff | uVar5;
  }
  return;
}

