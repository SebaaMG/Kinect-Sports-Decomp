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
extern int fn_828FA8D8();
extern int fn_828FD0A0();
extern int fn_82930318();
extern int fn_829350F0();
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();
extern int fn_82F68CC0();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack_c0;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int lbl_8202BD70;
extern unsigned int lbl_8202BD74;
extern unsigned int lbl_8202BD78;
extern unsigned int lbl_8202BDB8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c8;


int fn_828FD678(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char cVar13;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 *puStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  char *pcStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  char acStack_b0 [176];
  
  pcVar2 = *(char **)(param_2 + 8);
  bVar3 = false;
  bVar4 = true;
  iVar6 = 0;
  uStack_bc = 0;
  uVar15 = 0;
  uVar11 = 0;
  iStack_cc = 0;
  iStack_d0 = 0;
  uStack_c8 = 0;
  iStack_c0 = 0;
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  pcStack_c4 = pcVar2;
  if (*pcVar2 != '\0') {
    pcVar14 = pcVar2;
    do {
      cVar13 = *pcVar14;
      while ((cVar13 != '\0' && (cVar13 != '_'))) {
        pcVar14 = pcVar14 + 1;
        cVar13 = *pcVar14;
      }
      uVar16 = (int)pcVar14 - (int)pcStack_c4;
      if (0xf < uVar16) goto LAB_828fdc80;
      fn_82F68CC0(acStack_b0,pcStack_c4,uVar16);
      acStack_b0[uVar16] = '\0';
      if (cVar13 != '\0') {
        pcVar14 = pcVar14 + 1;
      }
      pcStack_c4 = pcVar14;
      if (bVar4) {
        pcVar10 = acStack_b0;
        cVar13 = acStack_b0[0];
        while ((cVar13 != '\0' && (iVar6 = fn_82F66A40(*pcVar10), iVar6 != 0))) {
          pcVar10 = pcVar10 + 1;
          cVar13 = *pcVar10;
        }
        if (*pcVar10 == '\0') {
          uVar15 = 0xffffffffffffffff;
        }
        else {
          uVar15 = fn_82F65B18(pcVar10);
        }
        iStack_d0 = (int)uVar15;
        if (*pcVar10 != '\0') {
          *pcVar10 = '\0';
          pcVar10 = pcVar10 + 1;
        }
        cVar13 = *pcVar10;
        while ((cVar13 != '\0' && (iVar6 = fn_82F66A80(), iVar6 != 0))) {
          pcVar10 = pcVar10 + 1;
          cVar13 = *pcVar10;
        }
        if (*pcVar10 == '\0') {
          iVar6 = 0;
          uVar8 = 0;
          puVar9 = (undefined4 *)&lbl_8202BD70;
          do {
            pcVar10 = (char *)*puVar9;
            pcVar12 = acStack_b0;
            do {
              cVar13 = *pcVar12;
              cVar1 = *pcVar10;
              if (cVar13 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar10 = pcVar10 + 1;
            } while (cVar13 == cVar1);
            if (cVar13 == cVar1) break;
            uVar8 = uVar8 + 0x4c;
            iVar6 = iVar6 + 1;
            puVar9 = puVar9 + 0x13;
          } while ((uVar8 & 0xffffffff) < 0x63c);
          if (iVar6 != 0x15) {
            iVar5 = puStack00000014[0xe];
            uVar16 = *(uint *)(&lbl_8202BD78 + (iVar6 * 0x13 + iVar5) * 4);
            uVar8 = (ulonglong)uVar16;
            if (uVar16 != 0xffffffff) {
              if ((int)uVar16 < 0) {
                if (iStack_d0 == -1) {
                  if (iStack00000024 == 0) goto LAB_828fdc80;
                  uVar15 = (ulonglong)*(uint *)(iStack00000024 + 0x18);
LAB_828fd8c4:
                  iStack_d0 = (int)uVar15;
                }
                else if (iStack00000024 != 0) {
                  uVar15 = *(uint *)(iStack00000024 + 0x18) + uVar15;
                  goto LAB_828fd8c4;
                }
                uVar8 = -uVar8;
              }
              else if (iStack00000024 != 0) goto LAB_828fdc80;
              if ((int)uVar15 == -1) {
                if ((uVar8 & 0xffffffff) == 0) {
                  uVar15 = 0;
                  iStack_d0 = 0;
LAB_828fd910:
                  iStack_cc = *(int *)(&lbl_8202BD74 + iVar6 * 0x4c);
                  uStack_bc = *(undefined4 *)(&lbl_8202BDB8 + iVar6 * 0x4c);
                  if (iStack_cc == 2) {
                    uVar8 = uVar15 & 0x1fff;
                    if (uVar8 < 0x800) {
                      iStack_cc = 2;
                    }
                    else if (uVar8 < 0x1000) {
                      iStack_cc = 0xb;
                    }
                    else if (uVar8 < 0x1800) {
                      iStack_cc = 0xc;
                    }
                    else if (uVar8 < 0x2000) {
                      iStack_cc = 0xd;
                    }
                    uVar15 = uVar15 & 0x7ff;
LAB_828fd9dc:
                    iStack_d0 = (int)uVar15;
                  }
                  else {
                    if (iStack_cc == -3) {
                      iStack_cc = 4;
LAB_828fd98c:
                      uVar15 = 0;
                      goto LAB_828fd9dc;
                    }
                    if (iStack_cc == -4) {
                      iStack_cc = 4;
                      uVar15 = 2;
                      goto LAB_828fd9dc;
                    }
                    if (iStack_cc == -5) {
                      iStack_cc = 4;
LAB_828fd9d4:
                      uVar15 = 1;
                      goto LAB_828fd9dc;
                    }
                    if (iStack_cc == -6) {
                      iStack_cc = 0x11;
                      goto LAB_828fd98c;
                    }
                    if (iStack_cc == -7) {
                      iStack_cc = 0x11;
                      goto LAB_828fd9d4;
                    }
                  }
                  bVar4 = false;
                  if ((5 < iVar5) && (iVar5 < 10)) {
                    bVar3 = true;
                  }
                  iVar6 = iStack_cc;
                  if (((3 < iVar5) && (iVar5 < 6)) || ((0xd < iVar5 && (iVar5 < 0x10)))) {
                    iStack_c0 = 1;
                  }
                  goto LAB_828fdc18;
                }
              }
              else if (((iStack00000024 != 0) && (*(int *)(iStack00000024 + 0x28) != 0)) ||
                      ((uVar15 & 0xffffffff) < (uVar8 & 0xffffffff))) goto LAB_828fd910;
            }
          }
        }
LAB_828fdc80:
        iVar6 = iStack00000024;
        puVar9 = puStack00000014;
        if (puStack00000014[0x1f] != 0) {
          iVar5 = fn_828FD0A0(puStack00000014[0x1f],*puStack00000014,puStack00000014[0x20],
                                iStack0000001c,pcVar2,iStack00000024,&iStack_cc,&uStack_c8);
          if (-1 < iVar5) {
            uVar15 = fn_82930318(0x2c);
            if ((uVar15 & 0xffffffff) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = fn_829350F0(uVar15,iStack_cc,uStack_c8,iStack_d0,uStack_bc,0);
            }
            if (iVar5 == 0) {
              return 0;
            }
            if (iVar6 != 0) {
              *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar6 + 0x28);
              *(undefined4 *)(iVar6 + 0x28) = 0;
              return iVar5;
            }
            return iVar5;
          }
          goto LAB_828fdde0;
        }
        if (iStack00000024 == 0) {
          uVar7 = 0xffffffff8202c888;
        }
        else {
          if (*(int *)(iStack00000024 + 0x28) == 0) {
            fn_828FA8D8(*puStack00000014,iStack0000001c,0x7d5,0xffffffff8202c8bc,pcVar2,
                              *(undefined4 *)(iStack00000024 + 0x18));
            goto LAB_828fdde0;
          }
          if (*(int *)(*(int *)(iStack00000024 + 0x28) + 0x10) == -1) goto LAB_828fdde0;
          uVar7 = 0xffffffff8202c8a0;
        }
        fn_828FA8D8(*puStack00000014,iStack0000001c,0x7d5,uVar7,pcVar2);
        goto LAB_828fdde0;
      }
      if (!bVar3) {
LAB_828fdbc8:
        if (iStack_c0 != 0) {
          pcVar12 = acStack_b0;
          pcVar10 = "abs";
          do {
            cVar13 = *pcVar12;
            cVar1 = *pcVar10;
            if (cVar13 == '\0') break;
            pcVar12 = pcVar12 + 1;
            pcVar10 = pcVar10 + 1;
          } while (cVar13 == cVar1);
          if (cVar13 == cVar1) {
            uVar11 = 0xb000000;
            iStack_c0 = 0;
            uStack_c8 = 0xb000000;
            goto LAB_828fdc18;
          }
        }
        goto LAB_828fdc80;
      }
      pcVar12 = acStack_b0;
      pcVar10 = "bias";
      do {
        cVar13 = *pcVar12;
        cVar1 = *pcVar10;
        if (cVar13 == '\0') break;
        pcVar12 = pcVar12 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar13 == cVar1);
      if (cVar13 == cVar1) {
        uVar11 = 0x2000000;
      }
      else {
        pcVar12 = acStack_b0;
        pcVar10 = "bx2";
        do {
          cVar13 = *pcVar12;
          cVar1 = *pcVar10;
          if (cVar13 == '\0') break;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar13 == cVar1);
        if (cVar13 == cVar1) {
          uVar11 = 0x4000000;
        }
        else {
          pcVar12 = acStack_b0;
          pcVar10 = "x2";
          do {
            cVar13 = *pcVar12;
            cVar1 = *pcVar10;
            if (cVar13 == '\0') break;
            pcVar12 = pcVar12 + 1;
            pcVar10 = pcVar10 + 1;
          } while (cVar13 == cVar1);
          if (cVar13 == cVar1) {
            uVar11 = 0x7000000;
          }
          else {
            pcVar12 = acStack_b0;
            pcVar10 = "dz";
            do {
              cVar13 = *pcVar12;
              cVar1 = *pcVar10;
              if (cVar13 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar10 = pcVar10 + 1;
            } while (cVar13 == cVar1);
            if (cVar13 != cVar1) {
              pcVar12 = acStack_b0;
              pcVar10 = "db";
              do {
                cVar13 = *pcVar12;
                cVar1 = *pcVar10;
                if (cVar13 == '\0') break;
                pcVar12 = pcVar12 + 1;
                pcVar10 = pcVar10 + 1;
              } while (cVar13 == cVar1);
              if (cVar13 != cVar1) {
                pcVar12 = acStack_b0;
                pcVar10 = "dw";
                do {
                  cVar13 = *pcVar12;
                  cVar1 = *pcVar10;
                  if (cVar13 == '\0') break;
                  pcVar12 = pcVar12 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (cVar13 == cVar1);
                if (cVar13 != cVar1) {
                  pcVar12 = acStack_b0;
                  pcVar10 = "da";
                  do {
                    cVar13 = *pcVar12;
                    cVar1 = *pcVar10;
                    if (cVar13 == '\0') break;
                    pcVar12 = pcVar12 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar13 == cVar1);
                  if (cVar13 != cVar1) goto LAB_828fdbc8;
                }
                uVar11 = 0xa000000;
                goto LAB_828fdbb8;
              }
            }
            uVar11 = 0x9000000;
          }
        }
      }
LAB_828fdbb8:
      bVar3 = false;
      uStack_c8 = uVar11;
LAB_828fdc18:;} while (*pcVar14 != '\0');
  }
  iVar5 = iStack00000024;
  if (puStack00000014[0x1f] == 0) {
LAB_828fde14:
    uVar8 = fn_82930318(0x2c,iStack0000001c);
    if ((uVar8 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_829350F0(uVar8,iVar6,uVar11,uVar15,uStack_bc,0);
    }
    if (iVar6 != 0) {
      if (iVar5 != 0) {
        *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
        *(undefined4 *)(iVar5 + 0x28) = 0;
        return iVar6;
      }
      return iVar6;
    }
  }
  else {
    if (*(int *)(puStack00000014[0x1f] + 0xb0) == 0) {
      if ((((((iVar6 == 3) || (iVar6 == 5)) || (iVar6 == 6)) || ((iVar6 == 8 || (iVar6 == 9)))) ||
          ((iVar6 == 4 || ((iVar6 == 0xf || (iVar6 == 0x12)))))) || (iVar6 == 0x13))
      goto LAB_828fde14;
      uVar7 = 0xffffffff8202c840;
    }
    else {
      if ((((iVar6 == 3) || (iVar6 == 0xf)) || (iVar6 == 0x12)) || (iVar6 == 0x13))
      goto LAB_828fde14;
      uVar7 = 0xffffffff8202c8d8;
    }
    fn_828FA8D8(*puStack00000014,iStack0000001c,0x7d5,uVar7);
    puVar9 = puStack00000014;
LAB_828fdde0:
    puVar9[0x13] = 1;
    uVar15 = fn_82930318(0x2c);
    if ((uVar15 & 0xffffffff) != 0) {
      iVar6 = fn_829350F0(uVar15,0xffffffffffffffff,0,0,0,0);
      return iVar6;
    }
  }
  return 0;
}

