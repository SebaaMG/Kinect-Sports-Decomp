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
#define BADSPACEBASE char
extern int fn_825207D0();
extern int fn_8259DBB8();
extern int fn_8259E2A0();
extern int fn_8259EAA8();
extern int fn_8259EB80();
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_82631290();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263CBB0();
extern int fn_82837D98();
extern int fn_82A1DD38();
extern int fn_82F68CC0();
extern int fn_82F6E8D4();
extern unsigned int lbl_8218EC94;
extern unsigned int lbl_8218ECA8;
extern unsigned int lbl_8218ECB4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326F87C;
extern unsigned int lbl_8326F880;
extern unsigned int lbl_8326F8F4;
extern unsigned int lbl_8326F8F8;
extern unsigned int lbl_8326F8FC;
extern unsigned int lbl_832767D4;
extern unsigned int lbl_832767E8;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8259D418(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int in_r0;
  int iVar21;
  int iVar22;
  undefined8 uVar20;
  int iVar23;
  uint *puVar25;
  ulonglong uVar24;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  undefined4 *puVar29;
  longlong lVar30;
  int iVar31;
  int *piVar32;
  uint *puVar33;
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  
  lVar30 = -0xae70;
  iVar21 = fn_82F6E8D4();
  lVar30 = ZEXT48(&stack0x00000000) + lVar30;
  iVar6 = (int)lVar30;
  *(BADSPACEBASE **)iVar6 = register0x0000000c;
  puVar25 = (uint *)param_2;
  piVar32 = (int *)*puVar25;
  fn_82F68CC0(lVar30 + 0x150,piVar32 + 0x2a20,0x40);
  fn_82F68CC0(lVar30 + 0x110,piVar32 + 0x2a40,0x40);
  lVar27 = lVar30 + 200;
  lVar26 = param_3 + -8;
  lVar36 = 8;
  iVar28 = *piVar32;
  do {
    lVar26 = lVar26 + 8;
    lVar27 = lVar27 + 8;
    *(undefined8 *)lVar27 = *(undefined8 *)lVar26;
    uVar19 = uRam8329eb0c;
    uVar18 = uRam8329eb08;
    uVar17 = uRam8329eb04;
    uVar16 = lbl_8329EB00;
    uVar15 = uRam8329eafc;
    uVar14 = uRam8329eaf8;
    uVar13 = uRam8329eaf4;
    uVar12 = lbl_8329EAF0;
    uVar11 = uRam8329eaec;
    uVar10 = uRam8329eae8;
    uVar9 = uRam8329eae4;
    uVar5 = lbl_8329EAE0;
    lVar36 = lVar36 + -1;
  } while (lVar36 != 0);
  iVar22 = *(int *)(iVar21 + 4);
  if ((*(int *)(iVar22 + 0x94) == 0) || (*(int *)(iVar22 + 0x90) == 0)) {
    iVar31 = 0;
  }
  else {
    puVar29 = (undefined4 *)((int)&lbl_8329EAD0 + in_r0 & 0xfffffff0);
    uVar40 = puVar29[1];
    uVar41 = puVar29[2];
    uVar42 = puVar29[3];
    iVar31 = 1;
    puVar7 = (undefined4 *)(in_r0 + iVar6 + 0xd0 & 0xfffffff0);
    *puVar7 = *puVar29;
    puVar7[1] = uVar40;
    puVar7[2] = uVar41;
    puVar7[3] = uVar42;
    puVar29 = (undefined4 *)(in_r0 + iVar6 + 0xe0 & 0xfffffff0);
    *puVar29 = uVar5;
    puVar29[1] = uVar9;
    puVar29[2] = uVar10;
    puVar29[3] = uVar11;
    puVar29 = (undefined4 *)(in_r0 + iVar6 + 0xf0 & 0xfffffff0);
    *puVar29 = uVar12;
    puVar29[1] = uVar13;
    puVar29[2] = uVar14;
    puVar29[3] = uVar15;
    puVar29 = (undefined4 *)(in_r0 + iVar6 + 0x100 & 0xfffffff0);
    *puVar29 = uVar16;
    puVar29[1] = uVar17;
    puVar29[2] = uVar18;
    puVar29[3] = uVar19;
  }
  uVar34 = puVar25[1];
  dVar38 = (double)lbl_821CC160;
  puVar8 = (undefined8 *)param_5;
  if (((((uVar34 == 8) || (uVar34 == 0x80)) || (uVar34 == 0x40)) ||
      ((uVar34 == 1 && (puVar25[0x11] != 0)))) && ((double)*(float *)((int)puVar8 + 0xc) == dVar38))
  {
    return;
  }
  if (*(int *)(iVar22 + 0x1c0) != 3) {
    if (uVar34 != 8) {
      return;
    }
    fn_8259EB80(iVar21,param_2,param_3);
    return;
  }
  if ((uVar34 == 1) && ((double)(float)puVar25[0xd] != dVar38)) {
    iVar23 = lbl_832767E8;
    if (*(int *)(iVar22 + 0x9b0) != 0) {
      iVar23 = lbl_832767D4;
    }
    if (iVar23 != 0) {
      if (((int)puVar25[0x12] < 0) ||
         (iVar28 = (puVar25[0x12] * 4 + puVar25[2] + 0x2b1) * 4, *(int *)(iVar28 + iVar22) == 0)) {
        iVar28 = (puVar25[2] + 0x20) * 4;
      }
      uVar5 = *(undefined4 *)(iVar28 + iVar22);
      lVar26 = lVar30 + 0x68;
      param_2 = param_2 + -8;
      lVar27 = 10;
      do {
        param_2 = param_2 + 8;
        lVar26 = lVar26 + 8;
        *(undefined8 *)lVar26 = *(undefined8 *)param_2;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      *(undefined4 *)(iVar6 + 0xa8) = uVar5;
      *(int *)(iVar6 + 0xb0) = iVar31;
      piVar32 = *(int **)(iVar23 + 0x1ac);
      *(undefined4 *)(iVar6 + 0xac) = 1;
      (**(code **)(*piVar32 + 4))
                (piVar32,lVar30 + 0x70,lVar30 + 0xd0,param_4,param_5,param_6,param_7);
      return;
    }
  }
  fn_8259EAA8(piVar32);
  iVar22 = *(int *)(iVar21 + 4);
  puVar33 = (uint *)(iVar22 + 0x9cc);
  if (*(int *)(iVar22 + 0x9b0) == 0) {
    puVar33 = (uint *)(iVar22 + 0x9f0);
  }
  iVar22 = (**(code **)(**(int **)(iVar21 + 4) + 0x88))();
  if ((iVar22 == 0) || (*puVar33 == 0)) goto LAB_8259d8cc;
  if (((int)puVar25[0x12] < 0) ||
     (piVar32 = *(int **)((puVar25[0x12] * 4 + puVar25[2] + 0x2b1) * 4 + *(int *)(iVar21 + 4)),
     piVar32 == (int *)0x0)) {
    piVar32 = *(int **)((puVar25[2] + 0x20) * 4 + *(int *)(iVar21 + 4));
  }
  lVar27 = lVar30 + 0x68;
  lVar26 = param_2 + -8;
  lVar36 = 10;
  do {
    lVar26 = lVar26 + 8;
    lVar27 = lVar27 + 8;
    *(undefined8 *)lVar27 = *(undefined8 *)lVar26;
    lVar36 = lVar36 + -1;
  } while (lVar36 != 0);
  fn_8259DBB8(lVar30 + 400,*puVar25);
  uVar34 = puVar25[3];
  *(int *)(iVar6 + 0x70) = iVar6 + 400;
  *(float *)(iVar6 + 0xad4c) =
       *(float *)(*puVar25 + 0xabbc) - *(float *)((uVar34 + 0xc66a) * 4 + *(int *)(iVar21 + 4));
  *(int **)(iVar6 + 0xa8) = piVar32;
  *(undefined4 *)(iVar6 + 0xac) = 1;
  *(int *)(iVar6 + 0xb0) = iVar31;
  if (iVar31 == 0) {
    iVar22 = piVar32[1];
  }
  else {
    iVar22 = piVar32[0x14];
  }
  if (iVar22 == 0) {
    if (iVar31 == 0) {
      iVar22 = *piVar32;
    }
    else {
      iVar22 = piVar32[0x13];
    }
    if (iVar22 != 0) goto LAB_8259d79c;
  }
  else {
LAB_8259d79c:
    dVar39 = (double)lbl_821CA460;
    if (*(int *)(iVar21 + 8) != 0) {
      *(float *)(iVar6 + 0x94) = lbl_821CA460;
      *(uint *)(iVar6 + 0x98) = *(uint *)(iVar6 + 0x98) & 0xfffffffe | 4;
    }
    dVar37 = (double)(**(code **)(**(int **)(iVar21 + 4) + 0x80))();
    if (dVar37 < dVar39) {
      *(uint *)(iVar6 + 0x98) = *(uint *)(iVar6 + 0x98) | 2;
    }
    uVar34 = 0;
    if (*puVar33 != 0) {
      iVar22 = 0;
      do {
        if (*(char *)(puVar25[3] + *(int *)(iVar21 + 4) + 0x319a5) == '\0') {
          uVar3 = puVar33[1];
        }
        else {
          uVar3 = puVar33[2];
        }
        iVar23 = *(int *)(uVar3 + iVar22);
        if (iVar23 != 0) {
          if (dVar39 <= dVar37) {
            piVar32 = *(int **)(iVar23 + 0x1ac);
            pcVar4 = *(code **)(*piVar32 + 4);
            lVar26 = param_5;
          }
          else {
            uVar20 = puVar8[1];
            piVar32 = *(int **)(iVar23 + 0x1ac);
            *(undefined8 *)(iVar6 + 0xc0) = *puVar8;
            *(undefined8 *)(iVar6 + 200) = uVar20;
            *(float *)(iVar6 + 0xcc) = (float)dVar37;
            pcVar4 = *(code **)(*piVar32 + 4);
            lVar26 = lVar30 + 0xc0;
          }
          (*pcVar4)(piVar32,lVar30 + 0x70,lVar30 + 0xd0,param_4,lVar26,param_6,param_7);
        }
        uVar34 = uVar34 + 1;
        iVar22 = iVar22 + 4;
      } while (uVar34 < *puVar33);
    }
  }
  iVar22 = (**(code **)(**(int **)(iVar21 + 4) + 0x90))();
  if (iVar22 != 0) {
    return;
  }
LAB_8259d8cc:
  uVar34 = puVar25[1];
  if (uVar34 == 1) {
    lVar26 = 5;
    piVar32 = &lbl_8218EC94;
  }
  else if (((uVar34 == 4) || (uVar34 == 0x10)) || (uVar34 == 0x40)) {
    lVar26 = 3;
    piVar32 = (int *)&lbl_8218ECA8;
  }
  else {
    if (uVar34 != 8) {
      return;
    }
    lVar26 = 2;
    piVar32 = (int *)&lbl_8218ECB4;
  }
  if (*(char *)(*(int *)(iVar21 + 4) + puVar25[3] + 0x319a5) != '\0') {
    iVar22 = *(int *)(*(int *)(iVar21 + 4) + 0x31980);
    if (iVar22 == 0) {
      iVar22 = *(int *)(iVar21 + 0x1c);
    }
    fn_82837D98(*(undefined4 *)(iVar22 + 0x14),0,lVar30 + 0x60);
    fn_8263CBB0(iVar28,6,*(undefined4 *)(iVar6 + 0x60),0x2000000);
    fn_82837D98(*(undefined4 *)(*(int *)(iVar21 + 0x20) + 0x14),0,lVar30 + 0x60);
    fn_8263CBB0(iVar28,7,*(undefined4 *)(iVar6 + 0x60),0x1000000);
    fVar1 = *(float *)(*puVar25 + 0xabbc);
    fVar2 = *(float *)((puVar25[3] + 0xc66a) * 4 + *(int *)(iVar21 + 4));
    *(float *)(iVar28 + 0x2724) = (float)dVar38;
    *(float *)(iVar28 + 0x2728) = (float)dVar38;
    *(float *)(iVar28 + 0x272c) = (float)dVar38;
    *(float *)(iVar28 + 0x2720) = fVar1 - fVar2;
    *(ulonglong *)(iVar28 + 8) = *(ulonglong *)(iVar28 + 8) | 2;
  }
  if ((int)lVar26 != 0) {
    do {
      iVar22 = *piVar32;
      uVar35 = (ulonglong)*(uint *)(iVar28 + 0x3248);
      if (puVar25[1] == 1) {
        uVar24 = (ulonglong)(uint)(&lbl_8326F87C)[iVar22 * 6];
        if (uVar35 != 0) {
          fn_8262FE50(uVar35);
        }
        if (uVar35 != (uVar24 & 0xffffffff)) {
          fn_82631920(iVar28);
        }
        if (uVar35 != 0) {
          fn_8262FEC8(uVar35);
        }
        uVar24 = (ulonglong)*(uint *)(iVar28 + 0x3244);
        uVar35 = (ulonglong)(uint)(&lbl_8326F880)[iVar22 * 6];
        if (uVar24 != 0) {
          fn_8262FE50(uVar24);
        }
        if (uVar24 != (uVar35 & 0xffffffff)) {
          fn_82631578(iVar28);
        }
        if (uVar24 != 0) {
          fn_8262FEC8(uVar24);
        }
        puVar29 = (undefined4 *)*puVar25;
        *(undefined4 *)(iVar6 + 100) = 1;
        lVar27 = ZEXT48(puVar29) + 0xa464;
        iVar23 = fn_825207D0(lVar27,lVar30 + 100,4);
        if (iVar23 != 0) {
          fn_82A1DD38(lVar27,lVar30 + 100);
          fn_82631290(*puVar29,1,lVar30 + 100,1);
        }
      }
      else {
        uVar24 = (ulonglong)(uint)(&lbl_8326F8F4)[iVar22 * 6];
        if (uVar35 != 0) {
          fn_8262FE50(uVar35);
        }
        if (uVar35 != (uVar24 & 0xffffffff)) {
          fn_82631920(iVar28);
        }
        if (uVar35 != 0) {
          fn_8262FEC8(uVar35);
        }
        uVar35 = (ulonglong)*(uint *)(iVar28 + 0x3244);
        puVar29 = &lbl_8326F8FC;
        if (*(char *)(puVar25[3] + *(int *)(iVar21 + 4) + 0x319a5) == '\0') {
          puVar29 = &lbl_8326F8F8;
        }
        uVar24 = (ulonglong)(uint)puVar29[iVar22 * 6];
        if (uVar35 != 0) {
          fn_8262FE50(uVar35);
        }
        if (uVar35 != (uVar24 & 0xffffffff)) {
          fn_82631578(iVar28);
        }
        if (uVar35 != 0) {
          fn_8262FEC8(uVar35);
        }
      }
      uVar34 = puVar25[2];
      uVar3 = *puVar25;
      *(int *)(iVar6 + 0x54) = iVar31;
      fn_8259E2A0(iVar21,iVar22,uVar3,lVar30 + 0xd0,lVar30 + 0x150,lVar30 + 0x110,uVar34,
                        param_2);
      lVar26 = lVar26 + -1;
      piVar32 = piVar32 + 1;
    } while (lVar26 != 0);
  }
  return;
}

