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
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82BA02A8();
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82B7AC20(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  longlong lVar22;
  undefined4 uStack_a0;
  uint uStack_9c;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  uStack_9c = 0;
  lVar22 = 0x1900;
  puVar18 = (uint *)(param_2 + 8);
  uStack_a0 = 0;
  bVar1 = false;
  lVar16 = 1;
  puVar14 = (undefined1 *)(iVar3 + 0x419f);
  do {
    puVar14 = puVar14 + 1;
    *puVar14 = 0xff;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  do {
    puVar19 = puVar18 + 1;
    uVar17 = *puVar18;
    iVar11 = (uVar17 & 0xffff) * 4;
    uVar6 = *(uint *)(iVar11 + -0x7ce92348);
    if ((uVar17 & 0xffff) == 0x28) {
      bVar1 = true;
      puVar18 = puVar19;
    }
    else {
      if (((uVar17 & 0xffff) == 0x1a) && ((uVar17 & 0x80000000) != 0)) {
        puVar19 = puVar18 + 2;
      }
      puVar20 = puVar19;
      if (*(int *)(iVar11 + -0x7ce92510) != 0) {
        puVar20 = puVar19 + 1;
        uVar17 = *puVar19;
        uVar4 = uVar17 >> 0x10 & 0x3f;
        iVar11 = ((uVar17 >> 10 & 0xfc0) + (uVar17 & 0xffff) + 0x1068) * 4;
        if ((((*(int *)(iVar11 + iVar3) == -1) && (uVar4 != 0)) && (uVar4 != 1)) && (uVar4 != 2)) {
          *(undefined4 *)(iVar11 + iVar3) = 0;
        }
        uVar7 = *(ushort *)puVar19 & 0x3f;
        if (*(char *)(param_2 + 5) == '\0') {
          if ((((uVar7 == 0xe) || (uVar7 == 0xf)) ||
              ((uVar7 == 0x12 || ((uVar7 == 0x13 || (uVar7 == 0x11)))))) || (uVar7 == 0x10))
          goto LAB_82b7ad88;
          bVar2 = uVar7 == 0x14;
LAB_82b7ad84:
          if (bVar2) goto LAB_82b7ad88;
        }
        else {
          if (uVar7 != 0x17) {
            bVar2 = uVar7 == 0x18;
            goto LAB_82b7ad84;
          }
LAB_82b7ad88:
          iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
          *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 0x800;
        }
        if ((*puVar19 & 0x400000) != 0) {
          if ((*puVar20 & 0x1e00) != 0) {
            iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
            *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 4;
          }
          puVar20 = puVar19 + 2;
        }
        if ((*puVar19 & 0x800000) != 0) {
          puVar20 = puVar20 + 1;
        }
      }
      uVar17 = 0;
      if (uVar6 != 0) {
        do {
          puVar19 = puVar20 + 1;
          uVar4 = *puVar20;
          uVar8 = uVar4 >> 0x10 & 0x3f;
          iVar11 = ((uVar4 >> 10 & 0xfc0) + (uVar4 & 0xffff) + 0x1068) * 4;
          if ((((*(int *)(iVar11 + iVar3) == -1) && (uVar8 != 0)) && (uVar8 != 1)) && (uVar8 != 2))
          {
            if (((uVar8 == 6) || (uVar8 == 8)) || ((uVar8 == 9 || (uVar8 == 10)))) {
              if (1 < (uVar4 & 0xffff)) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dadf8,0xffffffff820da3b8,0x3cb5)
                ;
              }
              iVar11 = ((*puVar20 >> 10 & 0xfc0) + (*puVar20 & 0xffff) + 0x1068) * 4;
            }
            *(undefined4 *)(iVar11 + iVar3) = 0;
          }
          if (((*puVar20 & 0x3f0000) == 0x10000) &&
             (((uVar7 = (ushort)*puVar18, uVar7 == 0x39 || (uVar7 == 0x3f)) ||
              ((uVar7 == 0x57 || (uVar7 == 0x59)))))) {
            iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
            *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 2;
          }
          uVar7 = *(ushort *)puVar20 & 0x3f;
          if (*(char *)(param_2 + 5) == '\0') {
            if (((((uVar7 == 0xe) || (uVar7 == 0xf)) || (uVar7 == 0x11)) ||
                ((uVar7 == 0x12 || (uVar7 == 0x13)))) || (uVar7 == 0x10)) goto LAB_82b7af30;
            bVar2 = uVar7 == 0x14;
LAB_82b7af2c:
            if (bVar2) goto LAB_82b7af30;
          }
          else {
            if (uVar7 != 0x17) {
              bVar2 = uVar7 == 0x18;
              goto LAB_82b7af2c;
            }
LAB_82b7af30:
            iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
            *(uint *)(iVar11 + iVar3) = 0x1000 << (uVar17 & 0x3f) | *(uint *)(iVar11 + iVar3);
          }
          if ((*puVar20 & 0x400000) != 0) {
            uVar4 = *puVar19;
            if ((((uVar4 & 7) == 4) || (uVar8 = uVar4 >> 4 & 7, uVar8 == 4)) ||
               ((uVar9 = uVar4 >> 8 & 7, uVar9 == 4 ||
                ((((uVar10 = uVar4 >> 0xc & 7, uVar10 == 4 || ((uVar4 & 7) == 5)) || (uVar8 == 5))
                 || ((uVar9 == 5 || (uVar10 == 5)))))))) {
              iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
              *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 1;
            }
            uVar4 = *puVar19;
            uVar8 = uVar4 >> 3 & 1;
            if (((uVar8 != (uVar4 >> 7 & 1)) || (uVar8 != (uVar4 >> 0xb & 1))) ||
               (uVar8 != (uVar4 >> 0xf & 1))) {
              iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
              *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 1;
            }
            if (((*puVar20 & 0x3f0000) == 0x10000) && ((*puVar19 & 0x100000) == 0x100000)) {
              iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
              *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 1;
            }
            uVar4 = *puVar19;
            if (((((uVar4 & 0x20000) == 0x20000) || ((uVar4 & 0x10000) == 0x10000)) ||
                ((uVar4 & 0x40000) == 0x40000)) ||
               (((uVar4 & 0x80000) == 0x80000 || ((uVar4 & 0xe00000) != 0)))) {
              iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
              *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 1;
            }
            puVar19 = puVar20 + 2;
          }
          uVar4 = *puVar20;
          puVar20 = puVar19;
          if ((((uVar4 & 0x800000) != 0) && (puVar20 = puVar19 + 1, (uVar4 & 0x3f0000) == 0x10000))
             && ((*puVar19 & 0x10000) == 0)) {
            iVar11 = (int)((lVar16 + 0xcdcU & 0xffffffff) << 2);
            *(uint *)(iVar11 + iVar3) = *(uint *)(iVar11 + iVar3) | 8;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar6);
      }
      uVar7 = (ushort)*puVar18;
      if (uVar7 == 0x1c) {
        puVar20 = puVar20 + 4;
      }
      else if (uVar7 == 0x1d) {
        puVar20 = puVar20 + 1;
      }
      if (((uVar7 == 8) || (uVar7 == 9)) || (uVar7 == 0x32)) {
        puVar20 = puVar20 + 1;
      }
      lVar16 = lVar16 + 1;
      puVar18 = puVar20;
    }
  } while (!bVar1);
  if (*(char *)(param_2 + 5) == '\0') {
    piVar15 = (int *)(iVar3 + 0x46a0);
    *(undefined4 *)(iVar3 + 0x5aa0) = 3;
    lVar16 = 0x10;
    do {
      if (*piVar15 != -1) {
        *piVar15 = *(int *)(iVar3 + 0x5aa0);
        *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
      }
      piVar15 = piVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    if (*(int *)(iVar3 + 0x44e0) != -1) {
      *(undefined4 *)(iVar3 + 0x44e0) = *(undefined4 *)(iVar3 + 0x5aa0);
      *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
    }
    if (*(int *)(iVar3 + 0x47a0) != -1) {
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      uVar21 = 1;
      iVar11 = fn_82AB6EC0(uVar5,0x3cb);
      if ((iVar11 == 0) || (iVar11 = fn_82AB6EC0(uVar5,0x3ce), iVar11 == 3)) {
        uVar21 = 0;
      }
      *(undefined4 *)(iVar3 + 0x47a0) = uVar21;
    }
    if (*(int *)(iVar3 + 0x49a0) != -1) {
      *(undefined4 *)(iVar3 + 0x49a0) = 0;
    }
    if (*(int *)(iVar3 + 0x4aa0) != -1) {
      *(undefined4 *)(iVar3 + 0x4aa0) = 1;
    }
    if (*(int *)(iVar3 + 0x4ba0) != -1) {
      *(undefined4 *)(iVar3 + 0x4ba0) = 1;
    }
    if (*(int *)(iVar3 + 0x48a0) != -1) {
      *(undefined4 *)(iVar3 + 0x48a0) = 2;
    }
    piVar15 = (int *)(iVar3 + 0x45a0);
    lVar16 = 0x40;
    do {
      if (*piVar15 != -1) {
        *piVar15 = *(int *)(iVar3 + 0x5aa0);
        *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
      }
      piVar15 = piVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    bVar1 = *(int *)(iVar3 + 0x4fa0) != -1;
    if (bVar1) {
      *(undefined4 *)(iVar3 + 0x4fa0) = 0x3e;
    }
    uStack_9c = (uint)bVar1;
    piVar15 = (int *)(iVar3 + 0x53a0);
    puVar12 = (undefined4 *)(param_1 + 0x4a0);
    lVar16 = 2;
    do {
      if (*piVar15 != -1) {
        uStack_a0 = 1;
        *puVar12 = *(undefined4 *)(iVar3 + 0x5aa4);
        *piVar15 = *(int *)(iVar3 + 0x5aa4);
        *(int *)(iVar3 + 0x5aa4) = *(int *)(iVar3 + 0x5aa4) + 1;
      }
      puVar12 = puVar12 + 1;
      piVar15 = piVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    piVar15 = (int *)(iVar3 + 0x54a0);
    puVar12 = (undefined4 *)(param_1 + 0x4e0);
    lVar16 = 2;
    do {
      if (*piVar15 != -1) {
        uStack_a0 = 1;
        *puVar12 = *(undefined4 *)(iVar3 + 0x5aa4);
        *piVar15 = *(int *)(iVar3 + 0x5aa4);
        *(int *)(iVar3 + 0x5aa4) = *(int *)(iVar3 + 0x5aa4) + 1;
      }
      puVar12 = puVar12 + 1;
      piVar15 = piVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    piVar15 = (int *)(iVar3 + 0x52a0);
    puVar12 = (undefined4 *)(param_1 + 0x460);
    lVar16 = 0x10;
    do {
      if (*piVar15 != -1) {
        uStack_a0 = 1;
        *puVar12 = *(undefined4 *)(iVar3 + 0x5aa4);
        *piVar15 = *(int *)(iVar3 + 0x5aa4);
        *(int *)(iVar3 + 0x5aa4) = *(int *)(iVar3 + 0x5aa4) + 1;
      }
      puVar12 = puVar12 + 1;
      piVar15 = piVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    piVar15 = (int *)(iVar3 + 0x50a0);
    puVar12 = (undefined4 *)(param_1 + 0x3e0);
    lVar16 = 0x10;
    do {
      if (*piVar15 != -1) {
        uStack_a0 = 1;
        *puVar12 = *(undefined4 *)(iVar3 + 0x5aa4);
        *piVar15 = *(int *)(iVar3 + 0x5aa4);
        *(int *)(iVar3 + 0x5aa4) = *(int *)(iVar3 + 0x5aa4) + 1;
      }
      puVar12 = puVar12 + 1;
      piVar15 = piVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    if (*(int *)(iVar3 + 0x51a0) != -1) {
      uStack_a0 = 1;
      *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(iVar3 + 0x5aa4);
      iVar11 = *(int *)(iVar3 + 0x5aa4);
      *(int *)(iVar3 + 0x5aa4) = iVar11 + 1;
      *(int *)(iVar3 + 0x51a0) = iVar11;
    }
    if (*(int *)(iVar3 + 0x4ea0) != -1) {
      iVar11 = *(int *)(iVar3 + 0x5aa4);
      uStack_a0 = 1;
      *(int *)(iVar3 + 0x5aa4) = iVar11 + 1;
      *(int *)(iVar3 + 0x4ea0) = iVar11;
    }
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(iVar3 + 0x5aa4);
    goto LAB_82b7b67c;
  }
  piVar15 = (int *)(param_1 + 0x4a0);
  piVar13 = (int *)(iVar3 + 0x53a0);
  lVar16 = 2;
  do {
    iVar11 = *piVar15;
    if (*piVar13 == -1) {
      if (iVar11 != -1) goto LAB_82b7b428;
    }
    else if (iVar11 == -1) {
      *piVar13 = -0x11111112;
    }
    else {
      *piVar13 = iVar11;
LAB_82b7b428:
      *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
    }
    piVar13 = piVar13 + 1;
    piVar15 = piVar15 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  piVar15 = (int *)(param_1 + 0x4e0);
  piVar13 = (int *)(iVar3 + 0x54a0);
  lVar16 = 2;
  do {
    iVar11 = *piVar15;
    if (*piVar13 == -1) {
      if (iVar11 != -1) goto LAB_82b7b480;
    }
    else if (iVar11 == -1) {
      *piVar13 = -0x11111112;
    }
    else {
      *piVar13 = iVar11;
LAB_82b7b480:
      *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
    }
    piVar13 = piVar13 + 1;
    piVar15 = piVar15 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  piVar15 = (int *)(param_1 + 0x460);
  piVar13 = (int *)(iVar3 + 0x52a0);
  lVar16 = 0x10;
  do {
    iVar11 = *piVar15;
    if (*piVar13 == -1) {
      if (iVar11 != -1) goto LAB_82b7b4d8;
    }
    else if (iVar11 == -1) {
      *piVar13 = -0x11111112;
    }
    else {
      *piVar13 = iVar11;
LAB_82b7b4d8:
      *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
    }
    piVar13 = piVar13 + 1;
    piVar15 = piVar15 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  piVar15 = (int *)(param_1 + 0x3e0);
  piVar13 = (int *)(iVar3 + 0x50a0);
  lVar16 = 0x10;
  do {
    iVar11 = *piVar15;
    if (*piVar13 == -1) {
      if (iVar11 != -1) goto LAB_82b7b530;
    }
    else if (iVar11 == -1) {
      *piVar13 = -0x11111112;
    }
    else {
      *piVar13 = iVar11;
LAB_82b7b530:
      *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
    }
    piVar13 = piVar13 + 1;
    piVar15 = piVar15 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  iVar11 = *(int *)(param_1 + 0x420);
  if (*(int *)(iVar3 + 0x51a0) == -1) {
    if (iVar11 != -1) goto LAB_82b7b570;
  }
  else if (iVar11 == -1) {
    *(undefined4 *)(iVar3 + 0x51a0) = 0xeeeeeeee;
  }
  else {
LAB_82b7b570:
    *(int *)(iVar3 + 0x51a0) = iVar11;
    *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
  }
  if ((*(int *)(iVar3 + 0x55a0) != -1) || (*(int *)(iVar3 + 0x56a0) != -1)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,15999);
  }
  if (*(int *)(iVar3 + 0x57a0) != -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x3e85);
  }
  if (*(int *)(iVar3 + 0x48a0) != -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x3e8c);
  }
  piVar15 = (int *)(iVar3 + 0x45a0);
  lVar16 = 0x40;
  do {
    if (*piVar15 != -1) {
      *piVar15 = *(int *)(iVar3 + 0x5aa0);
      *(int *)(iVar3 + 0x5aa0) = *(int *)(iVar3 + 0x5aa0) + 1;
    }
    piVar15 = piVar15 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  piVar15 = (int *)(iVar3 + 0x58a0);
  lVar16 = 4;
  do {
    if (*piVar15 != -1) {
      *piVar15 = *(int *)(iVar3 + 0x5aa4);
      *(int *)(iVar3 + 0x5aa4) = *(int *)(iVar3 + 0x5aa4) + 1;
    }
    piVar15 = piVar15 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  if (*(int *)(iVar3 + 0x59a0) != -1) {
    *(undefined4 *)(iVar3 + 0x59a0) = 0x3f;
  }
LAB_82b7b67c:
  *(uint *)(iVar3 + 0x5b48) = uStack_9c;
  *(undefined4 *)(iVar3 + 0x5b4c) = uStack_a0;
  fn_82BA02A8(param_1);
  return;
}

