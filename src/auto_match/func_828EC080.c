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
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_d0;
extern int fn_82230218();
extern int fn_82230360();
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_828EA368();
extern int fn_828EA3D8();
extern int fn_828EA490();
extern int fn_828EA548();
extern int fn_828EA668();
extern int fn_828EA718();
extern int fn_828EB518();
extern int fn_828EB920();
extern int fn_828EFFD0();
extern int fn_82A1EF78();
extern int fn_82A2AB30();
extern __int64 lRam832144f8;
extern unsigned int lbl_832144F5;
extern unsigned int lbl_832144F6;
extern unsigned int uRam832144f4;
extern unsigned int uRam83214500;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_828EC080(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar6;
  undefined4 *puVar7;
  char cVar15;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar5;
  int iVar14;
  char *pcVar16;
  longlong lVar17;
  bool bVar19;
  char *pcVar18;
  int aiStack_15c [3];
  uint auStack_150 [4];
  undefined4 uStack_140;
  uint uStack_13c;
  uint auStack_130 [4];
  undefined4 uStack_120;
  uint uStack_11c;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  char acStack_f8 [24];
  int aiStack_e0 [4];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  
  aiStack_e0[0] = 0;
  bVar4 = false;
  iVar14 = 0;
  aiStack_e0[2] = 0;
  aiStack_e0[3] = 0;
  uRam832144f4 = 1;
  do {
    uStack_108 = 0;
    uStack_100 = 0;
    acStack_f8[0] = '\0';
    acStack_f8[1] = '\0';
    acStack_f8[2] = '\0';
    acStack_f8[3] = '\0';
    acStack_f8[4] = '\0';
    acStack_f8[5] = '\0';
    acStack_f8[6] = '\0';
    acStack_f8[7] = '\0';
    acStack_f8[8] = '\0';
    acStack_f8[9] = '\0';
    acStack_f8[10] = '\0';
    acStack_f8[0xb] = '\0';
    acStack_f8[0xc] = '\0';
    acStack_f8[0xd] = '\0';
    acStack_f8[0xe] = '\0';
    acStack_f8[0xf] = '\0';
    iVar6 = fn_82A2AB30(iVar14,0,auStack_110);
    if ((iVar6 == 0) || (bVar19 = false, iVar6 == 0x525)) {
      bVar19 = true;
    }
    if (!bVar19) {
      thunk_FUN_82a2b798();
    }
    puVar7 = (undefined4 *)fn_828EB518(iVar14);
    if ((iVar6 != 0) || (lVar17 = 1, (((U64)(uStack_108) >> 32) & 0xFFFFFFFF) == 0)) {
      lVar17 = 0;
    }
    if (lVar17 == 0) {
      if ((puVar7 != (undefined4 *)0x0) && (*(char *)(puVar7 + 0x36) == '\0')) {
        bVar4 = true;
        aiStack_e0[iVar14] = 1;
      }
    }
    else {
      uVar3 = (((U64)(uStack_108) >> 0) & 0xFFFFFFFF) >> 1 & 1;
      if ((((U64)(uStack_108) >> 32) & 0xFFFFFFFF) == 2) {
        cVar15 = fn_828EFFD0();
        bVar19 = true;
        if (cVar15 == '\0') goto LAB_828ec180;
      }
      else {
LAB_828ec180:
        bVar19 = false;
      }
      iVar6 = (((U64)(uStack_100) >> 32) & 0xFFFFFFFF);
      if (uVar3 == 0) {
        iVar6 = 4;
      }
      iVar8 = 0;
      if (bVar19) {
        if (uVar3 == 0) {
          iVar8 = fn_828EA368(iVar14);
        }
        else {
          iVar8 = fn_828EB518(iVar6);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar8 + 0x6c);
          }
        }
      }
      iVar9 = 0;
      iVar10 = 0;
      cVar15 = '\0';
      iVar11 = 2;
      if (bVar19) {
        if (uVar3 == 0) {
          iVar9 = fn_828EA3D8(iVar14,lVar17);
        }
        else {
          iVar9 = fn_828EB518(iVar6);
          if (iVar9 == 0) {
            iVar9 = 2;
          }
          else {
            iVar9 = *(int *)(iVar9 + 0x7c);
          }
        }
        if (uVar3 == 0) {
          iVar10 = fn_828EA490(iVar14,lVar17);
        }
        else {
          iVar10 = fn_828EB518(iVar6);
          if ((iVar10 == 0) || (lbl_832144F5 != '\0')) {
            iVar10 = 2;
          }
          else {
            iVar10 = *(int *)(iVar10 + 0x80);
          }
        }
        if (uVar3 == 0) {
          cVar15 = fn_828EA668(iVar14,lVar17);
        }
        else {
          iVar11 = fn_828EB518(iVar6);
          if (iVar11 == 0) {
            cVar15 = '\0';
          }
          else {
            cVar15 = *(char *)(iVar11 + 0x88);
          }
        }
        if (uVar3 == 0) {
          iVar11 = fn_828EA718(iVar14);
        }
        else {
          iVar12 = fn_828EB518(iVar6);
          iVar11 = 2;
          if (iVar12 != 0) {
            iVar11 = *(int *)(iVar12 + 0x8c);
          }
        }
        if (uVar3 == 0) {
          fn_828EA548(iVar14);
        }
        else {
          fn_828EB518(iVar6);
        }
      }
      if (puVar7 != (undefined4 *)0x0) {
        if (*(char *)(puVar7 + 0x36) == '\0') {
          pcVar18 = (char *)(puVar7 + 3);
          if (0xf < (uint)puVar7[8]) {
            pcVar18 = *(char **)pcVar18;
          }
          pcVar16 = acStack_f8;
          do {
            cVar1 = *pcVar18;
            cVar2 = *pcVar16;
            if (cVar1 == '\0') break;
            pcVar18 = pcVar18 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) goto LAB_828ec374;
        }
        else {
LAB_828ec374:
          if (((uVar3 == 0) || (*(char *)(puVar7 + 0x1d) == '\0')) || (puVar7[0x1e] == iVar6)) {
            if (iVar9 != puVar7[0x1f]) {
              puVar7[0x1f] = iVar9;
            }
            iVar9 = 2;
            if (lbl_832144F5 == '\0') {
              iVar9 = puVar7[0x20];
            }
            if (iVar10 != iVar9) {
              puVar7[0x20] = iVar10;
            }
            if (cVar15 != *(char *)(puVar7 + 0x22)) {
              *(char *)(puVar7 + 0x22) = cVar15;
              lbl_832144F6 = 1;
            }
            if (iVar11 != puVar7[0x23]) {
              puVar7[0x23] = iVar11;
              lbl_832144F6 = 1;
            }
            if (*(char *)(puVar7 + 0x36) != '\0') {
              uStack_13c = 0xf;
              uStack_140 = 0;
              auStack_150[0] = auStack_150[0] & 0xffffff;
              pcVar18 = acStack_f8;
              do {
                cVar15 = *pcVar18;
                pcVar18 = pcVar18 + 1;
              } while (cVar15 != '\0');
              fn_82230360(auStack_150,acStack_f8,pcVar18 + (-1 - (int)acStack_f8));
              fn_82230218(puVar7 + 3,auStack_150,0,0xffffffffffffffff);
              if (0xf < uStack_13c) {
                fn_8265CA20(auStack_150[0]);
              }
              uStack_13c = 0xf;
              uStack_140 = 0;
              auStack_150[0] = auStack_150[0] & 0xffffff;
              *(undefined1 *)(puVar7 + 0x36) = 0;
              *(undefined8 *)(puVar7 + 10) = 0;
            }
            if (puVar7[0x1b] != iVar8) {
              *(undefined8 *)(puVar7 + 10) = 0;
              if ((puVar7[0x1b] != 2) || (iVar8 != 1)) {
                puVar7[0x1b] = iVar8;
              }
              if (iVar8 == 0) {
                *(undefined1 *)(puVar7 + 0x1d) = 0;
                puVar7[0x1e] = 4;
              }
              else {
                *(char *)(puVar7 + 0x1d) = (char)uVar3;
                puVar7[0x1e] = iVar6;
              }
            }
            goto LAB_828ec5c8;
          }
        }
        (**(code **)*puVar7)(puVar7);
      }
      uStack_11c = 0xf;
      uStack_120 = 0;
      auStack_130[0] = auStack_130[0] & 0xffffff;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      pcVar18 = acStack_f8;
      do {
        cVar15 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar15 != '\0');
      fn_82230360(auStack_130,acStack_f8,pcVar18 + (-1 - (int)acStack_f8));
      fn_828EB920(iVar14,auStack_130,0,0,uStack_b8,uStack_b0,uStack_a8,
                    (ulonglong)uStack_a0 << 0x20);
      if (0xf < uStack_11c) {
        fn_8265CA20(auStack_130[0]);
      }
      uStack_11c = 0xf;
      uStack_120 = 0;
      auStack_130[0] = auStack_130[0] & 0xffffff;
      lbl_832144F6 = 1;
    }
LAB_828ec5c8:
    iVar14 = iVar14 + 1;
  } while (iVar14 < 4);
  if (bVar4) {
    piVar13 = (int *)fn_825089A0();
    lVar17 = (**(code **)(*piVar13 + 0xc))();
    if (lbl_832144F5 == '\0') {
      lbl_832144F5 = '\x01';
      lRam832144f8 = lVar17;
      goto LAB_828ec668;
    }
    if ((ulonglong)(lVar17 - lRam832144f8) < 0x7bc) goto LAB_828ec668;
    uVar5 = 0;
    piVar13 = aiStack_e0;
    do {
      if (*piVar13 != 0) {
        puVar7 = (undefined4 *)fn_828EB518(uVar5);
        (**(code **)*puVar7)();
      }
      uVar5 = uVar5 + 1;
      piVar13 = piVar13 + 1;
    } while ((uVar5 & 0xffffffff) < 4);
  }
  lbl_832144F5 = '\0';
LAB_828ec668:
  uVar5 = (ulonglong)uRam83214500;
  if (uVar5 == 0) {
    uVar5 = fn_82A1EF78(1);
    uRam83214500 = (uint)uVar5;
  }
  iVar14 = XNotifyGetNext(uVar5,0,aiStack_15c,auStack_d0);
  if ((iVar14 != 0) && (aiStack_15c[0] == 0x11)) {
    lbl_832144F6 = 1;
  }
  return;
}

