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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_e0 ((*(U64*)&uStack_e0))
extern unsigned int *auStack_100;
extern unsigned int *auStack_118;
extern int fn_829F4D80();
extern int fn_829F5000();
extern int fn_829FCF20();
extern int fn_82A01598();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057560;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_82079FD0;
extern unsigned int lbl_82079FD4;
extern unsigned int lbl_82079FD8;
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_83218C34;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_829F5548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,longlong param_6,ulonglong param_7,longlong param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  uint *puVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 in_vs32 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs63 [16];
  float in_register_00010320;
  float in_register_00010324;
  float in_register_00010328;
  float in_vr50;
  float in_register_00010340;
  float in_register_00010344;
  float in_register_00010348;
  float in_vr52;
  float in_register_00010360;
  float in_register_00010364;
  float in_register_00010368;
  float in_vr54;
  float in_register_00010380;
  float in_register_00010384;
  float in_register_00010388;
  float in_vr56;
  float in_register_000103a0;
  float in_register_000103a4;
  float in_register_000103a8;
  float in_vr58;
  float in_register_000103c0;
  float in_register_000103c4;
  float in_register_000103c8;
  float in_vr60;
  float in_register_000103e0;
  undefined1 auVar26 [16];
  uint in_stack_00000054;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  int in_stack_00000074;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float afStack_128 [4];
  undefined4 auStack_118 [6];
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  undefined4 uStack_dc;

  iVar2 = fn_82F6A53C();
  auStack_118[0] = 0;
  afStack_128[0] = 1.0;
  auStack_118[1] = 0;
  afStack_128[1] = 1.0;
  auStack_118[2] = 0;
  afStack_128[2] = 1.0;
  uStack_f8 = CONCAT44((int)param_3,param_4);
  uStack_f0 = CONCAT44((int)param_5,(int)param_6);
  uStack_e8 = CONCAT44((int)param_7,(int)param_8);
  _uStack_e0 = CONCAT44(in_stack_00000054,in_stack_00000064);
  fn_829F5000(0,auStack_100,0x28);
  uVar13 = 0;
  dVar19 = (double)lbl_82002AE0;
  do {
    iVar5 = (uVar13 + 0x18) * 4;
    if (*(int *)(iVar5 + iVar2) == 2) {
      if ((param_7 & 0xffffffff) != 0) {
        iVar3 = (uVar13 + 0x1e) * 4;
        lVar6 = param_6;
        uVar17 = param_7;
        do {
          if (*(int *)lVar6 == *(int *)(iVar3 + iVar2)) {
            *(undefined4 *)(iVar5 + iVar2) = 0;
            *(undefined4 *)(iVar3 + iVar2) = 0;
          }
          lVar6 = lVar6 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      if (in_stack_00000054 != 0) {
        iVar3 = (uVar13 + 0x1e) * 4;
        uVar17 = (ulonglong)in_stack_00000054;
        lVar6 = param_8;
        do {
          if (*(int *)lVar6 == *(int *)(iVar3 + iVar2)) {
            uVar15 = 0;
            *(undefined4 *)(iVar5 + iVar2) = 1;
            piVar16 = (int *)(iVar2 + 0x90);
            do {
              if (uVar13 + 1 == *piVar16) {
                *piVar16 = 0;
                fn_829F4D80(dVar19,uVar15,*(undefined4 *)(iVar3 + iVar2));
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 1;
            } while ((uVar15 & 0xffffffff) < 3);
          }
          uVar17 = uVar17 - 1;
          lVar6 = lVar6 + 4;
        } while (uVar17 != 0);
      }
    }
    if (*(int *)(iVar5 + iVar2) == 0) {{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar26, &_vt0, 16); }
      piVar16 = (int *)(iVar2 + 0x90);
      lVar6 = 3;
      memcpy((void *)((const void *)(uVar13 * 0x10 + iVar2 & 0xfffffff0)), auVar26, 16);
      do {
        if (uVar13 + 1 == *piVar16) {
          *piVar16 = 0;
        }
        piVar16 = piVar16 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 6);
  puVar10 = (uint *)(iVar2 + 0x90);
  lVar6 = 2;
  puVar4 = puVar10;
  do {
    uVar13 = *puVar4;
    if (uVar13 != 0) {
      uVar7 = 0;
      lVar8 = param_5;
      do {
        if (*(int *)lVar8 == *(int *)((uVar13 + 0x1d) * 4 + iVar2)) goto LAB_829f5780;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 4;
      } while (uVar7 < 2);
      if (*(int *)((uVar13 + 0x17) * 4 + iVar2) != 2) {
        *puVar4 = 0;
      }
    }
LAB_829f5780:
    puVar4 = puVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = 2;
  do {
    iVar5 = *(int *)param_5;
    if (iVar5 != 0) {
      uVar13 = 0;
      puVar4 = puVar10;
      do {
        if ((*puVar4 != 0) && (iVar5 == *(int *)((*puVar4 + 0x1d) * 4 + iVar2))) goto LAB_829f586c;
        uVar13 = uVar13 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar13 < 2);
      iVar5 = 1;
      piVar16 = (int *)(iVar2 + 0x78);
      lVar8 = 6;
LAB_829f57e4:
      if (*(int *)param_5 == *piVar16) {
        uVar13 = 0;
        puVar4 = puVar10;
        do {
          if (*puVar4 == 0) goto LAB_829f5858;
          uVar13 = uVar13 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar13 < 2);
        uVar13 = 0;
        puVar4 = puVar10;
        do {
          if (*(int *)((*puVar4 + 0x17) * 4 + iVar2) == 2) goto LAB_829f5858;
          uVar13 = uVar13 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar13 < 2);
      }
      goto LAB_829f5860;
    }
LAB_829f586c:
    lVar6 = lVar6 + -1;
    param_5 = param_5 + 4;
  } while (lVar6 != 0);
  piVar9 = (int *)(iVar2 + 0x60);
  uStack_130 = 0;
  uStack_12c = 0;
  fn_82A01598(*(undefined4 *)(iVar2 + 0x9c),param_2,param_3,piVar9,puVar10,param_4,&uStack_130
                    ,&uStack_12c);
  uVar17 = 0;
  pfVar12 = (float *)(in_stack_00000074 + 0xa0);
  pfVar11 = (float *)(iVar2 + 8);
  dVar24 = (double)lbl_821AAD20;
  piVar16 = piVar9;
  do {
    if (*piVar16 == 0) {
      if ((double)*pfVar11 != dVar24) {
        *piVar16 = 2;
        goto LAB_829f5908;
      }
LAB_829f5914:
      *piVar16 = 0;
      piVar16[6] = 0;
      lVar6 = 3;
      puVar4 = puVar10;
      do {
        if ((uVar17 + 1 & 0xffffffff) == (ulonglong)*puVar4) {
          *puVar4 = 0;
        }
        puVar4 = puVar4 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    else {
LAB_829f5908:
      if ((double)*pfVar11 == dVar24) goto LAB_829f5914;
    }
    if (*piVar16 == 1) {
      dVar18 = (double)fn_829FCF20(*(undefined4 *)(iVar2 + 0x9c),uVar17);
      *pfVar12 = (float)dVar18;
    }
    else {
      *pfVar12 = (float)dVar24;
    }
    uVar17 = uVar17 + 1;
    piVar16 = piVar16 + 1;
    pfVar12 = pfVar12 + 1;
    pfVar11 = pfVar11 + 4;
    if (5 < (uVar17 & 0xffffffff)) {
      dVar23 = (double)lbl_82057B54;
      lVar6 = 0;
      dVar18 = (double)lbl_82079FD8;
      puVar14 = (undefined4 *)(in_stack_00000074 + 0xc4);
      dVar21 = (double)lbl_82079FD4;
      uVar13 = 0;
      dVar22 = (double)lbl_82057560;
      dVar24 = (double)lbl_82079FD0;
      do {
        uVar7 = *puVar10;
        puVar14[3] = uVar7;
        if (uVar7 == 0) {
          *puVar14 = 0;
          puVar14[-3] = 0;
        }
        else {
          iVar5 = (uVar7 + 0x1d) * 4;
          iVar3 = (uVar7 + 0x17) * 4;
          *puVar14 = *(undefined4 *)(iVar5 + iVar2);
          puVar14[-3] = *(undefined4 *)(iVar3 + iVar2);
          if (*(int *)(iVar3 + iVar2) == 2) {
            iVar3 = 0;
            piVar16 = (int *)(iVar2 + 0x78);
            do {
              dVar20 = dVar24;
              if (*piVar16 == *(int *)(iVar5 + iVar2)) {
                dVar24 = (double)fn_829FCF20(*(undefined4 *)(iVar2 + 0x9c));
                break;
              }
              iVar3 = iVar3 + 1;
              piVar16 = piVar16 + 1;
            } while (iVar3 < 6);
            dVar25 = (double)(float)((double)(float)((double)(float)(dVar24 / dVar22) * dVar21) +
                                    dVar18);
            dVar24 = dVar23;
            if ((dVar23 < dVar25) && (dVar24 = dVar25, dVar19 <= dVar25)) {
              dVar24 = dVar19;
            }
            fn_829F4D80(dVar24,lVar6,*(undefined4 *)(iVar5 + iVar2));
            uVar1 = *(undefined4 *)(iVar5 + iVar2);
            *(float *)((int)afStack_128 + uVar13) = (float)dVar24;
            *(undefined4 *)((int)auStack_118 + uVar13) = uVar1;
            dVar24 = dVar20;
          }
        }
        uVar13 = uVar13 + 4;
        lVar6 = lVar6 + 1;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
        if (0xb < uVar13) {
          *(undefined8 *)(in_stack_00000074 + 0x70) = *(undefined8 *)piVar9;
          *(undefined8 *)(in_stack_00000074 + 0x78) = *(undefined8 *)(iVar2 + 0x68);
          *(undefined8 *)(in_stack_00000074 + 0x80) = *(undefined8 *)(iVar2 + 0x70);
          *(undefined8 *)(in_stack_00000074 + 0x88) = *(undefined8 *)(iVar2 + 0x78);
          *(undefined8 *)(in_stack_00000074 + 0x90) = *(undefined8 *)(iVar2 + 0x80);
          *(undefined8 *)(in_stack_00000074 + 0x98) = *(undefined8 *)(iVar2 + 0x88);
          altv300_21(in_vs32,in_vs37);
          altv207_13(in_vs32,in_vs63);
          pfVar11 = (float *)(in_stack_00000074 + 0x10U & 0xfffffff0);
          *pfVar11 = in_register_000103c0 * in_register_000103e0;
          pfVar11[1] = in_register_000103c4 * in_register_000103e0;
          pfVar11[2] = in_register_000103c8 * in_register_000103e0;
          pfVar11[3] = in_vr60 * in_register_000103e0;
          altv207_13(in_vs63,in_vs38);
          pfVar11 = (float *)(in_stack_00000074 + 0x20U & 0xfffffff0);
          *pfVar11 = in_register_000103a0 * in_register_000103e0;
          pfVar11[1] = in_register_000103a4 * in_register_000103e0;
          pfVar11[2] = in_register_000103a8 * in_register_000103e0;
          pfVar11[3] = in_vr58 * in_register_000103e0;
          altv207_13(in_vs63,in_vs39);
          pfVar11 = (float *)(in_stack_00000074 + 0x30U & 0xfffffff0);
          *pfVar11 = in_register_00010380 * in_register_000103e0;
          pfVar11[1] = in_register_00010384 * in_register_000103e0;
          pfVar11[2] = in_register_00010388 * in_register_000103e0;
          pfVar11[3] = in_vr56 * in_register_000103e0;
          altv207_13(in_vs63,in_vs40);
          pfVar11 = (float *)(in_stack_00000074 + 0x40U & 0xfffffff0);
          *pfVar11 = in_register_00010360 * in_register_000103e0;
          pfVar11[1] = in_register_00010364 * in_register_000103e0;
          pfVar11[2] = in_register_00010368 * in_register_000103e0;
          pfVar11[3] = in_vr54 * in_register_000103e0;
          altv207_13(in_vs63,in_vs41);
          pfVar11 = (float *)(in_stack_00000074 + 0x50U & 0xfffffff0);
          *pfVar11 = in_register_00010340 * in_register_000103e0;
          pfVar11[1] = in_register_00010344 * in_register_000103e0;
          pfVar11[2] = in_register_00010348 * in_register_000103e0;
          pfVar11[3] = in_vr52 * in_register_000103e0;
          altv207_13(in_vs63,in_vs42);
          pfVar11 = (float *)(in_stack_00000074 + 0x60U & 0xfffffff0);
          *pfVar11 = in_register_00010320 * in_register_000103e0;
          pfVar11[1] = in_register_00010324 * in_register_000103e0;
          pfVar11[2] = in_register_00010328 * in_register_000103e0;
          pfVar11[3] = in_vr50 * in_register_000103e0;
          if (lbl_83218C34 != (int *)0x0) {
            (**(code **)(*lbl_83218C34 + 0x20))(lbl_83218C34,uStack_130,0x50,0x3c);
            (**(code **)(*lbl_83218C34 + 0x1c))(lbl_83218C34,uStack_12c,0x50,0x3c);
          }
          uStack_f8 = CONCAT44(in_stack_00000064,in_stack_0000006c);
          uStack_f0 = CONCAT44(in_stack_00000074,afStack_128);
          uStack_e8 = CONCAT44(auStack_118,(int)uStack_e8);
          fn_829F5000(1,auStack_100,0x1c);
          fn_82F6A588(0);
          return;
        }
      } while( true );
    }
  } while( true );
LAB_829f5858:
  *(int *)((uVar13 + 0x24) * 4 + iVar2) = iVar5;
LAB_829f5860:
  piVar16 = piVar16 + 1;
  iVar5 = iVar5 + 1;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) goto LAB_829f586c;
  goto LAB_829f57e4;
}
