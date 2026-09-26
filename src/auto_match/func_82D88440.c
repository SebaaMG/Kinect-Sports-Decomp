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
#define TBLr 0
extern unsigned int *auStack_124;
extern unsigned int *auStack_13d;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D7D230();
extern int fn_82D84E70();
extern int fn_82D85148();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DB06D0();
extern unsigned int iStack_134;
extern unsigned int iStack_138;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_13e;
extern unsigned int uStack_13f;
extern unsigned int uStack_140;


void fn_82D88440(int param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 auStack_13d [5];
  int iStack_138;
  int iStack_134;
  undefined1 *puStack_130;
  uint uStack_12c;
  uint uStack_128;
  undefined1 auStack_124 [292];
  
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined1 *)(param_1 + 0x9c) = 1;
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar1 = "TtUpdateFilterOnWorld";
      uVar4 = TBLr;
      puVar1[1] = (int)uVar4;
      *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
    }
    if (param_2 == 0) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x2c)) {
        iVar11 = 0;
        do {
          iVar14 = 0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x28) + iVar11);
          if (0 < *(int *)(iVar3 + 0x4c)) {
            iVar13 = 0;
            do {
              fn_82D85148(param_1,*(undefined4 *)(iVar13 + *(int *)(iVar3 + 0x48)),0,param_3);
              iVar14 = iVar14 + 1;
              iVar13 = iVar13 + 4;
            } while (iVar14 < *(int *)(iVar3 + 0x4c));
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x2c));
      }
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x38)) {
        iVar11 = 0;
        do {
          iVar14 = 0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x34) + iVar11);
          if (0 < *(int *)(iVar3 + 0x4c)) {
            iVar13 = 0;
            do {
              fn_82D85148(param_1,*(undefined4 *)(*(int *)(iVar3 + 0x48) + iVar13),0,param_3);
              iVar14 = iVar14 + 1;
              iVar13 = iVar13 + 4;
            } while (iVar14 < *(int *)(iVar3 + 0x4c));
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x38));
      }
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x118)) {
        iVar11 = 0;
        do {
          fn_82D84E70(param_1,*(undefined4 *)(iVar11 + *(int *)(param_1 + 0x114)),param_3);
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x118));
      }
    }
    else {
      iStack_138 = param_1 + 0x28;
      iStack_134 = param_1 + 0x34;
      piVar10 = &iStack_138;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      lVar9 = 2;
      do {
        piVar2 = (int *)*piVar10;
        puStack_130 = auStack_124;
        uStack_12c = 0;
        iVar5 = 0;
        uStack_128 = 0x80000020;
        if (0 < piVar2[1]) {
          iVar11 = 0;
          do {
            uVar8 = 0;
            iVar14 = 0;
            iVar3 = *(int *)(*piVar2 + iVar11);
            uStack_12c = 0;
            if (0 < *(int *)(iVar3 + 0x60)) {
              iVar13 = 0;
              do {
                iVar14 = iVar14 + 1;
                uVar15 = *(uint *)(*(int *)(iVar3 + 0x5c) + iVar13);
                iVar13 = iVar13 + 4;
                if (iVar14 == *(int *)(iVar3 + 0x60)) {
                  uVar12 = *(int *)(iVar3 + 0x58) + uVar15;
                }
                else {
                  uVar12 = uVar15 + 0x200;
                }
                for (; uVar15 < uVar12; uVar15 = *(byte *)(uVar15 + 3) + uVar15) {
                  pcVar6 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 4))
                                             (auStack_13d,*(int *)(param_1 + 0x7c) + 8,
                                              *(undefined4 *)(uVar15 + 0x10),
                                              *(undefined4 *)(uVar15 + 0x14));
                  if ((*pcVar6 == '\0') ||
                     (*(char *)(*(char *)(*(int *)(uVar15 + 0x10) + 0x1a) * 10 +
                                (int)*(char *)(*(int *)(uVar15 + 0x14) + 0x1a) +
                                *(int *)(param_1 + 0x80) + 0x1bb0) == '\0')) {
                    iVar7 = fn_82CE5410();
                    if (uStack_12c == (uStack_128 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                      fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&puStack_130,4);
                    }
                    *(uint *)(puStack_130 + uStack_12c * 4) = uVar15;
                    uStack_12c = uStack_12c + 1;
                    *(byte *)(iVar3 + 0x25) = *(byte *)(iVar3 + 0x25) & 0x3f | 0x40;
                  }
                  else if ((int)param_3 == 1) {
                    fn_82D7D230(uVar15,*(undefined4 *)(param_1 + 0x78),iVar3);
                  }
                  uVar8 = uStack_12c;
                }
              } while (iVar14 < *(int *)(iVar3 + 0x60));
              while (uVar8 != 0) {
                uStack_12c = uVar8 - 1;
                fn_82DB06D0(*(undefined4 *)(puStack_130 + uVar8 * 4 + -4));
                uVar8 = uStack_12c;
              }
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar5 < piVar2[1]);
        }
        iVar5 = fn_82CE5410();
        uStack_12c = 0;
        if ((uStack_128 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                    (*(int **)(iVar5 + 0x10),puStack_130,uStack_128 & 0x3fffffff,4);
        }
        lVar9 = lVar9 + -1;
        puStack_130 = (undefined1 *)0x0;
        piVar10 = piVar10 + 1;
        uStack_128 = 0x80000000;
      } while (lVar9 != 0);
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
    if (*(int *)(param_1 + 0x94) == 0) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
      }
    }
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar1[1] = (int)uVar4;
      *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
    }
  }
  else {
    uStack_13f = (undefined1)param_2;
    uStack_13e = (undefined1)param_3;
    uStack_140 = 0x15;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),&uStack_140);
  }
  return;
}

