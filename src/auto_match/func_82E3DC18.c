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
extern unsigned int *auStack_b8;
extern unsigned int *auStack_e0;
extern int fn_82E3BF28();
extern int fn_82E59FF0();
extern int fn_82E5A018();
extern int fn_82E5A1D0();
extern int fn_82E5C778();
extern int fn_82E5C7D8();
extern int fn_82E62670();
extern int fn_82E628C8();
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EA8;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_820F8ED8;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD8;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;


longlong fn_82E3DC18(longlong param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined2 auStack_e0 [2];
  int *piStack_dc;
  int *piStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  int *piStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int *apiStack_c0 [2];
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  byte abStack_a0 [4];
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  
  if (param_2 == (int *)0x0) {
    lVar7 = -0x7fffbffd;
  }
  else {
    piStack_cc = (int *)0x0;
    piStack_dc = (int *)0x0;
    piStack_d8 = (int *)0x0;
    lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154aa8,0,&piStack_cc);
    if (-1 < lVar7) {
      uStack_c8 = 0;
      lVar7 = (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82154b18,&uStack_c8);
      if (-1 < lVar7) {
        bVar6 = true;
        uVar14 = 0;
        bVar5 = uStack_c8 == 1;
        if (uStack_c8 != 0) {
          do {
            if (piStack_dc != (int *)0x0) {
              (**(code **)(*piStack_dc + 8))();
              piStack_dc = (int *)0x0;
            }
            lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154b18,uVar14,&piStack_dc);
            if (lVar7 < 0) goto LAB_82e3e168;
            uStack_d0 = 0;
            lVar7 = fn_82E62670(piStack_dc,&uStack_d0);
            if (lVar7 < 0) goto LAB_82e3e168;
            if ((uStack_d0 & 0x80000000) != 0) goto LAB_82e3dfbc;
            uStack_b0 = lbl_8202E618;
            uStack_ac = lbl_8202E61C;
            uStack_a8 = lbl_8202E620;
            uStack_a4 = lbl_8202E624;
            lVar7 = fn_82E5C778(piStack_dc,&uStack_b0);
            if (lVar7 < 0) goto LAB_82e3e168;
            pcVar10 = (char *)&uStack_b0;
            pcVar12 = &lbl_820ED058;
            do {
              cVar1 = *pcVar12;
              cVar2 = *pcVar10;
              if (cVar1 != cVar2) break;
              pcVar12 = pcVar12 + 1;
              pcVar10 = pcVar10 + 1;
            } while (pcVar12 != &lbl_820ED068);
            pbVar11 = (byte *)&uStack_b0;
            bVar5 = (bool)(cVar1 == cVar2 & bVar5);
            pbVar13 = &lbl_820F8EA8;
            do {
              bVar3 = *pbVar13;
              bVar4 = *pbVar11;
              if ((ulonglong)bVar3 - (ulonglong)bVar4 != 0) break;
              pbVar13 = pbVar13 + 1;
              pbVar11 = pbVar11 + 1;
            } while (pbVar13 != &lbl_820F8EB8);
            if ((int)((ulonglong)bVar3 - (ulonglong)bVar4) != 0) {
              pbVar11 = (byte *)&uStack_b0;
              pbVar13 = &lbl_820F8EB8;
              do {
                bVar3 = *pbVar13;
                bVar4 = *pbVar11;
                if ((ulonglong)bVar3 - (ulonglong)bVar4 != 0) break;
                pbVar13 = pbVar13 + 1;
                pbVar11 = pbVar11 + 1;
              } while (pbVar13 != &lbl_820F8EC8);
              if ((int)((ulonglong)bVar3 - (ulonglong)bVar4) != 0) {
                pbVar11 = (byte *)&uStack_b0;
                pbVar13 = &lbl_820F8EC8;
                do {
                  bVar3 = *pbVar13;
                  bVar4 = *pbVar11;
                  if ((ulonglong)bVar3 - (ulonglong)bVar4 != 0) break;
                  pbVar13 = pbVar13 + 1;
                  pbVar11 = pbVar11 + 1;
                } while (pbVar13 != &lbl_820F8ED8);
                if ((int)((ulonglong)bVar3 - (ulonglong)bVar4) != 0) goto LAB_82e3dfbc;
              }
            }
            auStack_e0[0] = 0;
            lVar7 = fn_82E5C7D8(piStack_dc,auStack_e0);
            if (lVar7 < 0) goto LAB_82e3e168;
            apiStack_c0[0] = (int *)0x0;
            uStack_90 = lbl_8202E618;
            uStack_8c = lbl_8202E61C;
            uStack_88 = lbl_8202E620;
            uStack_84 = lbl_8202E624;
            uStack_80 = auStack_e0[0];
            iVar8 = fn_82E3BF28(param_1 + 0x1ac,&uStack_90,apiStack_c0,auStack_b8);
            if (iVar8 == 0) goto LAB_82e3dfdc;
            if (apiStack_c0[0] == (int *)0x0) {
              lVar7 = -0x3ff2c945;
              goto LAB_82e3e168;
            }
            iStack_9c = apiStack_c0[0][8];
            iStack_98 = apiStack_c0[0][9];
            iStack_94 = apiStack_c0[0][10];
            pbVar11 = abStack_a0;
            pbVar13 = (byte *)&lbl_82154AC8;
            do {
              bVar3 = *pbVar13;
              bVar4 = *pbVar11;
              if ((ulonglong)bVar3 - (ulonglong)bVar4 != 0) break;
              pbVar13 = pbVar13 + 1;
              pbVar11 = pbVar11 + 1;
            } while (pbVar13 != &lbl_82154AD8);
            if ((int)((ulonglong)bVar3 - (ulonglong)bVar4) != 0) {
              iVar8 = (**(code **)(*apiStack_c0[0] + 0x20))();
              if (iVar8 != 0) {
                iStack_9c = *(int *)(iVar8 + 0x20);
                iStack_98 = *(int *)(iVar8 + 0x24);
                iStack_94 = *(int *)(iVar8 + 0x28);
                pbVar11 = abStack_a0;
                pbVar13 = (byte *)&lbl_82154AC8;
                do {
                  bVar3 = *pbVar13;
                  bVar4 = *pbVar11;
                  if ((ulonglong)bVar3 - (ulonglong)bVar4 != 0) break;
                  pbVar13 = pbVar13 + 1;
                  pbVar11 = pbVar11 + 1;
                } while (pbVar13 != &lbl_82154AD8);
                if ((int)((ulonglong)bVar3 - (ulonglong)bVar4) == 0) goto LAB_82e3dfbc;
              }
LAB_82e3dfdc:
              bVar6 = false;
              break;
            }
LAB_82e3dfbc:
            uVar14 = uVar14 + 1;
          } while ((uVar14 & 0xffffffff) < (ulonglong)uStack_c8);
        }
        uStack_d4 = 0;
        lVar7 = fn_82E62670(piStack_cc,&uStack_d4);
        if (-1 < lVar7) {
          uVar9 = uStack_d4 | 2;
          if (!bVar6) {
            uVar9 = uStack_d4 & 0xfffffffd;
          }
          uStack_d4 = uVar9;
          lVar7 = fn_82E628C8(piStack_cc);
          if (-1 < lVar7) {
            uStack_c4 = 0;
            lVar7 = (**(code **)(*param_2 + 0xc))(param_2,0xffffffff820f8f08,&uStack_c4);
            if ((-1 < lVar7) && (uVar14 = 0, uStack_c4 != 0)) {
              while( true ) {
                if (piStack_d8 != (int *)0x0) {
                  (**(code **)(*piStack_d8 + 8))();
                  piStack_d8 = (int *)0x0;
                }
                lVar7 = (**(code **)(*param_2 + 0x10))
                                  (param_2,0xffffffff820f8f08,uVar14,&piStack_d8);
                if (lVar7 < 0) break;
                auStack_e0[0] = 0;
                lVar7 = fn_82E5A018(piStack_d8,auStack_e0);
                if (lVar7 < 0) break;
                apiStack_c0[0] = (int *)0x0;
                uStack_90 = lbl_8202E618;
                uStack_8c = lbl_8202E61C;
                uStack_88 = lbl_8202E620;
                uStack_84 = lbl_8202E624;
                uStack_80 = auStack_e0[0];
                iVar8 = fn_82E3BF28(param_1 + 0x1ac,&uStack_90,apiStack_c0,auStack_b8);
                if (bVar5) {
                  iVar8 = 1;
                }
                uStack_d0 = 0;
                lVar7 = fn_82E59FF0(piStack_d8,&uStack_d0);
                if (lVar7 < 0) break;
                uVar9 = uStack_d0 | 2;
                if (iVar8 == 0) {
                  uVar9 = uStack_d0 & 0xfffffffd;
                }
                uStack_d0 = uVar9;
                lVar7 = fn_82E5A1D0(piStack_d8);
                if ((lVar7 < 0) ||
                   (uVar14 = uVar14 + 1, (ulonglong)uStack_c4 <= (uVar14 & 0xffffffff))) break;
              }
            }
          }
        }
      }
    }
LAB_82e3e168:
    if (piStack_cc != (int *)0x0) {
      (**(code **)(*piStack_cc + 8))();
      piStack_cc = (int *)0x0;
    }
    if (piStack_dc != (int *)0x0) {
      (**(code **)(*piStack_dc + 8))();
      piStack_dc = (int *)0x0;
    }
    if (piStack_d8 != (int *)0x0) {
      (**(code **)(*piStack_d8 + 8))();
    }
  }
  return lVar7;
}

