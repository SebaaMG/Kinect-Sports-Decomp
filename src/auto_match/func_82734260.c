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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82681838();
extern int fn_82681898();
extern int fn_8268BEA8();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82697610();
extern int fn_826A1F38();
extern int fn_826C1BA0();
extern int fn_8278B0C8();
extern int fn_8278B1D8();
extern int fn_8278B208();
extern int fn_8278B268();
extern int fn_8278B290();
extern int fn_8278BC88();
extern int fn_8278D038();
extern int fn_8278D2E0();
extern int fn_8278D368();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82011710;
extern unsigned int lbl_82011718;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_82734260(int param_1,int param_2,undefined4 *param_3,char *param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  int iVar5;
  char cVar8;
  uint uVar6;
  int iVar7;
  undefined8 uVar4;
  char *pcVar9;
  ushort uVar10;
  byte bVar12;
  undefined2 uVar11;
  char *pcVar14;
  char *pcVar15;
  longlong lVar13;
  ulonglong uVar16;
  int iVar17;
  double dVar18;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *apuStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined1 auStack_80 [4];
  char cStack_7c;
  undefined1 auStack_70 [8];
  double dStack_68;
  
  fn_82695DA0(auStack_80,param_4);
  pcVar9 = "align";
  pcVar15 = *(char **)*param_3;
  pcVar14 = pcVar15;
  do {
    cVar8 = *pcVar14;
    cVar1 = *pcVar9;
    if (cVar8 == '\0') break;
    pcVar14 = pcVar14 + 1;
    pcVar9 = pcVar9 + 1;
  } while (cVar8 == cVar1);
  if (cVar8 == cVar1) {
    fn_82696D38(apuStack_a8,param_4,param_2,0xffffffffffffffff,0);
    pcVar9 = "left";
    pcVar15 = (char *)*apuStack_a8[0];
    pcVar14 = pcVar15;
    do {
      cVar8 = *pcVar14;
      cVar1 = *pcVar9;
      if (cVar8 == '\0') break;
      pcVar14 = pcVar14 + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar8 == cVar1);
    if (cVar8 == cVar1) {
      uVar10 = *(ushort *)(param_1 + 0x62) & 0xf9fe | 1;
LAB_82734414:
      *(ushort *)(param_1 + 0x62) = uVar10;
    }
    else {
      pcVar9 = "right";
      pcVar14 = pcVar15;
      do {
        cVar8 = *pcVar14;
        cVar1 = *pcVar9;
        if (cVar8 == '\0') break;
        pcVar14 = pcVar14 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar8 == cVar1);
      if (cVar8 == cVar1) {
        uVar10 = *(ushort *)(param_1 + 0x62) & 0xf9fe | 0x201;
        goto LAB_82734414;
      }
      pcVar9 = "center";
      pcVar14 = pcVar15;
      do {
        cVar8 = *pcVar14;
        cVar1 = *pcVar9;
        if (cVar8 == '\0') break;
        pcVar14 = pcVar14 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar8 == cVar1);
      if (cVar8 == cVar1) {
        uVar10 = *(ushort *)(param_1 + 0x62) | 0x601;
        goto LAB_82734414;
      }
      pcVar14 = "justify";
      do {
        cVar8 = *pcVar15;
        cVar1 = *pcVar14;
        if (cVar8 == '\0') break;
        pcVar15 = pcVar15 + 1;
        pcVar14 = pcVar14 + 1;
      } while (cVar8 == cVar1);
      if (cVar8 == cVar1) {
        uVar10 = *(ushort *)(param_1 + 0x62) & 0xf9fe | 0x401;
        goto LAB_82734414;
      }
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xf9fe;
      fn_826959C8(auStack_80);
      auStack_80[0] = 1;
    }
    lVar13 = (ulonglong)(uint)apuStack_a8[0][2] - 1;
    apuStack_a8[0][2] = (int)lVar13;
LAB_82734444:
    if (lVar13 == 0) {
      fn_826944C8(apuStack_a8[0]);
    }
  }
  else {
    pcVar9 = "blockIndent";
    pcVar14 = pcVar15;
    do {
      cVar8 = *pcVar14;
      cVar1 = *pcVar9;
      if (cVar8 == '\0') break;
      pcVar14 = pcVar14 + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar8 == cVar1);
    if (cVar8 == cVar1) {
      cVar8 = *param_4;
      if (cVar8 != '\x01') {
        if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
          bVar2 = true;
        }
        if (!bVar2) {
          iVar5 = fn_82697610(param_4,param_2);
          uStack_a0 = (ulonglong)iVar5;
          fn_82681898((double)(longlong)uStack_a0,auStack_80);
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0x2d0 < iVar5) {
            iVar5 = 0x2d0;
          }
          *(short *)(param_1 + 0x58) = (short)iVar5;
          uVar10 = *(ushort *)(param_1 + 0x62) | 2;
          goto LAB_82734508;
        }
      }
      uVar10 = *(ushort *)(param_1 + 0x62) & 0xfffd;
      *(undefined2 *)(param_1 + 0x58) = 0;
      goto LAB_82734524;
    }
    pcVar9 = "bold";
    pcVar14 = pcVar15;
    do {
      cVar8 = *pcVar14;
      cVar1 = *pcVar9;
      if (cVar8 == '\0') break;
      pcVar14 = pcVar14 + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar8 == cVar1);
    if (cVar8 != cVar1) {
      pcVar9 = "bullet";
      pcVar14 = pcVar15;
      do {
        cVar8 = *pcVar14;
        cVar1 = *pcVar9;
        if (cVar8 == '\0') break;
        pcVar14 = pcVar14 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar8 == cVar1);
      if (cVar8 == cVar1) {
        cVar8 = *param_4;
        if (cVar8 != '\x01') {
          if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
            bVar2 = true;
          }
          if (!bVar2) {
            cVar8 = fn_82695608(param_4,param_2);
            fn_826959C8(auStack_80);
            auStack_80[0] = 2;
            if (cVar8 == '\0') {
              uVar10 = *(ushort *)(param_1 + 0x62) & 0x7fff;
            }
            else {
              uVar10 = *(ushort *)(param_1 + 0x62) | 0x8000;
            }
            *(ushort *)(param_1 + 0x62) = uVar10;
            *(ushort *)(param_1 + 0x62) = uVar10 | 0x80;
            cStack_7c = cVar8;
            goto LAB_82735364;
          }
        }
        *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0x7f7f;
        goto LAB_82735358;
      }
      pcVar9 = "color";
      pcVar14 = pcVar15;
      do {
        cVar8 = *pcVar14;
        cVar1 = *pcVar9;
        if (cVar8 == '\0') break;
        pcVar14 = pcVar14 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar8 == cVar1);
      if (cVar8 == cVar1) {
        cVar8 = *param_4;
        if (cVar8 != '\x01') {
          if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
            bVar2 = true;
          }
          if (!bVar2) {
            uVar6 = fn_82697610(param_4,param_2);
            uStack_a0 = (ulonglong)uVar6;
            fn_82681898((double)uStack_a0,auStack_80);
            uVar10 = *(ushort *)(param_1 + 0x4a) | 1;
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xff000000 | uVar6 & 0xffffff;
LAB_8273475c:
            *(ushort *)(param_1 + 0x4a) = uVar10;
            goto LAB_82735364;
          }
        }
        uVar6 = 0xff000000;
        uVar10 = *(ushort *)(param_1 + 0x4a) & 0xfffe;
LAB_8273534c:
        *(uint *)(param_1 + 0x40) = uVar6;
        goto LAB_82735350;
      }
      pcVar9 = "font";
      pcVar14 = pcVar15;
      do {
        cVar8 = *pcVar14;
        cVar1 = *pcVar9;
        if (cVar8 == '\0') break;
        pcVar14 = pcVar14 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar8 == cVar1);
      if (cVar8 != cVar1) {
        pcVar9 = "indent";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              iVar5 = fn_82697610(param_4,param_2);
              uStack_a0 = (ulonglong)iVar5;
              fn_82681898((double)(longlong)uStack_a0,auStack_80);
              if (iVar5 < -0x2d0) {
                iVar5 = -0x2d0;
              }
              else if (0x2d0 < iVar5) {
                iVar5 = 0x2d0;
              }
              *(short *)(param_1 + 0x5a) = (short)iVar5;
              uVar10 = *(ushort *)(param_1 + 0x62) | 4;
              goto LAB_82734508;
            }
          }
          uVar10 = *(ushort *)(param_1 + 0x62) & 0xfffb;
          *(undefined2 *)(param_1 + 0x5a) = 0;
          goto LAB_82734524;
        }
        pcVar9 = "italic";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              uVar4 = fn_82695608(param_4,param_2);
              fn_826959C8(auStack_80);
              cStack_7c = (char)uVar4;
              auStack_80[0] = 2;
              fn_8278D368(param_1 + 0x20,uVar4);
              goto LAB_82735364;
            }
          }
          bVar12 = *(byte *)(param_1 + 0x48) & 0xfd;
          uVar10 = *(ushort *)(param_1 + 0x4a) & 0xffdf;
          goto LAB_827345dc;
        }
        pcVar9 = "leading";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              iVar5 = fn_82697610(param_4,param_2);
              uStack_a0 = (ulonglong)iVar5;
              fn_82681898((double)(longlong)uStack_a0,auStack_80);
              if (iVar5 < -0x2d0) {
                iVar5 = -0x2d0;
              }
              else if (0x2d0 < iVar5) {
                iVar5 = 0x2d0;
              }
              *(short *)(param_1 + 0x5c) = (short)iVar5;
              uVar10 = *(ushort *)(param_1 + 0x62) | 8;
LAB_82734508:
              *(ushort *)(param_1 + 0x62) = uVar10;
              goto LAB_82735364;
            }
          }
          uVar10 = *(ushort *)(param_1 + 0x62) & 0xfff7;
          *(undefined2 *)(param_1 + 0x5c) = 0;
LAB_82734524:
          *(ushort *)(param_1 + 0x62) = uVar10;
          goto LAB_82735358;
        }
        pcVar9 = "leftMargin";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              iVar5 = fn_82697610(param_4,param_2);
              uStack_a0 = (ulonglong)iVar5;
              fn_82681898((double)(longlong)uStack_a0,auStack_80);
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              else if (0x2d0 < iVar5) {
                iVar5 = 0x2d0;
              }
              *(short *)(param_1 + 0x5e) = (short)iVar5;
              uVar10 = *(ushort *)(param_1 + 0x62) | 0x10;
              goto LAB_82734508;
            }
          }
          uVar10 = *(ushort *)(param_1 + 0x62) & 0xffef;
          *(undefined2 *)(param_1 + 0x5e) = 0;
          goto LAB_82734524;
        }
        pcVar9 = "rightMargin";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              iVar5 = fn_82697610(param_4,param_2);
              uStack_a0 = (ulonglong)iVar5;
              fn_82681898((double)(longlong)uStack_a0,auStack_80);
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              else if (0x2d0 < iVar5) {
                iVar5 = 0x2d0;
              }
              *(short *)(param_1 + 0x60) = (short)iVar5;
              uVar10 = *(ushort *)(param_1 + 0x62) | 0x20;
              goto LAB_82734508;
            }
          }
          uVar10 = *(ushort *)(param_1 + 0x62) & 0xffdf;
          *(undefined2 *)(param_1 + 0x60) = 0;
          goto LAB_82734524;
        }
        pcVar9 = "size";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              uVar6 = fn_82697610(param_4,param_2);
              uStack_a0 = (ulonglong)(int)uVar6;
              fn_82681898((double)(longlong)uStack_a0,auStack_80);
              if (-1 < (int)uVar6) {
                if (0x7f < (int)uVar6) {
                  uVar10 = *(ushort *)(param_1 + 0x4a) | 8;
                  *(undefined2 *)(param_1 + 0x46) = 0x9ec;
                  goto LAB_8273475c;
                }
                uStack_a0 = (ulonglong)uVar6;
                if (lbl_82011710 <= (double)uStack_a0) {
                  uVar11 = 0xffff;
                }
                else {
                  uStack_a0 = (ulonglong)((double)uStack_a0 * (double)lbl_8200571C);
                  uVar11 = (((U64)(uStack_a0) >> 48) & 0xFFFF);
                }
                *(undefined2 *)(param_1 + 0x46) = uVar11;
                *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | 8;
              }
              goto LAB_82735364;
            }
          }
          uVar10 = *(ushort *)(param_1 + 0x4a) & 0xfff7;
          *(undefined2 *)(param_1 + 0x46) = 0;
          goto LAB_82735350;
        }
        pcVar9 = "tabStops";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              if (cVar8 == '\x06') {
                iVar5 = fn_82696958(param_4,param_2);
                iVar5 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))();
                if (iVar5 == 7) {
                  iVar7 = fn_82696958(param_4,param_2);
                  fn_8278BC88(param_1 + 0x4c,*(undefined4 *)(iVar7 + 0x38));
                  lVar13 = 0;
                  *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) | 0x40;
                  iVar5 = *(int *)(iVar7 + 0x38);
                  if (0 < iVar5) {
                    iVar17 = 0;
                    do {
                      dVar18 = (double)fn_826972E0(*(undefined4 *)
                                                          (*(int *)(iVar7 + 0x34) + iVar17),param_2)
                      ;
                      uStack_a0 = (ulonglong)dVar18;
                      uVar16 = uStack_a0 & 0xffffffff;
                      dStack_68 = (double)uVar16;
                      auStack_70[0] = 3;
                      uStack_90 = uVar16;
                      fn_826A1F38(iVar7,lVar13,auStack_70);
                      fn_82696330(auStack_70);
                      fn_8278B268(param_1 + 0x4c,lVar13,uVar16);
                      lVar13 = lVar13 + 1;
                      iVar17 = iVar17 + 4;
                    } while ((int)lVar13 < iVar5);
                  }
                  uVar4 = fn_826961B0(&uStack_90,iVar7);
                  uVar4 = fn_826C1BA0(param_1,param_2,param_3,uVar4,param_5);
                  fn_82696330(&uStack_90);
                  goto LAB_82734ecc;
                }
              }
              goto LAB_82735364;
            }
          }
          fn_8278B290(param_1 + 0x4c);
          *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xffbf;
          goto LAB_82735358;
        }
        pcVar9 = "underline";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              uVar4 = fn_82695608(param_4,param_2);
              fn_826959C8(auStack_80);
              cStack_7c = (char)uVar4;
              auStack_80[0] = 2;
              fn_8278B1D8(param_1 + 0x20,uVar4);
              goto LAB_82735364;
            }
          }
          bVar12 = *(byte *)(param_1 + 0x48) & 0xfb;
          uVar10 = *(ushort *)(param_1 + 0x4a) & 0xffbf;
          goto LAB_827345dc;
        }
        pcVar9 = "url";
        pcVar14 = pcVar15;
        do {
          cVar8 = *pcVar14;
          cVar1 = *pcVar9;
          if (cVar8 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar8 == cVar1);
        if (cVar8 == cVar1) {
          cVar8 = *param_4;
          if (cVar8 != '\x01') {
            if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              fn_82696D38(&puStack_ac,param_4,param_2,0xffffffffffffffff,0);
              fn_82681838(auStack_80,&puStack_ac);
              fn_8278B0C8(param_1 + 0x20,*puStack_ac,0xffffffffffffffff);
              puStack_b0 = puStack_ac;
              goto LAB_8273481c;
            }
          }
          fn_8268BEA8(param_1 + 0x30);
          *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfeff;
          goto LAB_82735358;
        }
        if (7 < *(byte *)(param_2 + 0x7c)) {
          pcVar9 = "letterSpacing";
          pcVar14 = pcVar15;
          do {
            cVar8 = *pcVar14;
            cVar1 = *pcVar9;
            if (cVar8 == '\0') break;
            pcVar14 = pcVar14 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar8 == cVar1);
          if (cVar8 == cVar1) {
            cVar8 = *param_4;
            if (cVar8 != '\x01') {
              if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
                bVar2 = true;
              }
              if (!bVar2) {
                iVar5 = fn_82697610(param_4,param_2);
                uStack_90 = (ulonglong)iVar5;
                fn_82681898((double)(longlong)uStack_90,auStack_80);
                fVar3 = lbl_8200571C;
                if (iVar5 < -0x2d0) {
                  iVar5 = -0x2d0;
                }
                else if (0x2d0 < iVar5) {
                  iVar5 = 0x2d0;
                }
                *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | 2;
                uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(int)((float)(longlong)iVar5 * fVar3))) & ((U64)0xFFFF)) << 48));
                *(undefined2 *)(param_1 + 0x44) = (((U64)(uStack_90) >> 48) & 0xFFFF);
                uStack_90 = (longlong)(int)((float)(longlong)iVar5 * fVar3);
                goto LAB_82735238;
              }
            }
            uVar10 = *(ushort *)(param_1 + 0x4a) & 0xfffd;
            *(undefined2 *)(param_1 + 0x44) = 0;
          }
          else {
            pcVar14 = "kerning";
            do {
              cVar8 = *pcVar15;
              cVar1 = *pcVar14;
              if (cVar8 == '\0') break;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            } while (cVar8 == cVar1);
            if (cVar8 != cVar1) goto LAB_82735238;
            cVar8 = *param_4;
            if (cVar8 != '\x01') {
              if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
                bVar2 = true;
              }
              if (!bVar2) {
                uVar4 = fn_82695608(param_4,param_2);
                fn_826959C8(auStack_80);
                cStack_7c = (char)uVar4;
                auStack_80[0] = 2;
                fn_8278B208(param_1 + 0x20,uVar4);
                goto LAB_82735238;
              }
            }
            uVar10 = *(ushort *)(param_1 + 0x4a) & 0xff7f;
            *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf7;
          }
          *(ushort *)(param_1 + 0x4a) = uVar10;
          fn_826959C8(auStack_80);
          auStack_80[0] = 1;
        }
LAB_82735238:
        if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
          pcVar14 = "alpha";
          pcVar15 = *(char **)*param_3;
          do {
            cVar8 = *pcVar15;
            cVar1 = *pcVar14;
            if (cVar8 == '\0') break;
            pcVar15 = pcVar15 + 1;
            pcVar14 = pcVar14 + 1;
          } while (cVar8 == cVar1);
          if (cVar8 == cVar1) {
            cVar8 = *param_4;
            if (cVar8 != '\x01') {
              if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
                bVar2 = true;
              }
              if (!bVar2) {
                iVar5 = fn_82697610(param_4,param_2);
                uStack_90 = (ulonglong)iVar5;
                fn_82681898((double)(longlong)uStack_90,auStack_80);
                if (iVar5 < 0) {
                  iVar5 = 0;
                }
                else if (100 < iVar5) {
                  iVar5 = 100;
                }
                *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | 0x400;
                uStack_90 = (ulonglong)((double)(longlong)iVar5 * lbl_82011718);
                *(uint *)(param_1 + 0x40) =
                     (uint)(byte)uStack_90 << 0x18 | *(uint *)(param_1 + 0x40) & 0xffffff;
                goto LAB_82735364;
              }
            }
            uVar6 = *(uint *)(param_1 + 0x40) | 0xff000000;
            uVar10 = *(ushort *)(param_1 + 0x4a) & 0xfbff;
            goto LAB_8273534c;
          }
        }
        goto LAB_82735364;
      }
      cVar8 = *param_4;
      if (cVar8 == '\x01') {
LAB_82734830:
        *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xeffb;
        goto LAB_82735358;
      }
      if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
        bVar2 = true;
      }
      if (bVar2) goto LAB_82734830;
      fn_82696D38(&puStack_b0,param_4,param_2,0xffffffffffffffff,0);
      fn_82681838(auStack_80,&puStack_b0);
      fn_8278D038(param_1 + 0x20,*puStack_b0,0xffffffffffffffff);
LAB_8273481c:
      lVar13 = (ulonglong)(uint)puStack_b0[2] - 1;
      puStack_b0[2] = (int)lVar13;
      apuStack_a8[0] = puStack_b0;
      goto LAB_82734444;
    }
    cVar8 = *param_4;
    if (cVar8 != '\x01') {
      if ((cVar8 == '\0') || (bVar2 = false, cVar8 == '\n')) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = fn_82695608(param_4,param_2);
        fn_826959C8(auStack_80);
        cStack_7c = (char)uVar4;
        auStack_80[0] = 2;
        fn_8278D2E0(param_1 + 0x20,uVar4);
        goto LAB_82735364;
      }
    }
    bVar12 = *(byte *)(param_1 + 0x48) & 0xfe;
    uVar10 = *(ushort *)(param_1 + 0x4a) & 0xffef;
LAB_827345dc:
    *(byte *)(param_1 + 0x48) = bVar12;
LAB_82735350:
    *(ushort *)(param_1 + 0x4a) = uVar10;
LAB_82735358:
    fn_826959C8(auStack_80);
    auStack_80[0] = 1;
  }
LAB_82735364:
  uVar4 = fn_826C1BA0(param_1,param_2,param_3,auStack_80,param_5);
LAB_82734ecc:
  fn_82696330(auStack_80);
  return uVar4;
}

