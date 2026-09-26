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
extern int fn_82A6D200();
extern int fn_82A6E4F0();
extern int fn_82A75588();
extern int fn_82A75DF8();
extern int fn_82C1AC88();
extern int fn_82C1C360();
extern int fn_82C2CAC0();
extern int fn_82C2E420();
extern int fn_82C30370();
extern int fn_82C39718();
extern int fn_82C398E0();
extern int fn_82C39A48();
extern int fn_82C39C10();
extern int fn_82C39F90();
extern int fn_82C3A9E0();
extern int fn_82C3ABB8();
extern int fn_82C3B338();
extern int fn_82C3B498();
extern int fn_82C3BA80();
extern int fn_82F691F0();
extern unsigned int iStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82C32D58(int *param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined1 *puVar6;
  bool bVar7;
  short sVar9;
  short sVar10;
  ulonglong uVar8;
  uint uVar13;
  int *piVar14;
  short *psVar15;
  short sVar20;
  int iVar16;
  uint uVar17;
  longlong lVar11;
  ulonglong uVar12;
  int iVar18;
  int iVar19;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar24;
  undefined4 *puVar25;
  double dVar26;
  uint uStack_b0;
  int iStack_ac;
  undefined4 auStack_a8 [42];
  
  iVar4 = *param_1;
  uVar22 = 0;
  uVar21 = (ulonglong)*(uint *)(iVar4 + 0x100);
  if (param_1[10] == 10) {
    return 0;
  }
  do {
    switch(param_1[10]) {
    case 0:
      if (*(int *)(iVar4 + 0x3c) < 3) {
        if (*(int *)(iVar4 + 0xd8) != 0) {
          uVar13 = 0;
          uVar17 = *(uint *)(iVar4 + 0xe4);
          while (1 < uVar17) {
            uVar13 = uVar13 + 1;
            uVar17 = *(uint *)(iVar4 + 0xe4) >> (uVar13 & 0x3f);
          }
          lVar11 = 0;
          uVar17 = uVar13;
          while (1 < uVar17) {
            lVar11 = lVar11 + 1;
            uVar17 = uVar13 >> ((uint)lVar11 & 0x3f);
          }
          uVar22 = fn_82C30370(param_1 + 0x38,lVar11 + 1,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          uVar17 = *(uint *)(iVar4 + 0x100);
          uVar13 = 1 << (uStack_b0 & 0x3f);
          iVar16 = (int)uVar17 / (int)uVar13;
          uVar21 = (ulonglong)iVar16;
          trapWord(6,(ulonglong)uVar13,0);
          trapWord(5,(ulonglong)uVar13 &
                     ~((((ulonglong)uVar17 & 0x7fffffff) << 1 | (ulonglong)(uVar17 >> 0x1f)) - 1),
                   0xffff);
          if ((iVar16 < *(int *)(iVar4 + 0xec)) || ((int)uVar17 < iVar16)) {
            return 0xffffffff80040002;
          }
        }
        *(short *)(iVar4 + 0x244) = *(short *)(iVar4 + 0x22);
        if (*(short *)(iVar4 + 0x22) != 0) {
          iVar24 = 0;
          iVar16 = 0;
          do {
            sVar20 = (short)iVar24 + 1;
            *(short *)(iVar16 + *(int *)(iVar4 + 0x248)) = (short)iVar24;
            iVar24 = (int)sVar20;
            iVar16 = iVar24 << 1;
          } while ((int)sVar20 < (int)(uint)*(ushort *)(iVar4 + 0x22));
        }
        uVar22 = fn_82A54648(param_1,uVar21);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
      }
      else {
        uVar2 = *(ushort *)(iVar4 + 0x22);
        sVar9 = (short)*(int *)(iVar4 + 0x100);
        iVar16 = (uint)uVar2 * *(int *)(iVar4 + 0x100);
        sVar20 = sVar9;
        if (uVar2 != 0) {
          sVar10 = 0;
          piVar14 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
          do {
            sVar3 = **(short **)(*piVar14 + 0xc);
            if (sVar3 < sVar9) {
              sVar20 = *(short *)(*(short *)((int)piVar14 + -0x136) * 2 + *(int *)(*piVar14 + 8));
              sVar9 = sVar3;
            }
            sVar10 = sVar10 + 1;
            piVar14 = piVar14 + 0x1bc;
          } while ((int)sVar10 < (int)(uint)uVar2);
        }
        sVar10 = 0;
        *(undefined2 *)(iVar4 + 0x244) = 0;
        if (uVar2 != 0) {
          psVar15 = (short *)(*(int *)(iVar4 + 0x140) + 0x72);
          do {
            psVar5 = *(short **)(*(int *)(psVar15 + 0x9b) + 0xc);
            iVar24 = *(int *)(*(int *)(psVar15 + 0x9b) + 8);
            iVar16 = iVar16 - *psVar5;
            if ((sVar9 == *psVar5) && (sVar20 == *(short *)(*psVar15 * 2 + iVar24))) {
              *(short *)(*(short *)(iVar4 + 0x244) * 2 + *(int *)(iVar4 + 0x248)) = sVar10;
              *(short *)(iVar4 + 0x244) = *(short *)(iVar4 + 0x244) + 1;
              psVar15[6] = *(short *)((*psVar15 + 1) * 2 + iVar24);
              psVar15[5] = *(short *)(*psVar15 * 2 + iVar24);
              psVar15[4] = *(short *)(*psVar15 * 2 + iVar24 + -2);
              sVar3 = *(short *)(*psVar15 * 2 + iVar24);
              *psVar5 = *psVar5 + sVar3;
              iVar16 = iVar16 - sVar3;
            }
            sVar10 = sVar10 + 1;
            psVar15 = psVar15 + 0x378;
          } while ((int)sVar10 < (int)(uint)*(ushort *)(iVar4 + 0x22));
        }
        if ((int)(uint)*(ushort *)(iVar4 + 0x22) < (int)*(short *)(iVar4 + 0x244)) {
          return 0xffffffff80040002;
        }
        if (*(short *)(iVar4 + 0x244) < 1) {
          return 0xffffffff80040002;
        }
        if (iVar16 < 0) {
          return 0xffffffff80040002;
        }
        param_1[0x36] = (uint)LZCOUNT(iVar16) >> 5;
      }
      uVar22 = fn_82C2CAC0(iVar4);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      uVar22 = fn_82C1AC88(iVar4);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      if (*(int *)(iVar4 + 0x3c) < 3) {
        iVar16 = 0x34;
      }
      else {
        if (0 < *(short *)(iVar4 + 0x244)) {
          iVar24 = 0;
          iVar16 = 0;
          do {
            iVar16 = *(short *)(iVar16 + *(int *)(iVar4 + 0x248)) * 0x6f0 + *(int *)(iVar4 + 0x140);
            if (*(short *)(iVar16 + 0x72) == 0) {
              *(undefined4 *)(iVar16 + 0x1bc) = 0;
              *(undefined4 *)(iVar16 + 0x1b4) = 1;
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(*(undefined4 *)(iVar16 + 4),0,0x70);
            }
            fn_82C398E0(param_1,iVar16,0);
            sVar20 = (short)iVar24 + 1;
            iVar24 = (int)sVar20;
            iVar16 = iVar24 << 1;
          } while (sVar20 < *(short *)(iVar4 + 0x244));
        }
        iVar16 = 0xb;
      }
      goto LAB_82c34524;
    case 3:
      if ((((*(int *)(iVar4 + 0x8c) == 1) && (*(int *)(iVar4 + 0xc0) == 1)) &&
          (*(int *)(iVar4 + 0xcc) != 1)) &&
         ((*(int *)(iVar4 + 0x94) != 1 && (*(int *)(iVar4 + 0x9c) != 1)))) {
        uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        if (uStack_b0 == 1) {
          return 0xffffffff80040002;
        }
        *(uint *)(iVar4 + 0xb8) = uStack_b0;
      }
      param_1[10] = 0x13;
    case 0x13:
      if (((*(int *)(iVar4 + 0x8c) == 1) && (*(int *)(iVar4 + 0xc0) == 1)) &&
         ((*(int *)(iVar4 + 0xcc) != 1 &&
          ((*(int *)(iVar4 + 0x94) != 1 && (*(int *)(iVar4 + 0x9c) != 1)))))) {
        uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        if (uStack_b0 == 1) {
          return 0xffffffff80040002;
        }
        *(uint *)(iVar4 + 0x290) = uStack_b0;
      }
      param_1[10] = 0x1d;
switchD_82c32de0_caseD_1d:
      if ((((*(int *)(iVar4 + 0x8c) == 1) && (*(int *)(iVar4 + 0xc0) == 1)) &&
          (*(int *)(iVar4 + 0xcc) != 1)) &&
         ((*(int *)(iVar4 + 0x94) != 1 && (*(int *)(iVar4 + 0x9c) != 1)))) {
        uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        if (uStack_b0 == 1) {
          return 0xffffffff80040002;
        }
        *(uint *)(iVar4 + 0x2cc) = uStack_b0;
      }
      *(undefined2 *)((int)param_1 + 0x96) = 0;
      param_1[0xb] = 0;
      param_1[10] = 0x21;
switchD_82c32de0_caseD_21:
      if (((*(int *)(iVar4 + 0x8c) == 1) && (*(int *)(iVar4 + 0xc0) == 1)) &&
         ((*(int *)(iVar4 + 0xcc) != 1 &&
          ((*(int *)(iVar4 + 0x94) != 1 && (*(int *)(iVar4 + 0x9c) != 1)))))) {
        if ((int)*(short *)((int)param_1 + 0x96) < (int)(uint)*(ushort *)(iVar4 + 0x22)) {
          do {
            uVar17 = param_1[0xb];
            iVar16 = *(short *)((int)param_1 + 0x96) * 0x6f0 + *(int *)(iVar4 + 0x140);
            if (uVar17 == 0) {
              uVar22 = fn_82C30370(param_1 + 0x38,3,&uStack_b0);
              if ((int)uVar22 < 0) {
                return uVar22;
              }
              sVar20 = (short)uStack_b0 + 1;
              if (4 < sVar20) {
                return 0xffffffff80040002;
              }
              if (sVar20 < 1) {
                return 0xffffffff80040002;
              }
              *(short *)(iVar16 + 0xb6) = sVar20;
              *(undefined2 *)(iVar16 + 0xb8) = 0;
              param_1[0xb] = 1;
LAB_82c33b98:
              if (*(short *)(iVar16 + 0xb8) < *(short *)(iVar16 + 0xb6)) {
                do {
                  uVar22 = fn_82C30370(param_1 + 0x38,7,&uStack_b0);
                  if ((int)uVar22 < 0) {
                    return uVar22;
                  }
                  uVar17 = (uStack_b0 + 1) * 8;
                  if (0x100 < uVar17) {
                    return 0xffffffff80040002;
                  }
                  if (uVar17 < 8) {
                    return 0xffffffff80040002;
                  }
                  *(uint *)(*(short *)(iVar16 + 0xb8) * 0x38 + iVar16 + 200) = uVar17;
                  sVar20 = *(short *)(iVar16 + 0xb8) + 1;
                  *(short *)(iVar16 + 0xb8) = sVar20;
                } while (sVar20 < *(short *)(iVar16 + 0xb6));
              }
              *(undefined2 *)(iVar16 + 0xb8) = 0;
              param_1[0xb] = 2;
LAB_82c33c2c:
              if (*(short *)(iVar16 + 0xb8) < *(short *)(iVar16 + 0xb6)) {
                do {
                  uVar22 = fn_82C30370(param_1 + 0x38,4,&uStack_b0);
                  if ((int)uVar22 < 0) {
                    return uVar22;
                  }
                  if (0xc < (short)uStack_b0) {
                    return 0xffffffff80040002;
                  }
                  if ((short)uStack_b0 < 0) {
                    return 0xffffffff80040002;
                  }
                  *(uint *)(*(short *)(iVar16 + 0xb8) * 0x38 + iVar16 + 0xdc) = uStack_b0;
                  sVar20 = *(short *)(iVar16 + 0xb8) + 1;
                  *(short *)(iVar16 + 0xb8) = sVar20;
                } while (sVar20 < *(short *)(iVar16 + 0xb6));
              }
              *(undefined2 *)(iVar16 + 0xb8) = 0;
              param_1[0xb] = 0;
            }
            else {
              if (uVar17 == 1) goto LAB_82c33b98;
              if (uVar17 < 3) goto LAB_82c33c2c;
            }
            sVar20 = *(short *)((int)param_1 + 0x96) + 1;
            *(short *)((int)param_1 + 0x96) = sVar20;
          } while ((int)sVar20 < (int)(uint)*(ushort *)(iVar4 + 0x22));
        }
        param_1[5] = 1;
      }
LAB_82c34520:
      iVar16 = 10;
LAB_82c34524:
      param_1[10] = iVar16;
      break;
    case 4:
      goto switchD_82c32de0_caseD_4;
    case 5:
      goto switchD_82c32de0_caseD_5;
    case 6:
    case 7:
      goto switchD_82c32de0_caseD_6;
    case 8:
      goto switchD_82c32de0_caseD_8;
    case 9:
      goto switchD_82c32de0_caseD_9;
    case 0xb:
      piVar14 = param_1 + 0x38;
      uVar22 = fn_82A75588(piVar14,0x16);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      param_1[0xf] = 0;
      uVar22 = fn_82C30370(piVar14,1,&uStack_b0);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      if (uStack_b0 == 0) {
        param_1[10] = 0xe;
      }
      else {
        uVar22 = fn_82C30370(piVar14,2,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        if (uStack_b0 == 0) {
          uVar22 = fn_82C30370(piVar14,4,auStack_a8);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          uVar22 = fn_82C30370(piVar14,auStack_a8[0],&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
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
          iVar16 = param_1[0xf];
          if (0x18 < iVar16) {
            iVar16 = 0x18;
          }
          uVar22 = fn_82C30370(param_1 + 0x38,iVar16,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          iVar24 = param_1[0xf];
          param_1[0xf] = iVar24 - iVar16;
        } while (0 < iVar24 - iVar16);
      }
      param_1[10] = 0xe;
      break;
    case 0xd:
      if (0 < param_1[0xf]) {
        do {
          iVar16 = param_1[0xf];
          if (8 < iVar16) {
            iVar16 = 8;
          }
          uVar22 = fn_82C30370(param_1 + 0x38,iVar16,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          if (iVar16 < 8) {
            uStack_b0 = (uStack_b0 & 0xff) << (8U - iVar16 & 0x3f);
          }
          iVar24 = param_1[0xf];
          param_1[0xf] = iVar24 - iVar16;
        } while (0 < iVar24 - iVar16);
      }
      param_1[10] = 0xe;
      break;
    case 0xe:
      uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(uint *)(iVar4 + 0x84) = uStack_b0;
      if (0 < *(short *)(iVar4 + 0x244)) {
        sVar20 = 0;
        do {
          sVar20 = sVar20 + 1;
        } while (sVar20 < *(short *)(iVar4 + 0x244));
      }
      if (*(int *)(iVar4 + 0x84) != 0) {
        iVar16 = 0x28;
        *(undefined4 *)(iVar4 + 0xc0) = 1;
        goto LAB_82c34524;
      }
      param_1[0x16] = 0;
      param_1[10] = 0xf;
      *(undefined4 *)(iVar4 + 0xc0) = 1;
      break;
    case 0xf:
      uVar22 = fn_82C3ABB8(param_1);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      param_1[10] = 0x20;
    case 0x20:
      bVar7 = true;
      uVar22 = fn_82A75588(param_1 + 0x38,*(undefined2 *)(iVar4 + 0x244));
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      if (0 < *(short *)(iVar4 + 0x244)) {
        iVar24 = 0;
        iVar16 = 0;
        bVar7 = true;
        do {
          iVar16 = *(short *)(iVar16 + *(int *)(iVar4 + 0x248)) * 0x6f0 + *(int *)(iVar4 + 0x140);
          uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          *(uint *)(iVar16 + 0x28) = uStack_b0;
          bVar7 = (bool)(uStack_b0 == 0 & bVar7);
          uVar22 = fn_82C1C360(iVar4,iVar16);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          sVar20 = (short)iVar24 + 1;
          iVar24 = (int)sVar20;
          iVar16 = iVar24 << 1;
        } while (sVar20 < *(short *)(iVar4 + 0x244));
      }
      *(int *)(iVar4 + 0x128) = (int)((uint)*(ushort *)(iVar4 + 0x6e) * 0x5a) >> 4;
      param_1[0x22] = 0x7fffffff;
      if (!bVar7) {
        iVar16 = 0x1e;
        goto LAB_82c34524;
      }
      if (*(int *)(iVar4 + 0x118) != 0) goto LAB_82c345fc;
      goto LAB_82c345f0;
    case 0x12:
      goto switchD_82c32de0_caseD_12;
    case 0x1d:
      goto switchD_82c32de0_caseD_1d;
    case 0x1e:
      *(undefined4 *)(iVar4 + 0x250) = 0;
      if (2 < *(int *)(iVar4 + 0x3c)) {
        uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
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
          lVar11 = 0;
          iVar24 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar4 + 0x248)) * 0x6f0
                   + *(int *)(iVar4 + 0x140);
          iVar16 = *(int *)(iVar24 + 0x24);
          if (1 < (uint)(iVar16 + 3 >> 2)) {
            do {
              lVar11 = lVar11 + 1;
            } while (1 < (uint)(iVar16 + 3 >> 2) >> ((uint)lVar11 & 0x3f));
          }
          uVar22 = fn_82C30370(param_1 + 0x38,lVar11 + 1,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          *(uint *)(iVar24 + 0x1e4) = uStack_b0;
          sVar20 = *(short *)((int)param_1 + 0x96) + 1;
          *(short *)((int)param_1 + 0x96) = sVar20;
        } while (sVar20 < *(short *)(iVar4 + 0x244));
      }
      param_1[10] = 4;
switchD_82c32de0_caseD_4:
      if (*(int *)(iVar4 + 0x3c) < 3) {
        uVar22 = fn_82C39718();
      }
      else {
        uVar22 = fn_82C3B498(param_1);
      }
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      fn_82A6E4F0(iVar4,*(undefined4 *)(iVar4 + 0x128));
      *(undefined2 *)((int)param_1 + 0x96) = 0xffff;
      if (0 < *(short *)(iVar4 + 0x244)) {
        iVar24 = 0;
        iVar16 = 0;
        do {
          iVar16 = *(short *)(iVar16 + *(int *)(iVar4 + 0x248)) * 0x6f0 + *(int *)(iVar4 + 0x140);
          *(undefined1 *)(iVar16 + 0xb4) = 0;
          dVar26 = (double)fn_82C2E420(0,0);
          sVar20 = (short)iVar24 + 1;
          *(float *)(iVar16 + 0xc4) = (float)dVar26;
          iVar24 = (int)sVar20;
          iVar16 = iVar24 << 1;
        } while (sVar20 < *(short *)(iVar4 + 0x244));
      }
      param_1[0x21] = 0;
      param_1[10] = 5;
switchD_82c32de0_caseD_5:
      uVar22 = fn_82C3A9E0(param_1);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      *(short *)(param_1 + 0x26) = (short)*(undefined4 *)(iVar4 + 400);
      *(undefined2 *)((int)param_1 + 0x96) = 0;
      param_1[10] = 6;
switchD_82c32de0_caseD_6:
      if ((*(int *)(iVar4 + 0x28) == 1) && (uVar22 = fn_82C39C10(param_1), (int)uVar22 < 0)) {
        return uVar22;
      }
      param_1[10] = 8;
switchD_82c32de0_caseD_8:
      if (*(int *)(iVar4 + 0x3c) < 3) {
        uVar22 = fn_82A75588(param_1 + 0x38,1);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        if ((*(int *)(iVar4 + 0xd8) != 0) && (1 < **(short **)(*(int *)(iVar4 + 0x140) + 0x1a8))) {
          uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          if ((*(short *)(*(int *)(iVar4 + 0x140) + 0x72) == 0) && (uStack_b0 != 1)) {
            return 0xffffffff80040002;
          }
        }
      }
      if (0 < *(short *)(iVar4 + 0x244)) {
        puVar25 = (undefined4 *)(**(short **)(iVar4 + 0x248) * 0x6f0 + *(int *)(iVar4 + 0x140));
        if (*(int *)(iVar4 + 0x1cc) == 0) {
          uVar21 = (ulonglong)*(short *)((int)puVar25 + 0x76);
          if (*(int *)(iVar4 + 0x1c0) != 0) {
            uVar21 = (ulonglong)
                     (uint)((int)*(short *)((int)puVar25 + 0x76) <<
                           (*(uint *)(iVar4 + 0x1c8) & 0x3f));
          }
        }
        else {
          uVar21 = (ulonglong)
                   ((int)*(short *)((int)puVar25 + 0x76) >>
                   ((int)(short)*(undefined4 *)(iVar4 + 0x1c8) & 0x3fU));
        }
        if (*(int *)(iVar4 + 0x1cc) == 0) {
          uVar12 = (ulonglong)(uint)puVar25[9];
          uVar8 = uVar12;
          if (*(int *)(iVar4 + 0x1c0) != 0) {
            uVar8 = (ulonglong)(uint)(puVar25[9] << (*(uint *)(iVar4 + 0x1c8) & 0x3f));
          }
        }
        else {
          uVar12 = (ulonglong)(uint)puVar25[9];
          uVar8 = (longlong)((int)puVar25[9] >> (*(uint *)(iVar4 + 0x1c8) & 0x3f));
        }
        lVar11 = (uVar21 - uVar8 & 0x3fffffff) * 4 + (ulonglong)(uint)puVar25[0xe];
        *puVar25 = (int)lVar11;
        if (*(int *)(iVar4 + 0x1cc) == 0) {
          if (*(int *)(iVar4 + 0x1c0) != 0) {
            uVar12 = (ulonglong)(uint)((int)uVar12 << (*(uint *)(iVar4 + 0x1c8) & 0x3f));
          }
        }
        else {
          uVar12 = (ulonglong)((int)uVar12 >> (*(uint *)(iVar4 + 0x1c8) & 0x3f));
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar11,0,(uVar12 & 0x3fffffff) << 2);
      }
      *(undefined2 *)((int)param_1 + 0x96) = 0;
      *(undefined2 *)(param_1 + 0x26) = 0;
      param_1[10] = 9;
switchD_82c32de0_caseD_9:
      if (*(int *)(iVar4 + 0x118) == 1) {
        if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar4 + 0x244)) {
          do {
            iVar16 = (int)*(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar4 + 0x248));
            iVar24 = iVar16 * 0x6f0 + *(int *)(iVar4 + 0x140);
            if ((2 < *(int *)(iVar4 + 0x3c)) && (*(int *)(iVar16 * 8 + param_1[2] + 4) == 0)) {
              uVar22 = fn_82C3B338(param_1);
            }
            if ((int)uVar22 < 0) {
              return uVar22;
            }
            cVar1 = **(char **)(*(int *)(iVar24 + 0x1a8) + 0x10);
            if ((*(int *)(iVar24 + 0x28) == 0) && (*(int *)(iVar4 + 0x3c) < 3)) {
              if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(*(undefined4 *)(iVar24 + 4),0,*(int *)(iVar4 + 0x130) << 2);
              }
            }
            else {
              iVar16 = *(int *)(iVar4 + 0x3c);
              piVar14 = *(int **)(iVar24 + 4);
              uVar23 = 0xffffffff820ef578;
              if (2 < iVar16) {
                uVar23 = 0xffffffff820f9310;
              }
              if (cVar1 == '\x01') {
                if ((iVar16 < 3) || (*(int *)(iVar24 + 0x1bc) != 1)) {
                  if (iVar16 == 1) {
                    uVar22 = fn_82C30370(param_1 + 0x38,5,&uStack_b0);
                    if ((int)uVar22 < 0) {
                      return uVar22;
                    }
                    *piVar14 = uStack_b0 + 10;
                    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
                  }
                  if ((int)*(short *)(param_1 + 0x26) < *(int *)(iVar4 + 0x130)) {
                    do {
                      uVar22 = fn_82A75DF8(uVar23,param_1 + 0x38,&uStack_b0,&iStack_ac,0);
                      if ((int)uVar22 < 0) {
                        return uVar22;
                      }
                      uVar22 = fn_82A6D200(param_1 + 0x38,uStack_b0);
                      if ((int)uVar22 < 0) {
                        return uVar22;
                      }
                      iStack_ac = iStack_ac + -0x3c;
                      if ((*(int *)(iVar4 + 0x3c) < 3) || (*(short *)(param_1 + 0x26) != 0)) {
                        iVar16 = (int)*(short *)(param_1 + 0x26);
                        if (*(short *)(param_1 + 0x26) == 0) {
                          iVar18 = 0x24;
                        }
                        else {
                          iVar18 = piVar14[iVar16 + -1];
                        }
                      }
                      else {
                        trapWord(6,(ulonglong)*(uint *)(iVar24 + 0x1b4),0);
                        iVar18 = 0x2d / (int)*(uint *)(iVar24 + 0x1b4);
                        iVar16 = 0;
                      }
                      piVar14[iVar16] = iVar18 + iStack_ac;
                      sVar20 = *(short *)(param_1 + 0x26);
                      *(short *)(param_1 + 0x26) = sVar20 + 1;
                    } while ((int)(short)(sVar20 + 1) < *(int *)(iVar4 + 0x130));
                  }
                }
                else {
                  uVar22 = fn_82C3BA80(param_1,iVar24,*(undefined4 *)(iVar4 + 0x130));
                  if ((int)uVar22 < 0) {
                    return uVar22;
                  }
                }
                *(int *)(iVar4 + 0xe0) =
                     (int)*(short *)(*(short *)(iVar24 + 0x72) * 2 +
                                    *(int *)(*(int *)(iVar24 + 0x1a8) + 8));
                *(undefined2 *)(param_1 + 0x26) = 0;
              }
              else if (cVar1 == '\0') goto LAB_82c344a8;
              iVar16 = *piVar14;
              if (1 < *(int *)(iVar4 + 0x130)) {
                iVar19 = 1;
                iVar18 = 4;
                do {
                  if (iVar16 < *(int *)(iVar18 + (int)piVar14)) {
                    iVar16 = *(int *)(iVar18 + (int)piVar14);
                  }
                  sVar20 = (short)iVar19 + 1;
                  iVar19 = (int)sVar20;
                  iVar18 = iVar19 << 2;
                } while ((int)sVar20 < *(int *)(iVar4 + 0x130));
              }
              *(int *)(iVar24 + 0x40) = iVar16;
              *(undefined4 *)(iVar24 + 0x1bc) = 1;
            }
LAB_82c344a8:
            if ((2 < *(int *)(iVar4 + 0x3c)) && (cVar1 == '\x01')) {
              *(int *)(iVar24 + 0x1ac) = (int)*(short *)(iVar24 + 0x76);
              *(undefined4 *)(iVar24 + 0x1b0) = *(undefined4 *)(iVar4 + 0x130);
            }
            sVar20 = *(short *)((int)param_1 + 0x96) + 1;
            *(short *)((int)param_1 + 0x96) = sVar20;
          } while (sVar20 < *(short *)(iVar4 + 0x244));
        }
      }
      else {
        uVar22 = fn_82C39A48(param_1);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        if (*(int *)(iVar4 + 0x28) == 1) {
          fn_82C39F90(param_1);
        }
      }
      goto LAB_82c34520;
    case 0x21:
      goto switchD_82c32de0_caseD_21;
    case 0x24:
      goto switchD_82c32de0_caseD_24;
    case 0x25:
      goto switchD_82c32de0_caseD_25;
    case 0x26:
      goto switchD_82c32de0_caseD_26;
    case 0x27:
      goto switchD_82c32de0_caseD_27;
    case 0x28:
      uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      *(uint *)(iVar4 + 0x8c) = uStack_b0;
      if (uStack_b0 == 1) {
        param_1[10] = 0x29;
        *(undefined4 *)(iVar4 + 0x7c) = 1;
      }
      else {
        param_1[10] = 0x24;
      }
      break;
    case 0x29:
      uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      *(uint *)(iVar4 + 0x94) = uStack_b0;
      param_1[10] = 0x2a;
    case 0x2a:
      uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      *(uint *)(iVar4 + 0x9c) = uStack_b0;
      param_1[10] = 0x27;
switchD_82c32de0_caseD_27:
      uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      *(uint *)(iVar4 + 0xc0) = uStack_b0;
      param_1[10] = 0x24;
switchD_82c32de0_caseD_24:
      uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      *(uint *)(iVar4 + 0xcc) = uStack_b0;
      param_1[10] = 0x30;
switchD_82c32de0_caseD_30:
      uVar22 = fn_82A75588(param_1 + 0x38,*(undefined2 *)(iVar4 + 0x22));
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      if (0 < *(short *)(iVar4 + 0x244)) {
        iVar24 = 0;
        iVar16 = 0;
        do {
          iVar16 = *(short *)(iVar16 + *(int *)(iVar4 + 0x248)) * 0x6f0 + *(int *)(iVar4 + 0x140);
          uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          *(uint *)(iVar16 + 0x28) = uStack_b0;
          uVar22 = fn_82C1C360(iVar4,iVar16);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          sVar20 = (short)iVar24 + 1;
          iVar24 = (int)sVar20;
          iVar16 = iVar24 << 1;
        } while (sVar20 < *(short *)(iVar4 + 0x244));
      }
      *(undefined4 *)(iVar4 + 0x28) = 0;
      param_1[10] = 0x12;
switchD_82c32de0_caseD_12:
      if ((((*(int *)(iVar4 + 0x8c) == 1) && (*(int *)(iVar4 + 0xc0) == 1)) &&
          (*(int *)(iVar4 + 0xcc) != 1)) &&
         ((*(int *)(iVar4 + 0x94) != 1 && (*(int *)(iVar4 + 0x9c) != 1)))) {
        uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        if (uStack_b0 == 1) {
          return 0xffffffff80040002;
        }
        *(uint *)(iVar4 + 0xbc) = uStack_b0;
        if ((int)*(short *)(iVar4 + 0x244) != (uint)*(ushort *)(iVar4 + 0x22)) {
          return 0xffffffff80040002;
        }
      }
      param_1[10] = 0x26;
switchD_82c32de0_caseD_26:
      if (*(int *)(iVar4 + 0x78) == 1) {
        uVar22 = fn_82C30370(param_1 + 0x38,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        *(uint *)(iVar4 + 0xa4) = uStack_b0;
      }
      param_1[10] = 0x25;
switchD_82c32de0_caseD_25:
      if (*(int *)(iVar4 + 0x78) == 1) {
        if (*(int *)(iVar4 + 0xa4) == 1) {
          uVar22 = fn_82C30370(param_1 + 0x38,5,&uStack_b0);
          if ((int)uVar22 < 0) {
            return uVar22;
          }
          *(short *)(iVar4 + 0xa8) = (short)uStack_b0 + 1;
        }
      }
      else if ((*(int *)(iVar4 + 0xc0) == 1) && (*(int *)(iVar4 + 0xcc) != 1)) {
        uVar22 = fn_82C30370(param_1 + 0x38,6,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
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
switchD_82c32de0_caseD_2c:
      if ((*(int *)(iVar4 + 0x78) == 1) && (*(int *)(iVar4 + 0xa4) == 1)) {
        uVar22 = fn_82C30370(param_1 + 0x38,4,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        sVar20 = (short)uStack_b0;
        if (0xc < sVar20) {
          return 0xffffffff80040002;
        }
        if (sVar20 < 0) {
          return 0xffffffff80040002;
        }
        *(short *)(iVar4 + 0xaa) = sVar20;
      }
      param_1[10] = 0x2e;
switchD_82c32de0_caseD_2e:
      if ((*(int *)(iVar4 + 0x78) == 1) && (*(int *)(iVar4 + 0xa4) == 1)) {
        uVar22 = fn_82C30370(param_1 + 0x38,3,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        iVar16 = (short)uStack_b0 + 1;
        if (iVar16 < 1) {
          return 0xffffffff80040002;
        }
        if (8 < iVar16) {
          return 0xffffffff80040002;
        }
        *(short *)(iVar4 + 0xac) = (short)uStack_b0 + 1;
      }
      param_1[10] = 0x2d;
switchD_82c32de0_caseD_2d:
      if ((*(int *)(iVar4 + 0xcc) != 1) && (*(int *)(iVar4 + 0xc0) == 1)) {
        uVar22 = fn_82C30370(param_1 + 0x38,8,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        *(short *)(iVar4 + 0xae) = (short)uStack_b0 + 1;
      }
      if (*(int *)(iVar4 + 0x8c) != 1) {
        param_1[10] = 8;
        break;
      }
      iVar16 = 3;
      goto LAB_82c34524;
    case 0x2c:
      goto switchD_82c32de0_caseD_2c;
    case 0x2d:
      goto switchD_82c32de0_caseD_2d;
    case 0x2e:
      goto switchD_82c32de0_caseD_2e;
    case 0x30:
      goto switchD_82c32de0_caseD_30;
    case 0x34:
      piVar14 = param_1 + 0x38;
      uVar22 = fn_82A75588(piVar14,(ulonglong)*(ushort *)(iVar4 + 0x22) + 1);
      if ((int)uVar22 < 0) {
        return uVar22;
      }
      if (*(short *)(iVar4 + 0x22) == 1) {
        uVar22 = fn_82C30370(piVar14,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        *(uint *)(*(int *)(iVar4 + 0x140) + 0x28) = uStack_b0;
        iVar16 = *(int *)(iVar4 + 0x140);
        *(undefined4 *)(iVar16 + 0x44) = 0;
        uVar17 = (uint)LZCOUNT(*(undefined4 *)(iVar16 + 0x28));
        *(undefined4 *)(iVar4 + 0x11c) = 0;
      }
      else {
        uVar22 = fn_82C30370(piVar14,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        *(uint *)(*(int *)(iVar4 + 0x140) + 0x44) = uStack_b0;
        *(uint *)(*(int *)(iVar4 + 0x140) + 0x734) = uStack_b0;
        *(uint *)(iVar4 + 0x11c) = uStack_b0;
        uVar22 = fn_82C30370(piVar14,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        *(uint *)(*(int *)(iVar4 + 0x140) + 0x28) = uStack_b0;
        uVar22 = fn_82C30370(piVar14,1,&uStack_b0);
        if ((int)uVar22 < 0) {
          return uVar22;
        }
        *(uint *)(*(int *)(iVar4 + 0x140) + 0x718) = uStack_b0;
        iVar16 = *(int *)(iVar4 + 0x140);
        uVar17 = (uint)LZCOUNT(*(undefined4 *)(iVar16 + 0x718)) &
                 (uint)LZCOUNT(*(undefined4 *)(iVar16 + 0x28));
        fn_82C398E0(param_1,iVar16 + 0x6f0,*(int *)(iVar16 + 0x44) == 1);
      }
      *(undefined4 *)(iVar4 + 0x128) = 1;
      if (uVar17 >> 5 != 0) {
        if (*(int *)(iVar4 + 0x118) != 0) goto LAB_82c34604;
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        if (0 < *(short *)(iVar4 + 0x244)) {
          do {
            iVar16 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar4 + 0x248)) *
                     0x6f0 + *(int *)(iVar4 + 0x140);
            puVar6 = *(undefined1 **)(*(int *)(iVar16 + 0x1a8) + 0x10);
            if (*(short *)(iVar16 + 0x72) < 1) {
              *puVar6 = 1;
            }
            else {
              *puVar6 = 0;
            }
            sVar20 = *(short *)((int)param_1 + 0x96) + 1;
            *(short *)((int)param_1 + 0x96) = sVar20;
          } while (sVar20 < *(short *)(iVar4 + 0x244));
        }
        *(undefined2 *)((int)param_1 + 0x96) = 0;
LAB_82c345f0:
        uVar22 = fn_82C39A48(param_1);
LAB_82c345fc:
        if ((int)uVar22 < 0) {
          return uVar22;
        }
LAB_82c34604:
        param_1[10] = 10;
        return uVar22;
      }
      param_1[10] = 4;
    }
    if (param_1[10] == 10) {
      return uVar22;
    }
  } while( true );
}

