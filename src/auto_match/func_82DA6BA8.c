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
extern unsigned int *auStack_11f;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_d4;
extern unsigned int fStack_e4;
extern unsigned int fStack_f4;
extern int fn_822E83E0();
extern int fn_8240DE10();
extern int fn_8240DEC0();
extern int fn_82563800();
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE4118();
extern int fn_82CE4338();
extern int fn_82CE5410();
extern int fn_82D80F08();
extern int fn_82D81078();
extern int fn_82D81240();
extern int fn_82D82E28();
extern int fn_82D83B68();
extern int fn_82D844A8();
extern int fn_82D84E70();
extern int fn_82D85148();
extern int fn_82D856F0();
extern int fn_82D85E48();
extern int fn_82D86288();
extern int fn_82D86660();
extern int fn_82D88440();
extern int fn_82D888D0();
extern int fn_82D88EF8();
extern int fn_82D890C8();
extern int fn_82D891F0();
extern int fn_82D89BD8();
extern int fn_82D89C68();
extern int fn_82D8B6C8();
extern int fn_82D8BA38();
extern int fn_82D8BC30();
extern int fn_82D909F0();
extern int fn_82D90CF0();
extern int fn_82D9A730();
extern int fn_82DA7740();
extern int fn_82DC3180();
extern unsigned int iStack_114;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_110;
extern unsigned int uStack_120;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82DA6BA8(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  longlong lVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 uStack_120;
  undefined1 auStack_11f [7];
  int *piStack_118;
  int iStack_114;
  uint uStack_110;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  float fStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  float fStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  int iStack_b8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  fn_82CE3F80();
  iVar9 = *param_1;
  uVar2 = param_1[1];
  uVar15 = (ulonglong)uVar2;
  iVar3 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  *(int *)(param_1[3] + 0xa4) = *(int *)(param_1[3] + 0xa4) + 1;
  uVar13 = param_1[5];
  if (uVar13 != 0) {
    if (1 < (int)uVar13) {
      fn_82DA7740(param_1[4],0,(ulonglong)uVar13 - 1,0xffffffff82da6308);
    }
    iVar8 = param_1[5];
    while (iVar7 = iStack_b8, iVar6 = iStack_bc, iVar8 != 0) {
      pfVar10 = &fStack_c4;
      lVar19 = 5;
      pfVar11 = (float *)(param_1[5] * 0x14 + param_1[4] + -0x18);
      do {
        pfVar11 = pfVar11 + 1;
        pfVar10 = pfVar10 + 1;
        *pfVar10 = *pfVar11;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      param_1[5] = param_1[5] + -1;
      if ((((*(int *)(iStack_bc + 8) == param_1[3]) && (*(int *)(iStack_b8 + 8) == param_1[3])) &&
          (*(char *)(iStack_bc + 0xe8) != '\x05')) &&
         ((*(char *)(iStack_b8 + 0xe8) != '\x05' &&
          (*(int *)(iStack_bc + 0xcc) != *(int *)(iStack_b8 + 0xcc))))) {
        fn_82D909F0(*(undefined4 *)(iStack_bc + 8),iStack_bc,iStack_b8);
      }
      fn_82CE4118(iVar6);
      fn_82CE4118(iVar7);
      iVar8 = param_1[5];
    }
  }
  if (0 < (int)uVar2) {
    puVar18 = (uint *)(iVar9 + 4);
    dVar20 = (double)lbl_821AAD20;
    do {
      uVar13 = *(byte *)(puVar18 + -1) - 1;
      if (0x23 < uVar13) goto switchD_82da6d20_caseD_c;
      iVar8 = *(int *)(uVar13 * 4 + -0x7d2592dc);
      switch(*(byte *)(puVar18 + -1)) {
      case 1:
        if (*(int *)(*puVar18 + 8) == 0) {
          fn_82D81078(param_1[3],*puVar18,puVar18[1]);
        }
        break;
      case 2:
        if (*(int *)(*puVar18 + 8) == param_1[3]) {
          fn_82D81240(auStack_11f);
        }
        break;
      case 3:
        if (*(int *)(*puVar18 + 8) == param_1[3]) {
          fn_82D90CF0();
        }
        break;
      case 4:
        fn_82D8B6C8(*puVar18,*(undefined1 *)(puVar18 + 1),*(undefined1 *)((int)puVar18 + 5),
                          *(undefined1 *)((int)puVar18 + 6));
        break;
      case 5:
        (**(code **)(*(int *)*puVar18 + 0xc))((int *)*puVar18,puVar18[1]);
        fn_82CE4118(*puVar18);
        uVar13 = puVar18[1];
        goto LAB_82da7500;
      case 6:
        fn_82D856F0(param_1[3],*puVar18,*(undefined2 *)(puVar18 + 1),
                          *(undefined1 *)((int)puVar18 + 6));
        fn_82CE4338(*puVar18,*(undefined2 *)(puVar18 + 1),4);
        uVar1 = *(ushort *)(puVar18 + 1);
        uVar13 = *puVar18;
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))
                  (*(int **)(iVar8 + 0x10),uVar13,(ulonglong)uVar1 << 2);
        goto switchD_82da6d20_caseD_c;
      case 7:
        fn_82D85E48(param_1[3],*puVar18,*(undefined2 *)(puVar18 + 1));
        fn_82CE4338(*puVar18,*(undefined2 *)(puVar18 + 1),4);
        uVar1 = *(ushort *)(puVar18 + 1);
        uVar13 = *puVar18;
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))
                  (*(int **)(iVar8 + 0x10),uVar13,(ulonglong)uVar1 << 2);
        goto switchD_82da6d20_caseD_c;
      case 8:
        uVar13 = *puVar18;
        if (((*(int *)(uVar13 + 8) == 0) && (*(int *)(*(int *)(uVar13 + 0x14) + 8) == param_1[3]))
           && (*(int *)(*(int *)(uVar13 + 0x18) + 8) == param_1[3])) {
          fn_82D88EF8();
        }
        break;
      case 9:
        if (*(int *)(*puVar18 + 8) != 0) {
          fn_82D890C8(&uStack_120,param_1[3]);
        }
        break;
      case 10:
        if (*(int *)(*puVar18 + 8) == 0) {
          piStack_118 = (int *)0x0;
          uStack_110 = 0x80000000;
          bVar5 = true;
          iStack_114 = 0;
          (**(code **)(*(int *)*puVar18 + 0x10))((int *)*puVar18,&piStack_118);
          iVar8 = 0;
          if (0 < iStack_114) {
            piVar12 = piStack_118;
            do {
              if (*(int *)(*piVar12 + 8) != param_1[3]) {
                bVar5 = false;
                break;
              }
              iVar8 = iVar8 + 1;
              piVar12 = piVar12 + 1;
            } while (iVar8 < iStack_114);
          }
          if (bVar5) {
            fn_82D888D0(param_1[3],*puVar18);
          }
          iVar8 = fn_82CE5410();
          iStack_114 = 0;
          if ((uStack_110 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                      (*(int **)(iVar8 + 0x10),piStack_118,uStack_110 & 0x3fffffff,4);
          }
          piStack_118 = (int *)0x0;
          uStack_110 = 0x80000000;
        }
        uVar13 = *puVar18;
        goto LAB_82da7500;
      case 0xb:
        if (*(int *)(*puVar18 + 0xc) != 0) {
          fn_82D891F0(param_1[3]);
        }
        break;
      default:
        goto switchD_82da6d20_caseD_c;
      case 0xd:
        if (*(int *)(*puVar18 + 8) == 0) {
          fn_82D83B68(param_1[3]);
        }
        break;
      case 0xe:
        if (*(int *)(*puVar18 + 8) == param_1[3]) {
          fn_82D82E28();
        }
        break;
      case 0xf:
        fn_82D86288(param_1[3],*puVar18,*(undefined2 *)(puVar18 + 1));
        fn_82CE4338(*puVar18,*(undefined2 *)(puVar18 + 1),4);
        uVar1 = *(ushort *)(puVar18 + 1);
        uVar13 = *puVar18;
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))
                  (*(int **)(iVar8 + 0x10),uVar13,(ulonglong)uVar1 << 2);
        goto switchD_82da6d20_caseD_c;
      case 0x10:
        fn_82D86660(param_1[3],*puVar18,*(undefined2 *)(puVar18 + 1));
        fn_82CE4338(*puVar18,*(undefined2 *)(puVar18 + 1),4);
        uVar1 = *(ushort *)(puVar18 + 1);
        uVar13 = *puVar18;
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))
                  (*(int **)(iVar8 + 0x10),uVar13,(ulonglong)uVar1 << 2);
        goto switchD_82da6d20_caseD_c;
      case 0x11:
        if (*(int *)(*puVar18 + 8) == param_1[3]) {
          fn_82D9A730(*puVar18,puVar18[1]);
        }
        fn_82CE4118(*puVar18);
        uVar13 = puVar18[1];
        if (uVar13 != 0) {
          iVar8 = fn_82CE5410();
          (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),uVar13,0x20);
        }
        goto switchD_82da6d20_caseD_c;
      case 0x12:
        if (*(int *)(*puVar18 + 8) == param_1[3]) {
          fn_82D85148(param_1[3],*puVar18,*(undefined1 *)(puVar18 + 1),
                            *(undefined1 *)((int)puVar18 + 5));
        }
        break;
      case 0x13:
        if ((*(int *)(*puVar18 + 8) == param_1[3]) && (*(int *)(puVar18[1] + 8) == param_1[3])) {
          fn_82D80F08();
        }
        fn_82CE4118(*puVar18);
        uVar13 = puVar18[1];
        goto LAB_82da7500;
      case 0x14:
        if (*(int *)(*puVar18 + 8) == param_1[3]) {
          fn_82D84E70(param_1[3],*puVar18,*(undefined1 *)(puVar18 + 1));
        }
        break;
      case 0x15:
        fn_82D88440(param_1[3],*(undefined1 *)((int)puVar18 + -3),
                          *(undefined1 *)((int)puVar18 + -2));
        goto switchD_82da6d20_caseD_c;
      case 0x16:
        fn_82D8BA38(*puVar18);
        break;
      case 0x17:
        uVar13 = (uint)*(ushort *)(puVar18 + 1);
        piVar12 = (int *)*puVar18 + uVar13;
        piVar14 = piVar12 + -1;
        if ((int *)*puVar18 <= piVar14) {
          do {
            iVar8 = *piVar14;
            if (*(int *)(iVar8 + 8) != param_1[3]) {
              uVar13 = uVar13 - 1;
              *piVar14 = piVar12[-1];
              piVar12 = piVar12 + -1;
              *piVar12 = iVar8;
            }
            piVar14 = piVar14 + -1;
          } while ((int *)*puVar18 <= piVar14);
        }
        if (uVar13 != 0) {
          piVar12 = *(int **)(param_1[3] + 8);
          (**(code **)(*piVar12 + 0x30))
                    (piVar12,*puVar18,uVar13,param_1[3],*(undefined1 *)((int)puVar18 + 6));
        }
        puVar17 = (undefined4 *)*puVar18;
        puVar16 = puVar17 + *(ushort *)(puVar18 + 1);
        for (; puVar17 < puVar16; puVar17 = puVar17 + 1) {
          fn_82CE4118(*puVar17);
        }
        uVar1 = *(ushort *)(puVar18 + 1);
        uVar13 = *puVar18;
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))
                  (*(int **)(iVar8 + 0x10),uVar13,(ulonglong)uVar1 << 2);
        goto switchD_82da6d20_caseD_c;
      case 0x18:
        fn_82D8BC30(*puVar18,(ulonglong)puVar18[1],(ulonglong)puVar18[1] + 0x10);
        uVar13 = puVar18[1];
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),uVar13,0x20);
        break;
      case 0x19:
        uStack_ec = puVar18[2];
        uStack_f0 = puVar18[1];
        uStack_e8 = puVar18[3];
        uVar13 = *puVar18;
        fStack_e4 = (float)dVar20;
        puVar17 = (undefined4 *)((int)&uStack_f0 + iVar8 & 0xfffffff0);
        uVar21 = puVar17[1];
        uVar22 = puVar17[2];
        uVar23 = puVar17[3];
        puVar16 = (undefined4 *)((uint)(auStack_a0 + iVar8) & 0xfffffff0);
        *puVar16 = *puVar17;
        puVar16[1] = uVar21;
        puVar16[2] = uVar22;
        puVar16[3] = uVar23;
        fn_822E83E0(uVar13,auStack_a0);
        break;
      case 0x1a:
        uStack_d0 = puVar18[1];
        uStack_cc = puVar18[2];
        uVar13 = *puVar18;
        fStack_c4 = (float)dVar20;
        uStack_c8 = puVar18[3];
        puVar17 = (undefined4 *)((int)&uStack_d0 + iVar8 & 0xfffffff0);
        uVar21 = puVar17[1];
        uVar22 = puVar17[2];
        uVar23 = puVar17[3];
        puVar16 = (undefined4 *)((uint)(auStack_80 + iVar8) & 0xfffffff0);
        *puVar16 = *puVar17;
        puVar16[1] = uVar21;
        puVar16[2] = uVar22;
        puVar16[3] = uVar23;
        fn_8240DEC0(uVar13,auStack_80);
        break;
      case 0x1b:
        uStack_100 = puVar18[1];
        uStack_fc = puVar18[2];
        uStack_f8 = puVar18[3];
        uVar13 = *puVar18;
        fStack_f4 = (float)dVar20;
        puVar17 = (undefined4 *)((int)&uStack_100 + iVar8 & 0xfffffff0);
        uVar21 = puVar17[1];
        uVar22 = puVar17[2];
        uVar23 = puVar17[3];
        puVar16 = (undefined4 *)((uint)(auStack_90 + iVar8) & 0xfffffff0);
        *puVar16 = *puVar17;
        puVar16[1] = uVar21;
        puVar16[2] = uVar22;
        puVar16[3] = uVar23;
        fn_82563800(uVar13,auStack_90);
        break;
      case 0x1c:
        uVar13 = *puVar18;
        uVar4 = puVar18[1];
        fn_82D89BD8(uVar13);
        (**(code **)(*(int *)(uVar13 + 0xe0) + 0x50))
                  (uVar13 + 0xe0,(ulonglong)uVar4 + 0x10,(ulonglong)uVar4);
        uVar13 = puVar18[1];
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),uVar13,0x20);
        break;
      case 0x1d:
        uStack_d8 = puVar18[3];
        fStack_d4 = (float)dVar20;
        uStack_e0 = puVar18[1];
        uVar13 = *puVar18;
        uStack_dc = puVar18[2];
        puVar17 = (undefined4 *)((int)&uStack_e0 + iVar8 & 0xfffffff0);
        uVar21 = puVar17[1];
        uVar22 = puVar17[2];
        uVar23 = puVar17[3];
        puVar16 = (undefined4 *)((uint)(auStack_c0 + iVar8) & 0xfffffff0);
        *puVar16 = *puVar17;
        puVar16[1] = uVar21;
        puVar16[2] = uVar22;
        puVar16[3] = uVar23;
        fn_8240DE10(uVar13,auStack_c0);
        break;
      case 0x20:
        fn_82D844A8(param_1[3],*puVar18);
        uVar13 = *puVar18;
        iVar8 = fn_82CE5410();
        (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),uVar13,0x20);
        goto switchD_82da6d20_caseD_c;
      case 0x21:
        fn_82D89BD8(*puVar18);
        break;
      case 0x22:
        if (*(int *)(*puVar18 + 8) == param_1[3]) {
          fn_82D89C68();
        }
        break;
      case 0x23:
        fn_82DC3180(*puVar18,puVar18[1],*(undefined1 *)(puVar18 + 2));
        fn_82CE4118(*puVar18);
        uVar13 = puVar18[1];
        goto LAB_82da7500;
      case 0x24:
        (**(code **)(*(int *)*puVar18 + 0xc))((int *)*puVar18,puVar18[1]);
      }
      uVar13 = *puVar18;
LAB_82da7500:
      fn_82CE4118(uVar13);
switchD_82da6d20_caseD_c:
      if (param_1[1] != 0) {
        fn_82DA6BA8(param_1);
      }
      uVar15 = uVar15 - 1;
      puVar18 = puVar18 + 5;
    } while (uVar15 != 0);
  }
  uVar13 = param_1[2];
  iVar8 = *param_1;
  param_1[1] = uVar2;
  param_1[2] = iVar3;
  *param_1 = iVar9;
  param_1[1] = 0;
  *(int *)(param_1[3] + 0xa4) = *(int *)(param_1[3] + 0xa4) + -1;
  fn_82CE3FE8();
  iVar9 = fn_82CE5410();
  if ((uVar13 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar9 + 0x10) + 0x10))
              (*(int **)(iVar9 + 0x10),iVar8,uVar13 & 0x3fffffff,0x14);
  }
  return;
}

