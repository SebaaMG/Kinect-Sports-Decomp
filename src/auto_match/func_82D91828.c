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
extern unsigned int *auStack_1b0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CE6460();
extern int fn_82D71498();
extern int fn_82D7C4B0();
extern int fn_82D7D360();
extern int fn_82D80CD0();
extern int fn_82D80D00();
extern int fn_82D92F30();
extern int fn_82DAFBC0();
extern int fn_82DB0088();
extern int fn_83081B28();
extern int fn_83081DE0();
extern int fn_83081EA8();
extern int fn_83082030();
extern unsigned int iStack_1b8;
extern unsigned int iStack_1c0;
extern unsigned int iStack_dc;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_1b4;
extern unsigned int uStack_d8;


void fn_82D91828(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  char cVar20;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  char cVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  ulonglong uVar22;
  longlong lVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  int *apiStack_1d0 [4];
  int iStack_1c0;
  undefined4 *puStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  undefined4 auStack_1b0 [2];
  int *apiStack_1a8 [2];
  int *apiStack_1a0 [2];
  int aiStack_198 [2];
  int aiStack_190 [4];
  undefined4 uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  int *piStack_170;
  uint uStack_16c;
  uint uStack_168;
  int aiStack_164 [33];
  int *piStack_e0;
  int iStack_dc;
  uint uStack_d8;
  int aiStack_d4 [53];
  
  iVar12 = *(int *)(param_1 + 0x4c);
  piVar10 = (int *)fn_82CE5410();
  aiStack_190[0] = *piVar10;
  *piVar10 = (iVar12 * 4 + 0x7fU & 0xffffff80) + aiStack_190[0];
  fn_83081B28(apiStack_1d0,aiStack_190,*(undefined4 *)(param_1 + 0x4c));
  cVar20 = fn_82DAFBC0(param_1,apiStack_1d0);
  iVar12 = aiStack_190[0];
  if (cVar20 != '\0') {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xcf;
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar12;
    return;
  }
  piStack_170 = aiStack_164;
  uStack_168 = 0x80000020;
  uStack_16c = 0;
  fn_83081DE0(apiStack_1d0,&piStack_170);
  uVar23 = uStack_16c;
  puVar11 = (undefined4 *)fn_82CE5410();
  uVar30 = uStack_16c;
  pcVar4 = (char *)*puVar11;
  *puVar11 = pcVar4 + (uVar23 + 0x80 & 0xffffff80);
  if ((*(byte *)(param_1 + 0x25) & 0x30) == 0) {
    if (*(int *)(param_2 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_82f691f0(pcVar4,0,(ulonglong)uStack_16c + 1);
    }
    uVar28 = (ulonglong)uStack_16c;
    piVar14 = (int *)fn_82CE5410();
    piVar10 = (int *)*piVar14;
    uVar23 = uVar30 * 4 + 0x7f & 0xffffff80;
    *piVar14 = uVar23 + (int)piVar10;
    piVar14 = (int *)fn_82CE5410();
    apiStack_1a8[0] = (int *)*piVar14;
    *piVar14 = (int)apiStack_1a8[0] + uVar23;
    if (0 < (int)uVar30) {
      iVar12 = 0;
      uVar31 = uVar28;
      do {
        *(undefined4 *)((int)apiStack_1a8[0] + iVar12) = 0;
        *(undefined4 *)((int)piVar10 + iVar12) = 0;
        iVar12 = iVar12 + 4;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    if (*(char *)(param_2 + 0xd5) == '\0') {
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 0x4c)) {
        iVar29 = 0;
        do {
          iVar19 = *(int *)(*(int *)(param_1 + 0x48) + iVar29);
          iVar18 = *(int *)(*apiStack_1d0[0] + iVar29);
          apiStack_1a8[0][iVar18] = 1;
          uVar1 = *(ushort *)(iVar19 + 0xb0);
          uVar23 = (uint)uVar1;
          if (uVar1 == 0) {
            uVar23 = 1;
          }
          iVar12 = iVar12 + 1;
          iVar29 = iVar29 + 4;
          piVar10[iVar18] = uVar23 + piVar10[iVar18];
        } while (iVar12 < *(int *)(param_1 + 0x4c));
      }
    }
    else {
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 0x4c)) {
        iVar29 = 0;
        do {
          iVar19 = *(int *)(*(int *)(param_1 + 0x48) + iVar29);
          uVar1 = *(ushort *)(iVar19 + 0xec);
          uVar23 = (uint)uVar1;
          iVar18 = *(int *)(*apiStack_1d0[0] + iVar29);
          if ((uint)*(byte *)(param_2 + 0x306) == (int)(uint)uVar1 >> 0xe) {
            uVar23 = (int)(uint)uVar1 >> 7;
          }
          uVar1 = *(ushort *)(iVar19 + 0xea);
          uVar24 = (uint)uVar1;
          if ((uint)*(byte *)(param_2 + 0x305) == (int)(uint)uVar1 >> 0xe) {
            uVar24 = (int)(uint)uVar1 >> 7;
          }
          uVar25 = uVar23 & 0x7f;
          if ((uVar23 & 0x7f) < (uVar24 & 0x7f)) {
            uVar25 = uVar24 & 0x7f;
          }
          if (uVar25 < 6) {
            apiStack_1a8[0][iVar18] = 1;
          }
          uVar23 = (uint)*(ushort *)(iVar19 + 0xb0);
          if (*(ushort *)(iVar19 + 0xb0) == 0) {
            uVar23 = 1;
          }
          iVar12 = iVar12 + 1;
          iVar29 = iVar29 + 4;
          piVar10[iVar18] = piVar10[iVar18] + uVar23;
        } while (iVar12 < *(int *)(param_1 + 0x4c));
      }
    }
    if (0 < (int)uVar30) {
      iVar12 = 0;
      uVar31 = uVar28;
      do {
        if (*(int *)((int)apiStack_1a8[0] + iVar12) == 0) {
          *(undefined4 *)((int)piVar10 + iVar12) = 0xffffffff;
        }
        iVar12 = iVar12 + 4;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    iVar12 = 0;
    if (0 < (int)uVar30) {
      iVar29 = 1;
      piVar14 = apiStack_1a8[0];
      piVar13 = piVar10;
      do {
        iVar19 = *piVar13;
        iVar18 = iVar12;
        if (iVar19 != -2) {
          iVar18 = iVar12 + 1;
          pcVar4[iVar12] = '\0';
          *piVar14 = iVar12;
          if ((-1 < iVar19) && (iVar29 < (int)uVar30)) {
            iVar15 = iVar29;
            piVar26 = piVar13;
            do {
              piVar26 = piVar26 + 1;
              if (*(int *)(param_2 + 0xb4) <= iVar19 + 10) break;
              if ((-1 < *piVar26) && (iVar16 = *piVar26 + iVar19, iVar16 < *(int *)(param_2 + 0xb4))
                 ) {
                pcVar4[iVar12] = '\x01';
                *(int *)(((int)apiStack_1a8[0] - (int)piVar10) + (int)piVar26) = iVar12;
                *piVar26 = -2;
                iVar19 = iVar16;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < (int)uVar30);
          }
        }
        iVar12 = iVar18;
        piVar13 = piVar13 + 1;
        piVar14 = piVar14 + 1;
        iVar29 = iVar29 + 1;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    fn_83082030(apiStack_1d0,apiStack_1a8,iVar12,&piStack_170);
    piVar14 = apiStack_1a8[0];
    piVar13 = (int *)fn_82CE5410();
    *piVar13 = (int)piVar14;
    puVar11 = (undefined4 *)fn_82CE5410();
    *puVar11 = piVar10;
LAB_82d92024:
    iVar12 = fn_83081EA8(apiStack_1d0,&piStack_170);
    uVar23 = uStack_16c;
    cVar20 = *pcVar4;
    *pcVar4 = pcVar4[iVar12];
    pcVar4[iVar12] = cVar20;
    iVar12 = *(int *)(param_1 + 0x4c);
    uVar28 = (ulonglong)uStack_16c;
    iVar29 = *piStack_170;
    if (uStack_16c != 1) {
      piVar14 = (int *)fn_82CE5410();
      piVar10 = (int *)*piVar14;
      iVar19 = 1;
      *piVar14 = (uVar23 * 4 + 0x7f & 0xffffff80) + (int)piVar10;
      *(byte *)(param_1 + 0x25) = (*pcVar4 != '\0') << 4 | *(byte *)(param_1 + 0x25) & 0xcf;
      *piVar10 = param_1;
      if (1 < (int)uVar23) {
        iVar18 = 4;
        do {
          iVar15 = fn_82CE5410();
          iVar15 = (**(code **)(**(int **)(iVar15 + 0x10) + 4))(*(int **)(iVar15 + 0x10),0x6c);
          *(undefined2 *)(iVar15 + 4) = 0x6c;
          iVar15 = fn_82DB0088(iVar15,param_2);
          *(byte *)(iVar15 + 0x26) = *(byte *)(iVar15 + 0x26) & 0xf | 0x50;
          *(byte *)(iVar15 + 0x25) = (pcVar4[iVar19] != '\0') << 4 | *(byte *)(iVar15 + 0x25) & 0xcf
          ;
          *(short *)(iVar15 + 0x20) = (short)param_3[1];
          iVar16 = fn_82CE5410();
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar16 + 0x10),param_3,4);
          }
          *(int *)(param_3[1] * 4 + *param_3) = iVar15;
          param_3[1] = param_3[1] + 1;
          *(int *)((int)piVar10 + iVar18) = iVar15;
          iVar16 = *(int *)(iVar18 + (int)piStack_170);
          iVar17 = fn_82CE5410();
          if ((int)(*(uint *)(iVar15 + 0x50) & 0x3fffffff) < iVar16) {
            fn_82CE6310(*(undefined4 *)(iVar17 + 0x10),iVar15 + 0x48,iVar16,4);
          }
          iVar19 = iVar19 + 1;
          iVar18 = iVar18 + 4;
        } while (iVar19 < (int)uVar23);
      }
      uVar30 = *(uint *)(param_1 + 0x4c);
      uVar31 = (ulonglong)uVar30;
      puVar11 = (undefined4 *)(param_1 + 0x48);
      iVar19 = *(int *)(param_1 + 0x48);
      if (param_4 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else {
        uVar5 = *puVar11;
        *puVar11 = *param_4;
        *param_4 = uVar5;
        uVar5 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = param_4[1];
        param_4[1] = uVar5;
        uVar5 = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x50) = param_4[2];
        param_4[2] = uVar5;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        iVar18 = *piStack_170;
        iVar15 = fn_82CE5410();
        if ((int)(*(uint *)(param_1 + 0x50) & 0x3fffffff) < iVar18) {
          fn_82CE6310(*(undefined4 *)(iVar15 + 0x10),puVar11,iVar18,4);
        }
      }
      if (0 < (int)uVar30) {
        iVar18 = 0;
        do {
          iVar15 = *(int *)(iVar18 + iVar19);
          iVar16 = piVar10[*(int *)(iVar18 + aiStack_190[0])];
          *(int *)(iVar15 + 0xcc) = iVar16;
          *(short *)(iVar15 + 0xa8) = (short)*(undefined4 *)(iVar16 + 0x4c);
          *(int *)(*(int *)(iVar16 + 0x4c) * 4 + *(int *)(iVar16 + 0x48)) = iVar15;
          *(int *)(iVar16 + 0x4c) = *(int *)(iVar16 + 0x4c) + 1;
          if (param_1 != iVar16) {
            iVar17 = 0;
            if (*(short *)(iVar15 + 0xb0) != 0) {
              puVar11 = (undefined4 *)(*(int *)(iVar15 + 0xac) + -0x30);
              do {
                uVar1 = *(ushort *)((int)puVar11 + 0x46);
                uVar2 = *(ushort *)(puVar11 + 0x12);
                uVar3 = *(ushort *)(puVar11 + 0x11);
                *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
                iVar6 = puVar11[0xc];
                uStack_180 = *(undefined4 *)(param_1 + 8);
                uStack_178 = (uint)uVar1;
                uStack_17c = (uint)uVar3;
                uStack_174 = (uint)uVar2;
                if (*(int *)(iVar6 + 0x30) != 0) {
                  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - (uint)uVar3;
                  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (uint)uVar1;
                  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (uint)uVar2;
                  iVar6 = *(int *)(iVar6 + 0x30);
                  *(ushort *)(iVar6 + 0x14) = *(short *)(iVar6 + 0x14) - uVar3;
                  *(ushort *)(iVar6 + 0x18) = *(short *)(iVar6 + 0x18) - uVar2;
                  *(ushort *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x16) - uVar1;
                }
                *(int *)(iVar16 + 0x1c) = *(int *)(iVar16 + 0x1c) + 1;
                *(int *)(puVar11[0xc] + 8) = iVar16;
                puVar11 = puVar11 + 0xc;
                fn_82D92F30(iVar16,*puVar11,&uStack_180);
                iVar17 = iVar17 + 1;
              } while (iVar17 < (int)(uint)*(ushort *)(iVar15 + 0xb0));
            }
          }
          uVar31 = uVar31 - 1;
          iVar18 = iVar18 + 4;
        } while (uVar31 != 0);
      }
      uVar30 = *(uint *)(param_1 + 0x3c);
      uVar31 = (ulonglong)uVar30;
      iVar19 = *(int *)(param_2 + 0x20);
      piVar14 = *(int **)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (0 < (int)uVar30) {
        do {
          piVar13 = (int *)*piVar14;
          if (piVar13 != (int *)0x0) {
            uStack_d8 = 0x80000010;
            piStack_e0 = aiStack_d4;
            iStack_dc = 0;
            iVar18 = 0;
            (**(code **)(*piVar13 + 0x10))(piVar13,&piStack_e0);
            iVar15 = 0;
            piVar26 = piStack_e0;
            if (0 < iStack_dc) {
              do {
                iVar18 = *(int *)(*piVar26 + 0xcc);
                if (iVar18 != iVar19) break;
                iVar15 = iVar15 + 1;
                piVar26 = piVar26 + 1;
              } while (iVar15 < iStack_dc);
            }
            iVar15 = fn_82CE5410();
            iStack_dc = 0;
            if ((uStack_d8 & 0x80000000) == 0) {
              (**(code **)(**(int **)(iVar15 + 0x10) + 0x10))
                        (*(int **)(iVar15 + 0x10),piStack_e0,uStack_d8 & 0x3fffffff,4);
            }
            piStack_e0 = (int *)0x0;
            uStack_d8 = 0x80000000;
            piVar13[3] = iVar18;
            iVar15 = fn_82CE5410();
            if (*(uint *)(iVar18 + 0x3c) == (*(uint *)(iVar18 + 0x40) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar15 + 0x10),(int *)(iVar18 + 0x38),4);
            }
            *(int **)(*(int *)(iVar18 + 0x3c) * 4 + *(int *)(iVar18 + 0x38)) = piVar13;
            *(int *)(iVar18 + 0x3c) = *(int *)(iVar18 + 0x3c) + 1;
          }
          uVar31 = uVar31 - 1;
          piVar14 = piVar14 + 1;
        } while (uVar31 != 0);
      }
      fn_82D80CD0(param_2,param_1);
      if ((iVar12 - iVar29) * 8 < iVar12) {
        iVar12 = *(int *)(param_1 + 0x60);
        iVar29 = param_1 + 0x58;
        lVar27 = 0;
        if (0 < iVar12) {
          iVar19 = 0;
          do {
            uVar30 = *(uint *)(iVar19 + *(int *)(param_1 + 0x5c));
            iVar18 = fn_82D71498(iVar29,lVar27);
            uVar24 = uVar30;
            if (uVar30 < iVar18 + uVar30) {
              do {
                iVar18 = *(int *)((int)*(char *)(*(int *)(uVar30 + 0x10) + 0x10) +
                                  *(int *)(uVar30 + 0x10) + 0xcc);
                if (*(short *)(iVar18 + 0x20) == -1) {
                  iVar18 = *(int *)((int)*(char *)(*(int *)(uVar30 + 0x14) + 0x10) +
                                    *(int *)(uVar30 + 0x14) + 0xcc);
                }
                if (iVar18 == param_1) {
                  uVar30 = *(byte *)(uVar30 + 3) + uVar30;
                }
                else {
                  iVar15 = uVar30 - uVar24;
                  fn_82D7D360(iVar18 + 0x58,uVar30);
                  fn_82D7C4B0(iVar29,uVar30);
                  iVar12 = *(int *)(param_1 + 0x60);
                  if (iVar12 <= (int)lVar27) break;
                  uVar24 = *(uint *)(iVar19 + *(int *)(param_1 + 0x5c));
                  uVar30 = iVar15 + uVar24;
                }
                iVar18 = fn_82D71498(iVar29,lVar27);
              } while (uVar30 < iVar18 + uVar24);
            }
            lVar27 = lVar27 + 1;
            iVar19 = iVar19 + 4;
          } while ((int)lVar27 < iVar12);
        }
      }
      else {
        puStack_1bc = auStack_1b0;
        iStack_1b8 = 0;
        uStack_1b4 = 0x80000001;
        iStack_1c0 = 0x200;
        if (*(int *)(param_1 + 0x60) == 1) {
          auStack_1b0[0] = **(undefined4 **)(param_1 + 0x5c);
          *(undefined4 *)(param_1 + 0x60) = 0;
          iStack_1b8 = 1;
        }
        else if (1 < *(int *)(param_1 + 0x60)) {
          iVar12 = fn_82CE5410();
          if ((uStack_1b4 & 0x3fffffff) < 2) {
            fn_82CE6310(*(undefined4 *)(iVar12 + 0x10),&puStack_1bc,2,4);
          }
          uVar30 = *(uint *)(param_1 + 100);
          puVar11 = *(undefined4 **)(param_1 + 0x5c);
          iVar12 = *(int *)(param_1 + 0x60);
          *(undefined4 **)(param_1 + 0x5c) = puStack_1bc;
          *(int *)(param_1 + 0x60) = iStack_1b8;
          *(uint *)(param_1 + 100) = uStack_1b4;
          puStack_1bc = puVar11;
          iStack_1b8 = iVar12;
          uStack_1b4 = uVar30;
        }
        iVar29 = 0;
        iVar12 = *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x58) = iStack_1c0;
        iStack_1c0 = iVar12;
        if (0 < iStack_1b8) {
          iVar12 = 0;
          do {
            iVar29 = iVar29 + 1;
            uVar30 = *(uint *)((int)puStack_1bc + iVar12);
            iVar19 = iStack_1c0;
            if (iVar29 != iStack_1b8) {
              iVar19 = 0x200;
            }
            for (uVar24 = uVar30; uVar24 < iVar19 + uVar30; uVar24 = *(byte *)(uVar24 + 3) + uVar24)
            {
              uVar25 = *(uint *)((int)*(char *)(*(int *)(uVar24 + 0x10) + 0x10) +
                                 *(int *)(uVar24 + 0x10) + 0xcc);
              if (*(short *)(uVar25 + 0x20) == -1) {
                uVar25 = *(uint *)((int)*(char *)(*(int *)(uVar24 + 0x14) + 0x10) +
                                   *(int *)(uVar24 + 0x14) + 0xcc);
              }
              fn_82D7D360((ulonglong)uVar25 + 0x58,uVar24);
            }
            iVar19 = fn_82CE5410();
            (**(code **)(**(int **)(iVar19 + 0x10) + 8))(*(int **)(iVar19 + 0x10),uVar30,0x200);
            iVar12 = iVar12 + 4;
          } while (iVar29 < iStack_1b8);
        }
        iStack_1b8 = 0;
        iVar12 = fn_82CE5410();
        iStack_1b8 = 0;
        if ((uStack_1b4 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar12 + 0x10) + 0x10))
                    (*(int **)(iVar12 + 0x10),puStack_1bc,uStack_1b4 & 0x3fffffff,4);
        }
        puStack_1bc = (undefined4 *)0x0;
        uStack_1b4 = 0x80000000;
      }
      fn_82D80D00(param_2,param_1);
      if ((*(uint *)(param_1 + 100) & 0x80000000) == 0) {
        uVar22 = (ulonglong)*(uint *)(param_1 + 0x60) + 3;
        uVar31 = (uVar22 & 0xffffffff) >> 0x10;
        uVar7 = (uVar31 | uVar22 & 0xffffffff) >> 8;
        uVar8 = (uVar7 | uVar31 | uVar22 & 0xffffffff) >> 4;
        uVar9 = (uVar8 | uVar7 | uVar31 | uVar22 & 0xffffffff) >> 2;
        lVar27 = ((uVar9 | uVar8 | uVar7 | uVar31 | uVar22 & 0xffffffff) >> 1 |
                 uVar9 | uVar8 | uVar7 | uVar31 | uVar22) + 1;
        if ((int)lVar27 < 1) {
          iVar12 = fn_82CE5410();
          lVar27 = 1;
          iVar29 = param_1 + 0x68;
        }
        else {
          if ((int)(*(uint *)(param_1 + 100) & 0x3fffffff) <= (int)lVar27) goto LAB_82d927d4;
          iVar12 = fn_82CE5410();
          iVar29 = 0;
        }
        fn_82CE6460(*(undefined4 *)(iVar12 + 0x10),param_1 + 0x5c,4,iVar29,lVar27);
      }
LAB_82d927d4:
      cVar20 = '\x01';
      if (1 < (int)uVar23) {
        lVar27 = uVar28 - 1;
        piVar14 = piVar10;
        do {
          piVar14 = piVar14 + 1;
          cVar21 = *(char *)(param_1 + 0x24) + cVar20;
          cVar20 = cVar20 + '\x01';
          *(char *)(*piVar14 + 0x24) = cVar21;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      piVar14 = (int *)fn_82CE5410();
      *piVar14 = (int)piVar10;
      puVar11 = (undefined4 *)fn_82CE5410();
      *puVar11 = pcVar4;
      iVar12 = fn_82CE5410();
      uStack_16c = 0;
      if ((uStack_168 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar12 + 0x10) + 0x10))
                  (*(int **)(iVar12 + 0x10),piStack_170,uStack_168 & 0x3fffffff,4);
      }
      goto LAB_82d92850;
    }
  }
  else {
    if (*(char *)(param_2 + 0xd5) == '\0') {
      uVar28 = (ulonglong)uStack_16c;
      piVar14 = (int *)fn_82CE5410();
      piVar10 = (int *)*piVar14;
      uVar23 = uVar30 * 4 + 0x7f & 0xffffff80;
      *piVar14 = uVar23 + (int)piVar10;
      piVar14 = (int *)fn_82CE5410();
      apiStack_1a0[0] = (int *)*piVar14;
      *piVar14 = (int)apiStack_1a0[0] + uVar23;
      if (0 < (int)uVar30) {
        iVar12 = 0;
        uVar31 = uVar28;
        do {
          *(undefined4 *)((int)apiStack_1a0[0] + iVar12) = 0;
          *(undefined4 *)((int)piVar10 + iVar12) = 0;
          iVar12 = iVar12 + 4;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      if (*(char *)(param_2 + 0xd5) == '\0') {
        iVar12 = 0;
        if (0 < *(int *)(param_1 + 0x4c)) {
          iVar29 = 0;
          do {
            iVar19 = *(int *)(*(int *)(param_1 + 0x48) + iVar29);
            iVar18 = *(int *)(*apiStack_1d0[0] + iVar29);
            apiStack_1a0[0][iVar18] = 1;
            uVar1 = *(ushort *)(iVar19 + 0xb0);
            uVar23 = (uint)uVar1;
            if (uVar1 == 0) {
              uVar23 = 1;
            }
            iVar12 = iVar12 + 1;
            iVar29 = iVar29 + 4;
            piVar10[iVar18] = uVar23 + piVar10[iVar18];
          } while (iVar12 < *(int *)(param_1 + 0x4c));
        }
      }
      else {
        iVar12 = 0;
        if (0 < *(int *)(param_1 + 0x4c)) {
          iVar29 = 0;
          do {
            iVar19 = *(int *)(*(int *)(param_1 + 0x48) + iVar29);
            uVar1 = *(ushort *)(iVar19 + 0xec);
            uVar23 = (uint)uVar1;
            iVar18 = *(int *)(*apiStack_1d0[0] + iVar29);
            if ((uint)*(byte *)(param_2 + 0x306) == (int)(uint)uVar1 >> 0xe) {
              uVar23 = (int)(uint)uVar1 >> 7;
            }
            uVar1 = *(ushort *)(iVar19 + 0xea);
            uVar24 = (uint)uVar1;
            if ((uint)*(byte *)(param_2 + 0x305) == (int)(uint)uVar1 >> 0xe) {
              uVar24 = (int)(uint)uVar1 >> 7;
            }
            uVar25 = uVar23 & 0x7f;
            if ((uVar23 & 0x7f) < (uVar24 & 0x7f)) {
              uVar25 = uVar24 & 0x7f;
            }
            if (uVar25 < 6) {
              apiStack_1a0[0][iVar18] = 1;
            }
            uVar23 = (uint)*(ushort *)(iVar19 + 0xb0);
            if (*(ushort *)(iVar19 + 0xb0) == 0) {
              uVar23 = 1;
            }
            iVar12 = iVar12 + 1;
            iVar29 = iVar29 + 4;
            piVar10[iVar18] = piVar10[iVar18] + uVar23;
          } while (iVar12 < *(int *)(param_1 + 0x4c));
        }
      }
      if (0 < (int)uVar30) {
        iVar12 = 0;
        uVar31 = uVar28;
        do {
          if (*(int *)((int)apiStack_1a0[0] + iVar12) == 0) {
            *(undefined4 *)((int)piVar10 + iVar12) = 0xffffffff;
          }
          iVar12 = iVar12 + 4;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      iVar12 = 0;
      if (0 < (int)uVar30) {
        iVar29 = 1;
        piVar14 = apiStack_1a0[0];
        piVar13 = piVar10;
        do {
          iVar19 = *piVar13;
          iVar18 = iVar12;
          if (iVar19 != -2) {
            iVar18 = iVar12 + 1;
            pcVar4[iVar12] = '\0';
            *piVar14 = iVar12;
            if ((-1 < iVar19) && (iVar29 < (int)uVar30)) {
              iVar15 = iVar29;
              piVar26 = piVar13;
              do {
                piVar26 = piVar26 + 1;
                if (*(int *)(param_2 + 0xb4) <= iVar19 + 10) break;
                if ((-1 < *piVar26) &&
                   (iVar16 = *piVar26 + iVar19, iVar16 < *(int *)(param_2 + 0xb4))) {
                  pcVar4[iVar12] = '\x01';
                  *(int *)(((int)apiStack_1a0[0] - (int)piVar10) + (int)piVar26) = iVar12;
                  *piVar26 = -2;
                  iVar19 = iVar16;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)uVar30);
            }
          }
          iVar12 = iVar18;
          piVar13 = piVar13 + 1;
          piVar14 = piVar14 + 1;
          iVar29 = iVar29 + 1;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      fn_83082030(apiStack_1d0,apiStack_1a0,iVar12,&piStack_170);
      piVar14 = apiStack_1a0[0];
      piVar13 = (int *)fn_82CE5410();
      *piVar13 = (int)piVar14;
      puVar11 = (undefined4 *)fn_82CE5410();
      *puVar11 = piVar10;
      goto LAB_82d92024;
    }
    uVar28 = (ulonglong)uStack_16c;
    piVar10 = (int *)fn_82CE5410();
    aiStack_198[0] = *piVar10;
    *piVar10 = (uVar30 * 4 + 0x7f & 0xffffff80) + aiStack_198[0];
    if (0 < (int)uVar30) {
      iVar12 = 0;
      uVar31 = uVar28;
      do {
        *(undefined4 *)(aiStack_198[0] + iVar12) = 0;
        iVar12 = iVar12 + 4;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      iVar29 = 0;
      do {
        iVar19 = *(int *)(iVar29 + *(int *)(param_1 + 0x48));
        uVar1 = *(ushort *)(iVar19 + 0xec);
        uVar23 = (uint)uVar1;
        if ((uint)*(byte *)(param_2 + 0x306) == (int)(uint)uVar1 >> 0xe) {
          uVar23 = (int)(uint)uVar1 >> 7;
        }
        uVar1 = *(ushort *)(iVar19 + 0xea);
        uVar24 = (uint)uVar1;
        if ((uint)*(byte *)(param_2 + 0x305) == (int)(uint)uVar1 >> 0xe) {
          uVar24 = (int)(uint)uVar1 >> 7;
        }
        uVar25 = uVar23 & 0x7f;
        if ((uVar23 & 0x7f) < (uVar24 & 0x7f)) {
          uVar25 = uVar24 & 0x7f;
        }
        if (uVar25 < 6) {
          *(undefined4 *)(*(int *)(*apiStack_1d0[0] + iVar29) * 4 + aiStack_198[0]) = 1;
        }
        iVar12 = iVar12 + 1;
        iVar29 = iVar29 + 4;
      } while (iVar12 < *(int *)(param_1 + 0x4c));
    }
    *pcVar4 = '\x01';
    iVar12 = 1;
    if (0 < (int)uVar30) {
      iVar29 = 0;
      do {
        if (*(int *)(aiStack_198[0] + iVar29) == 0) {
          *(int *)(aiStack_198[0] + iVar29) = iVar12;
          pcVar4[iVar12] = '\0';
          iVar12 = iVar12 + 1;
        }
        else {
          *(undefined4 *)(aiStack_198[0] + iVar29) = 0;
        }
        iVar29 = iVar29 + 4;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if ((int)uVar30 < iVar12) {
      *pcVar4 = '\0';
    }
    else {
      fn_83082030(apiStack_1d0,aiStack_198,iVar12,&piStack_170);
    }
    iVar12 = aiStack_198[0];
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar12;
    if (uStack_16c != 1) goto LAB_82d92024;
  }
  puVar11 = (undefined4 *)fn_82CE5410();
  *puVar11 = pcVar4;
  iVar12 = fn_82CE5410();
  uStack_16c = 0;
  if ((uStack_168 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar12 + 0x10) + 0x10))
              (*(int **)(iVar12 + 0x10),piStack_170,uStack_168 & 0x3fffffff,4);
  }
LAB_82d92850:
  iVar12 = aiStack_190[0];
  uStack_168 = 0x80000000;
  piStack_170 = (int *)0x0;
  piVar10 = (int *)fn_82CE5410();
  *piVar10 = iVar12;
  return;
}

