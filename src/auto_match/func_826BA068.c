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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_80;
extern int fn_826824B0();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826A7AD0();
extern int fn_826A9878();
extern int fn_826ADE00();
extern int fn_826B0AD8();
extern int fn_826B1CC8();
extern int fn_826B35F0();
extern int fn_826B55A0();
extern unsigned int uStack_90;
extern unsigned int uStack_94;


ulonglong fn_826BA068(int param_1,int param_2,ulonglong param_3,uint *param_4,undefined8 param_5,
                       undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  int aiStack_a0 [2];
  byte *pbStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined1 auStack_80 [128];
  
  pcVar14 = (char *)(param_1 + 0xb0);
  do {
    bVar5 = false;
    if (*pcVar14 != '\n') {
      uVar12 = (ulonglong)*param_4;
      if (0 < (int)*param_4) {
        do {
          if (bVar5) break;
          fn_826ADE00(&pbStack_98,param_1);
          *param_4 = *param_4 - 1;
          uVar11 = (longlong)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4) +
                   ((ulonglong)*(uint *)(param_1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
          if ((ulonglong)uStack_90 < (uVar11 & 0xffffffff)) {
            fn_82683270(param_1 + 8,uVar11 - uStack_90);
          }
          pbVar6 = pbStack_98;
          uVar11 = (ulonglong)uStack_94;
          if ((*pbStack_98 & 1) != 0) {
            iVar13 = 0;
            if ((*pbStack_98 & 4) == 0) {
              iVar13 = *(int *)(param_1 + 0xcc);
              if (iVar13 == 0) {
                iVar15 = 0;
              }
              else {
                iVar15 = *(int *)(iVar13 * 4 + *(int *)(param_1 + 200) + -4);
              }
              if (iVar15 != 0) {
                *(uint *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1U & 0x8fffffff;
              }
              iVar8 = fn_826B1CC8(param_1);
              if (iVar8 != 0) {
                *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
              }
              if (iVar15 != 0) {
                *(uint *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1U & 0x8fffffff;
              }
              if (*(int *)(iVar8 + 0x14) != 0) {
                fn_826824B0();
              }
              *(int *)(iVar8 + 0x14) = iVar15;
              uVar7 = fn_826A7AD0(aiStack_a0,&pbStack_98,param_1);
              fn_826B35F0(param_1,uVar7,pcVar14);
              lVar10 = (ulonglong)*(uint *)(aiStack_a0[0] + 8) - 1;
              *(int *)(aiStack_a0[0] + 8) = (int)lVar10;
              if (lVar10 == 0) {
                fn_826944C8(aiStack_a0[0]);
              }
              if (iVar8 != 0) {
                fn_826824B0(iVar8);
              }
              if (iVar15 != 0) {
                fn_826824B0(iVar15);
              }
            }
            else {
              uVar7 = fn_826A9878(param_1,pbStack_98[7]);
              fn_82695FA0(uVar7,pcVar14);
            }
            fn_826959C8(pcVar14);
            *pcVar14 = '\n';
            *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) & 0x7f;
            fn_826B55A0(param_2,param_1,CONCAT11(pbVar6[2],pbVar6[1]) + uVar11,
                          CONCAT11(pbVar6[4],pbVar6[3]),param_5,param_6,param_7);
            bVar5 = true;
            param_3 = (ulonglong)CONCAT11(pbVar6[6],pbVar6[5]) +
                      (ulonglong)CONCAT11(pbVar6[2],pbVar6[1]) +
                      (ulonglong)CONCAT11(pbVar6[4],pbVar6[3]) + uVar11;
            if ((*pbVar6 & 4) == 0) {
              fn_826B0AD8(param_1 + 200,iVar13);
            }
            else {
              auStack_80[0] = 0;
              if (((*pbVar6 & 1) == 0) || ((*pbVar6 & 4) == 0)) {
                uVar9 = 0xffffffffffffffff;
              }
              else {
                uVar9 = (ulonglong)pbVar6[7];
              }
              uVar7 = fn_826A9878(param_1,uVar9);
              fn_82695FA0(uVar7,auStack_80);
              fn_82696330(auStack_80);
            }
          }
          if ((*pbVar6 & 2) != 0) {
            bVar1 = pbVar6[3];
            bVar2 = pbVar6[1];
            bVar3 = pbVar6[4];
            bVar4 = pbVar6[2];
            *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) | 0x80;
            fn_826B55A0(param_2,param_1,
                          (ulonglong)CONCAT11(bVar3,bVar1) + (ulonglong)CONCAT11(bVar4,bVar2) +
                          uVar11,CONCAT11(pbVar6[6],pbVar6[5]),param_5,param_6,param_7);
            *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) & 0x7f;
          }
          uVar12 = uVar12 - 1;
        } while (0 < (longlong)uVar12);
      }
      if (!bVar5) {
        return (ulonglong)*(uint *)(*(int *)(param_2 + 8) + 0xc);
      }
    }
    if (!bVar5) {
      return param_3;
    }
  } while( true );
}

