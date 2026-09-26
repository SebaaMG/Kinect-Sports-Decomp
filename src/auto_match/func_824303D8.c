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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_6c;
extern unsigned int fStack_7c;
extern int fn_82359070();
extern int fn_82359558();
extern int fn_82430D80();
extern int fn_8248F890();
extern int fn_8248F9F8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82192A60;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821BECFC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C7AF8;
extern unsigned int lbl_831C7B64;
extern unsigned int lbl_831C7B68;
extern unsigned int lbl_831C7BF4;
extern unsigned int lbl_831C7BF8;
extern unsigned int lbl_831C7C18;
extern unsigned int lbl_831C7C84;
extern unsigned int lbl_831C7C88;
extern unsigned int lbl_831C7DA4;
extern unsigned int lbl_831C7DA8;
extern unsigned int lbl_831C7DC8;
extern unsigned int lbl_831C7E34;
extern unsigned int lbl_831C7E38;
extern unsigned int lbl_831C7EC4;
extern unsigned int lbl_831C7EC8;
extern unsigned int lbl_831C7EE8;
extern unsigned int lbl_831C7F54;
extern unsigned int lbl_831C7F58;
extern unsigned int lbl_831C7FE4;
extern unsigned int lbl_831C7FE8;
extern unsigned int lbl_831C8008;
extern unsigned int lbl_831C8074;
extern unsigned int lbl_831C8078;
extern unsigned int lbl_831C8104;
extern unsigned int lbl_831C8108;
extern unsigned int lbl_831D34D8;
extern unsigned int lbl_831D34DC;
extern unsigned int lbl_831D34E0;
extern unsigned int lbl_831D34E4;
extern unsigned int lbl_831D34E8;
extern unsigned int lbl_831D34EC;
extern unsigned int lbl_831D34F0;
extern unsigned int lbl_831D34F4;


void fn_824303D8(void)

{
  float fVar1;
  float fVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int in_r0;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  double extraout_f1;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined1 auStack_70 [4];
  float fStack_6c;
  float fVar2;
  float fVar3;
  
  iVar8 = fn_82F6A548();
  *(float *)(*(int *)(iVar8 + 0x244) + 0x10) =
       (float)((double)*(float *)(*(int *)(iVar8 + 0x244) + 0x10) + extraout_f1);
  *(float *)(*(int *)(iVar8 + 0x244) + 0x6c) =
       (float)((double)*(float *)(*(int *)(iVar8 + 0x244) + 0x6c) + extraout_f1);
  if (*(int *)(*(int *)(iVar8 + 0x244) + 0xa4) != 0) {
    fn_82430D80(iVar8,10,1);
    *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0xa4) = 0;
    goto LAB_82430d6c;
  }
  iVar11 = *(int *)(iVar8 + 0x244);
  uVar5 = *(uint *)(iVar11 + 0x68);
  if (8 < uVar5) goto LAB_82430d6c;
  if (uVar5 == 1) {
LAB_824304b4:
    if (((((*(int *)(iVar11 + 8) == 5) || (*(int *)(iVar11 + 8) == 4)) &&
         ((iVar11 = *(int *)(iVar11 + 0xc), iVar11 == 10 || ((iVar11 == 0xd || (iVar11 == 0xf))))))
        && (puVar6 = *(uint **)(*(int *)(iVar8 + 0x240) + 0x94), puVar6 != (uint *)0x0)) &&
       (puVar6[7] != 0)) {
      lVar13 = 0;
      if ((ulonglong)*puVar6 != 0) {
        lVar13 = (ulonglong)*puVar6 - 1;
      }
      fn_8248F9F8(puVar6[7],lVar13,0);
    }
    iVar11 = *(int *)(iVar8 + 0x244);
    iVar16 = *(int *)(iVar11 + 0xc);
    if ((iVar16 == 0xc) || (iVar16 == 0xd)) {
LAB_82430498:
      uVar12 = 0xb;
      goto LAB_82430d60;
    }
    iVar17 = *(int *)(iVar11 + 8);
    if (iVar17 == 2) {
      iVar16 = *(int *)(iVar8 + 0x240);
      if (*(int *)(*(int *)(*(int *)(iVar16 + 0x174) + 0x5c) + 0x1d4) == -1) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(*(int *)(iVar16 + 0x174) + 0x5c);
        iVar17 = *(int *)(*(int *)(iVar17 + 0x1d4) * 4 + *(int *)(iVar17 + 0x1c4));
      }
      iVar10 = fn_82359558(iVar16,*(undefined4 *)(iVar8 + 0x10));
      if (**(float **)(iVar10 + 0x1a0) < **(float **)(iVar17 + 0x44)) goto LAB_82430d6c;
      if (*(int *)(iVar16 + 0x94) == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(*(int *)(iVar16 + 0x94) + 0x50);
      }
      if ((iVar16 != 0) && (*(int *)(iVar11 + 0xd8) == 0)) {
        puVar15 = &lbl_831C8008;
        fVar1 = lbl_831C8074;
        fVar2 = lbl_831C8108;
        fVar3 = lbl_831C8078;
        fVar4 = lbl_831C8104;
LAB_82430888:
        dVar19 = (double)(float)((double)fVar1 - (double)fVar4);
        dVar20 = (double)(float)((double)fVar3 - (double)fVar2);
        *(undefined **)(*(int *)(iVar8 + 0x244) + 0x98) = puVar15;
        dVar21 = (double)lbl_821CC160;
        *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0x18) =
             *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x244) + 0x98) + 0x68);
        *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0xd8) = 1;
        dVar22 = (double)fVar1;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar19 < dVar21) << 2) |
                      (uint)(NAN(dVar19) || NAN(dVar21)) << 2)) < 0.0) {
          dVar22 = (double)fVar4;
        }
        dVar19 = (double)fVar3;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar20 < dVar21) << 2) |
                      (uint)(NAN(dVar20) || NAN(dVar21)) << 2)) < 0.0) {
          dVar19 = (double)fVar2;
        }
        iVar11 = *(int *)(*(int *)(iVar8 + 0x240) + 0x94);
        if (iVar11 == 0) {
          bVar18 = false;
        }
        else {
          bVar18 = *(int *)(iVar11 + 0x1c) != 0;
        }
        if (!bVar18) {
          puVar9 = (undefined4 *)fn_8248F890(0x4c);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            uVar25 = *(undefined4 *)(iVar8 + 0x240);
            uVar26 = *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0x18);
            puVar9[1] = 0;
            puVar9[2] = 0;
            puVar9[3] = 0;
            puVar9[4] = 0;
            puVar9[5] = 0;
            puVar9[9] = (float)dVar22;
            puVar9[10] = (float)dVar19;
            puVar9[7] = 0xffffffff;
            puVar9[0xb] = uVar26;
            puVar9[8] = 0xffffffff;
            puVar9[0xc] = 0;
            *puVar9 = &lbl_821BECFC;
            puVar9[0xf] = 0;
            puVar9[0x12] = uVar25;
          }
          fn_82359070(*(undefined4 *)(iVar8 + 0x240),puVar9);
        }
        *(float *)(*(int *)(iVar8 + 0x244) + 0x6c) = (float)dVar21;
      }
LAB_824309ac:
      fVar4 = *(float *)(*(int *)(iVar8 + 0x244) + 0x6c);
      fVar3 = lbl_831D34F0;
      goto LAB_824309c0;
    }
    if (iVar17 != 3) {
      if ((3 < iVar17) && (iVar17 < 6)) {
        if (iVar16 == 0xf) {
          uVar12 = 6;
        }
        else {
          if (iVar16 != 0xe) goto LAB_82430d6c;
          if ((lbl_831D34E4 < *(float *)(iVar11 + 0x10)) || (*(int *)(iVar11 + 8) == 4)) {
            fn_82430D80(iVar8,4,0);
          }
          iVar11 = *(int *)(*(int *)(iVar8 + 0x240) + 0x94);
          if (iVar11 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(iVar11 + 0x50);
          }
          dVar22 = (double)lbl_821CC160;
          if ((iVar11 != 0) && (iVar11 = *(int *)(iVar8 + 0x244), *(char *)(iVar11 + 0xd0) == '\0'))
          {
            if (*(int *)(iVar11 + 8) == 5) {
              puVar15 = &lbl_831C7C18;
              fVar1 = lbl_831C7C84;
              fVar2 = lbl_831C7DA8;
              fVar3 = lbl_831C7C88;
              fVar4 = lbl_831C7DA4;
            }
            else {
              puVar15 = &lbl_831C7DC8;
              fVar1 = lbl_831C7E34;
              fVar2 = lbl_831C7EC8;
              fVar3 = lbl_831C7E38;
              fVar4 = lbl_831C7EC4;
            }
            dVar21 = (double)(float)((double)fVar1 - (double)fVar4);
            *(undefined **)(iVar11 + 0x98) = puVar15;
            dVar19 = (double)(float)((double)fVar3 - (double)fVar2);
            dVar20 = (double)fVar1;
            if (*(float *)(&lbl_821954D8 +
                          ((uint)(byte)((dVar21 < dVar22) << 2) |
                          (uint)(NAN(dVar21) || NAN(dVar22)) << 2)) < 0.0) {
              dVar20 = (double)fVar4;
            }
            dVar21 = (double)fVar3;
            if (*(float *)(&lbl_821954D8 +
                          ((uint)(byte)((dVar19 < dVar22) << 2) |
                          (uint)(NAN(dVar19) || NAN(dVar22)) << 2)) < 0.0) {
              dVar21 = (double)fVar2;
            }
            iVar11 = **(int **)(*(int *)(*(int *)(iVar8 + 0x244) + 0x38) + 4);
            uVar26 = in_vr77;
            uVar25 = in_register_000104d8;
            uVar24 = in_register_000104d4;
            uVar23 = in_register_000104d0;
            if (iVar11 != 0) {
              puVar9 = (undefined4 *)(iVar11 + 0x50U & 0xfffffff0);
              uVar26 = puVar9[3];
              uVar25 = puVar9[2];
              uVar24 = puVar9[1];
              uVar23 = *puVar9;
            }
            puVar9 = (undefined4 *)(*(int *)(iVar8 + 0x244) + 0xc0U & 0xfffffff0);
            *puVar9 = uVar23;
            puVar9[1] = uVar24;
            puVar9[2] = uVar25;
            puVar9[3] = uVar26;
            *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0x18) =
                 *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x244) + 0x98) + 0x68);
            *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0xd8) = 1;
            puVar9 = (undefined4 *)fn_8248F890(0x4c);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              uVar25 = *(undefined4 *)(iVar8 + 0x240);
              uVar26 = *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0x18);
              puVar9[1] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[9] = (float)dVar20;
              puVar9[10] = (float)dVar21;
              puVar9[7] = 0xffffffff;
              puVar9[0xb] = uVar26;
              puVar9[8] = 0xffffffff;
              puVar9[0xc] = 1;
              *puVar9 = &lbl_821BECFC;
              puVar9[0xf] = 0;
              puVar9[0x12] = uVar25;
            }
            fn_82359070(*(undefined4 *)(iVar8 + 0x240),puVar9);
            *(undefined1 *)(*(int *)(iVar8 + 0x244) + 0xd0) = 1;
          }
          iVar11 = **(int **)(*(int *)(*(int *)(iVar8 + 0x244) + 0x38) + 4);
          if (iVar11 == 0) {
            puVar9 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
            *puVar9 = in_register_000104d0;
            puVar9[1] = in_register_000104d4;
            puVar9[2] = in_register_000104d8;
            puVar9[3] = in_vr77;
          }
          else {
            puVar9 = (undefined4 *)(iVar11 + 0x50U & 0xfffffff0);
            uVar26 = puVar9[1];
            uVar25 = puVar9[2];
            uVar24 = puVar9[3];
            puVar7 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
            *puVar7 = *puVar9;
            puVar7[1] = uVar26;
            puVar7[2] = uVar25;
            puVar7[3] = uVar24;
          }
          (**(code **)(**(int **)(*(int *)(iVar8 + 0x244) + 0x38) + 0xc))(auStack_70);
          fVar4 = *(float *)(*(int *)(iVar8 + 0x244) + 0x10);
          if (((fVar4 <= lbl_831D34DC) && (fStack_7c <= lbl_82192A60)) &&
             ((dVar22 <= (double)fStack_6c ||
              ((lbl_831D34E0 <= fStack_7c || (fVar4 <= lbl_831D34D8)))))) goto LAB_82430d6c;
          uVar12 = 5;
        }
        goto LAB_82430d60;
      }
      iVar16 = *(int *)(iVar8 + 0x240);
      if (*(int *)(*(int *)(*(int *)(iVar16 + 0x174) + 0x5c) + 0x1d4) == -1) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(*(int *)(iVar16 + 0x174) + 0x5c);
        iVar17 = *(int *)(*(int *)(iVar17 + 0x1d4) * 4 + *(int *)(iVar17 + 0x1c4));
      }
      iVar10 = fn_82359558(iVar16,*(undefined4 *)(iVar8 + 0x10));
      if (**(float **)(iVar10 + 0x1a0) < **(float **)(iVar17 + 0x44)) goto LAB_82430d6c;
      if (*(int *)(iVar16 + 0x94) == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(*(int *)(iVar16 + 0x94) + 0x50);
      }
      if ((iVar16 != 0) && (*(int *)(iVar11 + 0xd8) == 0)) {
        puVar15 = &lbl_831C7AF8;
        fVar1 = lbl_831C7B64;
        fVar2 = lbl_831C7BF8;
        fVar3 = lbl_831C7B68;
        fVar4 = lbl_831C7BF4;
        goto LAB_82430888;
      }
      goto LAB_824309ac;
    }
    if (iVar16 != 0xe) goto LAB_82430d6c;
    iVar11 = *(int *)(*(int *)(iVar8 + 0x240) + 0x94);
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(iVar11 + 0x50);
    }
    if (iVar11 != 0) {
      dVar21 = (double)lbl_831C7FE4;
      dVar22 = (double)lbl_831C7F54;
      dVar19 = (double)lbl_831C7FE8;
      dVar20 = (double)lbl_831C7F58;
      iVar11 = fn_82359558(*(int *)(iVar8 + 0x240),*(undefined4 *)(iVar8 + 0x10));
      puVar9 = (undefined4 *)(iVar11 + 0x80U & 0xfffffff0);
      uVar26 = puVar9[1];
      uVar25 = puVar9[2];
      uVar24 = puVar9[3];
      puVar7 = (undefined4 *)(*(int *)(iVar8 + 0x244) + 0xc0U & 0xfffffff0);
      *puVar7 = *puVar9;
      puVar7[1] = uVar26;
      puVar7[2] = uVar25;
      puVar7[3] = uVar24;
      *(undefined **)(*(int *)(iVar8 + 0x244) + 0x98) = &lbl_831C7EE8;
      *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0x18) =
           *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x244) + 0x98) + 0x68);
      *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0xd8) = 1;
      puVar9 = (undefined4 *)fn_8248F890(0x4c);
      fVar4 = lbl_821CC160;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        uVar25 = *(undefined4 *)(iVar8 + 0x240);
        uVar26 = *(undefined4 *)(*(int *)(iVar8 + 0x244) + 0x18);
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[0xb] = uVar26;
        puVar9[7] = 0xffffffff;
        puVar9[8] = 0xffffffff;
        puVar9[0xc] = 1;
        *puVar9 = &lbl_821BECFC;
        puVar9[0xf] = 0;
        puVar9[0x12] = uVar25;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)(((float)(dVar22 - dVar21) < fVar4) << 2) |
                      (uint)(NAN((float)(dVar22 - dVar21)) || NAN(fVar4)) << 2)) < 0.0) {
          dVar22 = dVar21;
        }
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)(((float)(dVar20 - dVar19) < fVar4) << 2) |
                      (uint)(NAN((float)(dVar20 - dVar19)) || NAN(fVar4)) << 2)) < 0.0) {
          dVar20 = dVar19;
        }
        puVar9[9] = (float)dVar22;
        puVar9[10] = (float)dVar20;
      }
      fn_82359070(*(undefined4 *)(iVar8 + 0x240),puVar9);
    }
    uVar14 = 0;
    uVar12 = 2;
  }
  else {
    if (uVar5 == 2) {
      if (*(int *)(iVar11 + 0xc) == 0xf) {
        fn_82430D80(iVar8,3,0);
        iVar11 = *(int *)(*(int *)(iVar8 + 0x240) + 0x94);
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar11 + 0x50);
        }
        if (iVar11 != 0) {
          iVar11 = fn_82359558(*(int *)(iVar8 + 0x240),*(undefined4 *)(iVar8 + 0x10));
          puVar9 = (undefined4 *)(iVar11 + 0x80U & 0xfffffff0);
          uVar26 = puVar9[1];
          uVar25 = puVar9[2];
          uVar24 = puVar9[3];
          puVar7 = (undefined4 *)(*(int *)(iVar8 + 0x244) + 0xb0U & 0xfffffff0);
          *puVar7 = *puVar9;
          puVar7[1] = uVar26;
          puVar7[2] = uVar25;
          puVar7[3] = uVar24;
          puVar6 = *(uint **)(*(int *)(iVar8 + 0x240) + 0x94);
          if ((puVar6 != (uint *)0x0) && (puVar6[7] != 0)) {
            lVar13 = 0;
            if ((ulonglong)*puVar6 != 0) {
              lVar13 = (ulonglong)*puVar6 - 1;
            }
            fn_8248F9F8(puVar6[7],lVar13,0);
          }
        }
      }
      goto LAB_82430d6c;
    }
    if (uVar5 != 3) {
      if (uVar5 == 4) goto LAB_824304b4;
      if (uVar5 == 5) {
        iVar11 = *(int *)(iVar11 + 0xc);
        if (((iVar11 != 10) && (iVar11 != 0xd)) && (iVar11 != 0xf)) goto LAB_82430d6c;
        puVar6 = *(uint **)(*(int *)(iVar8 + 0x240) + 0x94);
        if ((puVar6 != (uint *)0x0) && (puVar6[7] != 0)) {
          lVar13 = 0;
          if ((ulonglong)*puVar6 != 0) {
            lVar13 = (ulonglong)*puVar6 - 1;
          }
          fn_8248F9F8(puVar6[7],lVar13,0);
        }
        uVar14 = 0;
        uVar12 = 6;
        goto LAB_82430d64;
      }
      if (uVar5 == 6) {
        fVar4 = *(float *)(iVar11 + 0x6c);
        fVar3 = lbl_831D34EC;
      }
      else {
        if ((uVar5 != 7) && (uVar5 == 0)) {
          if ((*(int *)(iVar11 + 0xc) != 0xc) || (*(float *)(iVar11 + 0x10) <= lbl_831D34E8)) {
            if (*(int *)(iVar11 + 0xc) != 9) goto LAB_82430d6c;
            uVar14 = 0;
            uVar12 = 1;
            goto LAB_82430d64;
          }
          goto LAB_82430498;
        }
        fVar4 = *(float *)(iVar11 + 0x6c);
        fVar3 = lbl_831D34F4;
      }
      if (fVar4 <= fVar3) goto LAB_82430d6c;
      iVar11 = *(int *)(*(int *)(iVar8 + 0x240) + 0x174);
      if (*(int *)(*(int *)(iVar11 + 0x5c) + 0x1d4) == -1) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(iVar11 + 0x5c);
        iVar11 = *(int *)(*(int *)(iVar11 + 0x1d4) * 4 + *(int *)(iVar11 + 0x1c4));
      }
      if (*(int *)(*(int *)(iVar11 + 0x40) + 0x1a4) == 0) goto LAB_82430d6c;
      uVar12 = 9;
      goto LAB_82430d60;
    }
    fVar4 = *(float *)(iVar11 + 0x10);
    fVar3 = lbl_831D34E8;
LAB_824309c0:
    if (fVar4 <= fVar3) goto LAB_82430d6c;
    uVar12 = 7;
LAB_82430d60:
    uVar14 = 1;
  }
LAB_82430d64:
  fn_82430D80(iVar8,uVar12,uVar14);
LAB_82430d6c:
  fn_82F6A594();
  return;
}

