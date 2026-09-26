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
extern int fn_82265300();
extern int fn_82266158();
extern int fn_82267628();
extern int fn_822676A0();
extern int fn_82267750();
extern int fn_82269A48();
extern int fn_822843E0();
extern int fn_82539560();
extern int fn_8265C9E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_82193CF0;
extern unsigned int lbl_82195640;
extern unsigned int lbl_821CC160;


void fn_82269440(void)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  int *piVar7;
  int iVar8;
  undefined8 uVar6;
  int iVar9;
  int *piVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  float afStack_a0 [4];
  float afStack_90 [36];
  
  piVar7 = (int *)fn_82F6A548();
  iVar5 = piVar7[0xad];
  uVar2 = (piVar7[1] - *piVar7) / 0xe0;
  lVar13 = (longlong)(int)uVar2;
  if (piVar7[0xd9] == 0) {
    lVar16 = 0;
    piVar10 = piVar7 + 0xd5;
    lVar15 = 4;
    do {
      if (*piVar10 != 0) {
        lVar16 = lVar16 + 1;
      }
      piVar10 = piVar10 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    uVar12 = 6 - lVar16;
  }
  else {
    uVar12 = 6;
  }
  bVar1 = (uVar12 & 0xffffffff) < (lVar13 + 3U & 0xffffffff);
  uVar14 = lVar13 + 3U;
  if (bVar1) {
    uVar14 = uVar12;
  }
  dVar22 = (double)lbl_82193CF0;
  dVar23 = (double)lbl_82195640;
  dVar21 = (double)lbl_8218E8E8;
  dVar20 = (double)lbl_821925C0;
  if (piVar7[0xae] == 0) {
    if (iVar5 == 0) goto LAB_82269a30;
    piVar7[0x15] = 0;
    piVar7[0x4d] = (int)uVar14 + -1;
    fn_82269A48(afStack_a0,piVar7,uVar14,0,1);
    fn_82269A48(afStack_90);
    for (puVar4 = (undefined4 *)**(undefined4 **)piVar7[0xb3];
        puVar4 != *(undefined4 **)piVar7[0xb3]; puVar4 = (undefined4 *)*puVar4) {
      iVar9 = puVar4[2];
      if (*(int *)(iVar9 + 0x40) == 0) goto LAB_82269668;
    }
    iVar9 = 0;
LAB_82269668:
    if (iVar9 != 0) {
      fn_82266158();
    }
    for (puVar4 = (undefined4 *)**(undefined4 **)piVar7[0xb3];
        puVar4 != *(undefined4 **)piVar7[0xb3]; puVar4 = (undefined4 *)*puVar4) {
      iVar9 = puVar4[2];
      if (*(int *)(iVar9 + 0x40) == 5) goto LAB_822696ac;
    }
    iVar9 = 0;
LAB_822696ac:
    if (iVar9 != 0) {
      fn_82266158();
    }
  }
  else {
    fn_82267750(piVar7[0xb3],0);
    fn_82267750(piVar7[0xb3],5);
    piVar7[0x38] = *(int *)(piVar7[0xaf] + piVar7[0xe4] * 4);
    piVar7[0x70] = *(int *)(piVar7[0xb0] + piVar7[0xe4] * 4);
    piVar7[0x15] = 0;
    iVar8 = fn_82269A48(afStack_90,piVar7,uVar14,0,1);
    iVar9 = (int)in_r0;
    puVar4 = (undefined4 *)(iVar9 + iVar8 & 0xfffffff0);
    uVar24 = *puVar4;
    uVar25 = puVar4[1];
    uVar26 = puVar4[2];
    uVar27 = puVar4[3];
    fVar3 = (float)piVar7[0xc4];
    puVar4 = (undefined4 *)((uint)(piVar7 + 0x24) & 0xfffffff0);
    *puVar4 = uVar24;
    puVar4[1] = uVar25;
    puVar4[2] = uVar26;
    puVar4[3] = uVar27;
    puVar4 = (undefined4 *)((int)afStack_a0 + iVar9 & 0xfffffff0);
    *puVar4 = in_register_000100d0;
    puVar4[1] = in_register_000100d4;
    puVar4[2] = in_register_000100d8;
    puVar4[3] = in_vr13;
    puVar4 = (undefined4 *)((int)piVar7 + iVar9 + 0x60 & 0xfffffff0);
    *puVar4 = uVar24;
    puVar4[1] = uVar25;
    puVar4[2] = uVar26;
    puVar4[3] = uVar27;
    puVar4 = (undefined4 *)((uint)(piVar7 + 0x28) & 0xfffffff0);
    *puVar4 = uVar24;
    puVar4[1] = uVar25;
    puVar4[2] = uVar26;
    puVar4[3] = uVar27;
    dVar19 = (double)fn_82539560((double)(afStack_a0[0] - fVar3),dVar23,dVar22,dVar21,dVar20);
    piVar7[0x1c] = (int)(float)dVar19;
    piVar7[0x4d] = (int)uVar14 + -1;
    iVar8 = fn_82269A48(afStack_90);
    iVar9 = (int)in_r0;
    puVar4 = (undefined4 *)(iVar9 + iVar8 & 0xfffffff0);
    uVar24 = *puVar4;
    uVar25 = puVar4[1];
    uVar26 = puVar4[2];
    uVar27 = puVar4[3];
    fVar3 = (float)piVar7[0xc4];
    puVar4 = (undefined4 *)((int)afStack_a0 + iVar9 & 0xfffffff0);
    *puVar4 = in_register_000100d0;
    puVar4[1] = in_register_000100d4;
    puVar4[2] = in_register_000100d8;
    puVar4[3] = in_vr13;
    puVar4 = (undefined4 *)((int)piVar7 + iVar9 + 0x140 & 0xfffffff0);
    *puVar4 = uVar24;
    puVar4[1] = uVar25;
    puVar4[2] = uVar26;
    puVar4[3] = uVar27;
    puVar4 = (undefined4 *)((uint)(piVar7 + 0x5c) & 0xfffffff0);
    *puVar4 = uVar24;
    puVar4[1] = uVar25;
    puVar4[2] = uVar26;
    puVar4[3] = uVar27;
    puVar4 = (undefined4 *)((uint)(piVar7 + 0x60) & 0xfffffff0);
    *puVar4 = uVar24;
    puVar4[1] = uVar25;
    puVar4[2] = uVar26;
    puVar4[3] = uVar27;
    dVar19 = (double)fn_82539560((double)(afStack_a0[0] - fVar3));
    piVar7[0x54] = (int)(float)dVar19;
    fn_82267628(piVar7[0xb3],piVar7 + 4);
    fn_82267628(piVar7[0xb3],piVar7 + 0x3c);
  }
  if (iVar5 != 0) {
    lVar16 = 1;
    do {
      fn_82267750(piVar7[0xb3],lVar16);
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < 5);
    fn_82267750(piVar7[0xb3],6);
    iVar5 = (int)in_r0;
    if (uVar2 != 0) {
      lVar15 = 1;
      iVar9 = 0;
      lVar16 = lVar13;
      do {
        iVar17 = iVar9 + *piVar7;
        *(int *)(iVar17 + 0x40) = (int)lVar15;
        *(int *)(iVar17 + 0x44) = (int)lVar15;
        iVar8 = fn_82269A48(afStack_a0,piVar7,uVar14,lVar15,0);
        iVar5 = (int)in_r0;
        puVar4 = (undefined4 *)(iVar5 + iVar8 & 0xfffffff0);
        uVar24 = *puVar4;
        uVar25 = puVar4[1];
        uVar26 = puVar4[2];
        uVar27 = puVar4[3];
        puVar4 = (undefined4 *)((int)afStack_90 + iVar5 & 0xfffffff0);
        *puVar4 = uVar24;
        puVar4[1] = uVar25;
        puVar4[2] = uVar26;
        puVar4[3] = uVar27;
        puVar4 = (undefined4 *)(iVar5 + iVar17 + 0x50 & 0xfffffff0);
        *puVar4 = uVar24;
        puVar4[1] = uVar25;
        puVar4[2] = uVar26;
        puVar4[3] = uVar27;
        dVar19 = (double)fn_82539560((double)(afStack_90[0] - (float)piVar7[0xc4]),dVar23,dVar22,
                                      dVar21,dVar20);
        *(float *)(iVar17 + 0x60) = (float)dVar19;
        puVar4 = (undefined4 *)(iVar17 + 0x90U & 0xfffffff0);
        *puVar4 = uVar24;
        puVar4[1] = uVar25;
        puVar4[2] = uVar26;
        puVar4[3] = uVar27;
        puVar4 = (undefined4 *)(iVar17 + 0x80U & 0xfffffff0);
        *puVar4 = uVar24;
        puVar4[1] = uVar25;
        puVar4[2] = uVar26;
        puVar4[3] = uVar27;
        iVar5 = piVar7[0xb3];
        uVar12 = fn_8265C9E0(0x640);
        if ((uVar12 & 0xffffffff) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_82265300(uVar12,iVar17,*(undefined4 *)(iVar5 + 0x6c),iVar5 + 0x70,
                                    *(undefined4 *)(iVar5 + 0x68));
        }
        fn_822676A0(iVar5,uVar6,iVar17);
        iVar5 = (int)in_r0;
        lVar16 = lVar16 + -1;
        iVar9 = iVar9 + 0xe0;
        lVar15 = lVar15 + 1;
      } while (lVar16 != 0);
    }
    if (!bVar1) {
      piVar7[0x85] = (int)(lVar13 + 1);
      iVar9 = fn_82269A48(afStack_90,piVar7,uVar14,lVar13 + 1,0);
      puVar4 = (undefined4 *)(iVar5 + iVar9 & 0xfffffff0);
      uVar24 = *puVar4;
      uVar25 = puVar4[1];
      uVar26 = puVar4[2];
      uVar27 = puVar4[3];
      fVar3 = (float)piVar7[0xc4];
      puVar4 = (undefined4 *)((int)afStack_90 + iVar5 & 0xfffffff0);
      *puVar4 = uVar24;
      puVar4[1] = uVar25;
      puVar4[2] = uVar26;
      puVar4[3] = uVar27;
      puVar4 = (undefined4 *)((int)piVar7 + iVar5 + 0x220 & 0xfffffff0);
      *puVar4 = uVar24;
      puVar4[1] = uVar25;
      puVar4[2] = uVar26;
      puVar4[3] = uVar27;
      dVar20 = (double)fn_82539560((double)(afStack_90[0] - fVar3),dVar23,dVar22,dVar21,dVar20);
      piVar7[0x8c] = (int)(float)dVar20;
      iVar5 = piVar7[0xb3];
      puVar4 = (undefined4 *)((uint)(piVar7 + 0x94) & 0xfffffff0);
      *puVar4 = uVar24;
      puVar4[1] = uVar25;
      puVar4[2] = uVar26;
      puVar4[3] = uVar27;
      puVar4 = (undefined4 *)((uint)(piVar7 + 0x98) & 0xfffffff0);
      *puVar4 = uVar24;
      puVar4[1] = uVar25;
      puVar4[2] = uVar26;
      puVar4[3] = uVar27;
      fn_82267628(iVar5,piVar7 + 0x74);
    }
    uVar12 = 0;
    for (puVar4 = (undefined4 *)**(undefined4 **)piVar7[0xb3];
        puVar4 != *(undefined4 **)piVar7[0xb3]; puVar4 = (undefined4 *)*puVar4) {
      iVar5 = puVar4[2];
      if (*(int *)(iVar5 + 0x40) == 0) goto LAB_8226986c;
    }
    iVar5 = 0;
LAB_8226986c:
    dVar20 = (double)lbl_821CC160;
    if (iVar5 != 0) {
      if ((*(int *)(iVar5 + 0x520) != 0) && (*(int *)(iVar5 + 0x51c) != 0)) {
        fn_822843E0(dVar20,*(int *)(iVar5 + 0x520),0xffffffff82193d18,iVar5 + 0x5a4);
      }
      uVar12 = 1;
    }
    uVar18 = 0;
    if (uVar2 != 0) {
      do {
        piVar10 = *(int **)piVar7[0xb3];
        piVar11 = (int *)*piVar10;
        if (piVar11 != piVar10) {
          do {
            iVar5 = piVar11[2];
            if (*(int *)(iVar5 + 0x40) == uVar18 + 1) goto LAB_822698f8;
            piVar11 = (int *)*piVar11;
          } while (piVar11 != piVar10);
        }
        iVar5 = 0;
LAB_822698f8:
        if (iVar5 != 0) {
          if ((*(int *)(iVar5 + 0x520) != 0) && (*(int *)(iVar5 + 0x51c) != 0)) {
            fn_822843E0(dVar20,*(int *)(iVar5 + 0x520),(uVar12 & 1) * 0x18 + -0x7de6c2e8,
                              iVar5 + 0x5a4);
          }
          uVar12 = uVar12 + 1;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar2);
    }
    if (!bVar1) {
      for (puVar4 = (undefined4 *)**(undefined4 **)piVar7[0xb3];
          puVar4 != *(undefined4 **)piVar7[0xb3]; puVar4 = (undefined4 *)*puVar4) {
        iVar5 = puVar4[2];
        if (*(int *)(iVar5 + 0x40) == 6) goto LAB_82269984;
      }
      iVar5 = 0;
LAB_82269984:
      if (iVar5 != 0) {
        if ((*(int *)(iVar5 + 0x520) != 0) && (*(int *)(iVar5 + 0x51c) != 0)) {
          fn_822843E0(dVar20,*(int *)(iVar5 + 0x520),(uVar12 & 1) * 0x18 + -0x7de6c2e8,
                            iVar5 + 0x5a4);
        }
        uVar12 = uVar12 + 1;
      }
    }
    for (puVar4 = (undefined4 *)**(undefined4 **)piVar7[0xb3];
        puVar4 != *(undefined4 **)piVar7[0xb3]; puVar4 = (undefined4 *)*puVar4) {
      iVar5 = puVar4[2];
      if (*(int *)(iVar5 + 0x40) == 5) goto LAB_822699f4;
    }
    iVar5 = 0;
LAB_822699f4:
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x520) != 0)) && (*(int *)(iVar5 + 0x51c) != 0)) {
      fn_822843E0(dVar20,*(int *)(iVar5 + 0x520),(uVar12 & 1) * 0x18 + -0x7de6c2e8,
                        iVar5 + 0x5a4);
    }
  }
LAB_82269a30:
  piVar7[0xad] = 0;
  piVar7[0xae] = 0;
  fn_82F6A594();
  return;
}

