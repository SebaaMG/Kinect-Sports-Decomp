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
extern unsigned int *auStack_7c;
extern int fn_82A2A108();
extern int fn_82A2A288();
extern int fn_82F63BA0();
extern int fn_82F641F8();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F682B0();
extern int fn_82F68BF0();
extern int fn_82F855A8();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;


int fn_82F7BCA0(uint param_1,byte *param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar11;
  int iVar9;
  byte *pbVar10;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  char acStack_80 [4];
  uint auStack_7c [31];
  
  iVar6 = -2;
  if (param_1 == 0xfffffffe) {
    puVar3 = (undefined4 *)fn_82F68278();
    *puVar3 = 0;
    puVar3 = (undefined4 *)fn_82F68240();
    uVar7 = 9;
LAB_82f7bcdc:
    *puVar3 = uVar7;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < lbl_8329F60C)) {
    iVar1 = (int)param_1 >> 5;
    iVar12 = (param_1 & 0x1f) * 0x48;
    bVar8 = *(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 4);
    if ((bVar8 & 1) != 0) {
      if ((param_3 & 0xffffffff) < 0x80000000) {
        iVar9 = 0;
        if (((param_3 & 0xffffffff) == 0) || ((bVar8 & 2) != 0)) {
          return 0;
        }
        if (param_2 != (byte *)0x0) {
          cVar11 = *(char *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x28) >> 1;
          if (cVar11 == '\x01') {
            if ((~param_3 & 1) == 0) goto LAB_82f7bda0;
            uVar14 = (param_3 & 0xffffffff) >> 1;
            if (uVar14 < 4) {
              uVar14 = 4;
            }
            pbVar4 = (byte *)fn_82F68BF0(uVar14);
            if (pbVar4 == (byte *)0x0) {
              puVar3 = (undefined4 *)fn_82F68240();
              *puVar3 = 0xc;
              puVar3 = (undefined4 *)fn_82F68278();
              uVar7 = 8;
              goto LAB_82f7bcdc;
            }
            uVar2 = fn_82F855A8(param_1,0,1);
            *(undefined8 *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x30) = uVar2;
          }
          else {
            uVar14 = param_3;
            pbVar4 = param_2;
            if (cVar11 == '\x02') {
              if ((~param_3 & 1) == 0) goto LAB_82f7bda0;
              uVar14 = param_3 & 0xfffffffe;
            }
          }
          uVar15 = uVar14;
          pbVar16 = pbVar4;
          if ((((*(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 4) & 0x48) != 0) &&
              (bVar8 = *(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 5), bVar8 != 10)) &&
             ((uVar14 & 0xffffffff) != 0)) {
            *pbVar4 = bVar8;
            pbVar16 = pbVar4 + 1;
            iVar9 = 1;
            *(undefined1 *)(iVar12 + (&lbl_8329F620)[iVar1] + 5) = 10;
            uVar15 = uVar14 - 1;
            if (((cVar11 != '\0') &&
                (bVar8 = *(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x29), bVar8 != 10)) &&
               ((uVar15 & 0xffffffff) != 0)) {
              *pbVar16 = bVar8;
              pbVar16 = pbVar4 + 2;
              iVar9 = 2;
              *(undefined1 *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x29) = 10;
              uVar15 = uVar14 - 2;
              if (((cVar11 == '\x01') &&
                  (bVar8 = *(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x2a), bVar8 != 10)) &&
                 ((uVar15 & 0xffffffff) != 0)) {
                *pbVar16 = bVar8;
                pbVar16 = pbVar4 + 3;
                iVar9 = 3;
                *(undefined1 *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x2a) = 10;
                uVar15 = uVar14 - 3;
              }
            }
          }
          iVar5 = fn_82A2A108(*(undefined4 *)(iVar12 + (&lbl_8329F620)[iVar1]),pbVar16,uVar15,
                                    auStack_7c,0);
          if (((iVar5 == 0) || ((int)auStack_7c[0] < 0)) ||
             ((uVar15 & 0xffffffff) < (ulonglong)auStack_7c[0])) {
            iVar6 = thunk_FUN_82a2b798();
            if (iVar6 != 5) {
              if (iVar6 == 0x6d) {
                iVar6 = 0;
                goto LAB_82f7c234;
              }
              goto LAB_82f7c22c;
            }
            puVar3 = (undefined4 *)fn_82F68240();
            *puVar3 = 9;
            puVar3 = (undefined4 *)fn_82F68278();
            uVar7 = 5;
LAB_82f7c16c:
            *puVar3 = uVar7;
          }
          else {
            iVar9 = auStack_7c[0] + iVar9;
            iVar5 = iVar12 + (&lbl_8329F620)[iVar1];
            if ((*(byte *)(iVar5 + 4) & 0x80) == 0) goto LAB_82f7c234;
            if ((auStack_7c[0] == 0) || (*pbVar4 != 10)) {
              bVar8 = *(byte *)(iVar5 + 4) & 0xfb;
            }
            else {
              bVar8 = *(byte *)(iVar5 + 4) | 4;
            }
            *(byte *)(iVar5 + 4) = bVar8;
            pbVar16 = pbVar4;
            pbVar10 = pbVar4;
            while (pbVar10 < pbVar4 + iVar9) {
              bVar8 = *pbVar10;
              if (bVar8 == 0x1a) {
                iVar9 = iVar12 + (&lbl_8329F620)[iVar1];
                if ((*(byte *)(iVar9 + 4) & 0x40) == 0) {
                  *(byte *)(iVar9 + 4) = *(byte *)(iVar9 + 4) | 2;
                }
                else {
                  *pbVar16 = 0x1a;
                  pbVar16 = pbVar16 + 1;
                }
                break;
              }
              if (bVar8 != 0xd) {
                *pbVar16 = bVar8;
                pbVar13 = pbVar10 + 1;
                goto LAB_82f7c0b8;
              }
              if (pbVar10 < pbVar4 + iVar9 + -1) {
                pbVar13 = pbVar10 + 1;
                if (pbVar10[1] == 10) {
                  *pbVar16 = 10;
                  pbVar13 = pbVar10 + 2;
                }
                else {
                  *pbVar16 = 0xd;
                }
                goto LAB_82f7c0b8;
              }
              pbVar13 = pbVar10 + 1;
              iVar5 = fn_82A2A108(*(undefined4 *)(iVar12 + (&lbl_8329F620)[iVar1]),acStack_80,
                                        1,auStack_7c,0);
              if (((iVar5 == 0) && (iVar5 = thunk_FUN_82a2b798(), iVar5 != 0)) ||
                 (auStack_7c[0] == 0)) goto LAB_82f7c0b4;
              if ((*(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 4) & 0x48) != 0) {
                if (acStack_80[0] != '\n') {
                  *pbVar16 = 0xd;
                  *(char *)(iVar12 + (&lbl_8329F620)[iVar1] + 5) = acStack_80[0];
                  goto LAB_82f7c0b8;
                }
LAB_82f7c064:
                *pbVar16 = 10;
                goto LAB_82f7c0b8;
              }
              if ((pbVar16 == pbVar4) && (acStack_80[0] == '\n')) goto LAB_82f7c064;
              fn_82F855A8(param_1,0xffffffffffffffff,1);
              pbVar10 = pbVar13;
              if (acStack_80[0] != '\n') {
LAB_82f7c0b4:
                *pbVar16 = 0xd;
LAB_82f7c0b8:
                pbVar16 = pbVar16 + 1;
                pbVar10 = pbVar13;
              }
            }
            iVar9 = (int)pbVar16 - (int)pbVar4;
            if ((cVar11 != '\x01') || (iVar9 == 0)) goto LAB_82f7c234;
            bVar8 = pbVar16[-1];
            if ((bVar8 & 0x80) != 0) {
              iVar5 = 1;
              cVar11 = *(char *)(bVar8 + 0x831bbda0);
              pbVar16 = pbVar16 + -1;
              while (((cVar11 == '\0' && (iVar5 < 5)) && (pbVar4 <= pbVar16))) {
                pbVar16 = pbVar16 + -1;
                bVar8 = *pbVar16;
                iVar5 = iVar5 + 1;
                cVar11 = *(char *)(bVar8 + 0x831bbda0);
              }
              if (cVar11 == '\0') {
                puVar3 = (undefined4 *)fn_82F68240();
                uVar7 = 0x2a;
                goto LAB_82f7c16c;
              }
              if (cVar11 + 1 == iVar5) {
                pbVar16 = pbVar16 + iVar5;
              }
              else if ((*(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 4) & 0x48) == 0) {
                fn_82F855A8(param_1,-iVar5,1);
              }
              else {
                *(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 5) = bVar8;
                pbVar10 = pbVar16 + 1;
                if (1 < iVar5) {
                  bVar8 = *pbVar10;
                  pbVar10 = pbVar16 + 2;
                  *(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x29) = bVar8;
                }
                if (iVar5 == 3) {
                  bVar8 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                  *(byte *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x2a) = bVar8;
                }
                pbVar16 = pbVar10 + -iVar5;
              }
            }
            iVar5 = fn_82A2A288(0xfde9,0,pbVar4,(int)pbVar16 - (int)pbVar4,param_2,
                                      (param_3 & 0xffffffff) >> 1);
            if (iVar5 != 0) {
              iVar9 = iVar5 << 1;
              *(uint *)(iVar12 + (&lbl_8329F620)[iVar1] + 0x38) =
                   (uint)((int)pbVar16 - (int)pbVar4 != iVar5);
              goto LAB_82f7c234;
            }
            thunk_FUN_82a2b798();
            iVar9 = 0;
LAB_82f7c22c:
            fn_82F682B0();
          }
          iVar6 = -1;
LAB_82f7c234:
          if (pbVar4 != param_2) {
            fn_82F641F8(pbVar4);
          }
          if (iVar6 == -2) {
            return iVar9;
          }
          return iVar6;
        }
LAB_82f7bda0:
        puVar3 = (undefined4 *)fn_82F68278();
        *puVar3 = 0;
      }
      else {
        puVar3 = (undefined4 *)fn_82F68278();
        *puVar3 = 0;
      }
      puVar3 = (undefined4 *)fn_82F68240();
      uVar7 = 0x16;
      goto LAB_82f7bd18;
    }
  }
  puVar3 = (undefined4 *)fn_82F68278();
  *puVar3 = 0;
  puVar3 = (undefined4 *)fn_82F68240();
  uVar7 = 9;
LAB_82f7bd18:
  *puVar3 = uVar7;
  fn_82F63BA0();
  return -1;
}

