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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern int fn_828F0170();
extern int fn_828FA8D8();
extern int fn_82934408();
extern int fn_82934720();
extern int fn_82934858();
extern int fn_829352D0();
extern int fn_82958638();
extern int fn_829873C0();
extern int fn_82F65B18();
extern int fn_82F66A80();
extern int fn_82F6DF30();
extern unsigned int iStack_e0;
extern unsigned int lbl_8202C724;
extern unsigned int lbl_8202C726;
extern unsigned int lbl_8202C728;
extern unsigned int lbl_8202C72A;
extern unsigned int lbl_8202C72C;
extern unsigned int lbl_8202C72E;
extern unsigned int lbl_8202C730;
extern unsigned int lbl_8202C732;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b6;
extern unsigned int uStack_b8;
extern unsigned int uStack_ba;
extern unsigned int uStack_bc;
extern unsigned int uStack_be;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_dc;


undefined8
fn_829348F0(int *param_1,undefined8 param_2,int param_3,byte *param_4,undefined2 param_5,
             uint param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  byte bVar8;
  int iVar7;
  ulonglong uVar4;
  byte *pbVar9;
  byte *pbVar10;
  char cVar13;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  char *pcVar19;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [2];
  byte *pbStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  pbVar9 = &lbl_8202C730;
  iStack_e0 = 0;
  pbVar10 = param_4;
  do {
    bVar8 = *pbVar9;
    bVar1 = *pbVar10;
    if ((ulonglong)bVar8 - (ulonglong)bVar1 != 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
  } while (pbVar9 != &lbl_8202C732);
  pbVar12 = &lbl_8202C728;
  pbVar11 = &lbl_8202C724;
  pbVar10 = pbVar11;
  pbVar9 = param_4;
  if ((int)((ulonglong)bVar8 - (ulonglong)bVar1) == 0) {
LAB_82934a58:
    pbVar10 = param_4 + 2;
    auStack_b0[0] = 10;
    uStack_a0 = 0;
    uStack_9c = 0;
    pbStack_a8 = pbVar10;
    fn_829873C0(*param_1,1,auStack_b0,0,0,param_1[1],2,&iStack_e0);
    uVar3 = fn_82934408(*(undefined4 *)(iStack_e0 + 0x30),&uStack_dc,auStack_d8);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    iVar7 = *(int *)(iStack_e0 + 0x40);
    if (iVar7 == 0) {
LAB_82934c90:
      if ((*(uint *)(iStack_e0 + 0x2c) & 2) != 0) {
        *(ushort *)(param_3 + 10) = *(ushort *)(param_3 + 10) | 1;
      }
      if (*(int *)(iStack_e0 + 0x38) == 0) {
        if (*(int *)(iStack_e0 + 0x34) != 0) {
          uVar2 = *(undefined4 *)(iStack_e0 + 0x34);
          goto LAB_82934d48;
        }
        if ((*(ushort *)(param_3 + 10) & 1) != 0) {
          uVar3 = fn_82934858(param_2,uStack_dc,param_3 + 0x10);
          goto LAB_82934cdc;
        }
      }
      else {
        uVar2 = *(undefined4 *)(iStack_e0 + 0x38);
LAB_82934d48:
        uVar3 = fn_82934720(param_2,uStack_dc,auStack_d8[0],uVar2,param_3 + 0x10);
LAB_82934cdc:
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      if ((*(int *)(*(int *)(iStack_e0 + 0x30) + 4) != 9) ||
         (*(int *)(*(int *)(iStack_e0 + 0x30) + 0x14) != 0x21)) {
        uVar3 = fn_82958638(param_2,*(undefined4 *)(iStack_e0 + 0x30),1,0,param_3 + 0xc);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        goto LAB_82934d80;
      }
      fn_828FA8D8((ulonglong)*(uint *)(*param_1 + 4) + 0x18,0,0xb59,0xffffffff8202f2b8,pbVar10
                       );
    }
    else {
      puVar15 = (undefined1 *)0x0;
      puVar14 = (undefined1 *)0x0;
      puVar16 = (undefined1 *)0x0;
      if (iVar7 == 0) {
LAB_82934bc4:
        puVar17 = puVar15;
        if ((puVar15 == (undefined1 *)0x0) && (puVar17 = puVar14, puVar14 == (undefined1 *)0x0))
        goto LAB_82934c90;
      }
      else {
        do {
          iVar6 = *(int *)(iVar7 + 8);
          puVar17 = puVar16;
          if (*(int *)(iVar6 + 4) == 0x12) {
            iVar5 = 0;
            if (*(int *)(iVar6 + 0x10) != 0) {
              iVar5 = *(int *)(*(int *)(iVar6 + 0x10) + 0x18);
            }
            puVar18 = (undefined1 *)0x0;
            if (*(int *)(iVar6 + 0x14) != 0) {
              puVar18 = *(undefined1 **)(*(int *)(iVar6 + 0x14) + 0x18);
            }
            if (iVar5 == 0) {
              if ((puVar18 != (undefined1 *)0x0) &&
                 (bVar8 = fn_82F6DF30(*puVar18), bVar8 == *param_4)) {
                puVar14 = puVar18;
              }
            }
            else {
              iVar6 = fn_828F0170(iVar5,0,auStack_d0);
              if (((((-1 < iVar6) && (puVar18 != (undefined1 *)0x0)) &&
                   (bVar8 = fn_82F6DF30(*puVar18), bVar8 == *param_4)) &&
                  ((puVar17 = puVar18, (param_6 | 0x80000000) != uStack_cc &&
                   (puVar17 = puVar16, ((uStack_cc ^ (param_6 | 0x80000000)) & 0xffff0000) == 0))))
                 && ((uStack_cc & 0xffff) == 0)) {
                puVar15 = puVar18;
              }
            }
          }
          iVar7 = *(int *)(iVar7 + 0xc);
          puVar16 = puVar17;
        } while (iVar7 != 0);
        if (puVar17 == (undefined1 *)0x0) goto LAB_82934bc4;
      }
      bVar8 = fn_82F6DF30(*puVar17);
      if (*param_4 != bVar8) goto LAB_82934c90;
      iVar7 = fn_82F66A80(puVar17[1]);
      if (iVar7 == 0) goto LAB_82934c90;
      cVar13 = puVar17[2];
      pcVar19 = puVar17 + 2;
      while (iVar7 = fn_82F66A80(cVar13), iVar7 != 0) {
        pcVar19 = pcVar19 + 1;
        cVar13 = *pcVar19;
      }
      if (*pcVar19 != '\0') goto LAB_82934c90;
      uVar4 = fn_82F65B18(puVar17 + 1);
      if ((uVar4 & 0xffffffff) < 0x2000) {
        *(ushort *)(param_3 + 10) =
             (ushort)((uVar4 & 0xffffffff) << 2) | *(ushort *)(param_3 + 10) | 2;
        goto LAB_82934c90;
      }
      fn_828FA8D8((ulonglong)*(uint *)(*param_1 + 4) + 0x18,0,0xb56,0xffffffff8202f328,pbVar10
                       );
    }
    uVar3 = 0xffffffff80004005;
  }
  else {
    do {
      bVar8 = *pbVar10;
      bVar1 = *pbVar9;
      if ((ulonglong)bVar8 - (ulonglong)bVar1 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar10 != &lbl_8202C726);
    pbVar10 = pbVar12;
    pbVar9 = param_4;
    if ((int)((ulonglong)bVar8 - (ulonglong)bVar1) == 0) goto LAB_82934a58;
    do {
      bVar8 = *pbVar10;
      bVar1 = *pbVar9;
      if ((ulonglong)bVar8 - (ulonglong)bVar1 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar10 != &lbl_8202C72A);
    if ((int)((ulonglong)bVar8 - (ulonglong)bVar1) == 0) goto LAB_82934a58;
    pbVar9 = &lbl_8202C72C;
    pbVar10 = param_4;
    do {
      bVar8 = *pbVar9;
      bVar1 = *pbVar10;
      if ((ulonglong)bVar8 - (ulonglong)bVar1 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar9 != &lbl_8202C72E);
    if ((int)((ulonglong)bVar8 - (ulonglong)bVar1) == 0) goto LAB_82934a58;
    uStack_c0 = 1;
    uStack_bc = 1;
    uStack_be = 3;
    uStack_ba = 4;
    uStack_b8 = 1;
    uStack_b6 = 0;
    uStack_b4 = 0;
    uVar3 = fn_829352D0(param_2,&uStack_c0,0x10,6,param_3 + 0xc,4);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uStack_dc = 1;
LAB_82934d80:
    uVar3 = fn_829352D0(param_2,param_4,0xffffffffffffffff,7,param_3,1);
    pbVar10 = param_4;
    if (-1 < (int)uVar3) {
      do {
        bVar8 = *pbVar11;
        bVar1 = *pbVar10;
        if ((ulonglong)bVar8 - (ulonglong)bVar1 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar11 != &lbl_8202C726);
      if ((int)((ulonglong)bVar8 - (ulonglong)bVar1) == 0) {
        *(undefined2 *)(param_3 + 4) = 0;
      }
      else {
        do {
          bVar8 = *pbVar12;
          bVar1 = *param_4;
          if ((ulonglong)bVar8 - (ulonglong)bVar1 != 0) break;
          pbVar12 = pbVar12 + 1;
          param_4 = param_4 + 1;
        } while (pbVar12 != &lbl_8202C72A);
        if ((int)((ulonglong)bVar8 - (ulonglong)bVar1) == 0) {
          *(undefined2 *)(param_3 + 4) = 1;
        }
        else {
          *(undefined2 *)(param_3 + 4) = 2;
        }
      }
      *(undefined2 *)(param_3 + 6) = param_5;
      *(short *)(param_3 + 8) = (short)uStack_dc;
    }
  }
  return uVar3;
}

