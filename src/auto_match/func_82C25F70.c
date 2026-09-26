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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_d0;
extern int fn_82C107F8();
extern int fn_82C108A8();
extern int fn_82C10F40();
extern int fn_82C114C0();
extern int fn_82C1E210();
extern int fn_82C1E328();
extern int fn_82C1E828();
extern int fn_82C1EFD0();
extern int fn_82C225E8();
extern int fn_82C229C0();
extern int fn_82C22E40();
extern int fn_82C25B10();
extern unsigned int iStack_9c;
extern unsigned int iStack_ec;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


ulonglong fn_82C25F70(int param_1)

{
  char cVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte abStack_f0 [4];
  int iStack_ec;
  int aiStack_e8 [2];
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 auStack_d0 [4];
  undefined4 uStack_c0;
  ushort uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  ulonglong uStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  aiStack_e8[0] = 0;
  iVar10 = 0;
  uStack_d8 = 0;
  iVar9 = 0;
  auStack_d0[0] = 0;
  iStack_ec = 0;
  uVar8 = 0;
  uStack_d4 = 0;
  abStack_f0[0] = 0;
LAB_82c25fd0:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            do {
              iVar6 = piVar2[0x14];
            } while (8 < iVar6 - 5U);
            if (iVar6 != 6) break;
            uVar5 = fn_82C225E8(param_1,5);
            if ((uVar5 & 0xffffffff) == 0x80500000) goto LAB_82c270bc;
            if ((int)uVar5 < 0) {
              piVar2[0x14] = 5;
            }
            else if ((((int *)piVar2[0xc])[1] == 0) || (*(int *)piVar2[0xc] == 0)) {
              piVar2[0xe] = 0;
              piVar2[0x14] = 7;
            }
            else {
              piVar2[0x14] = 5;
            }
          }
          if (iVar6 != 7) break;
          uVar5 = fn_82C229C0(param_1,*(undefined4 *)(piVar2[0xc] + 0x44));
          if ((uVar5 & 0xffffffff) == 0x80500000) goto LAB_82c270bc;
          if ((int)uVar5 < 0) {
            piVar2[0x14] = 5;
          }
          else if ((((int *)piVar2[0xc])[1] == 0) || (*(int *)piVar2[0xc] == 0)) {
            piVar2[0x14] = 8;
            piVar2[0xe] = 0;
          }
          else {
            piVar2[0x14] = 5;
          }
        }
        if (iVar6 != 8) break;
        uVar5 = fn_82C22E40(param_1,*(undefined4 *)(piVar2[0xc] + 0x48));
        if ((uVar5 & 0xffffffff) == 0x80500000) goto LAB_82c270bc;
        if ((int)uVar5 < 0) goto LAB_82c262b0;
        piVar2[0x14] = 9;
      }
      if (iVar6 != 9) break;
      uVar5 = fn_82C25B10(param_1,*(undefined4 *)(piVar2[0xd] + 0x50));
      if ((uVar5 & 0xffffffff) == 0x80500000) goto LAB_82c270bc;
      if ((int)uVar5 < 0) {
        piVar2[0x14] = 0xd;
      }
      else {
        psVar3 = (short *)piVar2[0xd];
        uVar7 = (psVar3[1] - psVar3[0xe]) + *psVar3;
        *(ushort *)(piVar2 + 0x10) = uVar7;
        if (*(ulonglong *)(piVar2 + 2) < (ulonglong)uVar7 + *(ulonglong *)(piVar2 + 8)) {
          uVar14 = ((ulonglong)uVar7 - (*(ulonglong *)(piVar2 + 2) & 0xffffffff)) +
                   (*(ulonglong *)(piVar2 + 8) & 0xffffffff);
          uVar5 = (**(code **)(*piVar2 + 0x14))(*piVar2,uVar14);
          if ((int)uVar5 < 0) goto LAB_82c270bc;
          *(ulonglong *)(piVar2 + 2) = (uVar14 & 0xffffffff) + *(longlong *)(piVar2 + 2);
        }
        piVar2[0x14] = 10;
      }
    }
    if (iVar6 != 10) {
      if (iVar6 != 0xb) {
        if (iVar6 == 0xc) {
          iVar6 = 0;
          if (*(int *)(iStack_ec + 8) == 0) {
            if ((iVar10 == 2) && (*(int *)(piVar2[0xd] + 0x14) == 0)) {
              piVar2[0x14] = 0xd;
              goto LAB_82c25fd0;
            }
            *(undefined4 *)(iStack_ec + 8) = 1;
          }
          *(undefined4 *)(iStack_ec + 0xc) = *(undefined4 *)(piVar2[0xd] + 0x10);
          uVar5 = (**(code **)(*piVar2 + 0xc))(*piVar2,*(undefined2 *)(piVar2[0xd] + 0x1c));
          if ((int)uVar5 < 0) goto LAB_82c270bc;
          uStack_e0 = CONCAT44(1,(((U64)(uStack_e0) >> 32) & 0xFFFFFFFF));
          uVar14 = 1;
          uVar5 = fn_82C1E828(param_1,abStack_f0,auStack_d0,&uStack_d4,&uStack_e0);
          if ((int)uVar5 < 0) goto LAB_82c270bc;
          uVar12 = (ulonglong)abStack_f0[0];
          uVar5 = (ulonglong)*(ushort *)(piVar2[0xd] + 0x1e);
          if ((uVar5 < uVar12) || (uVar12 == 0)) {
LAB_82c262b0:
            piVar2[0x14] = 0xd;
          }
          else {
            if (uVar12 < uVar5) {
              uVar11 = uVar12 + 1;
            }
            else {
              uVar11 = 0;
              if (uVar5 == uVar12) {
                uVar11 = uVar12;
              }
            }
            if (uVar5 < uVar11) {
LAB_82c27004:
              piVar2[0x14] = 0xd;
            }
            else {
              do {
                *(int *)(iStack_ec + 0xc) = iVar6 + *(int *)(iStack_ec + 0xc);
                uVar13 = (uint)uVar12;
                *(uint *)(iStack_ec + 0x10) = uVar13;
                *(uint *)(iStack_ec + 0x14) = uVar13;
                *(undefined4 *)(iStack_ec + 0x18) = *(undefined4 *)(piVar2[0xd] + 0x14);
                if (iVar10 == 1) {
                  *(undefined4 *)(iStack_ec + 0x18) = 1;
                }
                uStack_c0 = *(undefined4 *)(iStack_ec + 0x18);
                uStack_bc = (ushort)*(byte *)(piVar2[0xd] + 4);
                uStack_b8 = *(undefined4 *)(piVar2[0xd] + 8);
                uStack_b4 = *(undefined4 *)(iStack_ec + 0x10);
                uStack_a0 = 0;
                iStack_9c = 0;
                uStack_a8 = ((ulonglong)*(uint *)(iStack_ec + 0xc) -
                            (*(ulonglong *)(iStack_ec + 0x38) & 0xffffffff)) -
                            (ulonglong)*(uint *)(piVar2[1] + 0x14) & 0xffffffff;
                uStack_b0 = uVar13;
                if (((iVar9 == 3) || (iVar9 == 2)) &&
                   (iVar6 = fn_82C10F40(piVar2[0x25],*(undefined1 *)(iStack_ec + 0x20),aiStack_e8),
                   iVar6 < 0)) {
LAB_82c27000:
                  piVar2[0x14] = 0xd;
                  goto LAB_82c27004;
                }
                if (iVar9 == 3) {
                  *(undefined4 *)(aiStack_e8[0] + 0x24) = 1;
                  *(undefined4 *)(aiStack_e8[0] + 0x28) = *(undefined4 *)(iStack_ec + 0xc);
                  *(undefined4 *)(iStack_ec + 4) = 1;
                  if (*(uint *)(iStack_ec + 0xc) < *(uint *)(aiStack_e8[0] + 0xc)) {
                    *(undefined4 *)(aiStack_e8[0] + 0x24) = 0;
                    *(undefined4 *)(aiStack_e8[0] + 0x28) = 0;
                    *(undefined4 *)(aiStack_e8[0] + 0x4c) = 1;
                    *(undefined4 *)(iStack_ec + 0x1c) = 0;
                    *(undefined1 *)(iStack_ec + 0x20) = 0;
                  }
                }
                else if ((iVar9 == 2) &&
                        (((*(int *)(iStack_ec + 0x24) != 0 &&
                          (*(uint *)(iStack_ec + 0x28) < *(uint *)(iStack_ec + 0xc))) ||
                         (*(int *)(iStack_ec + 0x4c) != 0)))) {
                  *(undefined4 *)(iStack_ec + 4) = 0;
                  *(undefined4 *)(iStack_ec + 0x4c) = 0;
                  if ((*(int *)(aiStack_e8[0] + 0x1c) != 0) &&
                     (*(char *)(iStack_ec + 0x20) == *(char *)(aiStack_e8[0] + 0x20))) {
                    *(undefined4 *)(aiStack_e8[0] + 0x1c) = 0;
                    *(undefined1 *)(aiStack_e8[0] + 0x20) = 0;
                    *(undefined4 *)(aiStack_e8[0] + 0x24) = 0;
                    *(undefined4 *)(aiStack_e8[0] + 0x28) = 0;
                  }
                  *(undefined4 *)(iStack_ec + 8) = 0;
                  *(undefined4 *)(iStack_ec + 0x10) = 0;
                  *(undefined4 *)(iStack_ec + 0x14) = 0;
                  *(undefined4 *)(iStack_ec + 0x1c) = 0;
                  *(undefined1 *)(iStack_ec + 0x20) = 0;
                  *(undefined4 *)(iStack_ec + 0x24) = 0;
                  *(undefined4 *)(iStack_ec + 0x28) = 0;
                  goto LAB_82c27000;
                }
                if (*(ulonglong *)(piVar2 + 2) <
                    (ulonglong)*(ushort *)(piVar2 + 0x10) + (uVar14 & 0xffffffff) +
                    *(ulonglong *)(piVar2 + 8)) {
                  uVar15 = ((ulonglong)*(ushort *)(piVar2 + 0x10) -
                           (*(ulonglong *)(piVar2 + 2) & 0xffffffff)) +
                           (*(ulonglong *)(piVar2 + 8) & 0xffffffff) + uVar14;
                  uVar5 = (**(code **)(*piVar2 + 0x14))(*piVar2,uVar15);
                  if ((int)uVar5 < 0) goto LAB_82c270bc;
                  *(ulonglong *)(piVar2 + 2) = (uVar15 & 0xffffffff) + *(longlong *)(piVar2 + 2);
                }
                if (uVar12 != 0) {
                  uVar5 = (**(code **)(*piVar2 + 0x1c))
                                    (*piVar2,*(undefined8 *)(piVar2 + 2),uVar12,&uStack_d8);
                  if ((int)uVar5 < 0) goto LAB_82c270bc;
                  uStack_a0 = 0;
                  uVar15 = uVar12;
                  if (*(int *)(piVar2[0xd] + 0x4c) != 0) {
                    uStack_a0 = 1;
                    *(uint *)(piVar2[0xd] + 0x48) = uVar13;
                    iVar6 = piVar2[0xd];
                    if (*(int *)(iVar6 + 0x3c) == 0) {
                      uVar15 = uVar12 - 0xf;
                      *(int *)(iVar6 + 0x40) = iVar6 + 0x2c;
                      *(undefined4 *)(piVar2[0xd] + 0x44) = 0xf;
                    }
                    iStack_9c = piVar2[0xd] + 0x40;
                  }
                  uVar5 = (**(code **)(*piVar2 + 0x14))(*piVar2,uVar15);
                  if ((int)uVar5 < 0) goto LAB_82c270bc;
                  *(ulonglong *)(piVar2 + 2) = (uVar15 & 0xffffffff) + *(longlong *)(piVar2 + 2);
                  if ((uVar15 & 0xffffffff) == (uVar12 - 0xf & 0xffffffff)) {
                    uStack_e0 = CONCAT44(0xf,(((U64)(uStack_e0) >> 32) & 0xFFFFFFFF));
                    uVar5 = fn_82C1EFD0(param_1,(ulonglong)(uint)piVar2[0xd] + 0x2c,0xf,auStack_d0
                                          ,&uStack_d4,&uStack_e0);
                    if ((int)uVar5 < 0) goto LAB_82c270bc;
                  }
                  uVar5 = fn_82C114C0(uVar8,uStack_d8,&uStack_c0);
                  if (((int)uVar5 < 0) ||
                     (uVar5 = fn_82C108A8(piVar2[0x38],5,0xa0000,uStack_bc,0,0,4),
                     (int)uVar5 < 0)) goto LAB_82c270bc;
                  uVar14 = uVar12 + uVar14;
                  piVar2[0x14] = 0xd;
                }
                if ((ulonglong)*(ushort *)(piVar2[0xd] + 0x1e) <= (uVar11 & 0xffffffff))
                goto LAB_82c27004;
                uStack_e0 = CONCAT44(1,(((U64)(uStack_e0) >> 32) & 0xFFFFFFFF));
                uVar14 = uVar14 + 1;
                uVar5 = fn_82C1E828(param_1,abStack_f0,auStack_d0,&uStack_d4,&uStack_e0);
                if ((int)uVar5 < 0) goto LAB_82c270bc;
                iVar4 = piVar2[0xd];
                uVar12 = (ulonglong)abStack_f0[0];
                if ((*(ushort *)(iVar4 + 0x1e) < uVar12) || (uVar12 == 0)) goto LAB_82c27000;
                iVar6 = *(int *)(iVar4 + 0x20);
                uVar11 = uVar12 + uVar11 + 1;
              } while ((uVar11 & 0xffffffff) <= (ulonglong)*(ushort *)(iVar4 + 0x1e));
              piVar2[0x14] = 0xd;
            }
          }
          goto LAB_82c25fd0;
        }
        if (iVar6 == 5) {
          if ((piVar2[0x2e] != 0) && (piVar2[0x33] != 0)) {
            if (*(ulonglong *)(piVar2 + 8) < *(ulonglong *)(piVar2 + 6)) {
              uStack_e0 = 0;
              uVar5 = fn_82C1E210(param_1,*(undefined1 *)(piVar2 + 0x31),&uStack_e0,0);
              if ((int)uVar5 < 0) goto LAB_82c270bc;
              *(undefined8 *)(piVar2 + 8) = uStack_e0;
              uVar5 = fn_82C1E328(param_1);
              if ((int)uVar5 < 0) goto LAB_82c270bc;
            }
            else {
              piVar2[0x2e] = 0;
              piVar2[0x30] = 0;
              *(undefined1 *)(piVar2 + 0x31) = 0;
              piVar2[0x37] = 0;
              piVar2[0x35] = 0;
              piVar2[0x33] = 0;
            }
            uVar5 = fn_82C1E328(param_1,*(undefined8 *)(piVar2 + 8));
            if ((int)uVar5 < 0) goto LAB_82c270bc;
          }
          if (piVar2[0x2f] != 0) {
            if (piVar2[0x35] == 0) {
              if (*(ulonglong *)(piVar2 + 4) < *(ulonglong *)(piVar2 + 8)) {
                uStack_e0 = 0;
                if (piVar2[0x32] != 0) {
                  uVar5 = fn_82C1E210(param_1,*(undefined1 *)(piVar2 + 0x31),&uStack_e0,1);
                  if ((int)uVar5 < 0) goto LAB_82c270bc;
                  *(undefined8 *)(piVar2 + 8) = uStack_e0;
                  uVar5 = fn_82C1E328(param_1);
                  if ((int)uVar5 < 0) goto LAB_82c270bc;
                }
              }
              else {
                piVar2[0x2f] = 0;
                piVar2[0x30] = 0;
                *(undefined1 *)(piVar2 + 0x31) = 0;
                piVar2[0x37] = 0;
                piVar2[0x32] = 0;
                piVar2[0x34] = 0;
                piVar2[0x36] = 0;
                piVar2[0x35] = 0;
                piVar2[0x33] = 0;
              }
            }
            else {
              piVar2[0x36] = 1;
            }
            uVar5 = fn_82C1E328(param_1,*(undefined8 *)(piVar2 + 8));
            if ((int)uVar5 < 0) goto LAB_82c270bc;
          }
          if (*(ulonglong *)(piVar2 + 6) <= *(ulonglong *)(piVar2 + 8)) {
            piVar2[0x14] = 0x12;
            uVar5 = fn_82C107F8(piVar2[0x38],5,0x20000,0);
            if (-1 < (int)uVar5) {
              uVar5 = 0x50000b;
            }
LAB_82c270bc:
            if ((piVar2[0x14] == 0xc) || (piVar2[0x14] == 0xb)) {
              piVar2[0x14] = 10;
            }
            return uVar5;
          }
          if (piVar2[0x2d] != 0) {
            piVar2[0x39] = 1;
            uVar5 = fn_82C108A8(piVar2[0x38],5,0x20030,0,0,1,4);
            goto LAB_82c270bc;
          }
          uVar5 = *(ulonglong *)(piVar2 + 10);
          *(ulonglong *)(piVar2 + 8) = uVar5;
          *(ulonglong *)(piVar2 + 10) = *(uint *)(piVar2[1] + 8) + uVar5;
          if (*(ulonglong *)(piVar2 + 2) < uVar5) {
            uVar14 = (uVar5 & 0xffffffff) - (*(ulonglong *)(piVar2 + 2) & 0xffffffff);
            uVar5 = (**(code **)(*piVar2 + 0x14))(*piVar2,uVar14);
            if ((int)uVar5 < 0) goto LAB_82c270bc;
            *(ulonglong *)(piVar2 + 2) = (uVar14 & 0xffffffff) + *(longlong *)(piVar2 + 2);
          }
          piVar2[0x14] = 6;
          piVar2[0x2d] = piVar2[0x2d] + 1;
        }
        else {
          iVar6 = piVar2[0xe];
          piVar2[0xe] = iVar6 + 1U;
          if (iVar6 + 1U < *(uint *)(piVar2[0xc] + 0x3c)) {
            piVar2[0x14] = 8;
          }
          else {
            if ((piVar2[0x2f] != 0) && (piVar2[0x35] == 0)) {
              piVar2[0x32] = 1;
            }
            if (piVar2[0x2e] != 0) {
              piVar2[0x33] = 1;
            }
            piVar2[0x14] = 5;
          }
        }
        goto LAB_82c25fd0;
      }
      iVar6 = piVar2[0xd];
      if (*(int *)(iVar6 + 8) != 0) {
        if (*(int *)(iStack_ec + 0x14) == 0) {
          piVar2[0x14] = 0xd;
        }
        else if (*(int *)(iStack_ec + 0x14) == *(int *)(iVar6 + 8)) {
          *(undefined4 *)(iStack_ec + 0x10) = *(undefined4 *)(iVar6 + 0xc);
          *(undefined4 *)(iStack_ec + 0x18) = *(undefined4 *)(piVar2[0xd] + 0x14);
          if (iVar10 == 1) {
            *(undefined4 *)(iStack_ec + 0x18) = 1;
          }
          uStack_c0 = *(undefined4 *)(iStack_ec + 0x18);
          uStack_bc = (ushort)*(byte *)(piVar2[0xd] + 4);
          uStack_b8 = *(undefined4 *)(piVar2[0xd] + 8);
          uStack_b4 = *(undefined4 *)(iStack_ec + 0x10);
          uStack_b0 = (uint)*(ushort *)(piVar2[0xd] + 0x1c);
          uStack_a8 = ((ulonglong)*(uint *)(piVar2[0xd] + 0x10) -
                      (*(ulonglong *)(iStack_ec + 0x38) & 0xffffffff)) -
                      (ulonglong)*(uint *)(piVar2[1] + 0x14) & 0xffffffff;
          uVar5 = (**(code **)(*piVar2 + 0x1c))
                            (*piVar2,*(undefined8 *)(piVar2 + 2),*(undefined2 *)(piVar2[0xd] + 0x1c)
                             ,&uStack_d8);
          if ((int)uVar5 < 0) goto LAB_82c270bc;
          uVar14 = (ulonglong)*(ushort *)(piVar2[0xd] + 0x1c);
          uStack_a0 = 0;
          if (*(int *)(piVar2[0xd] + 0x4c) != 0) {
            uStack_a0 = 1;
            *(uint *)(piVar2[0xd] + 0x48) = (uint)*(ushort *)(piVar2[0xd] + 0x1c);
            iVar6 = piVar2[0xd];
            if (*(int *)(iVar6 + 0x3c) == 0) {
              *(int *)(iVar6 + 0x40) = iVar6 + 0x2c;
              uVar14 = (ulonglong)*(ushort *)(iVar6 + 0x1c) - 0xf;
              *(undefined4 *)(piVar2[0xd] + 0x44) = 0xf;
            }
            iStack_9c = piVar2[0xd] + 0x40;
          }
          uVar5 = (**(code **)(*piVar2 + 0x14))(*piVar2,uVar14);
          if ((int)uVar5 < 0) goto LAB_82c270bc;
          *(ulonglong *)(piVar2 + 2) = (uVar14 & 0xffffffff) + *(longlong *)(piVar2 + 2);
          if ((uVar14 & 0xffffffff) ==
              ((ulonglong)*(ushort *)(piVar2[0xd] + 0x1c) - 0xf & 0xffffffff)) {
            uStack_e0 = CONCAT44(0xf,(((U64)(uStack_e0) >> 32) & 0xFFFFFFFF));
            uVar5 = fn_82C1EFD0(param_1,piVar2[0xd] + 0x2c,0xf,auStack_d0,&uStack_d4,&uStack_e0);
            if ((int)uVar5 < 0) goto LAB_82c270bc;
          }
          uVar5 = fn_82C114C0(uVar8,uStack_d8,&uStack_c0);
          if (((int)uVar5 < 0) ||
             (uVar5 = fn_82C108A8(piVar2[0x38],5,0xa0000,uStack_bc,0,0,4), (int)uVar5 < 0))
          goto LAB_82c270bc;
          *(uint *)(iStack_ec + 0x14) =
               (uint)*(ushort *)(piVar2[0xd] + 0x1c) + *(int *)(iStack_ec + 0x14);
          piVar2[0x14] = 0xd;
        }
        else {
          *(undefined4 *)(iStack_ec + 0x14) = 0;
          piVar2[0x14] = 0xd;
        }
        goto LAB_82c25fd0;
      }
      if (*(int *)(iStack_ec + 8) == 0) {
        if ((iVar10 == 2) && (*(int *)(iVar6 + 0x14) == 0)) {
          piVar2[0x14] = 0xd;
          goto LAB_82c25fd0;
        }
        *(undefined4 *)(iStack_ec + 8) = 1;
      }
      *(undefined4 *)(iStack_ec + 0xc) = *(undefined4 *)(piVar2[0xd] + 0x10);
      *(undefined4 *)(iStack_ec + 0x10) = *(undefined4 *)(piVar2[0xd] + 0xc);
      *(uint *)(iStack_ec + 0x14) = (uint)*(ushort *)(piVar2[0xd] + 0x1c);
      *(undefined4 *)(iStack_ec + 0x18) = *(undefined4 *)(piVar2[0xd] + 0x14);
      if (iVar10 == 1) {
        *(undefined4 *)(iStack_ec + 0x18) = 1;
      }
      uStack_c0 = *(undefined4 *)(iStack_ec + 0x18);
      uStack_bc = (ushort)*(byte *)(piVar2[0xd] + 4);
      uStack_b8 = *(undefined4 *)(piVar2[0xd] + 8);
      uStack_b4 = *(undefined4 *)(iStack_ec + 0x10);
      uStack_b0 = (uint)*(ushort *)(piVar2[0xd] + 0x1c);
      uStack_a8 = ((ulonglong)*(uint *)(iStack_ec + 0xc) -
                  (*(ulonglong *)(iStack_ec + 0x38) & 0xffffffff)) -
                  (ulonglong)*(uint *)(piVar2[1] + 0x14) & 0xffffffff;
      if (((iVar9 != 3) && (iVar9 != 2)) ||
         (iVar6 = fn_82C10F40(piVar2[0x25],*(undefined1 *)(iStack_ec + 0x20),aiStack_e8),
         -1 < iVar6)) {
        if (iVar9 == 3) {
          if (*(int *)(aiStack_e8[0] + 0x24) == 0) {
            *(undefined4 *)(aiStack_e8[0] + 0x28) = *(undefined4 *)(iStack_ec + 0xc);
            *(undefined4 *)(aiStack_e8[0] + 0x24) = 1;
          }
          *(undefined4 *)(iStack_ec + 4) = 1;
          if (*(uint *)(iStack_ec + 0xc) < *(uint *)(aiStack_e8[0] + 0xc)) {
            *(undefined4 *)(aiStack_e8[0] + 0x24) = 0;
            *(undefined4 *)(aiStack_e8[0] + 0x28) = 0;
            *(undefined4 *)(aiStack_e8[0] + 0x4c) = 1;
            *(undefined4 *)(iStack_ec + 0x1c) = 0;
            *(undefined1 *)(iStack_ec + 0x20) = 0;
            if (*(char *)(piVar2 + 0x31) == *(char *)(iStack_ec + 0x20)) {
              *(undefined1 *)(piVar2 + 0x31) = *(undefined1 *)(piVar2[0xd] + 4);
            }
          }
          *(undefined4 *)(iStack_ec + 0x1c) = 0;
          *(undefined1 *)(iStack_ec + 0x20) = 0;
        }
        else if ((iVar9 == 2) &&
                (((*(int *)(iStack_ec + 0x24) != 0 &&
                  (*(uint *)(iStack_ec + 0x28) < *(uint *)(iStack_ec + 0xc))) ||
                 (*(int *)(iStack_ec + 0x4c) != 0)))) {
          *(undefined4 *)(iStack_ec + 4) = 0;
          if (*(char *)(piVar2 + 0x31) == *(char *)(piVar2[0xd] + 4)) {
            *(undefined1 *)(piVar2 + 0x31) = *(undefined1 *)(iStack_ec + 0x20);
          }
          *(undefined4 *)(iStack_ec + 0x4c) = 0;
          if ((*(int *)(aiStack_e8[0] + 0x1c) != 0) &&
             (*(char *)(iStack_ec + 0x20) == *(char *)(aiStack_e8[0] + 0x20))) {
            *(undefined4 *)(aiStack_e8[0] + 0x1c) = 0;
            *(undefined1 *)(aiStack_e8[0] + 0x20) = 0;
            *(undefined4 *)(aiStack_e8[0] + 0x24) = 0;
            *(undefined4 *)(aiStack_e8[0] + 0x28) = 0;
          }
          *(undefined4 *)(iStack_ec + 8) = 0;
          *(undefined4 *)(iStack_ec + 0x10) = 0;
          *(undefined4 *)(iStack_ec + 0x14) = 0;
          *(undefined4 *)(iStack_ec + 0x1c) = 0;
          *(undefined1 *)(iStack_ec + 0x20) = 0;
          *(undefined4 *)(iStack_ec + 0x24) = 0;
          *(undefined4 *)(iStack_ec + 0x28) = 0;
          piVar2[0x14] = 0xd;
          goto LAB_82c25fd0;
        }
        uVar5 = (**(code **)(*piVar2 + 0x1c))
                          (*piVar2,*(undefined8 *)(piVar2 + 2),*(undefined2 *)(piVar2[0xd] + 0x1c),
                           &uStack_d8);
        if ((int)uVar5 < 0) goto LAB_82c270bc;
        uVar14 = (ulonglong)*(ushort *)(piVar2[0xd] + 0x1c);
        uStack_a0 = 0;
        if (*(int *)(piVar2[0xd] + 0x4c) != 0) {
          uStack_a0 = 1;
          *(uint *)(piVar2[0xd] + 0x48) = (uint)*(ushort *)(piVar2[0xd] + 0x1c);
          iVar6 = piVar2[0xd];
          if (*(int *)(iVar6 + 0x3c) == 0) {
            *(int *)(iVar6 + 0x40) = iVar6 + 0x2c;
            uVar14 = (ulonglong)*(ushort *)(iVar6 + 0x1c) - 0xf;
            *(undefined4 *)(piVar2[0xd] + 0x44) = 0xf;
          }
          iStack_9c = piVar2[0xd] + 0x40;
        }
        uVar5 = (**(code **)(*piVar2 + 0x14))(*piVar2,uVar14);
        if ((int)uVar5 < 0) goto LAB_82c270bc;
        *(ulonglong *)(piVar2 + 2) = (uVar14 & 0xffffffff) + *(longlong *)(piVar2 + 2);
        if ((uVar14 & 0xffffffff) == ((ulonglong)*(ushort *)(piVar2[0xd] + 0x1c) - 0xf & 0xffffffff)
           ) {
          uStack_e0 = CONCAT44(0xf,(((U64)(uStack_e0) >> 32) & 0xFFFFFFFF));
          uVar5 = fn_82C1EFD0(param_1,piVar2[0xd] + 0x2c,0xf,auStack_d0,&uStack_d4,&uStack_e0);
          if ((int)uVar5 < 0) goto LAB_82c270bc;
        }
        uVar5 = fn_82C114C0(uVar8,uStack_d8,&uStack_c0);
        if (((int)uVar5 < 0) ||
           (uVar5 = fn_82C108A8(piVar2[0x38],5,0xa0000,uStack_bc,0,0,4), (int)uVar5 < 0))
        goto LAB_82c270bc;
        piVar2[0x14] = 0xd;
        goto LAB_82c25fd0;
      }
      piVar2[0x14] = 0xd;
      goto LAB_82c25fd0;
    }
    cVar1 = *(char *)(piVar2[0xd] + 4);
    iVar6 = fn_82C10F40(piVar2[0x25],cVar1,&iStack_ec);
    if (iVar6 != -0x7fafffea) {
      if (iVar6 < 0) {
        piVar2[0x14] = 0xd;
      }
      else {
        iVar9 = *(int *)(iStack_ec + 4);
        if (iVar9 == 0) {
          piVar2[0x14] = 0xd;
        }
        else {
          iVar6 = piVar2[0xd];
          if (*(short *)(iVar6 + 0x1c) != 0) {
            if (piVar2[0x2e] != 0) {
              if (((cVar1 != *(char *)(piVar2 + 0x31)) || (*(int *)(iVar6 + 0x14) == 0)) ||
                 (*(uint *)(iVar6 + 0x10) <= (uint)piVar2[0x30])) goto LAB_82c262b0;
              piVar2[0x2e] = 0;
              *(undefined1 *)(piVar2 + 0x31) = 0;
              piVar2[0x33] = 0;
            }
            if (piVar2[0x2f] != 0) {
              if (((cVar1 != *(char *)(piVar2 + 0x31)) || (*(int *)(iVar6 + 0x14) == 0)) ||
                 (((uint)piVar2[0x30] <= *(uint *)(iVar6 + 0x10) || (*(int *)(iVar6 + 8) != 0))))
              goto LAB_82c262b0;
              if ((piVar2[0x35] != 0) && (*(uint *)(iVar6 + 0x10) == piVar2[0x34])) {
                piVar2[0x2f] = 0;
                piVar2[0x30] = 0;
                *(undefined1 *)(piVar2 + 0x31) = 0;
                piVar2[0x37] = 0;
                piVar2[0x32] = 0;
                piVar2[0x34] = 0;
                piVar2[0x35] = 0;
                piVar2[0x36] = 0;
                piVar2[0x33] = 0;
              }
              if ((piVar2[0x36] == 0) && (*(uint *)(iVar6 + 0x10) < (uint)piVar2[0x30])) {
                piVar2[0x35] = 1;
                piVar2[0x34] = *(int *)(iVar6 + 0x10);
                piVar2[0x14] = 0xd;
                goto LAB_82c25fd0;
              }
              if (piVar2[0x2f] != 0) {
                piVar2[0x14] = 0xd;
                goto LAB_82c25fd0;
              }
            }
            iVar10 = *(int *)(iStack_ec + 0x30);
            piVar2[0xf] = (uint)*(ushort *)(piVar2 + 0x10) + (int)*(undefined8 *)(piVar2 + 8);
            uVar8 = *(undefined4 *)(iStack_ec + 100);
            uVar5 = (**(code **)(*piVar2 + 0xc))(*piVar2,*(undefined2 *)(iVar6 + 0x1c));
            if ((int)uVar5 < 0) goto LAB_82c270bc;
            iVar6 = piVar2[0xd];
            if (*(char *)(iVar6 + 6) == '\x01') {
              piVar2[0x14] = 0xc;
              *(undefined4 *)(iVar6 + 0x18) = 1;
            }
            else {
              piVar2[0x14] = 0xb;
              *(undefined4 *)(iVar6 + 0x18) = 0;
            }
            goto LAB_82c25fd0;
          }
          piVar2[0x14] = 0xd;
        }
      }
      goto LAB_82c25fd0;
    }
    piVar2[0x14] = 0xd;
  } while( true );
}

