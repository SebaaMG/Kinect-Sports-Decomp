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
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82697700();
extern int fn_826C59F8();
extern int fn_826CA988();
extern int fn_826CAA28();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005CCC;
extern unsigned char lbl_8200BED8[];
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_821AAD20;


void fn_826CB6E8(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 *apuStack_78 [2];
  longlong lStack_70;
  
  lVar6 = fn_826C59F8();
  if (lVar6 != 0) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      fn_826CA988(lVar6);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      uVar7 = fn_826957D0(param_1,0);
      dVar12 = (double)fn_826972E0(uVar7,uVar3);
      dVar15 = (double)(float)dVar12;
      dVar12 = (double)lbl_8200BF40;
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        uVar7 = fn_826957D0(param_1,1);
        fn_82697700(uVar7,uVar3);
        if (2 < *(int *)(param_1 + 0x1c)) {
          uVar3 = *(undefined4 *)(param_1 + 0x18);
          uVar7 = fn_826957D0(param_1,2);
          dVar13 = (double)fn_826972E0(uVar7,uVar3);
          dVar16 = (double)lbl_82005CCC;
          dVar14 = (double)((float)dVar13 * (float)(((U64)(lbl_8200BED8) >> 0) & 0xFFFFFFFF));
          if (dVar16 <= (double)((float)dVar13 * (float)(((U64)(lbl_8200BED8) >> 0) & 0xFFFFFFFF))) {
            dVar14 = dVar16;
          }
          if (dVar14 < 0.0) {
            dVar14 = (double)lbl_821AAD20;
          }
          lStack_70 = (longlong)dVar14;
          if (3 < *(int *)(param_1 + 0x1c)) {
            uVar3 = *(undefined4 *)(param_1 + 0x18);
            uVar7 = fn_826957D0(param_1,3);
            fn_82695608(uVar7,uVar3);
            if (4 < *(int *)(param_1 + 0x1c)) {
              uVar3 = *(undefined4 *)(param_1 + 0x18);
              uVar7 = fn_826957D0(param_1,4);
              fn_82696D38(&puStack_80,uVar7,uVar3,0xffffffffffffffff,0);
              pcVar11 = "none";
              pcVar10 = (char *)*puStack_80;
              pcVar9 = pcVar10;
              pcVar8 = pcVar11;
              do {
                cVar1 = *pcVar9;
                cVar2 = *pcVar8;
                if (cVar1 == '\0') break;
                pcVar9 = pcVar9 + 1;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 != cVar2) {
                pcVar8 = "vertical";
                pcVar9 = pcVar10;
                do {
                  cVar1 = *pcVar9;
                  cVar2 = *pcVar8;
                  if (cVar1 == '\0') break;
                  pcVar9 = pcVar9 + 1;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 != cVar2) {
                  pcVar9 = "horizontal";
                  do {
                    cVar1 = *pcVar10;
                    cVar2 = *pcVar9;
                    if (cVar1 == '\0') break;
                    pcVar10 = pcVar10 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 == cVar2);
                }
              }
              if (5 < *(int *)(param_1 + 0x1c)) {
                uVar3 = *(undefined4 *)(param_1 + 0x18);
                uVar7 = fn_826957D0(param_1,5);
                fn_82696D38(&puStack_7c,uVar7,uVar3,0xffffffffffffffff,0);
                puVar5 = puStack_7c;
                puStack_7c[2] = puStack_7c[2] + 1;
                uVar4 = puStack_80[2];
                puStack_80[2] = (int)((ulonglong)uVar4 - 1);
                if ((ulonglong)uVar4 - 1 == 0) {
                  fn_826944C8(puStack_80);
                }
                puStack_80 = puVar5;
                uVar4 = puStack_7c[2];
                puStack_7c[2] = (int)((ulonglong)uVar4 - 1);
                if ((ulonglong)uVar4 - 1 == 0) {
                  fn_826944C8(puStack_7c);
                }
                pcVar10 = (char *)*puStack_80;
                pcVar9 = pcVar10;
                do {
                  cVar1 = *pcVar9;
                  cVar2 = *pcVar11;
                  if (cVar1 == '\0') break;
                  pcVar9 = pcVar9 + 1;
                  pcVar11 = pcVar11 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 != cVar2) {
                  pcVar9 = "square";
                  do {
                    cVar1 = *pcVar10;
                    cVar2 = *pcVar9;
                    if (cVar1 == '\0') break;
                    pcVar10 = pcVar10 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 == cVar2);
                }
                if (6 < *(int *)(param_1 + 0x1c)) {
                  uVar3 = *(undefined4 *)(param_1 + 0x18);
                  uVar7 = fn_826957D0(param_1,6);
                  fn_82696D38(apuStack_78,uVar7,uVar3,0xffffffffffffffff,0);
                  puVar5 = apuStack_78[0];
                  apuStack_78[0][2] = apuStack_78[0][2] + 1;
                  uVar4 = puStack_80[2];
                  puStack_80[2] = (int)((ulonglong)uVar4 - 1);
                  if ((ulonglong)uVar4 - 1 == 0) {
                    fn_826944C8(puStack_80);
                  }
                  puStack_80 = puVar5;
                  uVar4 = apuStack_78[0][2];
                  apuStack_78[0][2] = (int)((ulonglong)uVar4 - 1);
                  if ((ulonglong)uVar4 - 1 == 0) {
                    fn_826944C8(apuStack_78[0]);
                  }
                  pcVar8 = "miter";
                  pcVar10 = (char *)*puStack_80;
                  pcVar9 = pcVar10;
                  do {
                    cVar1 = *pcVar9;
                    cVar2 = *pcVar8;
                    if (cVar1 == '\0') break;
                    pcVar9 = pcVar9 + 1;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 != cVar2) {
                    pcVar9 = "bevel";
                    do {
                      cVar1 = *pcVar10;
                      cVar2 = *pcVar9;
                      if (cVar1 == '\0') break;
                      pcVar10 = pcVar10 + 1;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar1 == cVar2);
                  }
                  if (7 < *(int *)(param_1 + 0x1c)) {
                    uVar3 = *(undefined4 *)(param_1 + 0x18);
                    uVar7 = fn_826957D0(param_1,7);
                    dVar14 = (double)fn_826972E0(uVar7,uVar3);
                    dVar12 = (double)(float)dVar14;
                    if ((double)(float)dVar14 < (double)lbl_82002AE0) {
                      dVar12 = (double)lbl_82002AE0;
                    }
                    if (dVar16 < dVar12) {
                      dVar12 = dVar16;
                    }
                  }
                }
              }
              uVar4 = puStack_80[2];
              puStack_80[2] = (int)((ulonglong)uVar4 - 1);
              if ((ulonglong)uVar4 - 1 == 0) {
                fn_826944C8();
              }
            }
          }
        }
      }
      fn_826CAA28(dVar15,dVar12,lVar6);
    }
  }
  return;
}

