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
extern unsigned int *auStack_530;
extern unsigned int *auStack_550;
extern unsigned int *auStack_558;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822AA940();
extern int fn_822AAAC8();
extern int fn_822AAC50();
extern int fn_822AADD8();
extern int fn_822ABCE0();
extern int fn_822AC078();
extern int fn_822AC4E8();
extern int fn_822AC918();
extern int fn_822AE510();
extern int fn_822B7620();
extern int fn_8235A0D0();
extern int fn_8247E6E8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520780();
extern int fn_8258E3A8();
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();
extern int fn_82F64988();
extern unsigned int iStack00000044;
extern unsigned int iStack_568;
extern unsigned int iStack_56c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_83265A28;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_528;
extern unsigned int uStack_55c;


void fn_822AB218(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,int param_7)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar5;
  undefined4 uVar6;
  longlong lVar4;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  int iStack00000044;
  int iStack_56c;
  int iStack_568;
  undefined4 *puStack_564;
  undefined **ppuStack_560;
  undefined4 uStack_55c;
  undefined1 auStack_558 [8];
  undefined1 auStack_550 [32];
  undefined1 auStack_530 [8];
  undefined4 uStack_528;
  
  bVar1 = false;
  lVar18 = 7;
  piVar9 = (int *)(param_3 + 0x54);
  iVar12 = 0;
  lVar15 = 0;
  do {
    piVar9 = piVar9 + 2;
    iVar12 = *piVar9 + iVar12;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iStack_56c = 0;
  dVar19 = (double)lbl_8218E8E8;
  puStack_564 = &lbl_83265A28;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  iStack00000044 = param_7;
  do {
    iVar14 = (iStack_56c + 0xb) * 8 + param_3;
    if (*(int *)(iVar14 + 4) != 0) {
      iVar5 = 0;
      uVar2 = fn_8251F720(iVar14,0);
      if (uVar2 != 0) {
        uVar3 = fn_8251FBA8(uVar2);
        iVar5 = fn_8265CA60();
        fn_82A1DD38(iVar5,uVar2,uVar3);
      }
      iVar13 = 0;
      *(undefined1 **)(iVar5 + 0x48) = auStack_530;
      uStack_528 = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(*(int *)(iVar5 + 0x48) + 4) = param_2;
      *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0xc) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x46c) = 0;
      if (0 < *(int *)(iVar14 + 4)) {
        do {
          iVar16 = (int)lVar15;
          **(int **)(iVar5 + 0x48) = iVar16;
          fn_822AC918(*(undefined4 *)(param_1 + 0x48),lVar15,
                          (ulonglong)*(uint *)(iVar5 + 0x48) + 0x10,
                          (ulonglong)*(uint *)(iVar5 + 0x48) + 0x20);
          *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x34) = 0;
          *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x3c) = 0;
          *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x38) = 0;
          *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x468) =
               *(undefined4 *)(*(int *)(param_3 + 0x90) + 8);
          if (iVar16 < **(int **)(param_3 + 0x90)) {
            *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x34) = 1;
            uVar6 = fn_822AC078(param_1,iVar5,param_3);
            *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x3c) = uVar6;
          }
          if (*(int *)(*(int *)(iVar5 + 0x48) + 0x3c) != 0) {
            uVar6 = fn_8247E6E8();
            *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x38) = uVar6;
          }
          if (((int *)(param_1 + 0x54) != (int *)0x0) &&
             (iVar17 = *(int *)(param_1 + 0x54), iVar17 != 0)) {
            *(int *)(*(int *)(iVar5 + 0x48) + 0x46c) = iVar17;
            *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x470) = *(undefined4 *)(param_1 + 0x58);
            *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x474) = *(undefined4 *)(param_1 + 0x5c);
            *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x478) = 0;
            if (((int *)(param_1 + 0x60) != (int *)0x0) &&
               (iVar17 = *(int *)(param_1 + 0x60), iVar17 != 0)) {
              *(int *)(*(int *)(iVar5 + 0x48) + 0x478) = iVar17;
            }
          }
          if (iVar12 < 3) {
            lVar18 = (longlong)*(int *)(param_1 + 0x10) * (longlong)iVar12;
LAB_822ab448:
            lVar18 = lVar18 + lVar15;
          }
          else {
            if (iVar16 < 2) {
              lVar18 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffffff) << 1;
              goto LAB_822ab448;
            }
            lVar18 = -1;
          }
          iVar17 = *(int *)(iVar5 + 0x48);
          uVar3 = fn_82520780(dVar19,puStack_564);
          lVar4 = fn_822AE510(param_4,iVar17 + 0x428,*(undefined4 *)(iVar17 + 0x3c),uVar3,lVar18
                                  ,iVar17 + 0x40,iVar17 + 0x30);
          if (*(int *)(param_1 + 100) != 0) {
            fn_82F64988((ulonglong)*(uint *)(iVar5 + 0x48) + 0x428,0x20,param_1 + 0x68);
          }
          iVar17 = (int)lVar4;
          if ((-1 < iVar17) && (*(int *)(*(int *)(iVar5 + 0x48) + 0x3c) != 0)) {
            *(undefined4 *)((int)((lVar4 + 0x22e1U & 0xffffffff) << 2) + param_4) = 1;
            *(uint *)((int)((lVar4 + 0x2304U & 0xffffffff) << 2) + param_4) =
                 (uint)*(byte *)(*(int *)(*(int *)(iVar5 + 0x48) + 0x3c) + 0xd8);
          }
          bVar10 = false;
          if (*(int *)(*(int *)(iVar5 + 0x48) + 0x38) != 0) {
            if ((int)lVar18 == 0) {
              piVar11 = (int *)(param_2 + 0x90);
              piVar9 = (int *)(param_2 + 0x94);
            }
            else {
              piVar11 = (int *)(param_2 + 0x98);
              piVar9 = (int *)(param_2 + 0x9c);
            }
            if ((*piVar11 != 0) && (*piVar9 != 0)) {
              *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x38) = 0;
              *(int *)(*(int *)(iVar5 + 0x48) + 0x47c) = *piVar11;
              *(int *)(*(int *)(iVar5 + 0x48) + 0x480) = *piVar9;
              *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484) = 0;
              if (-1 < iVar17) {
                *(undefined4 *)((int)((lVar4 + 0x2278U & 0xffffffff) << 2) + param_4) =
                     *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x47c);
                *(undefined4 *)((int)((lVar4 + 0x229bU & 0xffffffff) << 2) + param_4) =
                     *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x480);
                puVar7 = (undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484);
                if (puVar7 == (undefined4 *)0x0) {
                  *(undefined4 *)((int)((lVar4 + 0x22beU & 0xffffffff) << 2) + param_4) = 0;
                }
                else {
                  *(undefined4 *)((int)((lVar4 + 0x22beU & 0xffffffff) << 2) + param_4) = *puVar7;
                }
              }
              bVar10 = true;
            }
          }
          if ((-1 < iVar17) && (*(int *)(*(int *)(iVar5 + 0x48) + 0x38) != 0)) {
            *(undefined4 *)((int)((lVar4 + 8999U & 0xffffffff) << 2) + param_4) = 1;
          }
          if ((!bVar1) && (*(int *)(*(int *)(iVar5 + 0x48) + 0x3c) != 0)) {
            bVar1 = true;
          }
          if (!bVar10) {
            if (iStack_56c == 0) {
              if (bVar1) {
                if (iStack00000044 == 1) {
                  piVar9 = (int *)(param_2 + 0x24);
                  if (*(int *)(param_2 + 0x24) == 0) {
                    piVar9 = (int *)(param_2 + 0x14);
                  }
                  iVar8 = *(int *)(param_2 + 0x28);
                  piVar11 = (int *)(param_2 + 0x28);
LAB_822ab6b0:
                  if (iVar8 == 0) goto LAB_822ab6b8;
                }
                else {
                  if (iStack00000044 == 2) {
                    piVar9 = (int *)(param_2 + 0x2c);
                    if (*(int *)(param_2 + 0x2c) == 0) {
                      piVar9 = (int *)(param_2 + 0x14);
                    }
                    iVar8 = *(int *)(param_2 + 0x30);
                    piVar11 = (int *)(param_2 + 0x30);
                    goto LAB_822ab6b0;
                  }
                  if (iStack00000044 == 3) {
                    piVar9 = (int *)(param_2 + 0x34);
                    if (*(int *)(param_2 + 0x34) == 0) {
                      piVar9 = (int *)(param_2 + 0x14);
                    }
                    iVar8 = *(int *)(param_2 + 0x38);
                    piVar11 = (int *)(param_2 + 0x38);
                    goto LAB_822ab6b0;
                  }
                  piVar9 = (int *)(param_2 + 0x14);
LAB_822ab6b8:
                  piVar11 = (int *)(param_2 + 0x18);
                }
                puVar7 = (undefined4 *)fn_822AA940(param_2);
              }
              else {
                piVar9 = (int *)(param_2 + 0x3c);
                piVar11 = (int *)(param_2 + 0x40);
                puVar7 = (undefined4 *)fn_822AAC50(param_2);
              }
              if (puVar7 == (undefined4 *)0x0) {
                *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484) = 0;
              }
              else {
                *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484) = *puVar7;
              }
              if ((*piVar9 == 0) || (*piVar11 == 0)) {
LAB_822ab8a4:
                *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x47c) = 0;
                *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x480) = 0;
              }
              else {
                *(int *)(*(int *)(iVar5 + 0x48) + 0x47c) = *piVar9;
                *(int *)(*(int *)(iVar5 + 0x48) + 0x480) = *piVar11;
              }
            }
            else {
              if (bVar1) {
                piVar9 = (int *)(param_2 + 0x1c);
                piVar11 = (int *)(param_2 + 0x20);
                puVar7 = (undefined4 *)fn_822AAAC8();
              }
              else {
                piVar9 = (int *)(param_2 + 0x44);
                piVar11 = (int *)(param_2 + 0x48);
                puVar7 = (undefined4 *)fn_822AADD8(param_2);
              }
              if ((*piVar9 == 0) || (*piVar11 == 0)) {
                if (bVar1) {
                  if (iStack00000044 == 1) {
                    piVar9 = (int *)(param_2 + 0x24);
                    if (*(int *)(param_2 + 0x24) == 0) {
                      piVar9 = (int *)(param_2 + 0x14);
                    }
                    iVar8 = *(int *)(param_2 + 0x28);
                    piVar11 = (int *)(param_2 + 0x28);
LAB_822ab830:
                    if (iVar8 == 0) goto LAB_822ab838;
                  }
                  else {
                    if (iStack00000044 == 2) {
                      piVar9 = (int *)(param_2 + 0x2c);
                      if (*(int *)(param_2 + 0x2c) == 0) {
                        piVar9 = (int *)(param_2 + 0x14);
                      }
                      iVar8 = *(int *)(param_2 + 0x30);
                      piVar11 = (int *)(param_2 + 0x30);
                      goto LAB_822ab830;
                    }
                    if (iStack00000044 == 3) {
                      piVar9 = (int *)(param_2 + 0x34);
                      if (*(int *)(param_2 + 0x34) == 0) {
                        piVar9 = (int *)(param_2 + 0x14);
                      }
                      iVar8 = *(int *)(param_2 + 0x38);
                      piVar11 = (int *)(param_2 + 0x38);
                      goto LAB_822ab830;
                    }
                    piVar9 = (int *)(param_2 + 0x14);
LAB_822ab838:
                    piVar11 = (int *)(param_2 + 0x18);
                  }
                  puVar7 = (undefined4 *)fn_822AA940(param_2);
                }
                else {
                  piVar9 = (int *)(param_2 + 0x3c);
                  piVar11 = (int *)(param_2 + 0x40);
                  puVar7 = (undefined4 *)fn_822AAC50(param_2);
                }
                if (puVar7 == (undefined4 *)0x0) {
                  *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484) = 0;
                }
                else {
                  *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484) = *puVar7;
                }
                if ((*piVar9 == 0) || (*piVar11 == 0)) goto LAB_822ab8a4;
                *(int *)(*(int *)(iVar5 + 0x48) + 0x47c) = *piVar9;
                *(int *)(*(int *)(iVar5 + 0x48) + 0x480) = *piVar11;
              }
              else {
                *(int *)(*(int *)(iVar5 + 0x48) + 0x47c) = *piVar9;
                *(int *)(*(int *)(iVar5 + 0x48) + 0x480) = *piVar11;
                if (puVar7 == (undefined4 *)0x0) {
                  *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484) = 0;
                }
                else {
                  *(undefined4 *)(*(int *)(iVar5 + 0x48) + 0x484) = *puVar7;
                }
              }
            }
            if (-1 < iVar17) {
              *(int *)((int)((lVar4 + 0x2278U & 0xffffffff) << 2) + param_4) = *piVar9;
              *(int *)((int)((lVar4 + 0x229bU & 0xffffffff) << 2) + param_4) = *piVar11;
              iVar8 = (int)((lVar4 + 0x22beU & 0x3fffffff) << 2);
              if (puVar7 == (undefined4 *)0x0) {
                *(undefined4 *)(iVar8 + param_4) = 0;
              }
              else {
                *(undefined4 *)(iVar8 + param_4) = *puVar7;
              }
            }
          }
          iVar8 = fn_8235A0D0();
          uVar3 = fn_82230110(auStack_550,iVar5);
          fn_8258E3A8(&iStack_568,iVar8 + 8,uVar3);
          fn_82230300(auStack_550,1,0);
          if ((iStack_568 == *(int *)(iVar8 + 0xc)) ||
             (*(int *)(iStack_568 + 0x2c) != *(int *)(iVar5 + 0x20))) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)(**(code **)(iStack_568 + 0x28))(iVar5);
          }
          iVar8 = (**(code **)(*piVar9 + 8))(piVar9,iVar5 + 0x2c);
          piVar9[0x45] = iVar8;
          iVar8 = (**(code **)(*piVar9 + 0xc))(piVar9,iVar5 + 0x28);
          piVar9[0x44] = iVar8;
          fn_822B7620(piVar9);
          puVar7 = (undefined4 *)fn_8265C9E0(0x18);
          if (puVar7 == (undefined4 *)0x0) {
            uStack_55c = 0;
            ppuStack_560 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
            fn_82230040(&ppuStack_560);
          }
          *puVar7 = *(undefined4 *)(param_1 + 4);
          puVar7[1] = *(undefined4 *)(param_1 + 4);
          uVar6 = *(undefined4 *)(param_1 + 4);
          *(undefined1 *)(puVar7 + 5) = 0;
          *(undefined1 *)((int)puVar7 + 0x15) = 0;
          puVar7[2] = uVar6;
          if (puVar7 + 3 != (int *)0x0) {
            puVar7[3] = iVar16;
            puVar7[4] = piVar9;
          }
          fn_822AC4E8(auStack_558,param_1);
          if (-1 < iVar17) {
            *(int *)((int)((lVar4 + 0x234aU & 0xffffffff) << 2) + param_4) = piVar9[5];
          }
          iVar13 = iVar13 + 1;
          lVar15 = lVar15 + 1;
        } while (iVar13 < *(int *)(iVar14 + 4));
      }
      fn_8265CAA0(iVar5);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_8251FA58(uVar2);
      }
    }
    iStack_56c = iStack_56c + 1;
    if (6 < iStack_56c) {
      fn_822ABCE0(param_1,uStack00000034,uStack0000003c);
      return;
    }
  } while( true );
}

