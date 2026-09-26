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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_8268B330();
extern int fn_8268B400();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_8269A190();
extern int fn_826C0B08();
extern int fn_8278C028();
extern int fn_827A7E68();
extern unsigned int iStack_12c;
extern unsigned int iStack_14c;
extern unsigned int iStack_15c;
extern unsigned int iStack_160;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int iStack_174;
extern unsigned int iStack_178;
extern unsigned int iStack_17c;
extern unsigned int iStack_180;
extern unsigned int iStack_188;
extern unsigned int lbl_82005718;
extern unsigned int uStack_189;
extern unsigned int uStack_18a;
extern unsigned int uStack_18b;
extern unsigned int uStack_18c;
extern unsigned int uStack_18d;
extern unsigned int uStack_18e;
extern unsigned int uStack_18f;
extern unsigned int uStack_190;
extern unsigned int uStack_191;
extern unsigned int uStack_192;
extern unsigned int uStack_193;
extern unsigned int uStack_194;
extern unsigned int uStack_198;
extern unsigned int uStack_1a0;
extern U64 storeWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_827ACF88(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  char cVar20;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  ushort uVar25;
  uint uVar26;
  ulonglong uVar27;
  char in_RESERVE;
  byte bVar28;
  double dVar29;
  undefined8 uStack_1a0;
  uint uStack_198;
  undefined1 uStack_194;
  undefined1 uStack_193;
  undefined1 uStack_192;
  undefined1 uStack_191;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  int iStack_188;
  undefined4 *puStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int aiStack_158 [2];
  undefined1 auStack_150 [4];
  int iStack_14c;
  undefined1 auStack_140 [8];
  double dStack_138;
  undefined1 auStack_130 [4];
  int iStack_12c;
  undefined1 auStack_120 [8];
  double dStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [8];
  double dStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  
  uVar4 = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
  iStack_188 = 0;
  cVar20 = fn_82695468(param_1,0x1f);
  if (cVar20 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee38,0,0);
  }
  else {
    uVar27 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar27 = 0;
    }
    if ((uVar27 & 0xffffffff) != 0) {
      if (*(int *)(param_1 + 0x1c) < 1) {
        puVar1 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar1);
        *puVar1 = 1;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar15 = fn_826957D0(param_1,0);
        fn_82696D38(&puStack_184,uVar15,uVar2,0xffffffffffffffff,0);
        uVar22 = (ulonglong)(uint)puStack_184[4];
        if ((uVar22 == 0) || (*(char *)*puStack_184 != '.')) {
          pcVar21 = (char *)*puStack_184;
          uVar15 = 0;
        }
        else {
          uVar22 = uVar22 - 1;
          pcVar21 = (char *)*puStack_184 + 1;
          uVar15 = 1;
        }
        iVar16 = fn_827A7E68(uVar27 + 0x30,uVar15,pcVar21,uVar22);
        if (iVar16 == 0) {
          puVar1 = *(undefined1 **)(param_1 + 4);
          fn_826959C8(puVar1);
          *puVar1 = 1;
        }
        else {
          uVar27 = fn_8267B890(*(undefined4 *)
                                      (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,0);
          if ((uVar27 & 0xffffffff) == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = fn_826C0B08(uVar27,*(undefined4 *)(param_1 + 0x18));
          }
          iVar3 = *(int *)(param_1 + 0x18);
          if ((*(ushort *)(iVar16 + 0x2a) & 1) != 0) {
            fn_8268B330(&uStack_198);
            fn_8268B400(&uStack_198,0x23);
            uStack_1a0 = CONCAT44(*(undefined4 *)(iVar16 + 0x20),(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
            uVar27 = uStack_1a0;
            uStack_1a0 = ((((U64)(uStack_1a0)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)((uint)*(undefined4 *)(iVar16 + 0x20) >> 0x10))) & ((U64)0xFF)) << 8));
            bVar14 = (((U64)(uStack_1a0) >> 8) & 0xFF);
            bVar28 = (((U64)(uStack_1a0) >> 8) & 0xFF) >> 4;
            uStack_1a0 = uVar27;
            fn_8268B400(&uStack_198,"P0123456789ABCDEF"[bVar28 + 1]);
            fn_8268B400(&uStack_198,"P0123456789ABCDEF"[(bVar14 & 0xf) + 1]);
            bVar28 = (((U64)(uStack_1a0) >> 16) & 0xFF);
            fn_8268B400(&uStack_198,"P0123456789ABCDEF"[((((U64)(uStack_1a0) >> 16) & 0xFF) >> 4) + 1]);
            fn_8268B400(&uStack_198,"P0123456789ABCDEF"[(bVar28 & 0xf) + 1]);
            bVar28 = (((U64)(uStack_1a0) >> 24) & 0xFF);
            fn_8268B400(&uStack_198,"P0123456789ABCDEF"[((((U64)(uStack_1a0) >> 24) & 0xFF) >> 4) + 1]);
            fn_8268B400(&uStack_198,"P0123456789ABCDEF"[(bVar28 & 0xf) + 1]);
            fn_8269A190(&uStack_1a0,(ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,&uStack_198);
            auStack_150[0] = 5;
            iVar6 = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
            iStack_14c = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
            *(int *)((((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF) + 8) = *(int *)((((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF) + 8) + 1;
            uStack_18a = 0;
            iStack_164 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff821cdae4)
            ;
            *(int *)(iStack_164 + 8) = *(int *)(iStack_164 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_164,auStack_150,
                       &uStack_18a);
            lVar23 = (ulonglong)*(uint *)(iStack_164 + 8) - 1;
            *(int *)(iStack_164 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_164);
            }
            fn_82696330(auStack_150);
            lVar23 = (ulonglong)*(uint *)(iVar6 + 8) - 1;
            bVar28 = (lVar23 == 0) << 1;
            *(int *)(iVar6 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iVar6);
            }
            lVar23 = ((ulonglong)uStack_198 & 0xfffffffc) + 4;
            do {
              puVar24 = (uint *)lVar23;
              uVar27 = (ulonglong)*puVar24;
              if (in_RESERVE != '\0') {
                uVar5 = storeWordConditionalIndexed(uVar27 - 1,0,lVar23);
                *puVar24 = uVar5;
                bVar28 = 2;
              }
            } while (!(bool)(bVar28 >> 1 & 1));
            if (uVar27 == 1) {
              fn_8267BE38();
            }
          }
          if ((*(ushort *)(iVar16 + 0x2a) >> 2 & 1) != 0) {
            uVar15 = fn_8278C028(iVar16);
            fn_8269A190(&uStack_1a0,(ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,uVar15);
            auStack_130[0] = 5;
            iVar6 = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
            iStack_12c = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
            *(int *)((((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF) + 8) = *(int *)((((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF) + 8) + 1;
            uStack_18b = 0;
            aiStack_158[0] =
                 fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e84);
            *(int *)(aiStack_158[0] + 8) = *(int *)(aiStack_158[0] + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),aiStack_158,auStack_130,
                       &uStack_18b);
            lVar23 = (ulonglong)*(uint *)(aiStack_158[0] + 8) - 1;
            *(int *)(aiStack_158[0] + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(aiStack_158[0]);
            }
            fn_82696330(auStack_130);
            lVar23 = (ulonglong)*(uint *)(iVar6 + 8) - 1;
            *(int *)(iVar6 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iVar6);
            }
          }
          dVar29 = (double)lbl_82005718;
          if ((*(ushort *)(iVar16 + 0x2a) >> 3 & 1) != 0) {
            auStack_b0[0] = 3;
            uStack_1a0 = (ulonglong)(int)(uint)*(ushort *)(iVar16 + 0x26);
            uStack_189 = 0;
            dStack_a8 = (double)(float)((double)uStack_1a0 * dVar29);
            iStack_15c = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff820073f0)
            ;
            *(int *)(iStack_15c + 8) = *(int *)(iStack_15c + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_15c,auStack_b0,
                       &uStack_189);
            lVar23 = (ulonglong)*(uint *)(iStack_15c + 8) - 1;
            *(int *)(iStack_15c + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_15c);
            }
            fn_82696330(auStack_b0);
          }
          if ((*(ushort *)(iVar16 + 0x2a) >> 5 & 1) != 0) {
            bVar7 = (*(byte *)(iVar16 + 0x28) & 2) == 0;
            lVar23 = (ulonglong)*(uint *)(iVar3 + 0x78) + 0x254;
            if (bVar7) {
              uVar27 = fn_82694700(lVar23,0xffffffff821ae24c);
              iVar6 = (int)uVar27;
              uVar22 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            else {
              uVar22 = fn_82694700(lVar23,0xffffffff82011774);
              iVar6 = (int)uVar22;
              uVar27 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            auStack_110[0] = 5;
            *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
            uStack_192 = 0;
            iStack_174 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e78)
            ;
            *(int *)(iStack_174 + 8) = *(int *)(iStack_174 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_174,auStack_110,
                       &uStack_192);
            lVar23 = (ulonglong)*(uint *)(iStack_174 + 8) - 1;
            *(int *)(iStack_174 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_174);
            }
            fn_82696330(auStack_110);
            if (bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar27 + 8) - 1;
              *(int *)((int)uVar27 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar27);
              }
            }
            if (!bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar22 + 8) - 1;
              *(int *)((int)uVar22 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar22);
              }
            }
          }
          if ((*(ushort *)(iVar16 + 0x2a) >> 4 & 1) != 0) {
            bVar7 = (*(byte *)(iVar16 + 0x28) & 1) == 0;
            lVar23 = (ulonglong)*(uint *)(iVar3 + 0x78) + 0x254;
            if (bVar7) {
              uVar27 = fn_82694700(lVar23,0xffffffff821ae24c);
              iVar6 = (int)uVar27;
              uVar22 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            else {
              uVar22 = fn_82694700(lVar23,0xffffffff8201178c);
              iVar6 = (int)uVar22;
              uVar27 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            auStack_d0[0] = 5;
            *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
            uStack_18c = 0;
            iStack_180 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e6c)
            ;
            *(int *)(iStack_180 + 8) = *(int *)(iStack_180 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_180,auStack_d0,
                       &uStack_18c);
            lVar23 = (ulonglong)*(uint *)(iStack_180 + 8) - 1;
            *(int *)(iStack_180 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_180);
            }
            fn_82696330(auStack_d0);
            if (bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar27 + 8) - 1;
              *(int *)((int)uVar27 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar27);
              }
            }
            if (!bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar22 + 8) - 1;
              *(int *)((int)uVar22 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar22);
              }
            }
          }
          if ((*(ushort *)(iVar16 + 0x2a) >> 7 & 1) != 0) {
            bVar7 = (*(byte *)(iVar16 + 0x28) & 8) == 0;
            lVar23 = (ulonglong)*(uint *)(iVar3 + 0x78) + 0x254;
            if (bVar7) {
              uVar27 = fn_82694700(lVar23,0xffffffff82196f10);
              iVar6 = (int)uVar27;
              uVar22 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            else {
              uVar22 = fn_82694700(lVar23,0xffffffff82196f18);
              iVar6 = (int)uVar22;
              uVar27 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            auStack_f0[0] = 5;
            *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
            uStack_190 = 0;
            iStack_16c = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82011720)
            ;
            *(int *)(iStack_16c + 8) = *(int *)(iStack_16c + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_16c,auStack_f0,
                       &uStack_190);
            lVar23 = (ulonglong)*(uint *)(iStack_16c + 8) - 1;
            *(int *)(iStack_16c + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_16c);
            }
            fn_82696330(auStack_f0);
            if (bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar27 + 8) - 1;
              *(int *)((int)uVar27 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar27);
              }
            }
            if (!bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar22 + 8) - 1;
              *(int *)((int)uVar22 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar22);
              }
            }
          }
          if ((*(ushort *)(iVar16 + 0x2a) >> 1 & 1) != 0) {
            uStack_1a0 = (ulonglong)*(short *)(iVar16 + 0x24);
            auStack_140[0] = 3;
            uStack_18e = 0;
            dStack_138 = (double)(float)((double)(longlong)uStack_1a0 * dVar29);
            iStack_17c = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82011728)
            ;
            *(int *)(iStack_17c + 8) = *(int *)(iStack_17c + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_17c,auStack_140,
                       &uStack_18e);
            lVar23 = (ulonglong)*(uint *)(iStack_17c + 8) - 1;
            *(int *)(iStack_17c + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_17c);
            }
            fn_82696330(auStack_140);
          }
          if ((*(ushort *)(iVar16 + 0x42) >> 4 & 1) != 0) {
            uStack_1a0 = (ulonglong)*(ushort *)(iVar16 + 0x3e);
            auStack_120[0] = 3;
            uStack_194 = 0;
            dStack_118 = (double)uStack_1a0;
            iStack_178 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e60)
            ;
            *(int *)(iStack_178 + 8) = *(int *)(iStack_178 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_178,auStack_120,
                       &uStack_194);
            lVar23 = (ulonglong)*(uint *)(iStack_178 + 8) - 1;
            *(int *)(iStack_178 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_178);
            }
            fn_82696330(auStack_120);
          }
          if ((*(ushort *)(iVar16 + 0x42) >> 5 & 1) != 0) {
            uStack_1a0 = (ulonglong)*(ushort *)(iVar16 + 0x40);
            auStack_100[0] = 3;
            uStack_18d = 0;
            dStack_f8 = (double)uStack_1a0;
            iStack_170 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e54)
            ;
            *(int *)(iStack_170 + 8) = *(int *)(iStack_170 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_170,auStack_100,
                       &uStack_18d);
            lVar23 = (ulonglong)*(uint *)(iStack_170 + 8) - 1;
            *(int *)(iStack_170 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_170);
            }
            fn_82696330(auStack_100);
          }
          if ((*(ushort *)(iVar16 + 0x42) & 1) != 0) {
            uVar8 = *(ushort *)(iVar16 + 0x42) >> 9;
            uVar25 = uVar8 & 3;
            if ((uVar8 & 3) == 0) {
              bVar13 = true;
              bVar12 = false;
              bVar11 = false;
              bVar7 = false;
              bVar10 = false;
              bVar9 = false;
              uVar18 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff821adae0);
              uVar5 = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
              uVar22 = (ulonglong)(((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
              uVar27 = (ulonglong)(((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
              uStack_1a0 = CONCAT44(uVar18,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 1;
              uVar19 = uVar5;
              uVar26 = uVar5;
            }
            else {
              if (uVar25 == 3) {
                bVar12 = true;
                bVar11 = false;
                bVar7 = false;
                bVar10 = false;
                uVar19 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff820116c4)
                ;
                uVar22 = (ulonglong)(((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
                uVar27 = (ulonglong)(((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
                *(int *)(uVar19 + 8) = *(int *)(uVar19 + 8) + 1;
                uVar5 = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
                uVar26 = uVar19;
              }
              else {
                bVar7 = uVar25 != 1;
                lVar23 = (ulonglong)*(uint *)(iVar3 + 0x78) + 0x254;
                if (bVar7) {
                  uVar27 = fn_82694700(lVar23,0xffffffff820117a0);
                  uVar5 = (uint)uVar27;
                  uVar22 = uStack_1a0 >> 0x20;
                  *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
                  uStack_1a0 = ((((U64)(uStack_1a0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(uVar5)) & ((U64)0xFFFFFFFF)) << 0));
                }
                else {
                  uVar22 = fn_82694700(lVar23,0xffffffff821adae8);
                  uVar5 = (uint)uVar22;
                  uVar27 = uStack_1a0 >> 0x20;
                  *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
                  uStack_1a0 = ((((U64)(uStack_1a0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(uVar5)) & ((U64)0xFFFFFFFF)) << 0));
                }
                bVar11 = !bVar7;
                bVar12 = false;
                bVar10 = true;
                *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
                uVar5 = uVar4;
                uVar19 = uVar4;
                uVar26 = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
              }
              uStack_1a0 = ((((U64)(uStack_1a0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(uVar19)) & ((U64)0xFFFFFFFF)) << 0));
              uVar18 = (((U64)(uStack_1a0) >> 0) & 0xFFFFFFFF);
              bVar13 = false;
              bVar9 = true;
              uStack_1a0 = CONCAT44(uVar4,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
              uVar19 = uVar4;
            }
            auStack_e0[0] = 5;
            *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
            uStack_193 = 0;
            iStack_168 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e48)
            ;
            *(int *)(iStack_168 + 8) = *(int *)(iStack_168 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_168,auStack_e0,
                       &uStack_193);
            lVar23 = (ulonglong)*(uint *)(iStack_168 + 8) - 1;
            *(int *)(iStack_168 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_168);
            }
            fn_82696330(auStack_e0);
            if (bVar9) {
              lVar23 = (ulonglong)*(uint *)(uVar19 + 8) - 1;
              *(int *)(uVar19 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar19);
              }
            }
            if (bVar10) {
              lVar23 = (ulonglong)*(uint *)(uVar5 + 8) - 1;
              *(int *)(uVar5 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar5);
              }
            }
            if (bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar27 + 8) - 1;
              *(int *)((int)uVar27 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar27);
              }
            }
            if (bVar11) {
              lVar23 = (ulonglong)*(uint *)((int)uVar22 + 8) - 1;
              *(int *)((int)uVar22 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar22);
              }
            }
            if (bVar12) {
              lVar23 = (ulonglong)*(uint *)(uVar26 + 8) - 1;
              *(int *)(uVar26 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar26);
              }
            }
            if (bVar13) {
              lVar23 = (ulonglong)*(uint *)(uVar18 + 8) - 1;
              *(int *)(uVar18 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar18);
              }
            }
          }
          if ((*(ushort *)(iVar16 + 0x2a) >> 6 & 1) != 0) {
            bVar7 = (*(byte *)(iVar16 + 0x28) & 4) == 0;
            lVar23 = (ulonglong)*(uint *)(iVar3 + 0x78) + 0x254;
            if (bVar7) {
              uVar27 = fn_82694700(lVar23,0xffffffff821c53cc);
              iVar6 = (int)uVar27;
              uVar22 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            else {
              uVar22 = fn_82694700(lVar23,0xffffffff8201173c);
              iVar6 = (int)uVar22;
              uVar27 = uStack_1a0 >> 0x20;
              uStack_1a0 = CONCAT44(iVar6,(((U64)(uStack_1a0) >> 32) & 0xFFFFFFFF));
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            auStack_c0[0] = 5;
            *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
            uStack_191 = 0;
            iStack_160 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e38)
            ;
            *(int *)(iStack_160 + 8) = *(int *)(iStack_160 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_160,auStack_c0,
                       &uStack_191);
            lVar23 = (ulonglong)*(uint *)(iStack_160 + 8) - 1;
            *(int *)(iStack_160 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_160);
            }
            fn_82696330(auStack_c0);
            if (bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar27 + 8) - 1;
              *(int *)((int)uVar27 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar27);
              }
            }
            if (!bVar7) {
              lVar23 = (ulonglong)*(uint *)((int)uVar22 + 8) - 1;
              *(int *)((int)uVar22 + 8) = (int)lVar23;
              if (lVar23 == 0) {
                fn_826944C8(uVar22);
              }
            }
          }
          if ((*(ushort *)(iVar16 + 0x42) >> 2 & 1) != 0) {
            uStack_1a0 = (ulonglong)*(short *)(iVar16 + 0x3a);
            dStack_98 = (double)(longlong)uStack_1a0;
            auStack_a0[0] = 3;
            uStack_18f = 0;
            iStack_188 = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,0xffffffff82015e2c)
            ;
            *(int *)(iStack_188 + 8) = *(int *)(iStack_188 + 8) + 1;
            (**(code **)(*(int *)(iVar17 + 0x10) + 0xc))
                      (iVar17 + 0x10,*(undefined4 *)(param_1 + 0x18),&iStack_188,auStack_a0,
                       &uStack_18f);
            lVar23 = (ulonglong)*(uint *)(iStack_188 + 8) - 1;
            *(int *)(iStack_188 + 8) = (int)lVar23;
            if (lVar23 == 0) {
              fn_826944C8(iStack_188);
            }
            fn_82696330(auStack_a0);
          }
          fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar17);
          if (iVar17 != 0) {
            fn_826824B0(iVar17);
          }
        }
        uVar4 = puStack_184[2];
        puStack_184[2] = (int)((ulonglong)uVar4 - 1);
        if ((ulonglong)uVar4 - 1 == 0) {
          fn_826944C8(puStack_184);
        }
      }
    }
  }
  return;
}

