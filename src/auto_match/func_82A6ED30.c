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
extern unsigned int *auStack_a8;
extern int fn_82A54648();
extern int fn_82A56AF8();
extern int fn_82A69FD8();
extern int fn_82A6BAE0();
extern int fn_82A6D090();
extern int fn_82A6D200();
extern int fn_82A6E4F0();
extern int fn_82A72970();
extern int fn_82A72B38();
extern int fn_82A72CA0();
extern int fn_82A73898();
extern int fn_82A73A70();
extern int fn_82A741F0();
extern int fn_82A74350();
extern int fn_82A74938();
extern int fn_82A75588();
extern int fn_82A75DF8();
extern int fn_82C1AC88();
extern int fn_82F691F0();
extern unsigned int iStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82A6ED30(int *param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  short sVar12;
  short sVar13;
  ulonglong uVar11;
  uint uVar16;
  int *piVar17;
  short *psVar18;
  short sVar22;
  int iVar19;
  longlong lVar14;
  ulonglong uVar15;
  int iVar20;
  int iVar21;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  undefined4 *puVar27;
  double dVar28;
  uint uStack_b0;
  int iStack_ac;
  undefined4 auStack_a8 [42];
  
  iVar4 = *param_1;
  uVar24 = 0;
  uVar23 = (ulonglong)*(uint *)(iVar4 + 0x100);
  if (param_1[10] != 10) {
    do {
      switch(param_1[10]) {
      case 0:
        if (*(int *)(iVar4 + 0x3c) < 3) {
          if (*(int *)(iVar4 + 0xd8) != 0) {
            uVar16 = 0;
            uVar7 = *(uint *)(iVar4 + 0xe4);
            while (1 < uVar7) {
              uVar16 = uVar16 + 1;
              uVar7 = *(uint *)(iVar4 + 0xe4) >> (uVar16 & 0x3f);
            }
            lVar14 = 0;
            uVar7 = uVar16;
            while (1 < uVar7) {
              lVar14 = lVar14 + 1;
              uVar7 = uVar16 >> ((uint)lVar14 & 0x3f);
            }
            uVar24 = fn_82A6D090(param_1 + 0x38,lVar14 + 1,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            iVar19 = *(int *)(iVar4 + 0x100) / (1 << (uStack_b0 & 0x3f));
            uVar23 = (ulonglong)iVar19;
            if ((iVar19 < *(int *)(iVar4 + 0xec)) || (*(int *)(iVar4 + 0x100) < iVar19)) {
              return 0xffffffff80040002;
            }
          }
          *(short *)(iVar4 + 0x244) = *(short *)(iVar4 + 0x22);
          if (*(short *)(iVar4 + 0x22) != 0) {
            iVar26 = 0;
            iVar19 = 0;
            do {
              sVar22 = (short)iVar26 + 1;
              *(short *)(iVar19 + *(int *)(iVar4 + 0x248)) = (short)iVar26;
              iVar26 = (int)sVar22;
              iVar19 = iVar26 << 1;
            } while ((int)sVar22 < (int)(uint)*(ushort *)(iVar4 + 0x22));
          }
          uVar24 = fn_82A54648(param_1,uVar23);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
        }
        else {
          uVar2 = *(ushort *)(iVar4 + 0x22);
          sVar12 = (short)*(int *)(iVar4 + 0x100);
          iVar19 = (uint)uVar2 * *(int *)(iVar4 + 0x100);
          sVar22 = sVar12;
          if (uVar2 != 0) {
            sVar13 = 0;
            piVar17 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
            do {
              sVar3 = **(short **)(*piVar17 + 0xc);
              if (sVar3 < sVar12) {
                sVar22 = *(short *)(*(short *)((int)piVar17 + -0x136) * 2 + *(int *)(*piVar17 + 8));
                sVar12 = sVar3;
              }
              sVar13 = sVar13 + 1;
              piVar17 = piVar17 + 0x1bc;
            } while ((int)sVar13 < (int)(uint)uVar2);
          }
          sVar13 = 0;
          *(undefined2 *)(iVar4 + 0x244) = 0;
          if (uVar2 != 0) {
            psVar18 = (short *)(*(int *)(iVar4 + 0x140) + 0x72);
            do {
              psVar5 = *(short **)(*(int *)(psVar18 + 0x9b) + 0xc);
              iVar26 = *(int *)(*(int *)(psVar18 + 0x9b) + 8);
              iVar19 = iVar19 - *psVar5;
              if ((sVar12 == *psVar5) && (sVar22 == *(short *)(*psVar18 * 2 + iVar26))) {
                *(short *)(*(short *)(iVar4 + 0x244) * 2 + *(int *)(iVar4 + 0x248)) = sVar13;
                *(short *)(iVar4 + 0x244) = *(short *)(iVar4 + 0x244) + 1;
                psVar18[6] = *(short *)((*psVar18 + 1) * 2 + iVar26);
                psVar18[5] = *(short *)(*psVar18 * 2 + iVar26);
                psVar18[4] = *(short *)(*psVar18 * 2 + iVar26 + -2);
                sVar3 = *(short *)(*psVar18 * 2 + iVar26);
                *psVar5 = sVar3 + *psVar5;
                iVar19 = iVar19 - sVar3;
              }
              sVar13 = sVar13 + 1;
              psVar18 = psVar18 + 0x378;
            } while ((int)sVar13 < (int)(uint)*(ushort *)(iVar4 + 0x22));
          }
          if ((int)(uint)*(ushort *)(iVar4 + 0x22) < (int)*(short *)(iVar4 + 0x244)) {
            return 0xffffffff80040002;
          }
          if (*(short *)(iVar4 + 0x244) < 1) {
            return 0xffffffff80040002;
          }
          if (iVar19 < 0) {
            return 0xffffffff80040002;
          }
          param_1[0x36] = (uint)LZCOUNT(iVar19) >> 5;
        }
        uVar24 = fn_82A69FD8(iVar4);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        uVar24 = fn_82C1AC88(iVar4);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        if (*(int *)(iVar4 + 0x3c) < 3) {
          iVar19 = 0x34;
        }
        else {
          if (0 < *(short *)(iVar4 + 0x244)) {
            iVar26 = 0;
            iVar19 = 0;
            do {
              iVar19 = *(short *)(iVar19 + *(int *)(iVar4 + 0x248)) * 0x6f0 +
                       *(int *)(iVar4 + 0x140);
              if (*(short *)(iVar19 + 0x72) == 0) {
                *(undefined4 *)(iVar19 + 0x1bc) = 0;
                *(undefined4 *)(iVar19 + 0x1b4) = 1;
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(*(undefined4 *)(iVar19 + 4),0,0x70);
              }
              fn_82A72B38(param_1,iVar19,0);
              sVar22 = (short)iVar26 + 1;
              iVar26 = (int)sVar22;
              iVar19 = iVar26 << 1;
            } while (sVar22 < *(short *)(iVar4 + 0x244));
          }
          iVar19 = 0xb;
        }
        goto LAB_82a70078;
      case 3:
        param_1[10] = 0x13;
      case 0x13:
        param_1[10] = 0x1d;
switchD_82a6edb0_caseD_1d:
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        param_1[0xb] = 0;
        param_1[10] = 0x21;
switchD_82a6edb0_caseD_21:
        iVar19 = 10;
        goto LAB_82a70078;
      case 4:
        goto switchD_82a6edb0_caseD_4;
      case 5:
        goto switchD_82a6edb0_caseD_5;
      case 6:
      case 7:
        goto switchD_82a6edb0_caseD_6;
      case 8:
        goto switchD_82a6edb0_caseD_8;
      case 9:
        goto switchD_82a6edb0_caseD_9;
      case 0xb:
        piVar17 = param_1 + 0x38;
        uVar24 = fn_82A75588(piVar17,0x16);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        param_1[0xf] = 0;
        uVar24 = fn_82A6D090(piVar17,1,&uStack_b0);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        if (uStack_b0 == 0) {
          param_1[10] = 0xe;
        }
        else {
          uVar24 = fn_82A6D090(piVar17,2,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          if (uStack_b0 == 0) {
            uVar24 = fn_82A6D090(piVar17,4,auStack_a8);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            uVar24 = fn_82A6D090(piVar17,auStack_a8[0],&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            param_1[10] = 0xc;
            param_1[0xf] = uStack_b0 + 1;
          }
          else {
            param_1[0xf] = uStack_b0;
            param_1[10] = 0xc;
          }
        }
        break;
      case 0xc:
        if (0 < param_1[0xf]) {
          do {
            iVar19 = param_1[0xf];
            if (0x18 < iVar19) {
              iVar19 = 0x18;
            }
            uVar24 = fn_82A6D090(param_1 + 0x38,iVar19,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            iVar26 = param_1[0xf];
            param_1[0xf] = iVar26 - iVar19;
          } while (0 < iVar26 - iVar19);
        }
        param_1[10] = 0xe;
        break;
      case 0xd:
        if (0 < param_1[0xf]) {
          do {
            iVar19 = param_1[0xf];
            if (8 < iVar19) {
              iVar19 = 8;
            }
            uVar24 = fn_82A6D090(param_1 + 0x38,iVar19,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            if (iVar19 < 8) {
              uStack_b0 = (uStack_b0 & 0xff) << (8U - iVar19 & 0x3f);
            }
            iVar26 = param_1[0xf];
            param_1[0xf] = iVar26 - iVar19;
          } while (0 < iVar26 - iVar19);
        }
        param_1[10] = 0xe;
        break;
      case 0xe:
        uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        *(undefined4 *)(iVar4 + 0x8c) = 0;
        *(uint *)(iVar4 + 0x84) = uStack_b0;
        if (0 < *(short *)(iVar4 + 0x244)) {
          sVar22 = 0;
          do {
            sVar22 = sVar22 + 1;
          } while (sVar22 < *(short *)(iVar4 + 0x244));
        }
        if (*(int *)(iVar4 + 0x84) != 0) {
          iVar19 = 0x28;
          *(undefined4 *)(iVar4 + 0xc0) = 1;
          goto LAB_82a70078;
        }
        param_1[0x16] = 0;
        param_1[10] = 0xf;
        *(undefined4 *)(iVar4 + 0xc0) = 1;
        break;
      case 0xf:
        uVar24 = fn_82A73A70(param_1);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        param_1[10] = 0x20;
      case 0x20:
        bVar8 = true;
        uVar24 = fn_82A75588(param_1 + 0x38,*(undefined2 *)(iVar4 + 0x244));
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        if (0 < *(short *)(iVar4 + 0x244)) {
          iVar26 = 0;
          iVar19 = 0;
          bVar8 = true;
          do {
            iVar19 = *(short *)(iVar19 + *(int *)(iVar4 + 0x248)) * 0x6f0 + *(int *)(iVar4 + 0x140);
            uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            *(uint *)(iVar19 + 0x28) = uStack_b0;
            bVar8 = (bool)(uStack_b0 == 0 & bVar8);
            uVar24 = fn_82A56AF8(iVar4,iVar19);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            sVar22 = (short)iVar26 + 1;
            iVar26 = (int)sVar22;
            iVar19 = iVar26 << 1;
          } while (sVar22 < *(short *)(iVar4 + 0x244));
        }
        *(int *)(iVar4 + 0x128) = (int)((uint)*(ushort *)(iVar4 + 0x6e) * 0x5a) >> 4;
        param_1[0x22] = 0x7fffffff;
        if (bVar8) {
LAB_82a700a4:
          param_1[10] = 10;
          return uVar24;
        }
        iVar19 = 0x1e;
        goto LAB_82a70078;
      case 0x12:
        goto switchD_82a6edb0_caseD_12;
      case 0x1d:
        goto switchD_82a6edb0_caseD_1d;
      case 0x1e:
        *(undefined4 *)(iVar4 + 0x250) = 0;
        if (2 < *(int *)(iVar4 + 0x3c)) {
          uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          if (uStack_b0 != 0) {
            *(undefined4 *)(iVar4 + 0x250) = 1;
          }
        }
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        param_1[10] = 0x1f;
      case 0x1f:
        if ((*(int *)(iVar4 + 0x250) == 1) &&
           (*(short *)((int)param_1 + 0x96) < *(short *)(iVar4 + 0x244))) {
          do {
            lVar14 = 0;
            iVar26 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar4 + 0x248)) *
                     0x6f0 + *(int *)(iVar4 + 0x140);
            iVar19 = *(int *)(iVar26 + 0x24);
            if (1 < (uint)(iVar19 + 3 >> 2)) {
              do {
                lVar14 = lVar14 + 1;
              } while (1 < (uint)(iVar19 + 3 >> 2) >> ((uint)lVar14 & 0x3f));
            }
            uVar24 = fn_82A6D090(param_1 + 0x38,lVar14 + 1,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            *(uint *)(iVar26 + 0x1e4) = uStack_b0;
            sVar22 = *(short *)((int)param_1 + 0x96) + 1;
            *(short *)((int)param_1 + 0x96) = sVar22;
          } while (sVar22 < *(short *)(iVar4 + 0x244));
        }
        param_1[10] = 4;
switchD_82a6edb0_caseD_4:
        if (*(int *)(iVar4 + 0x3c) < 3) {
          uVar24 = fn_82A72970();
        }
        else {
          uVar24 = fn_82A74350(param_1);
        }
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        fn_82A6E4F0(iVar4,*(undefined4 *)(iVar4 + 0x128));
        *(undefined2 *)((int)param_1 + 0x96) = 0xffff;
        if (0 < *(short *)(iVar4 + 0x244)) {
          iVar26 = 0;
          iVar19 = 0;
          do {
            iVar19 = *(short *)(iVar19 + *(int *)(iVar4 + 0x248)) * 0x6f0 + *(int *)(iVar4 + 0x140);
            *(undefined1 *)(iVar19 + 0xb4) = 0;
            dVar28 = (double)fn_82A6BAE0(0,0);
            sVar22 = (short)iVar26 + 1;
            *(float *)(iVar19 + 0xc4) = (float)dVar28;
            iVar26 = (int)sVar22;
            iVar19 = iVar26 << 1;
          } while (sVar22 < *(short *)(iVar4 + 0x244));
        }
        param_1[0x21] = 0;
        param_1[10] = 5;
switchD_82a6edb0_caseD_5:
        uVar24 = fn_82A73898(param_1);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        *(short *)(param_1 + 0x26) = (short)*(undefined4 *)(iVar4 + 400);
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        param_1[10] = 6;
switchD_82a6edb0_caseD_6:
        if ((*(int *)(iVar4 + 0x28) == 1) && (uVar24 = fn_82A72CA0(param_1), (int)uVar24 < 0))
        {
          return uVar24;
        }
        param_1[10] = 8;
switchD_82a6edb0_caseD_8:
        if (*(int *)(iVar4 + 0x3c) < 3) {
          uVar24 = fn_82A75588(param_1 + 0x38,1);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          if ((*(int *)(iVar4 + 0xd8) != 0) && (1 < **(short **)(*(int *)(iVar4 + 0x140) + 0x1a8)))
          {
            uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            if ((*(short *)(*(int *)(iVar4 + 0x140) + 0x72) == 0) && (uStack_b0 != 1)) {
              return 0xffffffff80040002;
            }
          }
        }
        if (0 < *(short *)(iVar4 + 0x244)) {
          uVar9 = (ulonglong)(uint)param_1[2];
          iVar19 = *(int *)(iVar4 + 0x1cc);
          uVar23 = (ulonglong)**(ushort **)(iVar4 + 0x248);
          puVar27 = (undefined4 *)
                    ((short)**(ushort **)(iVar4 + 0x248) * 0x6f0 + *(int *)(iVar4 + 0x140));
          if (iVar19 == 0) {
            uVar10 = (ulonglong)*(short *)((int)puVar27 + 0x76);
            if (*(int *)(iVar4 + 0x1c0) != 0) {
              uVar10 = (ulonglong)
                       (uint)((int)*(short *)((int)puVar27 + 0x76) <<
                             (*(uint *)(iVar4 + 0x1c8) & 0x3f));
            }
          }
          else {
            sVar22 = (short)*(undefined4 *)(iVar4 + 0x1c8);
            uVar23 = (ulonglong)sVar22;
            uVar9 = (ulonglong)*(short *)((int)puVar27 + 0x76);
            uVar10 = (ulonglong)((int)*(short *)((int)puVar27 + 0x76) >> ((int)sVar22 & 0x3fU));
          }
          if (iVar19 == 0) {
            uVar15 = (ulonglong)(uint)puVar27[9];
            uVar11 = uVar15;
            if (*(int *)(iVar4 + 0x1c0) != 0) {
              uVar11 = (ulonglong)(uint)(puVar27[9] << (*(uint *)(iVar4 + 0x1c8) & 0x3f));
            }
          }
          else {
            uVar15 = (ulonglong)(uint)puVar27[9];
            uVar11 = (longlong)((int)puVar27[9] >> (*(uint *)(iVar4 + 0x1c8) & 0x3f));
          }
          lVar14 = (uVar10 - uVar11 & 0x3fffffff) * 4 + (ulonglong)(uint)puVar27[0xe];
          *puVar27 = (int)lVar14;
          if (*(int *)(iVar4 + 0x1cc) == 0) {
            if (*(int *)(iVar4 + 0x1c0) != 0) {
              uVar15 = (ulonglong)(uint)((int)uVar15 << (*(uint *)(iVar4 + 0x1c8) & 0x3f));
            }
          }
          else {
            uVar15 = (ulonglong)((int)uVar15 >> (*(uint *)(iVar4 + 0x1c8) & 0x3f));
          }
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(lVar14,0,(uVar15 & 0x3fffffff) << 2,uVar23,iVar19,uVar9);
        }
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        *(undefined2 *)(param_1 + 0x26) = 0;
        param_1[10] = 9;
switchD_82a6edb0_caseD_9:
        if ((*(int *)(iVar4 + 0x118) == 1) &&
           (*(short *)((int)param_1 + 0x96) < *(short *)(iVar4 + 0x244))) {
          do {
            iVar19 = (int)*(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar4 + 0x248));
            iVar26 = iVar19 * 0x6f0 + *(int *)(iVar4 + 0x140);
            if ((2 < *(int *)(iVar4 + 0x3c)) && (*(int *)(iVar19 * 8 + param_1[2] + 4) == 0)) {
              uVar24 = fn_82A741F0(param_1);
            }
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            cVar1 = **(char **)(*(int *)(iVar26 + 0x1a8) + 0x10);
            if ((*(int *)(iVar26 + 0x28) == 0) && (*(int *)(iVar4 + 0x3c) < 3)) {
              if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(*(undefined4 *)(iVar26 + 4),0,*(int *)(iVar4 + 0x130) << 2);
              }
            }
            else {
              iVar19 = *(int *)(iVar4 + 0x3c);
              piVar17 = *(int **)(iVar26 + 4);
              uVar25 = 0xffffffff82090fd0;
              if (2 < iVar19) {
                uVar25 = 0xffffffff820a8290;
              }
              if (cVar1 == '\x01') {
                if ((iVar19 < 3) || (*(int *)(iVar26 + 0x1bc) != 1)) {
                  if (iVar19 == 1) {
                    uVar24 = fn_82A6D090(param_1 + 0x38,5,&uStack_b0);
                    if ((int)uVar24 < 0) {
                      return uVar24;
                    }
                    *piVar17 = uStack_b0 + 10;
                    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
                  }
                  if ((int)*(short *)(param_1 + 0x26) < *(int *)(iVar4 + 0x130)) {
                    do {
                      uVar24 = fn_82A75DF8(uVar25,param_1 + 0x38,&uStack_b0,&iStack_ac,0);
                      if ((int)uVar24 < 0) {
                        return uVar24;
                      }
                      uVar24 = fn_82A6D200(param_1 + 0x38,uStack_b0);
                      if ((int)uVar24 < 0) {
                        return uVar24;
                      }
                      iStack_ac = iStack_ac + -0x3c;
                      if ((*(int *)(iVar4 + 0x3c) < 3) || (*(short *)(param_1 + 0x26) != 0)) {
                        iVar19 = (int)*(short *)(param_1 + 0x26);
                        if (*(short *)(param_1 + 0x26) == 0) {
                          iVar20 = 0x24;
                        }
                        else {
                          iVar20 = piVar17[iVar19 + -1];
                        }
                      }
                      else {
                        iVar20 = 0x2d / *(int *)(iVar26 + 0x1b4);
                        iVar19 = 0;
                      }
                      piVar17[iVar19] = iVar20 + iStack_ac;
                      sVar22 = *(short *)(param_1 + 0x26);
                      *(short *)(param_1 + 0x26) = sVar22 + 1;
                    } while ((int)(short)(sVar22 + 1) < *(int *)(iVar4 + 0x130));
                  }
                }
                else {
                  uVar24 = fn_82A74938(param_1,iVar26,*(undefined4 *)(iVar4 + 0x130));
                  if ((int)uVar24 < 0) {
                    return uVar24;
                  }
                }
                *(int *)(iVar4 + 0xe0) =
                     (int)*(short *)(*(short *)(iVar26 + 0x72) * 2 +
                                    *(int *)(*(int *)(iVar26 + 0x1a8) + 8));
                *(undefined2 *)(param_1 + 0x26) = 0;
              }
              else if (cVar1 == '\0') goto LAB_82a70024;
              iVar19 = *piVar17;
              if (1 < *(int *)(iVar4 + 0x130)) {
                iVar21 = 1;
                iVar20 = 4;
                do {
                  if (iVar19 < *(int *)(iVar20 + (int)piVar17)) {
                    iVar19 = *(int *)(iVar20 + (int)piVar17);
                  }
                  sVar22 = (short)iVar21 + 1;
                  iVar21 = (int)sVar22;
                  iVar20 = iVar21 << 2;
                } while ((int)sVar22 < *(int *)(iVar4 + 0x130));
              }
              *(int *)(iVar26 + 0x40) = iVar19;
              *(undefined4 *)(iVar26 + 0x1bc) = 1;
            }
LAB_82a70024:
            if ((2 < *(int *)(iVar4 + 0x3c)) && (cVar1 == '\x01')) {
              *(int *)(iVar26 + 0x1ac) = (int)*(short *)(iVar26 + 0x76);
              *(undefined4 *)(iVar26 + 0x1b0) = *(undefined4 *)(iVar4 + 0x130);
            }
            sVar22 = *(short *)((int)param_1 + 0x96) + 1;
            *(short *)((int)param_1 + 0x96) = sVar22;
          } while (sVar22 < *(short *)(iVar4 + 0x244));
        }
        iVar19 = 10;
        goto LAB_82a70078;
      case 0x21:
        goto switchD_82a6edb0_caseD_21;
      case 0x24:
      case 0x27:
        goto switchD_82a6edb0_caseD_24;
      case 0x25:
        goto switchD_82a6edb0_caseD_25;
      case 0x26:
        goto switchD_82a6edb0_caseD_26;
      case 0x28:
        uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        *(uint *)(iVar4 + 0x8c) = uStack_b0;
        if (uStack_b0 == 1) {
          return 0xffffffff80040002;
        }
        param_1[10] = 0x24;
        break;
      case 0x29:
        param_1[10] = 0x2a;
      case 0x2a:
        param_1[10] = 0x27;
switchD_82a6edb0_caseD_24:
        uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        *(uint *)(iVar4 + 0xcc) = uStack_b0;
        param_1[10] = 0x30;
switchD_82a6edb0_caseD_30:
        uVar24 = fn_82A75588(param_1 + 0x38,*(undefined2 *)(iVar4 + 0x22));
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        if (0 < *(short *)(iVar4 + 0x244)) {
          iVar26 = 0;
          iVar19 = 0;
          do {
            iVar19 = *(short *)(iVar19 + *(int *)(iVar4 + 0x248)) * 0x6f0 + *(int *)(iVar4 + 0x140);
            uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            *(uint *)(iVar19 + 0x28) = uStack_b0;
            uVar24 = fn_82A56AF8(iVar4,iVar19);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            sVar22 = (short)iVar26 + 1;
            iVar26 = (int)sVar22;
            iVar19 = iVar26 << 1;
          } while (sVar22 < *(short *)(iVar4 + 0x244));
        }
        *(undefined4 *)(iVar4 + 0x28) = 0;
        param_1[10] = 0x12;
switchD_82a6edb0_caseD_12:
        param_1[10] = 0x26;
switchD_82a6edb0_caseD_26:
        if (*(int *)(iVar4 + 0x78) == 1) {
          uVar24 = fn_82A6D090(param_1 + 0x38,1,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          *(uint *)(iVar4 + 0xa4) = uStack_b0;
        }
        param_1[10] = 0x25;
switchD_82a6edb0_caseD_25:
        if (*(int *)(iVar4 + 0x78) == 1) {
          if (*(int *)(iVar4 + 0xa4) == 1) {
            uVar24 = fn_82A6D090(param_1 + 0x38,5,&uStack_b0);
            if ((int)uVar24 < 0) {
              return uVar24;
            }
            *(short *)(iVar4 + 0xa8) = (short)uStack_b0 + 1;
          }
        }
        else if ((*(int *)(iVar4 + 0xc0) == 1) && (*(int *)(iVar4 + 0xcc) != 1)) {
          uVar24 = fn_82A6D090(param_1 + 0x38,6,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          if (0x3f < uStack_b0) {
            return 0xffffffff80040002;
          }
          if ((short)uStack_b0 < 0) {
            return 0xffffffff80040002;
          }
          *(int *)(iVar4 + 0x278) = (int)(short)uStack_b0;
        }
        param_1[10] = 0x2c;
switchD_82a6edb0_caseD_2c:
        if ((*(int *)(iVar4 + 0x78) == 1) && (*(int *)(iVar4 + 0xa4) == 1)) {
          uVar24 = fn_82A6D090(param_1 + 0x38,4,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          sVar22 = (short)uStack_b0;
          if (0xc < sVar22) {
            return 0xffffffff80040002;
          }
          if (sVar22 < 0) {
            return 0xffffffff80040002;
          }
          *(short *)(iVar4 + 0xaa) = sVar22;
        }
        param_1[10] = 0x2e;
switchD_82a6edb0_caseD_2e:
        if ((*(int *)(iVar4 + 0x78) == 1) && (*(int *)(iVar4 + 0xa4) == 1)) {
          uVar24 = fn_82A6D090(param_1 + 0x38,3,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          iVar19 = (short)uStack_b0 + 1;
          if (iVar19 < 1) {
            return 0xffffffff80040002;
          }
          if (8 < iVar19) {
            return 0xffffffff80040002;
          }
          *(short *)(iVar4 + 0xac) = (short)uStack_b0 + 1;
        }
        param_1[10] = 0x2d;
switchD_82a6edb0_caseD_2d:
        if ((*(int *)(iVar4 + 0xcc) != 1) && (*(int *)(iVar4 + 0xc0) == 1)) {
          uVar24 = fn_82A6D090(param_1 + 0x38,8,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          *(short *)(iVar4 + 0xae) = (short)uStack_b0 + 1;
        }
        if (*(int *)(iVar4 + 0x8c) == 1) {
          iVar19 = 3;
          goto LAB_82a70078;
        }
        param_1[10] = 8;
        break;
      case 0x2c:
        goto switchD_82a6edb0_caseD_2c;
      case 0x2d:
        goto switchD_82a6edb0_caseD_2d;
      case 0x2e:
        goto switchD_82a6edb0_caseD_2e;
      case 0x30:
        goto switchD_82a6edb0_caseD_30;
      case 0x34:
        piVar17 = param_1 + 0x38;
        uVar24 = fn_82A75588(piVar17,(ulonglong)*(ushort *)(iVar4 + 0x22) + 1);
        if ((int)uVar24 < 0) {
          return uVar24;
        }
        if (*(short *)(iVar4 + 0x22) == 1) {
          uVar24 = fn_82A6D090(piVar17,1,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          *(uint *)(*(int *)(iVar4 + 0x140) + 0x28) = uStack_b0;
          uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x140) + 0x28);
          *(undefined4 *)(*(int *)(iVar4 + 0x140) + 0x44) = 0;
          *(undefined4 *)(iVar4 + 0x11c) = 0;
          uVar7 = (uint)LZCOUNT(uVar6);
        }
        else {
          uVar24 = fn_82A6D090(piVar17,1,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          *(uint *)(*(int *)(iVar4 + 0x140) + 0x44) = uStack_b0;
          *(uint *)(*(int *)(iVar4 + 0x140) + 0x734) = uStack_b0;
          *(uint *)(iVar4 + 0x11c) = uStack_b0;
          uVar24 = fn_82A6D090(piVar17,1,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          *(uint *)(*(int *)(iVar4 + 0x140) + 0x28) = uStack_b0;
          uVar24 = fn_82A6D090(piVar17,1,&uStack_b0);
          if ((int)uVar24 < 0) {
            return uVar24;
          }
          *(uint *)(*(int *)(iVar4 + 0x140) + 0x718) = uStack_b0;
          iVar19 = *(int *)(iVar4 + 0x140);
          uVar7 = (uint)LZCOUNT(*(undefined4 *)(iVar19 + 0x718)) &
                  (uint)LZCOUNT(*(undefined4 *)(iVar19 + 0x28));
          fn_82A72B38(param_1,iVar19 + 0x6f0,*(int *)(iVar19 + 0x44) == 1);
        }
        *(undefined4 *)(iVar4 + 0x128) = 1;
        if (uVar7 >> 5 != 0) goto LAB_82a700a4;
        iVar19 = 4;
LAB_82a70078:
        param_1[10] = iVar19;
      }
    } while (param_1[10] != 10);
  }
  return uVar24;
}

