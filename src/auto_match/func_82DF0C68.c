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
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int fStack_110;
extern unsigned int fStack_12c;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern int fn_82CE5088();
extern int fn_82D81CC8();
extern int fn_82D93128();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82079F28;
extern unsigned int lbl_82138690;
extern unsigned int lbl_82145754;
extern unsigned int lbl_82186E6C;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_180;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;


void fn_82DF0C68(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uStack_180;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 uStack_140;
  undefined4 uStack_13c;
  undefined **ppuStack_130;
  float fStack_12c;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_e0;
  uint uStack_d0;
  
  iVar5 = fn_82F6A548();
  uStack_180 = 2;
  dVar16 = (double)lbl_82079F28;
  dVar18 = (double)lbl_82002AE0;
  dVar17 = (double)lbl_82186E6C;
  uVar8 = 0;
  lVar10 = param_4 + 0x28;
  do {
    piVar2 = (int *)lVar10;
    iVar9 = 0;
    if (0 < piVar2[1]) {
      iVar11 = 0;
      do {
        iVar12 = 0;
        iVar1 = *(int *)(*piVar2 + iVar11);
        if (0 < *(int *)(iVar1 + 0x4c)) {
          iVar13 = 0;
          do {
            uVar14 = (ulonglong)*(uint *)(iVar13 + *(int *)(iVar1 + 0x48));
            fn_82CE5088(&fStack_170,param_2,uVar14 + 0x140);
            dVar15 = (double)fStack_170;
            if (((dVar17 <= dVar15) && (dVar15 <= (double)*(float *)(iVar5 + 0x34))) &&
               (uVar14 != param_3)) {
              dVar19 = (double)((ABS(fStack_168) + ABS(fStack_16c)) / (float)(dVar15 + dVar18));
              dVar15 = (double)fn_82D93128(uVar14 + 0xe0);
              if ((double)*(float *)(iVar5 + 0x30) < dVar15) {
                dVar19 = (double)(float)(dVar19 + dVar17);
              }
              if (dVar19 <= dVar16) {
                iVar6 = 0;
                if (0 < *(int *)(iVar5 + 0x24)) {
                  puVar7 = *(uint **)(iVar5 + 0x20);
                  do {
                    if (*puVar7 == uVar14) goto LAB_82df0e20;
                    iVar6 = iVar6 + 1;
                    puVar7 = puVar7 + 1;
                  } while (iVar6 < *(int *)(iVar5 + 0x24));
                }
                puVar3 = (undefined4 *)((int)param_2 + 0x30U & 0xfffffff0);
                uVar20 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                fStack_110 = (float)dVar18;
                fStack_12c = (float)dVar18;
                ppuStack_130 = &lbl_82145754;
                uStack_d0 = 0;
                uStack_10c = 0xffffffff;
                iVar6 = (int)in_r0;
                puVar4 = (undefined4 *)((uint)(auStack_160 + iVar6) & 0xfffffff0);
                *puVar4 = *puVar3;
                puVar4[1] = uVar20;
                puVar4[2] = uVar21;
                puVar4[3] = uVar22;
                uStack_140 = 0;
                uStack_13c = 0;
                uStack_e0 = 0;
                uStack_100 = 0xffffffff;
                puVar3 = (undefined4 *)(iVar6 + (int)(uVar14 + 0x140) & 0xfffffff0);
                uVar20 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                puVar4 = (undefined4 *)((uint)(auStack_150 + iVar6) & 0xfffffff0);
                *puVar4 = *puVar3;
                puVar4[1] = uVar20;
                puVar4[2] = uVar21;
                puVar4[3] = uVar22;
                fn_82D81CC8(param_4,auStack_160,&ppuStack_130);
                if ((uStack_d0 == 0) || ((ulonglong)uStack_d0 == (uVar14 + 0x10 & 0xffffffff))) {
                  uVar8 = uVar14;
                  dVar16 = dVar19;
                }
                ppuStack_130 = &lbl_82138690;
              }
            }
LAB_82df0e20:
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + 4;
          } while (iVar12 < *(int *)(iVar1 + 0x4c));
        }
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar9 < piVar2[1]);
    }
    uVar14 = (ulonglong)uStack_180;
    lVar10 = param_4 + 0x34;
    uStack_180 = (uint)(uVar14 - 1);
    if (uVar14 - 1 == 0) {
      fn_82F6A594(uVar8);
      return;
    }
  } while( true );
}

