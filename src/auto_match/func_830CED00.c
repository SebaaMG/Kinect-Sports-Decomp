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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_82A1EFC0();
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA5860();
extern int fn_82CA5C50();
extern int fn_830C6D68();
extern int fn_830C7288();
extern int fn_830CEA08();
extern int fn_830D8E88();
extern int fn_830D9228();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int iStack_120;
extern unsigned int iStack_134;
extern unsigned int iStack_138;
extern unsigned int iStack_148;
extern unsigned int iStack_150;
extern unsigned int iStack_164;
extern unsigned int iStack_16c;
extern unsigned int iStack_178;
extern unsigned int iStack_190;
extern unsigned int iStack_194;
extern unsigned int iStack_1b8;
extern unsigned int iStack_1dc;
extern unsigned int iStack_1e0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_e8;
extern unsigned int lbl_820FD9D0;
extern unsigned int lbl_820FDD78;
extern unsigned int uStack0000003c;
extern unsigned int uStack_11c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_13c;
extern unsigned int uStack_144;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_168;
extern unsigned int uStack_174;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f4;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_210;
extern unsigned int uStack_214;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_224;
extern unsigned int uStack_228;
extern unsigned int uStack_22c;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_244;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern unsigned int uStack_254;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;
extern unsigned int uStack_268;
extern unsigned int uStack_26c;
extern unsigned int uStack_270;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8
fn_830CED00(int param_1,int *param_2,uint *param_3,int param_4,ulonglong param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  short sVar9;
  ulonglong *puVar10;
  int *piVar11;
  longlong *plVar12;
  int iVar13;
  byte *pbVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  ushort uVar24;
  uint uVar25;
  ushort uVar26;
  int iVar27;
  int iVar28;
  short sVar29;
  ulonglong uVar30;
  short sVar33;
  uint uVar31;
  uint uVar32;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  short *psVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined4 *puVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  uint uVar47;
  undefined4 *puVar48;
  int *piVar49;
  uint *puVar50;
  uint *puVar51;
  int iVar52;
  uint *puVar53;
  uint uVar54;
  uint uVar55;
  undefined8 uVar56;
  short *psVar57;
  longlong lVar58;
  short sVar60;
  short *psVar59;
  char cVar61;
  ulonglong uVar62;
  short *psVar64;
  ulonglong uVar63;
  ushort uVar65;
  ushort uVar66;
  int iStack00000014;
  int *piStack0000001c;
  uint *puStack00000024;
  int iStack0000002c;
  uint uStack0000003c;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  struct { undefined4 first; undefined4 second; } stack_pair_260;

  undefined4 uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint *puStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  byte bStack_20c;
  undefined4 uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  undefined *puStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint *puStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  int iStack_194;
  int iStack_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  uint uStack_174;
  uint *puStack_170;
  int iStack_16c;
  uint uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  int iStack_150;
  int *piStack_14c;
  int iStack_148;
  uint uStack_144;
  int *piStack_140;
  uint uStack_13c;
  int iStack_138;
  int iStack_134;
  uint uStack_130;
  undefined4 *puStack_12c;
  uint uStack_128;
  uint uStack_124;
  int iStack_120;
  uint uStack_11c;
  short asStack_116 [2];
  short sStack_112;
  short asStack_110 [8];
  short asStack_100 [8];
  uint uStack_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  ulonglong uStack_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  
  uVar26 = *(ushort *)((int)param_2 + 0x32) >> 1;
  uVar31 = (uint)uVar26;
  uVar37 = (uint)(*(ushort *)(param_2 + 0xd) >> 1);
  uStack_e0 = (uint)(*(ushort *)(param_2 + 0xd) >> 1);
  uStack_124 = (uint)uVar26;
  iVar22 = uStack_e0 * uStack_124;
  iVar28 = iVar22 * 6;
  iVar52 = param_2[0x156] * iVar28;
  iStack_e8 = param_2[0x57];
  puStack_248 = (uint *)(param_2[0x156] * uStack_e0 * uStack_124 * 0x18 + *(int *)(param_1 + 0x110))
  ;
  iStack_d8 = iVar52 * 4 + *(int *)(param_1 + 0x5708);
  uVar56 = 0;
  iStack00000014 = param_1;
  piStack0000001c = param_2;
  puStack00000024 = param_3;
  iStack0000002c = param_4;
  uStack0000003c = param_6;
  if (param_4 == 0) {
    uVar31 = *(int *)(param_1 + 0x56f8) + iVar52 * 0x80;
    param_3[5] = uVar31;
    iVar52 = *(int *)(param_1 + 0x5704);
    iVar27 = param_2[0x156];
    param_3[7] = iVar22 * 0x300 + uVar31;
    param_3[6] = iVar27 * iVar28 * 4 + iVar52;
    iVar52 = param_2[0x156];
    iVar27 = *(int *)(param_1 + 0x5708);
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined2 *)(param_3 + 4) = 0;
    *(undefined2 *)((int)param_3 + 0x12) = 0;
    param_3[8] = iVar52 * iVar28 * 4 + iVar27;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_2[0x58],0,iVar22 * 4);
  }
  uStack_1fc = (uint)param_5;
  puVar50 = (uint *)(param_2 + (param_4 + 0x5c) * 4);
  param_3[5] = *puVar50;
  puVar53 = (uint *)(uStack_124 * uStack_1fc * 0x18 + (int)puStack_248);
  param_3[6] = puVar50[1];
  param_3[7] = puVar50[2];
  param_3[8] = puVar50[3];
  *param_3 = (uint)uVar26 * 4 * uStack_1fc;
  param_3[1] = uStack_124 * uStack_1fc;
  *(undefined2 *)((int)param_3 + 0x12) = 0;
  *(short *)(param_3 + 4) = (short)((param_5 & 0xffffffff) << 1);
  if ((param_5 & 0xffffffff) < (ulonglong)param_6) {
    puStack_12c = &lbl_820FD9D0;
    puStack_1f8 = &lbl_820FDD78;
    puStack_248 = puVar53;
    do {
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      param_2[0x4c] = (int)(param_2 + 0x42);
      if ((*(int *)(param_1 + 0x55b4) != 0) &&
         (*(int *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2)) != 0)) {
        if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0xb0cc) != 0)) {
          **(undefined8 **)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x1a);
          *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
          *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
          *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
          *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
          *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
          *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
          *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
          *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
          *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
          *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
          *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
          puVar10 = *(ulonglong **)(param_1 + 0x54);
          if (*(int *)((int)puVar10 + 0x1c) != 0) {
            uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
            uVar62 = 1;
            uVar44 = uVar36 + 0x10;
            if ((uVar44 & 0xffffffff) == 0) {
              do {
                if ((uVar44 & 0xffffffff) == 0) break;
                uVar30 = *puVar10;
                uVar62 = uVar62 - uVar44;
                *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                *puVar10 = uVar30 << (uVar44 & 0x7f);
                if ((longlong)(uVar36 - uVar44) < 0) {
                  fn_82C4E5E8(puVar10,uVar30 >> (0x40 - uVar44 & 0x7f) & 0xffffffff);
                }
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar44 = uVar36 + 0x10;
              } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
            }
            *puVar10 = *puVar10 << (uVar62 & 0x7f);
            *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
            if ((longlong)(uVar36 - uVar62) < 0) {
              fn_82C4E5E8(puVar10);
            }
          }
          fn_82C4E470(puVar10,*(uint *)(puVar10 + 1) & 7);
          uVar56 = fn_82CA5860(param_1,param_5);
          *(undefined8 *)(param_2 + 0x1a) = **(undefined8 **)(param_1 + 0x54);
          param_2[0x1c] = *(int *)(*(int *)(param_1 + 0x54) + 8);
          param_2[0x1d] = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
          param_2[0x1e] = *(int *)(*(int *)(param_1 + 0x54) + 0x10);
          param_2[0x1f] = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
          param_2[0x20] = *(int *)(*(int *)(param_1 + 0x54) + 0x18);
          param_2[0x21] = *(int *)(*(int *)(param_1 + 0x54) + 0x1c);
          param_2[0x22] = *(int *)(*(int *)(param_1 + 0x54) + 0x20);
          param_2[0x23] = *(int *)(*(int *)(param_1 + 0x54) + 0x24);
          param_2[0x24] = *(int *)(*(int *)(param_1 + 0x54) + 0x28);
          param_2[0x25] = *(int *)(*(int *)(param_1 + 0x54) + 0x2c);
          param_2[0x26] = *(int *)(*(int *)(param_1 + 0x54) + 0x30);
        }
        else {
          puVar10 = (ulonglong *)*param_2;
          if (*(int *)((int)puVar10 + 0x1c) != 0) {
            uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
            uVar62 = 1;
            uVar44 = uVar36 + 0x10;
            if ((uVar44 & 0xffffffff) == 0) {
              do {
                if ((uVar44 & 0xffffffff) == 0) break;
                uVar30 = *puVar10;
                uVar62 = uVar62 - uVar44;
                *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                *puVar10 = uVar30 << (uVar44 & 0x7f);
                if ((longlong)(uVar36 - uVar44) < 0) {
                  fn_82C4E5E8(puVar10,uVar30 >> (0x40 - uVar44 & 0x7f) & 0xffffffff);
                }
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar44 = uVar36 + 0x10;
              } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
            }
            *puVar10 = *puVar10 << (uVar62 & 0x7f);
            *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
            if ((longlong)(uVar36 - uVar62) < 0) {
              fn_82C4E5E8(puVar10);
            }
          }
          fn_82C4E470(puVar10,*(uint *)(puVar10 + 1) & 7);
          fn_830CEA08(param_2,param_5);
        }
        *(undefined1 *)((int)param_2 + 0x4e3) = 1;
        if ((int)uVar56 != 0) {
          return uVar56;
        }
      }
      if (*(int *)(param_1 + 0xf94) != 0) {
        **(undefined8 **)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x1a);
        *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
        *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
        *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
        *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
        *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
        *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
        *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
        *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
        *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
        *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
        *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
        uVar56 = fn_82CA5C50(param_1,param_5);
        *(undefined8 *)(param_2 + 0x1a) = **(undefined8 **)(param_1 + 0x54);
        param_2[0x1c] = *(int *)(*(int *)(param_1 + 0x54) + 8);
        param_2[0x1d] = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
        param_2[0x1e] = *(int *)(*(int *)(param_1 + 0x54) + 0x10);
        param_2[0x1f] = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
        param_2[0x20] = *(int *)(*(int *)(param_1 + 0x54) + 0x18);
        param_2[0x21] = *(int *)(*(int *)(param_1 + 0x54) + 0x1c);
        param_2[0x22] = *(int *)(*(int *)(param_1 + 0x54) + 0x20);
        param_2[0x23] = *(int *)(*(int *)(param_1 + 0x54) + 0x24);
        param_2[0x24] = *(int *)(*(int *)(param_1 + 0x54) + 0x28);
        param_2[0x25] = *(int *)(*(int *)(param_1 + 0x54) + 0x2c);
        param_2[0x26] = *(int *)(*(int *)(param_1 + 0x54) + 0x30);
        if ((int)uVar56 != 0) {
          return uVar56;
        }
      }
      uStack_220 = 0;
      if (uVar31 != 0) {
        do {
          uVar31 = uStack_220;
          uVar37 = 0;
          uVar36 = (ulonglong)uStack_220;
          dataCacheBlockTouch((ulonglong)*(uint *)(*param_2 + 0xc) + 0x80);
          *(undefined1 *)(puVar53 + 1) = *(undefined1 *)(param_2 + 6);
          *puVar53 = *puVar53 & 0xefffffe7 | 0x20000;
          piVar49 = (int *)param_2[0x15f];
          puVar10 = (ulonglong *)*param_2;
          if (piVar49 == (int *)0x0) {
            iVar52 = 0;
            *(undefined4 *)((int)puVar10 + 0x14) = 3;
          }
          else {
            iVar28 = *piVar49;
            sVar29 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar49 + 2) & 0x7f)
                                      & 0xffffffff) << 1) + iVar28);
            uVar44 = (ulonglong)sVar29;
            if (sVar29 < 0) {
              fn_82C4E470(puVar10);
              do {
                uVar62 = *puVar10;
                fn_82C4E470(puVar10,1);
                sVar29 = *(short *)((int)(((uVar44 - ((longlong)uVar62 >> 0x3f)) + 0x8000 &
                                          0xffffffff) << 1) + iVar28);
                uVar44 = (ulonglong)sVar29;
                iVar52 = (int)sVar29;
              } while (sVar29 < 0);
            }
            else {
              iVar28 = *(int *)(puVar10 + 1);
              iVar52 = (int)(uVar44 & 0xf);
              *puVar10 = *puVar10 << (uVar44 & 0xf);
              *(int *)(puVar10 + 1) = iVar28 - iVar52;
              if (iVar28 < iVar52) {
                do {
                  pbVar14 = *(byte **)((int)puVar10 + 0xc);
                  if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                    bVar1 = *pbVar14;
                    bVar2 = pbVar14[1];
                    bVar3 = pbVar14[2];
                    bVar4 = pbVar14[4];
                    bVar5 = pbVar14[3];
                    bVar6 = pbVar14[5];
                    iVar28 = *(int *)(puVar10 + 1);
                    *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                    *(int *)(puVar10 + 1) = iVar28 + 0x30;
                    *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                                  (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                               ((longlong)-iVar28 & 0x7fU)) + *puVar10;
                    goto LAB_830cf444;
                  }
                  iVar28 = fn_82C4E3B0(puVar10);
                } while (iVar28 == 1);
                iVar52 = (int)sVar29 >> 4;
              }
              else {
LAB_830cf444:
                iVar52 = (int)sVar29 >> 4;
              }
            }
            if (iVar52 < 0) {
              return 1;
            }
            if (7 < iVar52) {
              return 1;
            }
          }
          uVar54 = *puVar53;
          cVar61 = *(char *)((int)puStack_12c + iVar52 + -8);
          uVar55 = (int)cVar61 & 7;
          *puVar53 = ((int)cVar61 & 7U) << 8 | uVar54 & 0xfffff8ff;
          uVar47 = (int)cVar61 >> 4 & 1;
          uVar23 = (uint)param_5;
          uStack_ec = uVar47;
          if (uVar55 == 4) {
            if (*(char *)((int)param_2 + 0x1b) != '\0') {
              if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                puVar10 = (ulonglong *)*param_2;
                lVar58 = 0;
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar44 = uVar36 + 0x10;
                if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                  uVar62 = 3;
                  if ((uVar44 & 0xffffffff) < 3) {
                    do {
                      if ((uVar44 & 0xffffffff) == 0) break;
                      uVar62 = uVar62 - uVar44;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                      lVar58 = (ulonglong)
                               (uint)((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) <<
                                     ((uint)uVar62 & 0x3f)) + lVar58;
                      *puVar10 = *puVar10 << (uVar44 & 0x7f);
                      if ((longlong)(uVar36 - uVar44) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar44 = uVar36 + 0x10;
                    } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                  }
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                  lVar58 = (*puVar10 >> (0x40 - uVar62 & 0x7f) & 0xffffffff) + lVar58;
                  *puVar10 = *puVar10 << (uVar62 & 0x7f);
                  if ((longlong)(uVar36 - uVar62) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  if ((int)lVar58 == 7) {
                    puVar10 = (ulonglong *)*param_2;
                    uVar62 = 5;
                    lVar58 = 0;
                    uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar36 = uVar44 + 0x10;
                    if ((uVar36 & 0xffffffff) < 5) {
                      do {
                        if ((uVar36 & 0xffffffff) == 0) break;
                        uVar62 = uVar62 - uVar36;
                        *(int *)(puVar10 + 1) = (int)(uVar44 - uVar36);
                        lVar58 = (ulonglong)
                                 (uint)((int)(*puVar10 >> (0x40 - uVar36 & 0x7f)) <<
                                       ((uint)uVar62 & 0x3f)) + lVar58;
                        *puVar10 = *puVar10 << (uVar36 & 0x7f);
                        if ((longlong)(uVar44 - uVar36) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar36 = uVar44 + 0x10;
                      } while ((uVar36 & 0xffffffff) < (uVar62 & 0xffffffff));
                    }
                    *(int *)(puVar10 + 1) = (int)(uVar44 - uVar62);
                    uVar36 = (*puVar10 >> (0x40 - uVar62 & 0x7f) & 0xffffffff) + lVar58;
                    *puVar10 = *puVar10 << (uVar62 & 0x7f);
                    if ((longlong)(uVar44 - uVar62) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                  }
                  else {
                    uVar36 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar58;
                  }
                  *(char *)(puVar53 + 1) = (char)((uVar36 & 0xffffffff) << 1) + -1;
                }
                else {
                  uVar62 = 1;
                  if ((uVar44 & 0xffffffff) == 0) {
                    do {
                      if ((uVar44 & 0xffffffff) == 0) break;
                      uVar62 = uVar62 - uVar44;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                      lVar58 = (ulonglong)
                               (uint)((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) <<
                                     ((uint)uVar62 & 0x3f)) + lVar58;
                      *puVar10 = *puVar10 << (uVar44 & 0x7f);
                      if ((longlong)(uVar36 - uVar44) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar44 = uVar36 + 0x10;
                    } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                  }
                  uVar44 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                  *puVar10 = uVar44 << (uVar62 & 0x7f);
                  if ((longlong)(uVar36 - uVar62) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  if (((uVar44 >> (0x40 - uVar62 & 0x7f) & 0xffffffff) + lVar58 & 0xffffffff) == 0)
                  {
                    *(char *)(puVar53 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar53 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                }
              }
              else if ((uVar54 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
                *(char *)(puVar53 + 1) =
                     *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
              }
              else {
                *(char *)(puVar53 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
              }
              if (*(byte *)(puVar53 + 1) == 0) {
                return 1;
              }
              if (0x3e < *(byte *)(puVar53 + 1)) {
                return 1;
              }
            }
            puVar10 = (ulonglong *)*param_2;
            uVar62 = 1;
            lVar58 = 0;
            uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
            uVar44 = uVar36 + 0x10;
            if ((uVar44 & 0xffffffff) == 0) {
              do {
                if ((uVar44 & 0xffffffff) == 0) break;
                uVar62 = uVar62 - uVar44;
                *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                lVar58 = (ulonglong)
                         (uint)((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar62 & 0x3f))
                         + lVar58;
                *puVar10 = *puVar10 << (uVar44 & 0x7f);
                if ((longlong)(uVar36 - uVar44) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar44 = uVar36 + 0x10;
              } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
            }
            uVar44 = *puVar10;
            *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
            *puVar10 = uVar44 << (uVar62 & 0x7f);
            if ((longlong)(uVar36 - uVar62) < 0) {
              fn_82C4E5E8(puVar10);
            }
            *puVar53 = (uint)(((uVar44 >> (0x40 - uVar62 & 0x7f) & 0xffffffff) + lVar58 & 0xff) << 3
                             ) & 0x18 | *puVar53 & 0xffffffe7;
            if (uVar47 == 0) {
              *(undefined1 *)((int)puVar53 + 5) = 0;
            }
            else {
              piVar49 = (int *)param_2[0x135];
              puVar10 = (ulonglong *)*param_2;
              if (piVar49 == (int *)0x0) {
                iVar52 = 0;
                *(undefined4 *)((int)puVar10 + 0x14) = 3;
              }
              else {
                iVar28 = *piVar49;
                sVar29 = *(short *)((int)((*puVar10 >>
                                           (0x40 - (ulonglong)*(byte *)(piVar49 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar28);
                uVar36 = (ulonglong)sVar29;
                if (sVar29 < 0) {
                  fn_82C4E470(puVar10);
                  do {
                    uVar44 = *puVar10;
                    fn_82C4E470(puVar10,1);
                    sVar29 = *(short *)((int)(((uVar36 - ((longlong)uVar44 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar28);
                    uVar36 = (ulonglong)sVar29;
                    iVar52 = (int)sVar29;
                  } while (sVar29 < 0);
                }
                else {
                  iVar28 = *(int *)(puVar10 + 1);
                  iVar52 = (int)(uVar36 & 0xf);
                  *puVar10 = *puVar10 << (uVar36 & 0xf);
                  *(int *)(puVar10 + 1) = iVar28 - iVar52;
                  if (iVar28 < iVar52) {
                    do {
                      pbVar14 = *(byte **)((int)puVar10 + 0xc);
                      if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                        bVar1 = *pbVar14;
                        bVar2 = pbVar14[1];
                        bVar3 = pbVar14[2];
                        bVar4 = pbVar14[4];
                        bVar5 = pbVar14[3];
                        bVar6 = pbVar14[5];
                        iVar28 = *(int *)(puVar10 + 1);
                        *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                        *(int *)(puVar10 + 1) = iVar28 + 0x30;
                        *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                                      (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                    (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                                   ((longlong)-iVar28 & 0x7fU)) + *puVar10;
                        goto LAB_830cf960;
                      }
                      iVar28 = fn_82C4E3B0(puVar10);
                    } while (iVar28 == 1);
                    iVar52 = (int)sVar29 >> 4;
                  }
                  else {
LAB_830cf960:
                    iVar52 = (int)sVar29 >> 4;
                  }
                }
              }
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              *(undefined1 *)((int)puVar53 + 5) = *(undefined1 *)(param_2[0x13c] + iVar52 + 1);
            }
            bVar1 = *(byte *)(puVar53 + 1);
            uVar31 = param_3[1];
            uVar26 = *(ushort *)((int)param_2 + 0x32);
            iStack_150 = (uint)bVar1 * 0x14 + param_2[0x61];
            bStack_20c = (*puVar53 & 0x18) == 0;
            iVar28 = param_2[0x58];
            uStack_11c = -(uVar23 & 1) & (uint)uVar26;
            uStack_144 = (uint)*(byte *)((int)puVar53 + 5);
            iVar52 = uVar31 * 8 + param_2[0x148];
            uStack_d0 = 0;
            if (*(char *)(param_2 + 7) == '\0') {
              piStack_140 = param_2 + 0x65;
              piStack_14c = param_2 + 0x68;
            }
            else {
              uVar37 = *puVar53 >> 0x14 & 0xc;
              piStack_140 = (int *)(param_2[99] + uVar37);
              piStack_14c = (int *)(param_2[100] + uVar37);
            }
            puVar48 = (undefined4 *)((*param_3 + (uint)uVar26) * 4 + param_2[0x57]);
            puVar43 = (undefined4 *)(*param_3 * 4 + param_2[0x57]);
            iVar22 = *(int *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2));
            iStack_148 = uVar26 * uVar23;
            puVar48[1] = 0x4000;
            *puVar48 = 0x4000;
            puVar43[1] = 0x4000;
            *puVar43 = 0x4000;
            uVar44 = 0;
            uStack_158 = iVar22 - 1U & uVar23;
            *(undefined4 *)(uVar31 * 4 + iVar28) = 0x4000;
            uVar36 = uStack_d0;
            do {
              uStack_d0 = uVar36;
              uVar31 = (uint)uVar44;
              if ((int)uVar31 >> 2 == 0) {
                piVar49 = (int *)param_2[0x132];
                uVar37 = (uint)*(ushort *)((int)((uVar44 + 0x12 & 0xffffffff) << 1) + (int)param_2);
                sVar29 = *(short *)((((uStack_1fc & 1) << 1 | (int)uVar31 >> 1) + 0xb8) * 2 +
                                   (int)param_2);
                iVar28 = ((iStack_148 + uStack_220) * 2 + uVar37) * 4 + param_2[0x57];
                psVar64 = (short *)(((uStack_11c + uStack_220) * 2 + uVar37) * 0x20 + param_2[0x6c])
                ;
                piVar11 = piStack_14c;
                uVar37 = ((int)uVar31 >> 1) + uStack_158;
                uVar54 = (uVar31 & 1) + uStack_220;
              }
              else {
                piVar49 = (int *)param_2[0x133];
                sVar29 = *(short *)(((uStack_1fc & 1) + 0xb6) * 2 + (int)param_2);
                iVar28 = ((iStack_148 >> 1) + uStack_220) * 4 + param_2[0x58];
                psVar64 = (short *)(*(int *)((int)((uVar44 + 0x69 & 0xffffffff) << 2) + (int)param_2
                                            ) + (((int)uStack_11c >> 1) + uStack_220) * 0x20);
                piVar11 = piStack_140;
                uVar37 = uStack_158;
                uVar54 = uStack_220;
              }
              iVar22 = *(int *)(iStack_150 + 0x10);
              lVar58 = (ulonglong)puStack00000024[7] - 0x80;
              puStack00000024[7] = (uint)(short *)lVar58;
              dataCacheBlockClearToZero(lVar58);
              sVar33 = 0;
              puVar10 = (ulonglong *)*param_2;
              if (piVar49 == (int *)0x0) {
                uVar36 = 0;
                *(undefined4 *)((int)puVar10 + 0x14) = 3;
              }
              else {
                iVar27 = *piVar49;
                sVar60 = *(short *)((int)((*puVar10 >>
                                           (0x40 - (ulonglong)*(byte *)(piVar49 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar27);
                uVar36 = (ulonglong)sVar60;
                if (sVar60 < 0) {
                  fn_82C4E470(puVar10);
                  do {
                    uVar62 = *puVar10;
                    fn_82C4E470(puVar10,1);
                    sVar60 = *(short *)((int)(((uVar36 - ((longlong)uVar62 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar27);
                    uVar36 = (ulonglong)sVar60;
                  } while (sVar60 < 0);
                }
                else {
                  iVar27 = *(int *)(puVar10 + 1);
                  iVar13 = (int)(uVar36 & 0xf);
                  *puVar10 = *puVar10 << (uVar36 & 0xf);
                  *(int *)(puVar10 + 1) = iVar27 - iVar13;
                  if (iVar27 < iVar13) {
                    do {
                      pbVar14 = *(byte **)((int)puVar10 + 0xc);
                      if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                        bVar2 = *pbVar14;
                        bVar3 = pbVar14[1];
                        bVar4 = pbVar14[2];
                        bVar5 = pbVar14[4];
                        bVar6 = pbVar14[3];
                        bVar7 = pbVar14[5];
                        iVar27 = *(int *)(puVar10 + 1);
                        *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                        *(int *)(puVar10 + 1) = iVar27 + 0x30;
                        *puVar10 = ((((((ulonglong)bVar3 + (ulonglong)bVar2 * 0x100) * 0x100 +
                                      (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                    (ulonglong)bVar5) * 0x100 + (ulonglong)bVar7 <<
                                   ((longlong)-iVar27 & 0x7fU)) + *puVar10;
                        goto LAB_830cfcc8;
                      }
                      iVar27 = fn_82C4E3B0(puVar10);
                    } while (iVar27 == 1);
                    uVar36 = (ulonglong)((int)sVar60 >> 4);
                  }
                  else {
LAB_830cfcc8:
                    uVar36 = (ulonglong)((int)sVar60 >> 4);
                  }
                }
              }
              sVar60 = (short)uVar36;
              if ((int)(uVar36 & 0xffff) == 0x77) {
                if (iVar22 < 5) {
                  lVar45 = 3 - (longlong)(iVar22 >> 1);
                }
                else {
                  lVar45 = 0;
                }
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar30 = lVar45 + 8;
                iVar22 = 0;
                sVar60 = 0;
                uVar62 = uVar36 + 0x10;
                if ((uVar30 & 0xffffffff) < 0x21) {
                  if ((uVar30 & 0xffffffff) == 0) {
                    sVar60 = 0;
                  }
                  else {
                    if ((uVar62 & 0xffffffff) < (uVar30 & 0xffffffff)) {
                      do {
                        sVar60 = (short)iVar22;
                        if ((uVar62 & 0xffffffff) == 0) break;
                        uVar30 = uVar30 - uVar62;
                        *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                        iVar22 = ((int)(*puVar10 >> (0x40 - uVar62 & 0x7f)) << ((uint)uVar30 & 0x3f)
                                 ) + iVar22;
                        sVar60 = (short)iVar22;
                        *puVar10 = *puVar10 << (uVar62 & 0x7f);
                        if ((longlong)(uVar36 - uVar62) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar62 = uVar36 + 0x10;
                      } while ((uVar62 & 0xffffffff) < (uVar30 & 0xffffffff));
                    }
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar30);
                    sVar60 = (short)(*puVar10 >> (0x40 - uVar30 & 0x7f)) + sVar60;
                    *puVar10 = *puVar10 << (uVar30 & 0x7f);
                    if ((longlong)(uVar36 - uVar30) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                  }
                }
                else {
                  sVar60 = 0;
                }
LAB_830cff20:
                uVar36 = *puVar10;
                uVar47 = *(uint *)(puVar10 + 1);
                *puVar10 = uVar36 << 1;
                *(int *)(puVar10 + 1) = (int)((ulonglong)uVar47 - 1);
                if ((longlong)((ulonglong)uVar47 - 1) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                sVar33 = (1 - (short)((uVar36 >> 0x3f) << 1)) * sVar60;
              }
              else if ((uVar36 & 0xffff) != 0) {
                if (iVar22 == 4) {
                  uVar36 = *puVar10;
                  uVar47 = *(uint *)(puVar10 + 1);
                  *puVar10 = uVar36 << 1;
                  *(int *)(puVar10 + 1) = (int)((ulonglong)uVar47 - 1);
                  if ((longlong)((ulonglong)uVar47 - 1) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  sVar60 = (sVar60 * 2 - (short)((longlong)uVar36 >> 0x3f)) + -1;
                }
                else if (iVar22 == 2) {
                  uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar30 = 2;
                  iVar22 = 0;
                  sVar33 = 0;
                  uVar62 = uVar36 + 0x10;
                  if ((uVar62 & 0xffffffff) < 2) {
                    do {
                      sVar33 = (short)iVar22;
                      if ((uVar62 & 0xffffffff) == 0) break;
                      uVar30 = uVar30 - uVar62;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                      iVar22 = ((int)(*puVar10 >> (0x40 - uVar62 & 0x7f)) << ((uint)uVar30 & 0x3f))
                               + iVar22;
                      sVar33 = (short)iVar22;
                      *puVar10 = *puVar10 << (uVar62 & 0x7f);
                      if ((longlong)(uVar36 - uVar62) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar62 = uVar36 + 0x10;
                    } while ((uVar62 & 0xffffffff) < (uVar30 & 0xffffffff));
                  }
                  uVar62 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar30);
                  *puVar10 = uVar62 << (uVar30 & 0x7f);
                  if ((longlong)(uVar36 - uVar30) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  sVar60 = sVar60 * 4 + (short)(uVar62 >> (0x40 - uVar30 & 0x7f)) + sVar33 + -3;
                }
                goto LAB_830cff20;
              }
              uVar47 = uStack_144;
              *(short *)lVar58 = sVar33;
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              if (((uStack_144 & 1) != 0) &&
                 (iVar22 = fn_830D9228(param_2,*piVar11,lVar58,param_2[0x6f]), iVar22 < 0)) {
                return 1;
              }
              uVar26 = *(ushort *)((int)param_2 + 0x32);
              uVar55 = 1;
              psVar59 = (short *)0x0;
              uVar24 = uVar26 >> ((int)uVar31 >> 2 & 0x3fU);
              psVar57 = (short *)0x0;
              if ((uVar37 != 0) && (*(int *)(iVar28 + (uint)uVar24 * -4) == 0x4000)) {
                uVar55 = 8;
                psVar59 = psVar64 + ((int)sVar29 & 0x7ffffffU) * -0x10;
              }
              psVar38 = psVar59;
              if ((uVar54 == 0) || (*(int *)(iVar28 + -4) != 0x4000)) {
LAB_830d024c:
                if (psVar38 != (short *)0x0) {
                  uVar55 = -(uint)bStack_20c | uVar55;
                  if (*(char *)((int)param_2 + 0x1b) == '\0') {
                    if (psVar38 == psVar59) {
                      psVar38 = psVar38 + 8;
                    }
                  }
                  else if (psVar38 == psVar57) {
                    if (((uVar31 == 0) || (uVar31 == 2)) || ((uVar31 == 4 || (uVar31 == 5)))) {
                      uVar31 = *(byte *)(iVar52 + -8) & 0x3f;
                      iVar28 = *(int *)(puStack_1f8 + (bVar1 & 0x3f) * 4);
                      psVar57 = asStack_116;
                      lVar58 = 3;
                      psVar59 = psVar38 + 3;
                      asStack_110[0] =
                           (short)(*(int *)(puStack_1f8 +
                                           (*(uint *)((uint)bVar1 * 0x14 + param_2[0x61] + 0x10) &
                                           0x3f) * 4) *
                                   *(int *)((uVar31 + (*(byte *)(iVar52 + -8) & 0x3f) * 4) * 4 +
                                            param_2[0x61] + 0x10) * (int)*psVar38 + 0x20000 >> 0x12)
                      ;
                      do {
                        sVar29 = psVar59[-1];
                        sVar33 = *psVar59;
                        sVar60 = psVar59[1];
                        sVar9 = psVar59[2];
                        psVar57[4] = (short)((int)((int)psVar59[-2] * uVar31 * iVar28 + 0x20000) >>
                                            0x12);
                        psVar57 = psVar57 + 5;
                        *psVar57 = (short)((int)((int)sVar29 * uVar31 * iVar28 + 0x20000) >> 0x12);
                        *(short *)(((int)asStack_110 - (int)psVar38) + (int)psVar59) =
                             (short)((int)((int)sVar33 * uVar31 * iVar28 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_110 + (2 - (int)psVar38) + (int)psVar59) =
                             (short)((int)((int)sVar60 * uVar31 * iVar28 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_110 + (4 - (int)psVar38) + (int)psVar59) =
                             (short)((int)((int)sVar9 * uVar31 * iVar28 + 0x20000) >> 0x12);
                        psVar59 = psVar59 + 5;
                        lVar58 = lVar58 + -1;
                      } while (lVar58 != 0);
                      psVar38 = asStack_110;
                      asStack_100[0] = asStack_110[0];
                    }
                    else {
                      psVar38 = psVar38 + -1;
                      psVar57 = &sStack_112;
                      lVar58 = 0x10;
                      do {
                        psVar38 = psVar38 + 1;
                        psVar57 = psVar57 + 1;
                        *psVar57 = *psVar38;
                        lVar58 = lVar58 + -1;
                      } while (lVar58 != 0);
                      psVar38 = asStack_110;
                    }
                  }
                  else if (((uVar31 == 0) || (uVar31 == 1)) || ((uVar31 == 4 || (uVar31 == 5)))) {
                    uVar37 = (uint)*(byte *)(iVar52 + (uVar26 & 0x3ffffffe) * -4);
                    uVar31 = uVar37 & 0x3f;
                    lVar58 = 3;
                    iVar28 = *(int *)(puStack_1f8 + (bVar1 & 0x3f) * 4);
                    psVar57 = asStack_116;
                    psVar59 = psVar38 + 3;
                    asStack_110[0] =
                         (short)(*(int *)(puStack_1f8 +
                                         (*(uint *)((uint)bVar1 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) *
                                 *(int *)((uVar31 + (uVar37 & 0x3f) * 4) * 4 + param_2[0x61] + 0x10)
                                 * (int)*psVar38 + 0x20000 >> 0x12);
                    do {
                      sVar29 = psVar59[-1];
                      sVar33 = *psVar59;
                      sVar60 = psVar59[1];
                      sVar9 = psVar59[2];
                      psVar57[4] = (short)((int)((int)psVar59[-2] * uVar31 * iVar28 + 0x20000) >>
                                          0x12);
                      psVar57 = psVar57 + 5;
                      *psVar57 = (short)((int)((int)sVar29 * uVar31 * iVar28 + 0x20000) >> 0x12);
                      *(short *)((int)psVar59 + ((int)asStack_110 - (int)psVar38)) =
                           (short)((int)((int)sVar33 * uVar31 * iVar28 + 0x20000) >> 0x12);
                      *(short *)((int)psVar59 + (int)asStack_110 + (2 - (int)psVar38)) =
                           (short)((int)((int)sVar60 * uVar31 * iVar28 + 0x20000) >> 0x12);
                      *(short *)((int)psVar59 + (int)asStack_110 + (4 - (int)psVar38)) =
                           (short)((int)((int)sVar9 * uVar31 * iVar28 + 0x20000) >> 0x12);
                      psVar59 = psVar59 + 5;
                      lVar58 = lVar58 + -1;
                    } while (lVar58 != 0);
                    psVar38 = asStack_100;
                    asStack_100[0] = asStack_110[0];
                  }
                  else {
                    psVar38 = psVar38 + -1;
                    psVar57 = &sStack_112;
                    lVar58 = 0x10;
                    do {
                      psVar38 = psVar38 + 1;
                      psVar57 = psVar57 + 1;
                      *psVar57 = *psVar38;
                      lVar58 = lVar58 + -1;
                    } while (lVar58 != 0);
                    psVar38 = asStack_100;
                  }
                }
              }
              else {
                psVar57 = psVar64 + -0x10;
                uVar55 = 1;
                psVar38 = psVar57;
                if (psVar57 != (short *)0x0) {
                  uVar55 = 1;
                  if (psVar59 != (short *)0x0) {
                    iVar22 = 0;
                    if (*(int *)(iVar28 + (uVar24 + 1) * -4) == 0x4000) {
                      iVar22 = (int)psVar59[-8];
                    }
                    sVar29 = psVar59[8];
                    sVar33 = *psVar57;
                    iVar28 = (int)sVar29;
                    iVar27 = (int)sVar33;
                    if (*(char *)((int)param_2 + 0x1b) != '\0') {
                      if (((uVar31 == 0) || (uVar31 == 4)) || (uVar31 == 5)) {
                        iVar27 = param_2[0x61];
                        pbVar14 = (byte *)(iVar52 + (uVar26 & 0x3ffffffe) * -4);
                        uVar54 = (uint)pbVar14[-8];
                        uVar37 = (uint)*pbVar14;
                        iVar13 = *(int *)(puStack_1f8 +
                                         (*(uint *)((uint)bVar1 * 0x14 + iVar27 + 0x10) & 0x3f) * 4)
                        ;
                        iVar22 = *(int *)(((uVar54 & 0x3f) + (uVar54 & 0x3f) * 4) * 4 + iVar27 +
                                         0x10) * iVar22 * iVar13 + 0x20000 >> 0x12;
                        iVar28 = *(int *)(((uVar37 & 0x3f) + (uVar37 & 0x3f) * 4) * 4 + iVar27 +
                                         0x10) * (int)sVar29 * iVar13 + 0x20000 >> 0x12;
                        iVar27 = *(int *)(((*(byte *)(iVar52 + -8) & 0x3f) +
                                          (*(byte *)(iVar52 + -8) & 0x3f) * 4) * 4 + iVar27 + 0x10)
                                 * (int)sVar33 * iVar13 + 0x20000 >> 0x12;
                      }
                      else if (uVar31 == 1) {
                        uVar37 = (uint)*(byte *)(iVar52 + (uVar26 & 0x3ffffffe) * -4);
                        iVar28 = *(int *)(((uVar37 & 0x3f) + (uVar37 & 0x3f) * 4) * 4 +
                                          param_2[0x61] + 0x10);
                        iVar22 = iVar28 * iVar22 *
                                 *(int *)(puStack_1f8 +
                                         (*(uint *)((uint)bVar1 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) + 0x20000 >> 0x12;
                        iVar28 = iVar28 * sVar29 *
                                 *(int *)(puStack_1f8 +
                                         (*(uint *)((uint)bVar1 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) + 0x20000 >> 0x12;
                      }
                      else if (uVar31 == 2) {
                        iVar27 = *(int *)(((*(byte *)(iVar52 + -8) & 0x3f) +
                                          (*(byte *)(iVar52 + -8) & 0x3f) * 4) * 4 + param_2[0x61] +
                                         0x10);
                        iVar22 = iVar27 * iVar22 *
                                 *(int *)(puStack_1f8 +
                                         (*(uint *)((uint)bVar1 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) + 0x20000 >> 0x12;
                        iVar27 = iVar27 * sVar33 *
                                 *(int *)(puStack_1f8 +
                                         (*(uint *)((uint)bVar1 * 0x14 + param_2[0x61] + 0x10) &
                                         0x3f) * 4) + 0x20000 >> 0x12;
                      }
                    }
                    uVar37 = iVar22 - iVar28 >> 0x1f;
                    uVar54 = iVar22 - iVar27 >> 0x1f;
                    uVar55 = 1;
                    if ((int)((iVar22 - iVar27 ^ uVar54) - uVar54) <
                        (int)((iVar22 - iVar28 ^ uVar37) - uVar37)) {
                      uVar55 = 8;
                      psVar38 = psVar59;
                    }
                  }
                  goto LAB_830d024c;
                }
              }
              psVar57 = (short *)puStack00000024[7];
              if (psVar38 == (short *)0x0) {
                sVar29 = *psVar57;
                *psVar64 = sVar29;
                psVar64[8] = sVar29;
LAB_830d0760:
                psVar64[1] = psVar57[1];
                *(undefined4 *)(psVar64 + 2) = *(undefined4 *)(psVar57 + 2);
                *(undefined8 *)(psVar64 + 4) = *(undefined8 *)(psVar57 + 4);
                psVar64[9] = psVar57[8];
                psVar64[10] = psVar57[0x10];
                psVar64[0xb] = psVar57[0x18];
                psVar64[0xc] = psVar57[0x20];
                psVar64[0xd] = psVar57[0x28];
                psVar64[0xe] = psVar57[0x30];
                sVar29 = psVar57[0x38];
LAB_830d07ac:
                psVar64[0xf] = sVar29;
              }
              else {
                sVar29 = *psVar57 + *psVar38;
                *psVar57 = sVar29;
                *psVar64 = sVar29;
                psVar64[8] = sVar29;
                if (uVar55 != 1) {
                  if (uVar55 != 8) goto LAB_830d0760;
                  psVar64[1] = psVar57[1];
                  *(undefined4 *)(psVar64 + 2) = *(undefined4 *)(psVar57 + 2);
                  *(undefined8 *)(psVar64 + 4) = *(undefined8 *)(psVar57 + 4);
                  sVar29 = psVar38[1];
                  sVar33 = psVar57[8];
                  psVar57[8] = sVar29 + sVar33;
                  psVar64[9] = sVar29 + sVar33;
                  sVar29 = psVar38[2];
                  sVar33 = psVar57[0x10];
                  psVar57[0x10] = sVar29 + sVar33;
                  psVar64[10] = sVar29 + sVar33;
                  sVar29 = psVar38[3];
                  sVar33 = psVar57[0x18];
                  psVar57[0x18] = sVar29 + sVar33;
                  psVar64[0xb] = sVar29 + sVar33;
                  sVar29 = psVar38[4];
                  sVar33 = psVar57[0x20];
                  psVar57[0x20] = sVar29 + sVar33;
                  psVar64[0xc] = sVar29 + sVar33;
                  sVar29 = psVar57[0x28];
                  sVar33 = psVar38[5];
                  psVar57[0x28] = sVar33 + sVar29;
                  psVar64[0xd] = sVar33 + sVar29;
                  sVar29 = psVar38[6];
                  sVar33 = psVar57[0x30];
                  psVar57[0x30] = sVar29 + sVar33;
                  psVar64[0xe] = sVar29 + sVar33;
                  sVar29 = psVar38[7] + psVar57[0x38];
                  psVar57[0x38] = sVar29;
                  goto LAB_830d07ac;
                }
                sVar29 = psVar38[1];
                sVar33 = psVar57[1];
                psVar57[1] = sVar29 + sVar33;
                psVar64[1] = sVar29 + sVar33;
                sVar29 = psVar38[2];
                sVar33 = psVar57[2];
                psVar57[2] = sVar29 + sVar33;
                psVar64[2] = sVar29 + sVar33;
                sVar29 = psVar57[3];
                sVar33 = psVar38[3];
                psVar57[3] = sVar33 + sVar29;
                psVar64[3] = sVar33 + sVar29;
                sVar29 = psVar38[4];
                sVar33 = psVar57[4];
                psVar57[4] = sVar29 + sVar33;
                psVar64[4] = sVar29 + sVar33;
                sVar29 = psVar57[5];
                sVar33 = psVar38[5];
                psVar57[5] = sVar33 + sVar29;
                psVar64[5] = sVar33 + sVar29;
                sVar29 = psVar57[6];
                sVar33 = psVar38[6];
                psVar57[6] = sVar33 + sVar29;
                psVar64[6] = sVar33 + sVar29;
                sVar29 = psVar57[7];
                sVar33 = psVar38[7];
                psVar57[7] = sVar33 + sVar29;
                psVar64[7] = sVar33 + sVar29;
                psVar64[9] = psVar57[8];
                psVar64[10] = psVar57[0x10];
                psVar64[0xb] = psVar57[0x18];
                psVar64[0xc] = psVar57[0x20];
                psVar64[0xd] = psVar57[0x28];
                psVar64[0xe] = psVar57[0x30];
                psVar64[0xf] = psVar57[0x38];
              }
              uStack_144 = (int)uVar47 >> 1;
              uVar30 = (longlong)(int)(uVar47 & 1) | 0x80;
              uVar62 = uVar44 & 0xfffff;
              uVar44 = uVar44 + 1;
              uVar36 = (uVar30 | uStack_d0) << 8;
              *(uint *)puStack00000024[8] =
                   (uint)(((((ulonglong)uVar47 & 1) << 3 | uVar62) << 0xc | (ulonglong)uStack_1fc)
                         << 0x10) | uStack_220;
              puStack00000024[8] = puStack00000024[8] + 4;
            } while ((int)uVar44 < 6);
            uVar31 = (*puStack_248 >> 8 & 7) - (uint)*(byte *)(param_2 + 0x14b);
            *(ulonglong *)(puStack00000024[1] * 8 + param_2[0x148]) =
                 ((ulonglong)*(byte *)(puStack_248 + 1) << 8 |
                 (ulonglong)*(byte *)((int)puStack_248 + 5) |
                 ((longlong)((int)(-uVar31 ^ uVar31) >> 0x1f) + 1U & 3) << 6) << 0x30 |
                 uVar30 | uStack_d0 & 0xffffffffffffff;
            uStack_d0 = uVar36;
          }
          else {
            uVar54 = *param_3;
            uVar44 = (ulonglong)uVar54;
            if (uVar55 == 0) {
              uVar62 = (ulonglong)*(ushort *)((int)param_2 + 0x32);
              uStack_154 = (uint)*(ushort *)((int)param_2 + 0x32);
              uVar47 = (int)uStack_154 >> 1;
              if ((uVar23 == 0) ||
                 (bVar18 = false, *(int *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2)) != 0
                 )) {
                bVar18 = true;
              }
              iVar28 = param_2[0x57];
              iVar52 = 0;
              iStack_194 = 0;
              uVar30 = 0;
              iStack_190 = 0;
              lVar58 = 0;
              uStack_15c = 0;
              uStack_174 = uVar54;
              iStack_d4 = iVar28;
              if (((int)cVar61 >> 3 & 1U) != 0) {
                if (param_2[0x15d] == 0) {
                  uVar30 = fn_830C6D68(param_2,param_2[0x54]);
                  uVar30 = (uVar30 & 0x7fff0000) << 1 | uVar30 & 0xffff;
                  uStack_15c = (uint)uVar30;
                }
                else {
                  uVar30 = fn_830C7288();
                  uStack_15c = (uint)uVar30;
                  if (*(int *)(*param_2 + 0x14) != 0) {
                    return 1;
                  }
                }
              }
              puVar53 = puStack_248;
              puVar50 = puStack00000024;
              iVar22 = param_2[0x156];
              uStack_1c0 = 0;
              uStack_1c4 = 0;
              uStack_1c8 = 0;
              uVar54 = iVar22 * -0x20000 + 0x10000;
              uStack_1a8 = 0;
              uStack_1a4 = 0;
              iStack_138 = 0;
              iStack_120 = 0;
              uStack_128 = 0;
              if ((uVar31 != 0) &&
                 (uVar31 = *(uint *)((int)((uVar44 - 1 & 0xffffffff) << 2) + iVar28),
                 (uVar31 & 0xffff) != 0x4000)) {
                sVar29 = (short)uVar31;
                if ((uVar31 & 0x10000) == 0) {
                  iVar52 = 1;
                  uStack_1a8 = (((int)uVar31 >> 8 & 0xfffffe00U) * param_2[0x16c] & 0xfffe0000) +
                               iVar22 * -0x20000 + 0x10000 |
                               (int)sVar29 * param_2[0x16c] >> 8 & 0xffffU;
                  iStack_194 = 1;
                  uVar37 = 0;
                  uStack_1c8 = uVar31;
                }
                else {
                  uVar34 = (longlong)sVar29 + 0x100;
                  iVar27 = iVar22 * 2 + ((int)uVar31 >> 0x10) + -1 >> 1;
                  uVar55 = iVar27 + 0x40;
                  uStack_1a8 = uVar31;
                  if (((uVar34 & 0xffffffff) >> 2 | (ulonglong)uVar55) < 0x80) {
                    iStack_190 = 1;
                    uVar37 = 1;
                    uStack_1c8 = CONCAT22(*(undefined2 *)(uVar55 * 2 + param_2[0x172]),
                                          *(undefined2 *)
                                           ((int)((uVar34 & 0xffffffff) << 1) + param_2[0x173]));
                  }
                  else {
                    if ((uVar34 & 0xffffffff) < 0x200) {
                      uVar31 = (uint)*(short *)((int)((uVar34 & 0xffffffff) << 1) + param_2[0x173]);
                    }
                    else {
                      uVar26 = *(ushort *)((int)param_2 + 0x3e);
                      uVar31 = (int)sVar29 + (uint)uVar26;
                      uVar37 = (int)sVar29 - (uVar26 - 1) ^ uVar31;
                      uVar31 = ~((int)(uVar37 | uVar31) >> 0x1f) & uVar26 - 1 |
                               (int)uVar37 >> 0x1f & (int)sVar29 |
                               (int)uVar31 >> 0x1f & -(uint)uVar26;
                    }
                    if (uVar55 < 0x80) {
                      iStack_190 = 1;
                      uVar37 = 1;
                      uStack_1c8 = (int)*(short *)(uVar55 * 2 + param_2[0x172]) << 0x10 |
                                   uVar31 & 0xffff;
                    }
                    else {
                      uVar26 = *(ushort *)(param_2 + 0x10);
                      uVar23 = iVar27 * 2;
                      uVar40 = uVar26 - 2;
                      iStack_190 = 1;
                      uVar55 = uVar23 + uVar26;
                      uVar39 = uVar23 - uVar40 ^ uVar55;
                      uVar37 = 1;
                      uStack_1c8 = ((int)uVar55 >> 0x1f & -(uint)uVar26 |
                                    ~((int)(uVar39 | uVar55) >> 0x1f) & uVar40 |
                                   (int)uVar39 >> 0x1f & uVar23) << 0x10 | uVar31 & 0xffff;
                    }
                  }
                }
                lVar58 = 1;
                iStack_120 = 1;
              }
              uVar31 = (uint)lVar58;
              if (!bVar18) {
                uVar55 = *(uint *)((int)((uVar44 - uVar62 & 0xffffffff) << 2) + iVar28);
                if ((uVar55 & 0xffff) != 0x4000) {
                  sVar29 = (short)uVar55;
                  if ((uVar55 & 0x10000) == 0) {
                    iVar27 = param_2[0x16c];
                    iVar52 = iVar52 + 1;
                    iVar13 = (int)(lVar58 << 2);
                    *(uint *)((int)&uStack_1c8 + iVar13) = uVar55;
                    *(uint *)((int)&uStack_1a8 + iVar13) =
                         (((int)uVar55 >> 8 & 0xfffffe00U) * iVar27 & 0xfffe0000) +
                         iVar22 * -0x20000 + 0x10000 | sVar29 * iVar27 >> 8 & 0xffffU;
                    iStack_194 = iVar52;
                  }
                  else {
                    iVar13 = (int)(lVar58 << 2);
                    uVar34 = (longlong)sVar29 + 0x100;
                    iVar27 = iVar22 * 2 + ((int)uVar55 >> 0x10) + -1 >> 1;
                    uVar23 = iVar27 + 0x40;
                    *(uint *)((int)&uStack_1a8 + iVar13) = uVar55;
                    if (((uVar34 & 0xffffffff) >> 2 | (ulonglong)uVar23) < 0x80) {
                      uVar55 = (uint)*(short *)((int)((uVar34 & 0xffffffff) << 1) + param_2[0x173]);
                      uVar23 = (uint)*(short *)(uVar23 * 2 + param_2[0x172]);
                    }
                    else {
                      if ((uVar34 & 0xffffffff) < 0x200) {
                        uVar55 = (uint)*(short *)((int)((uVar34 & 0xffffffff) << 1) + param_2[0x173]
                                                 );
                      }
                      else {
                        uVar26 = *(ushort *)((int)param_2 + 0x3e);
                        uVar55 = (int)sVar29 + (uint)uVar26;
                        uVar39 = (int)sVar29 - (uVar26 - 1) ^ uVar55;
                        uVar55 = (int)uVar55 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar39 | uVar55) >> 0x1f) & uVar26 - 1 |
                                 (int)uVar39 >> 0x1f & (int)sVar29;
                      }
                      if (uVar23 < 0x80) {
                        uVar23 = (uint)*(short *)(uVar23 * 2 + param_2[0x172]);
                      }
                      else {
                        uVar26 = *(ushort *)(param_2 + 0x10);
                        uVar39 = iVar27 * 2;
                        uVar25 = uVar26 - 2;
                        uVar23 = uVar39 + uVar26;
                        uVar40 = uVar39 - uVar25 ^ uVar23;
                        uVar23 = (int)uVar23 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar40 | uVar23) >> 0x1f) & uVar25 |
                                 (int)uVar40 >> 0x1f & uVar39;
                      }
                    }
                    uVar37 = uVar37 + 1;
                    *(uint *)((int)&uStack_1c8 + iVar13) = uVar23 << 0x10 | uVar55 & 0xffff;
                    iStack_190 = uVar37;
                  }
                  lVar58 = lVar58 + 1;
                  iStack_138 = 1;
                  uStack_128 = uVar31;
                }
                uVar31 = (uint)lVar58;
                if ((1 < uVar47) &&
                   (uVar34 = (longlong)(int)uVar47 - 1,
                   uVar47 = *(uint *)((int)(((((((~(uVar34 ^ uVar36) & 0xffffffff) >> 0x1f) +
                                               (ulonglong)(uVar34 <= uVar36)) * 4 & 4) +
                                             (uVar44 - uVar62)) - 2 & 0xffffffff) << 2) + iVar28),
                   (uVar47 & 0xffff) != 0x4000)) {
                  sVar29 = (short)uVar47;
                  if ((uVar47 & 0x10000) == 0) {
                    iVar27 = param_2[0x16c];
                    iVar13 = (int)(lVar58 << 2);
                    iVar52 = iVar52 + 1;
                    *(uint *)((int)&uStack_1c8 + iVar13) = uVar47;
                    *(uint *)((int)&uStack_1a8 + iVar13) =
                         (((int)uVar47 >> 8 & 0xfffffe00U) * iVar27 & 0xfffe0000) +
                         iVar22 * -0x20000 + 0x10000 | sVar29 * iVar27 >> 8 & 0xffffU;
                    iStack_194 = iVar52;
                  }
                  else {
                    iVar27 = (int)(lVar58 << 2);
                    uVar36 = (longlong)sVar29 + 0x100;
                    iVar22 = iVar22 * 2 + ((int)uVar47 >> 0x10) + -1 >> 1;
                    uVar55 = iVar22 + 0x40;
                    *(uint *)((int)&uStack_1a8 + iVar27) = uVar47;
                    if (((uVar36 & 0xffffffff) >> 2 | (ulonglong)uVar55) < 0x80) {
                      uVar23 = (uint)*(short *)((int)((uVar36 & 0xffffffff) << 1) + param_2[0x173]);
                      uVar47 = (uint)*(short *)(uVar55 * 2 + param_2[0x172]);
                    }
                    else {
                      if ((uVar36 & 0xffffffff) < 0x200) {
                        uVar23 = (uint)*(short *)((int)((uVar36 & 0xffffffff) << 1) + param_2[0x173]
                                                 );
                      }
                      else {
                        uVar26 = *(ushort *)((int)param_2 + 0x3e);
                        uVar47 = (int)sVar29 + (uint)uVar26;
                        uVar23 = (int)sVar29 - (uVar26 - 1) ^ uVar47;
                        uVar23 = (int)uVar47 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar23 | uVar47) >> 0x1f) & uVar26 - 1 |
                                 (int)uVar23 >> 0x1f & (int)sVar29;
                      }
                      if (uVar55 < 0x80) {
                        uVar47 = (uint)*(short *)(uVar55 * 2 + param_2[0x172]);
                      }
                      else {
                        uVar26 = *(ushort *)(param_2 + 0x10);
                        uVar55 = iVar22 * 2;
                        uVar40 = uVar26 - 2;
                        uVar47 = uVar55 + uVar26;
                        uVar39 = uVar55 - uVar40 ^ uVar47;
                        uVar47 = (int)uVar47 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar39 | uVar47) >> 0x1f) & uVar40 |
                                 (int)uVar39 >> 0x1f & uVar55;
                      }
                    }
                    uVar37 = uVar37 + 1;
                    *(uint *)((int)&uStack_1c8 + iVar27) = uVar47 << 0x10 | uVar23 & 0xffff;
                    iStack_190 = uVar37;
                  }
                  uVar31 = uVar31 + 1;
                }
              }
              uStack_a4 = 0;
              if ((param_2[0x15c] == 2) || (bVar18 = false, param_2[0x15c] == 3)) {
                bVar18 = true;
              }
              uStack_c4 = 0;
              uStack_e4 = 0;
              if (uVar31 < 2) {
                uStack_228 = uStack_1c8;
                uStack_21c = uStack_1a8;
                if (uVar31 != 1) {
                  uStack_228 = 0;
                  uStack_21c = uVar54;
                }
              }
              else {
                uStack_1a0 = ((((U64)(uStack_1a0)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar54 >> 0x10))) & ((U64)0xFFFF)) << 0));
                iStack_150 = -(int)(short)(((U64)(uStack_1a0) >> 0) & 0xFFFF);
                uStack_158 = (int)(short)(((U64)(uStack_1a0) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1a8) >> 0) & 0xFFFF);
                uVar24 = (ushort)((uint)-(int)(short)(((U64)(uStack_1a8) >> 0) & 0xFFFF) >> 0x10);
                uVar26 = (ushort)(uStack_158 >> 0x10) ^ uVar24;
                uStack_228 = CONCAT22((short)((ushort)((uint)-(int)(short)(((U64)(uStack_1c8) >> 0) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(uStack_1c8) >> 0) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(uStack_1c8) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(uStack_1c8) >> 16) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(uStack_1c8) >> 16) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(uStack_1c8) >> 16) & 0xFFFF));
                uStack_21c = CONCAT22((short)uVar26 >> 0xf & (((U64)(uStack_1a8) >> 0) & 0xFFFF) |
                                      ~((short)((ushort)((uint)iStack_150 >> 0x10) ^ uVar24 | uVar26
                                               ) >> 0xf) & (((U64)(uStack_1a0) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(uStack_1a8) >> 16) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(uStack_1a8) >> 16) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(uStack_1a8) >> 16) & 0xFFFF));
                uVar30 = (ulonglong)uStack_15c;
                uVar44 = (ulonglong)uStack_174;
                uVar62 = (ulonglong)uStack_154;
                iVar52 = iStack_194;
                iVar28 = iStack_d4;
                uVar37 = iStack_190;
                param_2 = piStack0000001c;
              }
              bVar19 = false;
              bVar21 = false;
              bVar20 = false;
              if ((iStack_120 != 0) && (iStack_138 != 0)) {
                uStack_a8 = uStack_1c8;
                uVar31 = (&uStack_1c8)[uStack_128];
                uVar47 = (&uStack_1a8)[uStack_128];
                uStack_130 = uStack_1a8;
                uStack_1d8 = ((((U64)(uStack_1d8)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar31)) & ((U64)0xFFFF)) << 16));
                uStack_1d8 = ((((U64)(uStack_1d8)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar31 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1f4 = ((((U64)(uStack_1f4)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar47)) & ((U64)0xFFFF)) << 16));
                uStack_1f4 = ((((U64)(uStack_1f4)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar47 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1f4 = uVar47;
                uStack_1d8 = uVar31;
                if (bVar18) {
                  uVar55 = (uint)(((longlong)(((U64)(uStack_228) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(uStack_1c8) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar31 = (int)uVar55 >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1c8) >> 0) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)(((uVar55 ^ uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1c8) >> 0) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (uVar55 = (uint)(((longlong)(((U64)(uStack_228) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1d8) >> 16) & 0xFFFF) &
                                      0xffffffffU) << 1), uVar31 = (int)uVar55 >> 0x1f,
                     uVar47 = (int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d8) >> 0) & 0xFFFF) >> 0x1f,
                     0x20 < (int)(((uVar55 ^ uVar31) - uVar31) +
                                 (((int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d8) >> 0) & 0xFFFF) ^ uVar47) - uVar47)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar55 = (uint)(((longlong)(((U64)(uStack_21c) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(uStack_1a8) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar31 = (int)uVar55 >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_21c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1a8) >> 0) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)(((uVar55 ^ uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_21c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1a8) >> 0) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (iVar22 = (int)(((U64)(uStack_1f4) >> 0) & 0xFFFF),
                     uVar55 = (uint)(((longlong)(((U64)(uStack_21c) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1f4) >> 16) & 0xFFFF) &
                                     0xffffffffU) << 1), uVar31 = (int)uVar55 >> 0x1f,
                     uVar47 = (((U64)(uStack_21c) >> 0) & 0xFFFF) - iVar22 >> 0x1f,
                     0x20 < (int)(((uVar55 ^ uVar31) - uVar31) +
                                 (((((U64)(uStack_21c) >> 0) & 0xFFFF) - iVar22 ^ uVar47) - uVar47)))) {
                    bVar20 = true;
                  }
                }
                else {
                  uVar31 = (int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1c8) >> 0) & 0xFFFF) >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_228) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_1c8) >> 16) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)((((int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1c8) >> 0) & 0xFFFF) >> 1 ^
                                     uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_228) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_1c8) >> 16) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (uVar31 = (int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d8) >> 0) & 0xFFFF) >> 0x1f,
                     uVar47 = (int)(((U64)(uStack_228) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1d8) >> 16) & 0xFFFF) >> 0x1f,
                     0x20 < (int)((((int)(((U64)(uStack_228) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d8) >> 0) & 0xFFFF) >> 1 ^ uVar31) -
                                  uVar31) +
                                 (((int)(((U64)(uStack_228) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1d8) >> 16) & 0xFFFF) ^ uVar47) - uVar47)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar31 = (int)(((U64)(uStack_21c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1a8) >> 0) & 0xFFFF) >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_21c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_1a8) >> 16) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)((((int)(((U64)(uStack_21c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_1a8) >> 0) & 0xFFFF) >> 1 ^
                                     uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_21c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_1a8) >> 16) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (iVar22 = (int)(((U64)(uStack_1f4) >> 0) & 0xFFFF), iVar27 = (int)(((U64)(uStack_1f4) >> 16) & 0xFFFF),
                     uVar31 = (((U64)(uStack_21c) >> 0) & 0xFFFF) - iVar22 >> 0x1f,
                     uVar47 = (((U64)(uStack_21c) >> 16) & 0xFFFF) - iVar27 >> 0x1f,
                     0x20 < (int)((((((U64)(uStack_21c) >> 0) & 0xFFFF) - iVar22 >> 1 ^ uVar31) - uVar31) +
                                 (((((U64)(uStack_21c) >> 16) & 0xFFFF) - iVar27 ^ uVar47) - uVar47)))) {
                    bVar20 = true;
                  }
                }
              }
              uVar47 = uStack_a8;
              uVar31 = uStack_1d8;
              if (param_2[0x15d] == 0) {
LAB_830d1320:
                if (param_2[0x15e] != 0) {
LAB_830d132c:
                  bVar19 = true;
                }
              }
              else {
                if (iVar52 <= (int)uVar37) goto LAB_830d132c;
                if (param_2[0x15d] == 0) goto LAB_830d1320;
              }
              uStack_1a0 = uVar54;
              if ((uVar30 & 0x10000) == 0) {
                if (bVar19) {
                  uVar37 = uStack_21c;
                  if (bVar20) {
                    puVar10 = (ulonglong *)*param_2;
                    uVar63 = 1;
                    iVar52 = 0;
                    cVar61 = '\0';
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar34 = uVar36 + 0x10;
                    if ((uVar34 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar52;
                        if ((uVar34 & 0xffffffff) == 0) break;
                        uVar63 = uVar63 - uVar34;
                        *(int *)(puVar10 + 1) = (int)(uVar36 - uVar34);
                        iVar52 = ((int)(*puVar10 >> (0x40 - uVar34 & 0x7f)) << ((uint)uVar63 & 0x3f)
                                 ) + iVar52;
                        cVar61 = (char)iVar52;
                        *puVar10 = *puVar10 << (uVar34 & 0x7f);
                        if ((longlong)(uVar36 - uVar34) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar34 = uVar36 + 0x10;
                      } while ((uVar34 & 0xffffffff) < (uVar63 & 0xffffffff));
                    }
                    uVar34 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar63);
                    *puVar10 = uVar34 << (uVar63 & 0x7f);
                    if ((longlong)(uVar36 - uVar63) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = uStack_1f4;
                    if ((char)((char)(uVar34 >> (0x40 - uVar63 & 0x7f)) + cVar61) == '\0') {
                      uVar37 = uStack_130;
                    }
                  }
                }
                else {
                  uVar37 = uStack_228;
                  if (bVar21) {
                    puVar10 = (ulonglong *)*param_2;
                    uVar63 = 1;
                    iVar52 = 0;
                    cVar61 = '\0';
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar34 = uVar36 + 0x10;
                    if ((uVar34 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar52;
                        if ((uVar34 & 0xffffffff) == 0) break;
                        uVar63 = uVar63 - uVar34;
                        *(int *)(puVar10 + 1) = (int)(uVar36 - uVar34);
                        iVar52 = ((int)(*puVar10 >> (0x40 - uVar34 & 0x7f)) << ((uint)uVar63 & 0x3f)
                                 ) + iVar52;
                        cVar61 = (char)iVar52;
                        *puVar10 = *puVar10 << (uVar34 & 0x7f);
                        if ((longlong)(uVar36 - uVar34) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar34 = uVar36 + 0x10;
                      } while ((uVar34 & 0xffffffff) < (uVar63 & 0xffffffff));
                    }
                    uVar34 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar63);
                    *puVar10 = uVar34 << (uVar63 & 0x7f);
                    if ((longlong)(uVar36 - uVar63) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = uVar31;
                    if ((char)((char)(uVar34 >> (0x40 - uVar63 & 0x7f)) + cVar61) == '\0') {
                      uVar37 = uVar47;
                    }
                  }
                }
              }
              else if (bVar19) {
                uVar37 = uStack_228;
                if (bVar21) {
                  puVar10 = (ulonglong *)*param_2;
                  uVar63 = 1;
                  iVar52 = 0;
                  cVar61 = '\0';
                  uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar34 = uVar36 + 0x10;
                  if ((uVar34 & 0xffffffff) == 0) {
                    do {
                      cVar61 = (char)iVar52;
                      if ((uVar34 & 0xffffffff) == 0) break;
                      uVar63 = uVar63 - uVar34;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar34);
                      iVar52 = ((int)(*puVar10 >> (0x40 - uVar34 & 0x7f)) << ((uint)uVar63 & 0x3f))
                               + iVar52;
                      cVar61 = (char)iVar52;
                      *puVar10 = *puVar10 << (uVar34 & 0x7f);
                      if ((longlong)(uVar36 - uVar34) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar34 = uVar36 + 0x10;
                    } while ((uVar34 & 0xffffffff) < (uVar63 & 0xffffffff));
                  }
                  uVar34 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar63);
                  *puVar10 = uVar34 << (uVar63 & 0x7f);
                  if ((longlong)(uVar36 - uVar63) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  uVar37 = uVar47;
                  if ((char)((char)(uVar34 >> (0x40 - uVar63 & 0x7f)) + cVar61) != '\0') {
                    uVar37 = uVar31;
                  }
                }
                uVar37 = uVar37 + 0x10000;
              }
              else if (bVar20) {
                puVar10 = (ulonglong *)*param_2;
                uVar63 = 1;
                iVar52 = 0;
                cVar61 = '\0';
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar34 = uVar36 + 0x10;
                if ((uVar34 & 0xffffffff) == 0) {
                  do {
                    cVar61 = (char)iVar52;
                    if ((uVar34 & 0xffffffff) == 0) break;
                    uVar63 = uVar63 - uVar34;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar34);
                    iVar52 = ((int)(*puVar10 >> (0x40 - uVar34 & 0x7f)) << ((uint)uVar63 & 0x3f)) +
                             iVar52;
                    cVar61 = (char)iVar52;
                    *puVar10 = *puVar10 << (uVar34 & 0x7f);
                    if ((longlong)(uVar36 - uVar34) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar34 = uVar36 + 0x10;
                  } while ((uVar34 & 0xffffffff) < (uVar63 & 0xffffffff));
                }
                uVar34 = *puVar10;
                *(int *)(puVar10 + 1) = (int)(uVar36 - uVar63);
                *puVar10 = uVar34 << (uVar63 & 0x7f);
                if ((longlong)(uVar36 - uVar63) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                if ((char)((char)(uVar34 >> (0x40 - uVar63 & 0x7f)) + cVar61) == '\0') {
                  uVar37 = uStack_130 + 0x10000;
                }
                else {
                  uVar37 = uStack_1f4 + 0x10000;
                }
              }
              else {
                uVar37 = uStack_21c + 0x10000;
              }
              iVar52 = (int)(uVar44 << 2);
              uStack_210 = ((((U64)(uStack_210)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar37)) & ((U64)0xFFFF)) << 16));
              puVar43 = (undefined4 *)((int)((uVar44 + uVar62 & 0xffffffff) << 2) + iVar28);
              uStack_184 = ((((U64)(uStack_184)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar37 >> 0x10))) & ((U64)0xFFFF)) << 0));
              uStack_184 = CONCAT22(((short)(uVar30 >> 0x10) + *(short *)(param_2 + 0x10) +
                                     (((U64)(uStack_184) >> 0) & 0xFFFF) & *(ushort *)(param_2 + 0x11)) -
                                    *(short *)(param_2 + 0x10),
                                    ((((U64)(uStack_210) >> 16) & 0xFFFF) + *(short *)((int)param_2 + 0x3e) +
                                     (short)uVar30 & *(ushort *)((int)param_2 + 0x42)) -
                                    *(short *)((int)param_2 + 0x3e));
              puVar43[1] = uStack_184;
              *puVar43 = uStack_184;
              *(undefined4 *)(iVar52 + iVar28 + 4) = uStack_184;
              *(undefined4 *)(iVar52 + iVar28) = uStack_184;
              uStack_210 = uVar37;
            }
            else {
              uVar26 = *(ushort *)((int)param_2 + 0x32);
              uStack_168 = (uint)uVar26;
              uVar47 = (int)uStack_168 >> 1;
              uVar36 = (ulonglong)(int)uVar47;
              if ((uVar23 == 0) ||
                 (puVar53 = (uint *)0x0,
                 *(int *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2)) != 0)) {
                puVar53 = (uint *)0x1;
              }
              iStack_1b8 = param_2[0x57];
              uVar55 = 0;
              lVar58 = 0;
              uVar23 = (uint)*(ushort *)((int)param_2 + 0x3e);
              piVar49 = (int *)param_2[0x55];
              puVar10 = (ulonglong *)*param_2;
              uStack_188 = (uint)*(ushort *)((int)param_2 + 0x42);
              uStack_254 = 0;
              uStack_19c = (uint)*(ushort *)(param_2 + 0x11);
              uStack_24c = 0;
              uStack_180 = (uint)*(ushort *)((int)param_2 + 0x3e);
              uStack_1f0 = (uint)*(ushort *)(param_2 + 0x10);
              puStack_1d0 = puVar53;
              uStack_18c = uVar54;
              uStack_13c = uVar47;
              if (piVar49 == (int *)0x0) {
                uVar62 = 0;
                *(undefined4 *)((int)puVar10 + 0x14) = 3;
              }
              else {
                iVar28 = *piVar49;
                sVar29 = *(short *)((int)((*puVar10 >>
                                           (0x40 - (ulonglong)*(byte *)(piVar49 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar28);
                uVar62 = (ulonglong)sVar29;
                if (sVar29 < 0) {
                  fn_82C4E470(puVar10);
                  do {
                    uVar30 = *puVar10;
                    fn_82C4E470(puVar10,1);
                    sVar29 = *(short *)((int)(((uVar62 - ((longlong)uVar30 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar28);
                    uVar62 = (ulonglong)sVar29;
                  } while (sVar29 < 0);
                }
                else {
                  iVar28 = *(int *)(puVar10 + 1);
                  iVar52 = (int)(uVar62 & 0xf);
                  *puVar10 = *puVar10 << (uVar62 & 0xf);
                  *(int *)(puVar10 + 1) = iVar28 - iVar52;
                  if (iVar28 < iVar52) {
                    do {
                      pbVar14 = *(byte **)((int)puVar10 + 0xc);
                      if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                        bVar1 = *pbVar14;
                        bVar2 = pbVar14[1];
                        bVar3 = pbVar14[2];
                        bVar4 = pbVar14[4];
                        bVar5 = pbVar14[3];
                        bVar6 = pbVar14[5];
                        iVar28 = *(int *)(puVar10 + 1);
                        *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                        *(int *)(puVar10 + 1) = iVar28 + 0x30;
                        *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                                      (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                    (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                                   ((longlong)-iVar28 & 0x7fU)) + *puVar10;
                        goto LAB_830d18b8;
                      }
                      iVar28 = fn_82C4E3B0(puVar10);
                    } while (iVar28 == 1);
                    uVar62 = (ulonglong)((int)sVar29 >> 4);
                  }
                  else {
LAB_830d18b8:
                    uVar62 = (ulonglong)((int)sVar29 >> 4);
                  }
                }
              }
              uStack_198 = (uint)uVar62;
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              uStack_250 = 0;
              uVar30 = 0;
              if ((uVar62 & 8) != 0) {
                if (param_2[0x15d] == 0) {
                  uVar62 = fn_830C6D68(param_2,param_2[0x54]);
                  uVar30 = (uVar62 & 0x7fff0000) << 1 | uVar62 & 0xffff;
                  uStack_250 = (uint)uVar30;
                }
                else {
                  uVar30 = fn_830C7288();
                  uStack_250 = (uint)uVar30;
                  if (*(int *)(*param_2 + 0x14) != 0) {
                    return 1;
                  }
                }
              }
              uVar39 = uStack_1f0;
              iVar28 = param_2[0x156];
              uStack_258 = 0;
              stack_pair_260.second = 0;
              uVar40 = iVar28 * -0x20000 + 0x10000;
              stack_pair_260.first = 0;
              uStack_270 = 0;
              uStack_26c = 0;
              iStack_1e0 = 0;
              iStack_1dc = 0;
              uStack_200 = 0;
              if ((uVar31 != 0) &&
                 (uVar25 = *(uint *)((int)((uVar44 - 1 & 0xffffffff) << 2) + iStack_1b8),
                 (uVar25 & 0xffff) != 0x4000)) {
                sVar29 = (short)uVar25;
                if ((uVar25 & 0x10000) == 0) {
                  uVar55 = 1;
                  uStack_270 = (((int)uVar25 >> 8 & 0xfffffe00U) * param_2[0x16c] & 0xfffe0000) +
                               iVar28 * -0x20000 + 0x10000 |
                               (int)sVar29 * param_2[0x16c] >> 8 & 0xffffU;
                  uStack_254 = 1;
                  uVar37 = 0;
                  stack_pair_260.first = uVar25;
                }
                else {
                  uVar62 = (longlong)sVar29 + 0x100;
                  iVar52 = iVar28 * 2 + ((int)uVar25 >> 0x10) + -1 >> 1;
                  uVar32 = iVar52 + 0x40;
                  uStack_270 = uVar25;
                  if (((uVar62 & 0xffffffff) >> 2 | (ulonglong)uVar32) < 0x80) {
                    uStack_24c = 1;
                    uVar37 = 1;
                    stack_pair_260.first = CONCAT22(*(undefined2 *)(uVar32 * 2 + param_2[0x172]),
                                          *(undefined2 *)
                                           ((int)((uVar62 & 0xffffffff) << 1) + param_2[0x173]));
                  }
                  else {
                    if ((uVar62 & 0xffffffff) < 0x200) {
                      uVar25 = (uint)*(short *)((int)((uVar62 & 0xffffffff) << 1) + param_2[0x173]);
                    }
                    else {
                      uVar24 = *(ushort *)((int)param_2 + 0x3e);
                      uVar37 = (int)sVar29 + (uint)uVar24;
                      uVar25 = (int)sVar29 - (uVar24 - 1) ^ uVar37;
                      uVar25 = (int)uVar37 >> 0x1f & -(uint)uVar24 |
                               ~((int)(uVar25 | uVar37) >> 0x1f) & uVar24 - 1 |
                               (int)uVar25 >> 0x1f & (int)sVar29;
                    }
                    if (uVar32 < 0x80) {
                      uStack_24c = 1;
                      uVar37 = 1;
                      stack_pair_260.first = (int)*(short *)(uVar32 * 2 + param_2[0x172]) << 0x10 |
                                   uVar25 & 0xffff;
                    }
                    else {
                      uVar24 = *(ushort *)(param_2 + 0x10);
                      uVar35 = iVar52 * 2;
                      uVar42 = uVar24 - 2;
                      uStack_24c = 1;
                      uVar32 = uVar35 + uVar24;
                      uVar41 = uVar35 - uVar42 ^ uVar32;
                      uVar37 = 1;
                      stack_pair_260.first = ((int)uVar32 >> 0x1f & -(uint)uVar24 |
                                    ~((int)(uVar41 | uVar32) >> 0x1f) & uVar42 |
                                   (int)uVar41 >> 0x1f & uVar35) << 0x10 | uVar25 & 0xffff;
                    }
                  }
                }
                lVar58 = 1;
                iStack_1dc = 1;
              }
              uVar25 = (uint)lVar58;
              if (puVar53 == (uint *)0x0) {
                uVar44 = uVar44 - uVar26;
                uVar32 = *(uint *)((int)((uVar44 & 0xffffffff) << 2) + iStack_1b8);
                if ((uVar32 & 0xffff) != 0x4000) {
                  sVar29 = (short)uVar32;
                  if ((uVar32 & 0x10000) == 0) {
                    iVar52 = param_2[0x16c];
                    uVar55 = uVar55 + 1;
                    iVar22 = (int)(lVar58 << 2);
                    *(uint *)((int)&stack_pair_260.first + iVar22) = uVar32;
                    *(uint *)((int)&uStack_270 + iVar22) =
                         (((int)uVar32 >> 8 & 0xfffffe00U) * iVar52 & 0xfffe0000) +
                         iVar28 * -0x20000 + 0x10000 | sVar29 * iVar52 >> 8 & 0xffffU;
                    uStack_254 = uVar55;
                  }
                  else {
                    iVar22 = (int)(lVar58 << 2);
                    uVar62 = (longlong)sVar29 + 0x100;
                    iVar52 = iVar28 * 2 + ((int)uVar32 >> 0x10) + -1 >> 1;
                    uVar35 = iVar52 + 0x40;
                    *(uint *)((int)&uStack_270 + iVar22) = uVar32;
                    if (((uVar62 & 0xffffffff) >> 2 | (ulonglong)uVar35) < 0x80) {
                      uVar32 = (uint)*(short *)((int)((uVar62 & 0xffffffff) << 1) + param_2[0x173]);
                      uVar35 = (uint)*(short *)(uVar35 * 2 + param_2[0x172]);
                    }
                    else {
                      if ((uVar62 & 0xffffffff) < 0x200) {
                        uVar32 = (uint)*(short *)((int)((uVar62 & 0xffffffff) << 1) + param_2[0x173]
                                                 );
                      }
                      else {
                        uVar26 = *(ushort *)((int)param_2 + 0x3e);
                        uVar32 = (int)sVar29 + (uint)uVar26;
                        uVar41 = (int)sVar29 - (uVar26 - 1) ^ uVar32;
                        uVar32 = (int)uVar32 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar41 | uVar32) >> 0x1f) & uVar26 - 1 |
                                 (int)uVar41 >> 0x1f & (int)sVar29;
                      }
                      if (uVar35 < 0x80) {
                        uVar35 = (uint)*(short *)(uVar35 * 2 + param_2[0x172]);
                      }
                      else {
                        uVar26 = *(ushort *)(param_2 + 0x10);
                        uVar41 = iVar52 * 2;
                        uVar46 = uVar26 - 2;
                        uVar35 = uVar41 + uVar26;
                        uVar42 = uVar41 - uVar46 ^ uVar35;
                        uVar35 = (int)uVar35 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar42 | uVar35) >> 0x1f) & uVar46 |
                                 (int)uVar42 >> 0x1f & uVar41;
                      }
                    }
                    uVar37 = uVar37 + 1;
                    *(uint *)((int)&stack_pair_260.first + iVar22) = uVar35 << 0x10 | uVar32 & 0xffff;
                    uStack_24c = uVar37;
                  }
                  lVar58 = lVar58 + 1;
                  iStack_1e0 = 1;
                  uStack_200 = uVar25;
                }
                uVar25 = (uint)lVar58;
                if ((1 < uVar47) &&
                   (uVar31 = *(uint *)((int)(((((ulonglong)LZCOUNT(uVar31) >> 4 & 2) + uVar44) - 1 &
                                             0xffffffff) << 2) + iStack_1b8),
                   (uVar31 & 0xffff) != 0x4000)) {
                  sVar29 = (short)uVar31;
                  if ((uVar31 & 0x10000) == 0) {
                    iVar52 = param_2[0x16c];
                    iVar22 = (int)(lVar58 << 2);
                    uVar55 = uVar55 + 1;
                    *(uint *)((int)&stack_pair_260.first + iVar22) = uVar31;
                    *(uint *)((int)&uStack_270 + iVar22) =
                         (((int)uVar31 >> 8 & 0xfffffe00U) * iVar52 & 0xfffe0000) +
                         iVar28 * -0x20000 + 0x10000 | sVar29 * iVar52 >> 8 & 0xffffU;
                    uStack_254 = uVar55;
                  }
                  else {
                    iVar52 = (int)(lVar58 << 2);
                    uVar44 = (longlong)sVar29 + 0x100;
                    iVar28 = iVar28 * 2 + ((int)uVar31 >> 0x10) + -1 >> 1;
                    uVar47 = iVar28 + 0x40;
                    *(uint *)((int)&uStack_270 + iVar52) = uVar31;
                    if (((uVar44 & 0xffffffff) >> 2 | (ulonglong)uVar47) < 0x80) {
                      uVar32 = (uint)*(short *)((int)((uVar44 & 0xffffffff) << 1) + param_2[0x173]);
                      uVar31 = (uint)*(short *)(uVar47 * 2 + param_2[0x172]);
                    }
                    else {
                      if ((uVar44 & 0xffffffff) < 0x200) {
                        uVar32 = (uint)*(short *)((int)((uVar44 & 0xffffffff) << 1) + param_2[0x173]
                                                 );
                      }
                      else {
                        uVar26 = *(ushort *)((int)param_2 + 0x3e);
                        uVar31 = (int)sVar29 + (uint)uVar26;
                        uVar32 = (int)sVar29 - (uVar26 - 1) ^ uVar31;
                        uVar32 = (int)uVar31 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar32 | uVar31) >> 0x1f) & uVar26 - 1 |
                                 (int)uVar32 >> 0x1f & (int)sVar29;
                      }
                      if (uVar47 < 0x80) {
                        uVar31 = (uint)*(short *)(uVar47 * 2 + param_2[0x172]);
                      }
                      else {
                        uVar26 = *(ushort *)(param_2 + 0x10);
                        uVar47 = iVar28 * 2;
                        uVar41 = uVar26 - 2;
                        uVar31 = uVar47 + uVar26;
                        uVar35 = uVar47 - uVar41 ^ uVar31;
                        uVar31 = (int)uVar31 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar35 | uVar31) >> 0x1f) & uVar41 |
                                 (int)uVar35 >> 0x1f & uVar47;
                      }
                    }
                    uVar37 = uVar37 + 1;
                    *(uint *)((int)&stack_pair_260.first + iVar52) = uVar31 << 0x10 | uVar32 & 0xffff;
                    uStack_24c = uVar37;
                  }
                  uVar25 = uVar25 + 1;
                }
              }
              uStack_204 = 0;
              if ((param_2[0x15c] == 2) || (bVar18 = false, param_2[0x15c] == 3)) {
                bVar18 = true;
              }
              iStack_16c = 0;
              uStack_b0 = 0;
              if (uVar25 < 2) {
                piVar49 = param_2;
                uStack_234 = uStack_270;
                uStack_218 = stack_pair_260.first;
                if (uVar25 != 1) {
                  uStack_218 = 0;
                  uStack_234 = uVar40;
                }
              }
              else {
                uStack_268 = ((((U64)(uStack_268)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar40 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_154 = -(int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF);
                uStack_174 = (int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF);
                uVar24 = (ushort)((uint)-(int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x10);
                uVar26 = (ushort)(uStack_174 >> 0x10) ^ uVar24;
                uStack_218 = CONCAT22((short)((ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(stack_pair_260.first) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(stack_pair_260.first) >> 16) & 0xFFFF));
                uStack_234 = CONCAT22((short)uVar26 >> 0xf & (((U64)(uStack_270) >> 0) & 0xFFFF) |
                                      ~((short)((ushort)(uStack_154 >> 0x10) ^ uVar24 | uVar26) >>
                                       0xf) & (((U64)(uStack_268) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(uStack_270) >> 16) & 0xFFFF));
                uVar36 = (ulonglong)uStack_13c;
                uVar30 = (ulonglong)uStack_250;
                puVar53 = puStack_1d0;
                uVar55 = uStack_254;
                uVar37 = uStack_24c;
                piVar49 = piStack0000001c;
                uVar23 = uStack_180;
                uVar54 = uStack_18c;
              }
              sVar29 = (short)uVar23;
              bVar19 = false;
              bVar21 = false;
              bVar20 = false;
              if ((iStack_1dc != 0) && (iStack_1e0 != 0)) {
                uStack_b4 = stack_pair_260.first;
                uVar31 = (&stack_pair_260.first)[uStack_200];
                uVar47 = (&uStack_270)[uStack_200];
                uStack_bc = uStack_270;
                uStack_1bc = ((((U64)(uStack_1bc)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar31)) & ((U64)0xFFFF)) << 16));
                uStack_1bc = ((((U64)(uStack_1bc)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar31 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1ec = ((((U64)(uStack_1ec)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar47)) & ((U64)0xFFFF)) << 16));
                uStack_1ec = ((((U64)(uStack_1ec)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar47 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1ec = uVar47;
                uStack_1bc = uVar31;
                if (bVar18) {
                  uVar23 = (uint)(((longlong)(((U64)(uStack_218) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar31 = (int)uVar23 >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x1f;
                  uStack_204 = (int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) ^ uVar47;
                  if ((0x20 < (int)(((uVar23 ^ uVar31) - uVar31) + (uStack_204 - uVar47))) ||
                     (uVar23 = (uint)(((longlong)(((U64)(uStack_218) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1bc) >> 16) & 0xFFFF) &
                                      0xffffffffU) << 1), uVar31 = (int)uVar23 >> 0x1f,
                     uVar47 = (int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1bc) >> 0) & 0xFFFF) >> 0x1f,
                     0x20 < (int)(((uVar23 ^ uVar31) - uVar31) +
                                 (((int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1bc) >> 0) & 0xFFFF) ^ uVar47) - uVar47)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar23 = (uint)(((longlong)(((U64)(uStack_234) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar31 = (int)uVar23 >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_234) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)(((uVar23 ^ uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_234) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (iVar28 = (int)(((U64)(uStack_1ec) >> 0) & 0xFFFF),
                     uVar23 = (uint)(((longlong)(((U64)(uStack_234) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1ec) >> 16) & 0xFFFF) &
                                     0xffffffffU) << 1), uVar31 = (int)uVar23 >> 0x1f,
                     uVar47 = (((U64)(uStack_234) >> 0) & 0xFFFF) - iVar28 >> 0x1f,
                     0x20 < (int)(((uVar23 ^ uVar31) - uVar31) +
                                 (((((U64)(uStack_234) >> 0) & 0xFFFF) - iVar28 ^ uVar47) - uVar47)))) {
                    bVar20 = true;
                  }
                }
                else {
                  uVar31 = (int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_218) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x1f;
                  uStack_204 = (int)(((U64)(uStack_218) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) ^ uVar47;
                  if ((0x20 < (int)((((int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 1 ^
                                     uVar31) - uVar31) + (uStack_204 - uVar47))) ||
                     (uVar31 = (int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1bc) >> 0) & 0xFFFF) >> 0x1f,
                     uVar47 = (int)(((U64)(uStack_218) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1bc) >> 16) & 0xFFFF) >> 0x1f,
                     0x20 < (int)((((int)(((U64)(uStack_218) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1bc) >> 0) & 0xFFFF) >> 1 ^ uVar31) -
                                  uVar31) +
                                 (((int)(((U64)(uStack_218) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1bc) >> 16) & 0xFFFF) ^ uVar47) - uVar47)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar31 = (int)(((U64)(uStack_234) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_234) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)((((int)(((U64)(uStack_234) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 1 ^
                                     uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_234) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (iVar28 = (int)(((U64)(uStack_1ec) >> 0) & 0xFFFF), iVar52 = (int)(((U64)(uStack_1ec) >> 16) & 0xFFFF),
                     uVar31 = (((U64)(uStack_234) >> 0) & 0xFFFF) - iVar28 >> 0x1f,
                     uVar47 = (((U64)(uStack_234) >> 16) & 0xFFFF) - iVar52 >> 0x1f,
                     0x20 < (int)((((((U64)(uStack_234) >> 0) & 0xFFFF) - iVar28 >> 1 ^ uVar31) - uVar31) +
                                 (((((U64)(uStack_234) >> 16) & 0xFFFF) - iVar52 ^ uVar47) - uVar47)))) {
                    bVar20 = true;
                  }
                }
              }
              uVar23 = uStack_b4;
              uVar47 = uStack_bc;
              uVar31 = uStack_1bc;
              if (piVar49[0x15d] == 0) {
LAB_830d2358:
                if (piVar49[0x15e] != 0) {
LAB_830d2364:
                  bVar19 = true;
                }
              }
              else {
                if ((int)uVar55 <= (int)uVar37) goto LAB_830d2364;
                if (piVar49[0x15d] == 0) goto LAB_830d2358;
              }
              uStack_268 = uVar40;
              if ((uVar30 & 0x10000) == 0) {
                if (bVar19) {
                  uVar37 = uStack_234;
                  if (bVar20) {
                    puVar10 = (ulonglong *)*piVar49;
                    uVar34 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar62 = uVar44 + 0x10;
                    if ((uVar62 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar62 & 0xffffffff) == 0) break;
                        uVar34 = uVar34 - uVar62;
                        *(int *)(puVar10 + 1) = (int)(uVar44 - uVar62);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar62 & 0x7f)) << ((uint)uVar34 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar62 & 0x7f);
                        if ((longlong)(uVar44 - uVar62) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar62 = uVar44 + 0x10;
                      } while ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff));
                    }
                    uVar62 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar44 - uVar34);
                    *puVar10 = uVar62 << (uVar34 & 0x7f);
                    if ((longlong)(uVar44 - uVar34) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = uStack_1ec;
                    if ((char)((char)(uVar62 >> (0x40 - uVar34 & 0x7f)) + cVar61) == '\0') {
                      uVar37 = uVar47;
                    }
                  }
                }
                else {
                  uVar37 = uStack_218;
                  if (bVar21) {
                    puVar10 = (ulonglong *)*piVar49;
                    uVar34 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar62 = uVar44 + 0x10;
                    if ((uVar62 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar62 & 0xffffffff) == 0) break;
                        uVar34 = uVar34 - uVar62;
                        *(int *)(puVar10 + 1) = (int)(uVar44 - uVar62);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar62 & 0x7f)) << ((uint)uVar34 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar62 & 0x7f);
                        if ((longlong)(uVar44 - uVar62) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar62 = uVar44 + 0x10;
                      } while ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff));
                    }
                    uVar62 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar44 - uVar34);
                    *puVar10 = uVar62 << (uVar34 & 0x7f);
                    if ((longlong)(uVar44 - uVar34) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = uVar31;
                    if ((char)((char)(uVar62 >> (0x40 - uVar34 & 0x7f)) + cVar61) == '\0') {
                      uVar37 = uVar23;
                    }
                  }
                }
              }
              else if (bVar19) {
                uVar37 = uStack_218;
                if (bVar21) {
                  puVar10 = (ulonglong *)*piVar49;
                  uVar34 = 1;
                  iVar28 = 0;
                  cVar61 = '\0';
                  uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar62 = uVar44 + 0x10;
                  if ((uVar62 & 0xffffffff) == 0) {
                    do {
                      cVar61 = (char)iVar28;
                      if ((uVar62 & 0xffffffff) == 0) break;
                      uVar34 = uVar34 - uVar62;
                      *(int *)(puVar10 + 1) = (int)(uVar44 - uVar62);
                      iVar28 = ((int)(*puVar10 >> (0x40 - uVar62 & 0x7f)) << ((uint)uVar34 & 0x3f))
                               + iVar28;
                      cVar61 = (char)iVar28;
                      *puVar10 = *puVar10 << (uVar62 & 0x7f);
                      if ((longlong)(uVar44 - uVar62) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar62 = uVar44 + 0x10;
                    } while ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff));
                  }
                  uVar62 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar44 - uVar34);
                  *puVar10 = uVar62 << (uVar34 & 0x7f);
                  if ((longlong)(uVar44 - uVar34) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  uVar37 = uVar23;
                  if ((char)((char)(uVar62 >> (0x40 - uVar34 & 0x7f)) + cVar61) != '\0') {
                    uVar37 = uVar31;
                  }
                }
                uVar37 = uVar37 + 0x10000;
              }
              else if (bVar20) {
                puVar10 = (ulonglong *)*piVar49;
                uVar34 = 1;
                iVar28 = 0;
                cVar61 = '\0';
                uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar62 = uVar44 + 0x10;
                if ((uVar62 & 0xffffffff) == 0) {
                  do {
                    cVar61 = (char)iVar28;
                    if ((uVar62 & 0xffffffff) == 0) break;
                    uVar34 = uVar34 - uVar62;
                    *(int *)(puVar10 + 1) = (int)(uVar44 - uVar62);
                    iVar28 = ((int)(*puVar10 >> (0x40 - uVar62 & 0x7f)) << ((uint)uVar34 & 0x3f)) +
                             iVar28;
                    cVar61 = (char)iVar28;
                    *puVar10 = *puVar10 << (uVar62 & 0x7f);
                    if ((longlong)(uVar44 - uVar62) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar62 = uVar44 + 0x10;
                  } while ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff));
                }
                uVar62 = *puVar10;
                *(int *)(puVar10 + 1) = (int)(uVar44 - uVar34);
                *puVar10 = uVar62 << (uVar34 & 0x7f);
                if ((longlong)(uVar44 - uVar34) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                if ((char)((char)(uVar62 >> (0x40 - uVar34 & 0x7f)) + cVar61) == '\0') {
                  uVar37 = uVar47 + 0x10000;
                }
                else {
                  uVar37 = uStack_1ec + 0x10000;
                }
              }
              else {
                uVar37 = uStack_234 + 0x10000;
              }
              iVar28 = iStack_1b8;
              uStack_208 = ((((U64)(uStack_208)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar37)) & ((U64)0xFFFF)) << 16));
              uVar44 = 0;
              uStack_244 = ((((U64)(uStack_244)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar37 >> 0x10))) & ((U64)0xFFFF)) << 0));
              uStack_250 = 0;
              sVar33 = ((((U64)(uStack_208) >> 16) & 0xFFFF) + (short)uVar30 + sVar29 & (ushort)uStack_188) - sVar29;
              puVar50 = (uint *)(uVar54 * 4 + iStack_1b8);
              uVar26 = ((short)(uVar30 >> 0x10) + (((U64)(uStack_244) >> 0) & 0xFFFF) + (short)uVar39 &
                       (ushort)uStack_19c) - (short)uVar39;
              uStack_244 = CONCAT22(uVar26,sVar33);
              uVar31 = uStack_244;
              *puVar50 = uStack_244;
              uStack_208 = uVar37;
              puStack_1d0 = puVar50;
              if ((uStack_198 & 4) != 0) {
                if (piVar49[0x15d] == 0) {
                  uVar44 = fn_830C6D68(piVar49,piVar49[0x54]);
                  uVar44 = (uVar44 & 0x7fff0000) << 1 | uVar44 & 0xffff;
                  uStack_250 = (uint)uVar44;
                }
                else {
                  uVar44 = fn_830C7288();
                  uStack_250 = (uint)uVar44;
                  if (*(int *)(*piVar49 + 0x14) != 0) {
                    return 1;
                  }
                }
              }
              iVar52 = piVar49[0x156];
              uStack_258 = 0;
              stack_pair_260.second = 0;
              uVar37 = 0;
              uStack_26c = 0;
              uVar55 = iVar52 * -0x20000 + 0x10000;
              iStack_1e0 = 0;
              uVar54 = 0;
              uStack_24c = 0;
              lVar58 = 1;
              uVar47 = 1;
              uStack_254 = 0;
              bVar18 = true;
              if ((uVar26 & 1) == 0) {
                stack_pair_260.first = uVar31;
                uStack_254 = 1;
                uVar54 = 1;
                uStack_270 = (((int)uVar31 >> 8 & 0xfffffe00U) * piVar49[0x16c] & 0xfffe0000) +
                             iVar52 * -0x20000 + 0x10000 |
                             (int)sVar33 * piVar49[0x16c] >> 8 & 0xffffU;
              }
              else {
                uStack_270 = uVar31;
                uVar62 = (longlong)sVar33 + 0x100;
                iVar22 = iVar52 * 2 + (int)(short)uVar26 + -1 >> 1;
                uVar31 = iVar22 + 0x40;
                if (((uVar62 & 0xffffffff) >> 2 | (ulonglong)uVar31) < 0x80) {
                  uVar37 = 1;
                  uStack_24c = 1;
                  stack_pair_260.first = CONCAT22(*(undefined2 *)(uVar31 * 2 + piVar49[0x172]),
                                        *(undefined2 *)
                                         (piVar49[0x173] + (int)((uVar62 & 0xffffffff) << 1)));
                }
                else {
                  if ((uVar62 & 0xffffffff) < 0x200) {
                    uVar23 = (uint)*(short *)(piVar49[0x173] + (int)((uVar62 & 0xffffffff) << 1));
                  }
                  else {
                    uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                    uVar37 = (int)sVar33 + (uint)uVar26;
                    uVar23 = (int)sVar33 - (uVar26 - 1) ^ uVar37;
                    uVar23 = (int)uVar37 >> 0x1f & -(uint)uVar26 | (int)sVar33 & (int)uVar23 >> 0x1f
                             | ~((int)(uVar23 | uVar37) >> 0x1f) & uVar26 - 1;
                  }
                  if (uVar31 < 0x80) {
                    uVar37 = 1;
                    uStack_24c = 1;
                    stack_pair_260.first = (int)*(short *)(uVar31 * 2 + piVar49[0x172]) << 0x10 |
                                 uVar23 & 0xffff;
                  }
                  else {
                    uVar26 = *(ushort *)(piVar49 + 0x10);
                    uVar25 = iVar22 * 2;
                    uVar37 = 1;
                    uStack_24c = 1;
                    uVar32 = uVar26 - 2;
                    uVar31 = uVar25 + uVar26;
                    uVar40 = uVar25 - uVar32 ^ uVar31;
                    stack_pair_260.first = ((int)uVar31 >> 0x1f & -(uint)uVar26 |
                                  ~((int)(uVar40 | uVar31) >> 0x1f) & uVar32 |
                                 (int)uVar40 >> 0x1f & uVar25) << 0x10 | uVar23 & 0xffff;
                  }
                }
              }
              if (puVar53 == (uint *)0x0) {
                uVar62 = ((ulonglong)uStack_18c - (ulonglong)uStack_168) + 1;
                uVar31 = *(uint *)((int)((uVar62 & 0xffffffff) << 2) + iVar28);
                if ((uVar31 & 0xffff) != 0x4000) {
                  sVar33 = (short)uVar31;
                  if ((uVar31 & 0x10000) == 0) {
                    uVar54 = uVar54 + 1;
                    uStack_26c = (((int)uVar31 >> 8 & 0xfffffe00U) * piVar49[0x16c] & 0xfffe0000) +
                                 iVar52 * -0x20000 + 0x10000 |
                                 (int)sVar33 * piVar49[0x16c] >> 8 & 0xffffU;
                    stack_pair_260.second = uVar31;
                    uStack_254 = uVar54;
                  }
                  else {
                    uVar30 = (longlong)sVar33 + 0x100;
                    iVar22 = iVar52 * 2 + ((int)uVar31 >> 0x10) + -1 >> 1;
                    uVar47 = iVar22 + 0x40;
                    uStack_26c = uVar31;
                    if (((uVar30 & 0xffffffff) >> 2 | (ulonglong)uVar47) < 0x80) {
                      uVar37 = uVar37 + 1;
                      stack_pair_260.second = CONCAT22(*(undefined2 *)(uVar47 * 2 + piVar49[0x172]),
                                            *(undefined2 *)
                                             ((int)((uVar30 & 0xffffffff) << 1) + piVar49[0x173]));
                      uStack_24c = uVar37;
                    }
                    else {
                      if ((uVar30 & 0xffffffff) < 0x200) {
                        uVar31 = (uint)*(short *)((int)((uVar30 & 0xffffffff) << 1) + piVar49[0x173]
                                                 );
                      }
                      else {
                        uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                        uVar31 = (int)sVar33 + (uint)uVar26;
                        uVar23 = (int)sVar33 - (uVar26 - 1) ^ uVar31;
                        uVar31 = (int)uVar23 >> 0x1f & (int)sVar33 |
                                 (int)uVar31 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar23 | uVar31) >> 0x1f) & uVar26 - 1;
                      }
                      if (uVar47 < 0x80) {
                        uVar37 = uVar37 + 1;
                        stack_pair_260.second = (int)*(short *)(uVar47 * 2 + piVar49[0x172]) << 0x10 |
                                     uVar31 & 0xffff;
                        uStack_24c = uVar37;
                      }
                      else {
                        uVar26 = *(ushort *)(piVar49 + 0x10);
                        uVar40 = iVar22 * 2;
                        uVar37 = uVar37 + 1;
                        uVar25 = uVar26 - 2;
                        uVar47 = uVar40 + uVar26;
                        uVar23 = uVar40 - uVar25 ^ uVar47;
                        stack_pair_260.second = ((int)uVar47 >> 0x1f & -(uint)uVar26 |
                                      ~((int)(uVar23 | uVar47) >> 0x1f) & uVar25 |
                                     (int)uVar23 >> 0x1f & uVar40) << 0x10 | uVar31 & 0xffff;
                        uStack_24c = uVar37;
                      }
                    }
                  }
                  iStack_1e0 = 1;
                  lVar58 = 2;
                  uStack_200 = 1;
                }
                uVar47 = (uint)lVar58;
                uVar31 = *(uint *)((int)(((((((~(uVar36 - 1 ^ (ulonglong)uStack_220) & 0xffffffff)
                                             >> 0x1f) +
                                            (ulonglong)(uVar36 - 1 <= (ulonglong)uStack_220)) * 2 &
                                           2) + uVar62) - 1 & 0xffffffff) << 2) + iVar28);
                if ((uVar31 & 0xffff) != 0x4000) {
                  sVar33 = (short)uVar31;
                  if ((uVar31 & 0x10000) == 0) {
                    iVar28 = piVar49[0x16c];
                    iVar22 = (int)(lVar58 << 2);
                    uVar54 = uVar54 + 1;
                    *(uint *)((int)&stack_pair_260.first + iVar22) = uVar31;
                    *(uint *)((int)&uStack_270 + iVar22) =
                         (((int)uVar31 >> 8 & 0xfffffe00U) * iVar28 & 0xfffe0000) +
                         iVar52 * -0x20000 + 0x10000 | sVar33 * iVar28 >> 8 & 0xffffU;
                    uStack_254 = uVar54;
                  }
                  else {
                    iVar22 = (int)(lVar58 << 2);
                    uVar62 = (longlong)sVar33 + 0x100;
                    iVar28 = iVar52 * 2 + ((int)uVar31 >> 0x10) + -1 >> 1;
                    uVar23 = iVar28 + 0x40;
                    *(uint *)((int)&uStack_270 + iVar22) = uVar31;
                    if (((uVar62 & 0xffffffff) >> 2 | (ulonglong)uVar23) < 0x80) {
                      uVar40 = (uint)*(short *)((int)((uVar62 & 0xffffffff) << 1) + piVar49[0x173]);
                      uVar31 = (uint)*(short *)(uVar23 * 2 + piVar49[0x172]);
                    }
                    else {
                      if ((uVar62 & 0xffffffff) < 0x200) {
                        uVar40 = (uint)*(short *)((int)((uVar62 & 0xffffffff) << 1) + piVar49[0x173]
                                                 );
                      }
                      else {
                        uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                        uVar31 = (int)sVar33 + (uint)uVar26;
                        uVar40 = (int)sVar33 - (uVar26 - 1) ^ uVar31;
                        uVar40 = (int)uVar31 >> 0x1f & -(uint)uVar26 |
                                 ~((int)(uVar40 | uVar31) >> 0x1f) & uVar26 - 1 |
                                 (int)uVar40 >> 0x1f & (int)sVar33;
                      }
                      if (uVar23 < 0x80) {
                        uVar31 = (uint)*(short *)(uVar23 * 2 + piVar49[0x172]);
                      }
                      else {
                        uVar26 = *(ushort *)(piVar49 + 0x10);
                        uVar25 = iVar28 * 2;
                        uVar32 = uVar26 - 2;
                        uVar31 = uVar25 + uVar26;
                        uVar23 = uVar25 - uVar32 ^ uVar31;
                        uVar31 = (int)uVar23 >> 0x1f & uVar25 | (int)uVar31 >> 0x1f & -(uint)uVar26
                                 | ~((int)(uVar23 | uVar31) >> 0x1f) & uVar32;
                      }
                    }
                    uVar37 = uVar37 + 1;
                    *(uint *)((int)&stack_pair_260.first + iVar22) = uVar31 << 0x10 | uVar40 & 0xffff;
                    uStack_24c = uVar37;
                  }
                  uVar47 = uVar47 + 1;
                }
              }
              iStack_178 = 0;
              if ((piVar49[0x15c] != 2) && (piVar49[0x15c] != 3)) {
                bVar18 = false;
              }
              iStack_164 = 0;
              uStack_ac = 0;
              if (uVar47 < 2) {
                uStack_22c = uStack_270;
                uStack_224 = stack_pair_260.first;
                if (uVar47 != 1) {
                  uStack_224 = 0;
                  uStack_22c = uVar55;
                }
              }
              else {
                uStack_268 = ((((U64)(uStack_268)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar55 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uVar65 = (ushort)((uint)((int)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF)
                                        ) >> 0x10);
                uStack_204 = (int)(short)(((U64)(uStack_26c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF);
                uVar15 = (ushort)((uint)((int)(short)(((U64)(uStack_26c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF)
                                        ) >> 0x10);
                iStack_16c = (int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF);
                uVar66 = (ushort)((uint)((int)(short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF)
                                        ) >> 0x10);
                uVar24 = (ushort)((uint)((int)(short)(((U64)(uStack_26c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF)
                                        ) >> 0x10);
                uVar26 = (ushort)(uStack_204 >> 0x10) ^ uVar24;
                uVar24 = (ushort)((uint)iStack_16c >> 0x10) ^ uVar24;
                uStack_224 = CONCAT22((short)((ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x10)
                                             ^ uVar66) >> 0xf & (((U64)(stack_pair_260.first) >> 0) & 0xFFFF) |
                                      (short)((short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) >> 0xf ^ uVar66) >> 0xf &
                                      (((U64)(stack_pair_260.second) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x10)
                                             ^ uVar65) >> 0xf & (((U64)(stack_pair_260.first) >> 16) & 0xFFFF) |
                                      (short)((short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) >> 0xf ^ uVar65) >> 0xf &
                                      (((U64)(stack_pair_260.second) >> 16) & 0xFFFF));
                uStack_22c = CONCAT22((short)uVar24 >> 0xf & (((U64)(uStack_270) >> 0) & 0xFFFF) |
                                      (short)uVar26 >> 0xf & (((U64)(uStack_26c) >> 0) & 0xFFFF) |
                                      ~((short)(uVar26 | uVar24) >> 0xf) & (((U64)(uStack_268) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x10)
                                             ^ uVar15) >> 0xf & (((U64)(uStack_270) >> 16) & 0xFFFF) |
                                      (short)((short)(((U64)(uStack_26c) >> 16) & 0xFFFF) >> 0xf ^ uVar15) >> 0xf &
                                      (((U64)(uStack_26c) >> 16) & 0xFFFF));
                sVar29 = (short)uStack_180;
                uVar44 = (ulonglong)uStack_250;
                uVar36 = (ulonglong)uStack_13c;
                uVar37 = uStack_24c;
                uVar54 = uStack_254;
                uVar39 = uStack_1f0;
                piVar49 = piStack0000001c;
                puVar50 = puStack_1d0;
              }
              bVar19 = false;
              bVar21 = false;
              bVar20 = false;
              if (iStack_1e0 != 0) {
                uStack_c0 = stack_pair_260.first;
                uVar31 = (&stack_pair_260.first)[uStack_200];
                uVar47 = (&uStack_270)[uStack_200];
                uStack_f0 = uStack_270;
                uStack_1b0 = ((((U64)(uStack_1b0)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar31)) & ((U64)0xFFFF)) << 16));
                uStack_1b0 = ((((U64)(uStack_1b0)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar31 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1e4 = ((((U64)(uStack_1e4)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar47)) & ((U64)0xFFFF)) << 16));
                uStack_1e4 = ((((U64)(uStack_1e4)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar47 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1e4 = uVar47;
                uStack_1b0 = uVar31;
                if (bVar18) {
                  uVar23 = (uint)(((longlong)(((U64)(uStack_224) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar31 = (int)uVar23 >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)(((uVar23 ^ uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (uVar23 = (uint)(((longlong)(((U64)(uStack_224) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1b0) >> 16) & 0xFFFF) &
                                      0xffffffffU) << 1), uVar31 = (int)uVar23 >> 0x1f,
                     uVar47 = (int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1b0) >> 0) & 0xFFFF) >> 0x1f,
                     0x20 < (int)(((uVar23 ^ uVar31) - uVar31) +
                                 (((int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1b0) >> 0) & 0xFFFF) ^ uVar47) - uVar47)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar23 = (uint)(((longlong)(((U64)(uStack_22c) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar31 = (int)uVar23 >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_22c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)(((uVar23 ^ uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_22c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (iVar28 = (int)(((U64)(uStack_1e4) >> 0) & 0xFFFF),
                     uVar23 = (uint)(((longlong)(((U64)(uStack_22c) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1e4) >> 16) & 0xFFFF) &
                                     0xffffffffU) << 1), uVar31 = (int)uVar23 >> 0x1f,
                     uVar47 = (((U64)(uStack_22c) >> 0) & 0xFFFF) - iVar28 >> 0x1f,
                     0x20 < (int)(((uVar23 ^ uVar31) - uVar31) +
                                 (((((U64)(uStack_22c) >> 0) & 0xFFFF) - iVar28 ^ uVar47) - uVar47)))) {
                    bVar20 = true;
                  }
                }
                else {
                  uVar31 = (int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_224) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)((((int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 1 ^
                                     uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_224) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (uVar31 = (int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1b0) >> 0) & 0xFFFF) >> 0x1f,
                     uVar47 = (int)(((U64)(uStack_224) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1b0) >> 16) & 0xFFFF) >> 0x1f,
                     0x20 < (int)((((int)(((U64)(uStack_224) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1b0) >> 0) & 0xFFFF) >> 1 ^ uVar31) -
                                  uVar31) +
                                 (((int)(((U64)(uStack_224) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1b0) >> 16) & 0xFFFF) ^ uVar47) - uVar47)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar31 = (int)(((U64)(uStack_22c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                  uVar47 = (int)(((U64)(uStack_22c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)((((int)(((U64)(uStack_22c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 1 ^
                                     uVar31) - uVar31) +
                                   (((int)(((U64)(uStack_22c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) ^ uVar47)
                                   - uVar47))) ||
                     (iVar28 = (int)(((U64)(uStack_1e4) >> 0) & 0xFFFF), iVar52 = (int)(((U64)(uStack_1e4) >> 16) & 0xFFFF),
                     uVar31 = (((U64)(uStack_22c) >> 0) & 0xFFFF) - iVar28 >> 0x1f,
                     uVar47 = (((U64)(uStack_22c) >> 16) & 0xFFFF) - iVar52 >> 0x1f,
                     0x20 < (int)((((((U64)(uStack_22c) >> 0) & 0xFFFF) - iVar28 >> 1 ^ uVar31) - uVar31) +
                                 (((((U64)(uStack_22c) >> 16) & 0xFFFF) - iVar52 ^ uVar47) - uVar47)))) {
                    bVar20 = true;
                  }
                }
              }
              uVar23 = uStack_c0;
              uVar47 = uStack_f0;
              uVar31 = uStack_1b0;
              if (piVar49[0x15d] == 0) {
LAB_830d316c:
                if (piVar49[0x15e] != 0) {
LAB_830d3178:
                  bVar19 = true;
                }
              }
              else {
                if (uVar54 <= uVar37) goto LAB_830d3178;
                if (piVar49[0x15d] == 0) goto LAB_830d316c;
              }
              uStack_268 = uVar55;
              if ((uVar44 & 0x10000) == 0) {
                if (bVar19) {
                  uVar37 = uStack_22c;
                  if (bVar20) {
                    puVar10 = (ulonglong *)*piVar49;
                    uVar34 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar30 = uVar62 + 0x10;
                    if ((uVar30 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar30 & 0xffffffff) == 0) break;
                        uVar34 = uVar34 - uVar30;
                        *(int *)(puVar10 + 1) = (int)(uVar62 - uVar30);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar30 & 0x7f)) << ((uint)uVar34 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar30 & 0x7f);
                        if ((longlong)(uVar62 - uVar30) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar30 = uVar62 + 0x10;
                      } while ((uVar30 & 0xffffffff) < (uVar34 & 0xffffffff));
                    }
                    uVar30 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar62 - uVar34);
                    *puVar10 = uVar30 << (uVar34 & 0x7f);
                    if ((longlong)(uVar62 - uVar34) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = uVar47;
                    if ((char)((char)(uVar30 >> (0x40 - uVar34 & 0x7f)) + cVar61) != '\0') {
                      uStack_23c = uStack_1e4;
                      uVar37 = uStack_23c;
                    }
                  }
                }
                else {
                  uVar37 = uStack_224;
                  if (bVar21) {
                    puVar10 = (ulonglong *)*piVar49;
                    uVar34 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar30 = uVar62 + 0x10;
                    if ((uVar30 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar30 & 0xffffffff) == 0) break;
                        uVar34 = uVar34 - uVar30;
                        *(int *)(puVar10 + 1) = (int)(uVar62 - uVar30);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar30 & 0x7f)) << ((uint)uVar34 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar30 & 0x7f);
                        if ((longlong)(uVar62 - uVar30) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar30 = uVar62 + 0x10;
                      } while ((uVar30 & 0xffffffff) < (uVar34 & 0xffffffff));
                    }
                    uVar30 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar62 - uVar34);
                    *puVar10 = uVar30 << (uVar34 & 0x7f);
                    if ((longlong)(uVar62 - uVar34) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = uVar31;
                    if ((char)((char)(uVar30 >> (0x40 - uVar34 & 0x7f)) + cVar61) == '\0') {
                      uVar37 = uVar23;
                    }
                  }
                }
              }
              else if (bVar19) {
                if (bVar21) {
                  puVar10 = (ulonglong *)*piVar49;
                  uVar34 = 1;
                  iVar28 = 0;
                  cVar61 = '\0';
                  uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar30 = uVar62 + 0x10;
                  if ((uVar30 & 0xffffffff) == 0) {
                    do {
                      cVar61 = (char)iVar28;
                      if ((uVar30 & 0xffffffff) == 0) break;
                      uVar34 = uVar34 - uVar30;
                      *(int *)(puVar10 + 1) = (int)(uVar62 - uVar30);
                      iVar28 = ((int)(*puVar10 >> (0x40 - uVar30 & 0x7f)) << ((uint)uVar34 & 0x3f))
                               + iVar28;
                      cVar61 = (char)iVar28;
                      *puVar10 = *puVar10 << (uVar30 & 0x7f);
                      if ((longlong)(uVar62 - uVar30) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar30 = uVar62 + 0x10;
                    } while ((uVar30 & 0xffffffff) < (uVar34 & 0xffffffff));
                  }
                  uVar30 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar62 - uVar34);
                  *puVar10 = uVar30 << (uVar34 & 0x7f);
                  if ((longlong)(uVar62 - uVar34) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  if ((char)((char)(uVar30 >> (0x40 - uVar34 & 0x7f)) + cVar61) == '\0') {
                    uVar37 = uVar23 + 0x10000;
                  }
                  else {
                    uVar37 = uVar31 + 0x10000;
                  }
                }
                else {
                  uVar37 = uStack_224 + 0x10000;
                }
              }
              else if (bVar20) {
                puVar10 = (ulonglong *)*piVar49;
                uVar34 = 1;
                iVar28 = 0;
                cVar61 = '\0';
                uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar30 = uVar62 + 0x10;
                if ((uVar30 & 0xffffffff) == 0) {
                  do {
                    cVar61 = (char)iVar28;
                    if ((uVar30 & 0xffffffff) == 0) break;
                    uVar34 = uVar34 - uVar30;
                    *(int *)(puVar10 + 1) = (int)(uVar62 - uVar30);
                    iVar28 = ((int)(*puVar10 >> (0x40 - uVar30 & 0x7f)) << ((uint)uVar34 & 0x3f)) +
                             iVar28;
                    cVar61 = (char)iVar28;
                    *puVar10 = *puVar10 << (uVar30 & 0x7f);
                    if ((longlong)(uVar62 - uVar30) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar62 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar30 = uVar62 + 0x10;
                  } while ((uVar30 & 0xffffffff) < (uVar34 & 0xffffffff));
                }
                uVar30 = *puVar10;
                *(int *)(puVar10 + 1) = (int)(uVar62 - uVar34);
                *puVar10 = uVar30 << (uVar34 & 0x7f);
                if ((longlong)(uVar62 - uVar34) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                if ((char)((char)(uVar30 >> (0x40 - uVar34 & 0x7f)) + cVar61) == '\0') {
                  uVar37 = uVar47 + 0x10000;
                }
                else {
                  uVar37 = uStack_1e4 + 0x10000;
                }
              }
              else {
                uVar37 = uStack_22c + 0x10000;
              }
              uStack_23c = uVar37;
              uStack_250 = 0;
              *(ushort *)((int)puVar50 + 6) =
                   ((((U64)(uStack_23c) >> 16) & 0xFFFF) + (short)uVar44 + sVar29 & (ushort)uStack_188) - sVar29;
              uVar62 = 0;
              *(ushort *)(puVar50 + 1) =
                   ((short)(uVar44 >> 0x10) + (((U64)(uStack_23c) >> 0) & 0xFFFF) + (short)uVar39 & (ushort)uStack_19c)
                   - (short)uVar39;
              if ((uStack_198 & 2) != 0) {
                if (piVar49[0x15d] == 0) {
                  uVar44 = fn_830C6D68(piVar49,piVar49[0x54]);
                  uVar62 = (uVar44 & 0x7fff0000) << 1 | uVar44 & 0xffff;
                  uStack_250 = (uint)uVar62;
                }
                else {
                  uVar62 = fn_830C7288();
                  uStack_250 = (uint)uVar62;
                  if (*(int *)(*piVar49 + 0x14) != 0) {
                    return 1;
                  }
                }
              }
              iVar28 = piVar49[0x156];
              uVar37 = 0;
              uVar31 = 0;
              uStack_258 = 0;
              stack_pair_260.second = 0;
              lVar58 = 0;
              uVar54 = iVar28 * -0x20000 + 0x10000;
              stack_pair_260.first = 0;
              uStack_26c = 0;
              uStack_270 = 0;
              uStack_254 = 0;
              uStack_24c = 0;
              iStack_1dc = 0;
              if ((uStack_220 != 0) &&
                 (uVar47 = *(uint *)((uStack_168 + uStack_18c + -1) * 4 + iStack_1b8),
                 (uVar47 & 0xffff) != 0x4000)) {
                sVar33 = (short)uVar47;
                if ((uVar47 & 0x10000) == 0) {
                  uVar37 = 1;
                  uStack_270 = (((int)uVar47 >> 8 & 0xfffffe00U) * piVar49[0x16c] & 0xfffe0000) +
                               iVar28 * -0x20000 + 0x10000 |
                               (int)sVar33 * piVar49[0x16c] >> 8 & 0xffffU;
                  uStack_254 = 1;
                  stack_pair_260.first = uVar47;
                }
                else {
                  uVar44 = (longlong)sVar33 + 0x100;
                  iVar52 = iVar28 * 2 + ((int)uVar47 >> 0x10) + -1 >> 1;
                  uVar55 = iVar52 + 0x40;
                  uStack_270 = uVar47;
                  if (((uVar44 & 0xffffffff) >> 2 | (ulonglong)uVar55) < 0x80) {
                    uVar31 = 1;
                    uStack_24c = 1;
                    stack_pair_260.first = CONCAT22(*(undefined2 *)(uVar55 * 2 + piVar49[0x172]),
                                          *(undefined2 *)
                                           ((int)((uVar44 & 0xffffffff) << 1) + piVar49[0x173]));
                  }
                  else {
                    if ((uVar44 & 0xffffffff) < 0x200) {
                      uVar47 = (uint)*(short *)((int)((uVar44 & 0xffffffff) << 1) + piVar49[0x173]);
                    }
                    else {
                      uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                      uVar31 = (int)sVar33 + (uint)uVar26;
                      uVar47 = (int)sVar33 - (uVar26 - 1) ^ uVar31;
                      uVar47 = (int)uVar31 >> 0x1f & -(uint)uVar26 |
                               ~((int)(uVar47 | uVar31) >> 0x1f) & uVar26 - 1 |
                               (int)uVar47 >> 0x1f & (int)sVar33;
                    }
                    if (uVar55 < 0x80) {
                      uVar31 = 1;
                      uStack_24c = 1;
                      stack_pair_260.first = (int)*(short *)(uVar55 * 2 + piVar49[0x172]) << 0x10 |
                                   uVar47 & 0xffff;
                    }
                    else {
                      uVar26 = *(ushort *)(piVar49 + 0x10);
                      uVar23 = iVar52 * 2;
                      uVar31 = 1;
                      uVar25 = uVar26 - 2;
                      uStack_24c = 1;
                      uVar55 = uVar23 + uVar26;
                      uVar40 = uVar23 - uVar25 ^ uVar55;
                      stack_pair_260.first = ((int)uVar55 >> 0x1f & -(uint)uVar26 |
                                    ~((int)(uVar40 | uVar55) >> 0x1f) & uVar25 |
                                   (int)uVar40 >> 0x1f & uVar23) << 0x10 | uVar47 & 0xffff;
                    }
                  }
                }
                lVar58 = 1;
                iStack_1dc = 1;
              }
              uVar47 = *puVar50;
              sVar33 = (short)uVar47;
              if ((uVar47 & 0x10000) == 0) {
                iVar52 = piVar49[0x16c];
                uVar37 = uVar37 + 1;
                iVar22 = (int)(lVar58 << 2);
                *(uint *)((int)&stack_pair_260.first + iVar22) = uVar47;
                *(uint *)((int)&uStack_270 + iVar22) =
                     (((int)uVar47 >> 8 & 0xfffffe00U) * iVar52 & 0xfffe0000) + iVar28 * -0x20000 +
                     0x10000 | sVar33 * iVar52 >> 8 & 0xffffU;
                uStack_254 = uVar37;
              }
              else {
                iVar22 = (int)(lVar58 << 2);
                uVar44 = (longlong)sVar33 + 0x100;
                iVar52 = iVar28 * 2 + ((int)uVar47 >> 0x10) + -1 >> 1;
                uVar55 = iVar52 + 0x40;
                *(uint *)((int)&uStack_270 + iVar22) = uVar47;
                if (((uVar44 & 0xffffffff) >> 2 | (ulonglong)uVar55) < 0x80) {
                  uVar47 = (uint)*(short *)((int)((uVar44 & 0xffffffff) << 1) + piVar49[0x173]);
                  uVar55 = (uint)*(short *)(uVar55 * 2 + piVar49[0x172]);
                }
                else {
                  if ((uVar44 & 0xffffffff) < 0x200) {
                    uVar47 = (uint)*(short *)((int)((uVar44 & 0xffffffff) << 1) + piVar49[0x173]);
                  }
                  else {
                    uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                    uVar47 = (int)sVar33 + (uint)uVar26;
                    uVar23 = (int)sVar33 - (uVar26 - 1) ^ uVar47;
                    uVar47 = (int)uVar47 >> 0x1f & -(uint)uVar26 |
                             ~((int)(uVar23 | uVar47) >> 0x1f) & uVar26 - 1 |
                             (int)uVar23 >> 0x1f & (int)sVar33;
                  }
                  if (uVar55 < 0x80) {
                    uVar55 = (uint)*(short *)(uVar55 * 2 + piVar49[0x172]);
                  }
                  else {
                    uVar26 = *(ushort *)(piVar49 + 0x10);
                    uVar23 = iVar52 * 2;
                    uVar25 = uVar26 - 2;
                    uVar55 = uVar23 + uVar26;
                    uVar40 = uVar23 - uVar25 ^ uVar55;
                    uVar55 = (int)uVar55 >> 0x1f & -(uint)uVar26 |
                             ~((int)(uVar40 | uVar55) >> 0x1f) & uVar25 |
                             (int)uVar40 >> 0x1f & uVar23;
                  }
                }
                uVar31 = uVar31 + 1;
                *(uint *)((int)&stack_pair_260.first + iVar22) = uVar55 << 0x10 | uVar47 & 0xffff;
                uStack_24c = uVar31;
              }
              uStack_200 = (uint)lVar58;
              uVar47 = uStack_200 + 1;
              if (1 < (int)uVar36) {
                uVar55 = puVar50[1];
                sVar33 = (short)uVar55;
                if ((uVar55 & 0x10000) == 0) {
                  iVar52 = piVar49[0x16c];
                  uVar37 = uVar37 + 1;
                  (&stack_pair_260.first)[uVar47] = uVar55;
                  (&uStack_270)[uVar47] =
                       (((int)uVar55 >> 8 & 0xfffffe00U) * iVar52 & 0xfffe0000) + iVar28 * -0x20000
                       + 0x10000 | sVar33 * iVar52 >> 8 & 0xffffU;
                  uStack_254 = uVar37;
                }
                else {
                  uVar36 = (longlong)sVar33 + 0x100;
                  iVar28 = iVar28 * 2 + ((int)uVar55 >> 0x10) + -1 >> 1;
                  uVar23 = iVar28 + 0x40;
                  (&uStack_270)[uVar47] = uVar55;
                  if (((uVar36 & 0xffffffff) >> 2 | (ulonglong)uVar23) < 0x80) {
                    uVar55 = (uint)*(short *)((int)((uVar36 & 0xffffffff) << 1) + piVar49[0x173]);
                    uVar23 = (uint)*(short *)(uVar23 * 2 + piVar49[0x172]);
                  }
                  else {
                    if ((uVar36 & 0xffffffff) < 0x200) {
                      uVar55 = (uint)*(short *)((int)((uVar36 & 0xffffffff) << 1) + piVar49[0x173]);
                    }
                    else {
                      uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                      uVar55 = (int)sVar33 + (uint)uVar26;
                      uVar40 = (int)sVar33 - (uVar26 - 1) ^ uVar55;
                      uVar55 = (int)uVar55 >> 0x1f & -(uint)uVar26 |
                               ~((int)(uVar40 | uVar55) >> 0x1f) & uVar26 - 1 |
                               (int)uVar40 >> 0x1f & (int)sVar33;
                    }
                    if (uVar23 < 0x80) {
                      uVar23 = (uint)*(short *)(uVar23 * 2 + piVar49[0x172]);
                    }
                    else {
                      uVar26 = *(ushort *)(piVar49 + 0x10);
                      uVar25 = iVar28 * 2;
                      uVar32 = uVar26 - 2;
                      uVar23 = uVar25 + uVar26;
                      uVar40 = uVar25 - uVar32 ^ uVar23;
                      uVar23 = ~((int)(uVar40 | uVar23) >> 0x1f) & uVar32 |
                               (int)uVar40 >> 0x1f & uVar25 | (int)uVar23 >> 0x1f & -(uint)uVar26;
                    }
                  }
                  uVar31 = uVar31 + 1;
                  (&stack_pair_260.first)[uVar47] = uVar23 << 0x10 | uVar55 & 0xffff;
                  uStack_24c = uVar31;
                }
                uVar47 = uStack_200 + 2;
              }
              uStack_1b4 = 0;
              if ((piVar49[0x15c] == 2) || (piVar49[0x15c] == 3)) {
                iStack_134 = 1;
              }
              else {
                iStack_134 = 0;
              }
              puStack_170 = (uint *)0x0;
              uStack_dc = 0;
              if (uVar47 < 2) {
                uStack_238 = stack_pair_260.first;
                uStack_230 = uStack_270;
                if (uVar47 != 1) {
                  uStack_238 = 0;
                  uStack_230 = uVar54;
                }
              }
              else {
                uStack_268 = ((((U64)(uStack_268)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar54 >> 0x10))) & ((U64)0xFFFF)) << 0));
                iStack_178 = -(int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF);
                iStack_164 = (int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF);
                uVar24 = (ushort)((uint)-(int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x10);
                uVar26 = (ushort)((uint)iStack_164 >> 0x10) ^ uVar24;
                uStack_238 = CONCAT22((short)((ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(stack_pair_260.first) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)-(int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x10)
                                             ) >> 0xf & (((U64)(stack_pair_260.first) >> 16) & 0xFFFF));
                uStack_230 = CONCAT22((short)uVar26 >> 0xf & (((U64)(uStack_270) >> 0) & 0xFFFF) |
                                      ~((short)((ushort)((uint)-(int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF) >> 0x10
                                                        ) ^ uVar24 | uVar26) >> 0xf) &
                                      (((U64)(uStack_268) >> 0) & 0xFFFF),
                                      (short)((ushort)((uint)-(int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x10)
                                             ^ (ushort)((uint)iStack_178 >> 0x10)) >> 0xf &
                                      (((U64)(uStack_270) >> 16) & 0xFFFF));
                uVar62 = (ulonglong)uStack_250;
                sVar29 = (short)uStack_180;
                uVar31 = uStack_24c;
                uVar37 = uStack_254;
                uVar39 = uStack_1f0;
                puVar50 = puStack_1d0;
                piVar49 = piStack0000001c;
              }
              bVar19 = false;
              bVar21 = false;
              bVar20 = false;
              bVar18 = false;
              if (iStack_1dc != 0) {
                uStack_b8 = stack_pair_260.first;
                uStack_c8 = uStack_270;
                uVar47 = (&stack_pair_260.first)[uStack_200];
                uVar55 = (&uStack_270)[uStack_200];
                uStack_1d4 = ((((U64)(uStack_1d4)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar47)) & ((U64)0xFFFF)) << 16));
                uStack_1d4 = ((((U64)(uStack_1d4)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar47 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1e8 = ((((U64)(uStack_1e8)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar55)) & ((U64)0xFFFF)) << 16));
                uStack_1e8 = ((((U64)(uStack_1e8)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar55 >> 0x10))) & ((U64)0xFFFF)) << 0));
                uStack_1e8 = uVar55;
                uStack_1d4 = uVar47;
                if (iStack_134 == 0) {
                  uVar47 = (int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x1f;
                  uVar55 = (int)(((U64)(uStack_238) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)((((int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 1 ^
                                     uVar47) - uVar47) +
                                   (((int)(((U64)(uStack_238) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) ^ uVar55)
                                   - uVar55))) ||
                     (uVar47 = (int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d4) >> 0) & 0xFFFF) >> 0x1f,
                     uVar55 = (int)(((U64)(uStack_238) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1d4) >> 16) & 0xFFFF) >> 0x1f,
                     0x20 < (int)((((int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d4) >> 0) & 0xFFFF) >> 1 ^ uVar47) -
                                  uVar47) +
                                 (((int)(((U64)(uStack_238) >> 16) & 0xFFFF) - (int)(((U64)(uStack_1d4) >> 16) & 0xFFFF) ^ uVar55) - uVar55)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar47 = (int)(((U64)(uStack_230) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                  uVar55 = (int)(((U64)(uStack_230) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)((((int)(((U64)(uStack_230) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 1 ^
                                     uVar47) - uVar47) +
                                   (((int)(((U64)(uStack_230) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) ^ uVar55)
                                   - uVar55))) ||
                     (iVar28 = (int)(((U64)(uStack_1e8) >> 0) & 0xFFFF), iVar52 = (int)(((U64)(uStack_1e8) >> 16) & 0xFFFF),
                     uVar47 = (((U64)(uStack_230) >> 0) & 0xFFFF) - iVar28 >> 0x1f,
                     uVar55 = (((U64)(uStack_230) >> 16) & 0xFFFF) - iVar52 >> 0x1f,
                     0x20 < (int)((((((U64)(uStack_230) >> 0) & 0xFFFF) - iVar28 >> 1 ^ uVar47) - uVar47) +
                                 (((((U64)(uStack_230) >> 16) & 0xFFFF) - iVar52 ^ uVar55) - uVar55)))) {
                    bVar20 = true;
                  }
                }
                else {
                  uVar23 = (uint)(((longlong)(((U64)(uStack_238) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar47 = (int)uVar23 >> 0x1f;
                  uVar55 = (int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)(((uVar23 ^ uVar47) - uVar47) +
                                   (((int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF) ^ uVar55)
                                   - uVar55))) ||
                     (uVar23 = (uint)(((longlong)(((U64)(uStack_238) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1d4) >> 16) & 0xFFFF) &
                                      0xffffffffU) << 1), uVar47 = (int)uVar23 >> 0x1f,
                     uVar55 = (int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d4) >> 0) & 0xFFFF) >> 0x1f,
                     0x20 < (int)(((uVar23 ^ uVar47) - uVar47) +
                                 (((int)(((U64)(uStack_238) >> 0) & 0xFFFF) - (int)(((U64)(uStack_1d4) >> 0) & 0xFFFF) ^ uVar55) - uVar55)
                                 ))) {
                    bVar21 = true;
                  }
                  uVar23 = (uint)(((longlong)(((U64)(uStack_230) >> 16) & 0xFFFF) - (longlong)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  uVar47 = (int)uVar23 >> 0x1f;
                  uVar55 = (int)(((U64)(uStack_230) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                  if ((0x20 < (int)(((uVar23 ^ uVar47) - uVar47) +
                                   (((int)(((U64)(uStack_230) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) ^ uVar55)
                                   - uVar55))) ||
                     (iVar28 = (int)(((U64)(uStack_1e8) >> 0) & 0xFFFF),
                     uVar23 = (uint)(((longlong)(((U64)(uStack_230) >> 16) & 0xFFFF) - (longlong)(((U64)(uStack_1e8) >> 16) & 0xFFFF) &
                                     0xffffffffU) << 1), uVar47 = (int)uVar23 >> 0x1f,
                     uVar55 = (((U64)(uStack_230) >> 0) & 0xFFFF) - iVar28 >> 0x1f,
                     0x20 < (int)(((uVar23 ^ uVar47) - uVar47) +
                                 (((((U64)(uStack_230) >> 0) & 0xFFFF) - iVar28 ^ uVar55) - uVar55)))) {
                    bVar20 = true;
                  }
                }
              }
              uVar23 = uStack_b8;
              uVar55 = uStack_c8;
              uVar47 = uStack_1d4;
              if (piVar49[0x15d] == 0) {
LAB_830d3f94:
                if (piVar49[0x15e] != 0) {
LAB_830d3fa0:
                  bVar19 = true;
                }
              }
              else {
                if (uVar37 <= uVar31) goto LAB_830d3fa0;
                if (piVar49[0x15d] == 0) goto LAB_830d3f94;
              }
              uStack_268 = uVar54;
              if ((uVar62 & 0x10000) == 0) {
                if (bVar19) {
                  uVar31 = uStack_230;
                  if (bVar20) {
                    puVar10 = (ulonglong *)*piVar49;
                    uVar30 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar44 = uVar36 + 0x10;
                    if ((uVar44 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar44 & 0xffffffff) == 0) break;
                        uVar30 = uVar30 - uVar44;
                        *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar30 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar44 & 0x7f);
                        if ((longlong)(uVar36 - uVar44) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar44 = uVar36 + 0x10;
                      } while ((uVar44 & 0xffffffff) < (uVar30 & 0xffffffff));
                    }
                    uVar44 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar30);
                    *puVar10 = uVar44 << (uVar30 & 0x7f);
                    if ((longlong)(uVar36 - uVar30) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar31 = uStack_1e8;
                    if ((char)((char)(uVar44 >> (0x40 - uVar30 & 0x7f)) + cVar61) == '\0') {
                      uVar31 = uVar55;
                    }
                  }
                }
                else {
                  uVar31 = uStack_238;
                  if (bVar21) {
                    puVar10 = (ulonglong *)*piVar49;
                    uVar30 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar44 = uVar36 + 0x10;
                    if ((uVar44 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar44 & 0xffffffff) == 0) break;
                        uVar30 = uVar30 - uVar44;
                        *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar30 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar44 & 0x7f);
                        if ((longlong)(uVar36 - uVar44) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar44 = uVar36 + 0x10;
                      } while ((uVar44 & 0xffffffff) < (uVar30 & 0xffffffff));
                    }
                    uVar44 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar30);
                    *puVar10 = uVar44 << (uVar30 & 0x7f);
                    if ((longlong)(uVar36 - uVar30) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar31 = uVar47;
                    if ((char)((char)(uVar44 >> (0x40 - uVar30 & 0x7f)) + cVar61) == '\0') {
                      uVar31 = uVar23;
                    }
                  }
                }
              }
              else if (bVar19) {
                uVar31 = uStack_238;
                if (bVar21) {
                  puVar10 = (ulonglong *)*piVar49;
                  uVar30 = 1;
                  iVar28 = 0;
                  cVar61 = '\0';
                  uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar44 = uVar36 + 0x10;
                  if ((uVar44 & 0xffffffff) == 0) {
                    do {
                      cVar61 = (char)iVar28;
                      if ((uVar44 & 0xffffffff) == 0) break;
                      uVar30 = uVar30 - uVar44;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                      iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar30 & 0x3f))
                               + iVar28;
                      cVar61 = (char)iVar28;
                      *puVar10 = *puVar10 << (uVar44 & 0x7f);
                      if ((longlong)(uVar36 - uVar44) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar44 = uVar36 + 0x10;
                    } while ((uVar44 & 0xffffffff) < (uVar30 & 0xffffffff));
                  }
                  uVar44 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar30);
                  *puVar10 = uVar44 << (uVar30 & 0x7f);
                  if ((longlong)(uVar36 - uVar30) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  uVar31 = uVar23;
                  if ((char)((char)(uVar44 >> (0x40 - uVar30 & 0x7f)) + cVar61) != '\0') {
                    uVar31 = uVar47;
                  }
                }
                uVar31 = uVar31 + 0x10000;
              }
              else if (bVar20) {
                puVar10 = (ulonglong *)*piVar49;
                uVar30 = 1;
                iVar28 = 0;
                cVar61 = '\0';
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar44 = uVar36 + 0x10;
                if ((uVar44 & 0xffffffff) == 0) {
                  do {
                    cVar61 = (char)iVar28;
                    if ((uVar44 & 0xffffffff) == 0) break;
                    uVar30 = uVar30 - uVar44;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                    iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar30 & 0x3f)) +
                             iVar28;
                    cVar61 = (char)iVar28;
                    *puVar10 = *puVar10 << (uVar44 & 0x7f);
                    if ((longlong)(uVar36 - uVar44) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar44 = uVar36 + 0x10;
                  } while ((uVar44 & 0xffffffff) < (uVar30 & 0xffffffff));
                }
                uVar44 = *puVar10;
                *(int *)(puVar10 + 1) = (int)(uVar36 - uVar30);
                *puVar10 = uVar44 << (uVar30 & 0x7f);
                if ((longlong)(uVar36 - uVar30) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                if ((char)((char)(uVar44 >> (0x40 - uVar30 & 0x7f)) + cVar61) == '\0') {
                  uVar31 = uVar55 + 0x10000;
                }
                else {
                  uVar31 = uStack_1e8 + 0x10000;
                }
              }
              else {
                uVar31 = uStack_230 + 0x10000;
              }
              uStack_250 = 0;
              uStack_214 = ((((U64)(uStack_214)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar31)) & ((U64)0xFFFF)) << 16));
              uStack_244 = ((((U64)(uStack_244)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar31 >> 0x10))) & ((U64)0xFFFF)) << 0));
              sVar29 = ((((U64)(uStack_214) >> 16) & 0xFFFF) + (short)uVar62 + sVar29 & (ushort)uStack_188) - sVar29;
              puStack_170 = (uint *)((uStack_168 + uStack_18c) * 4 + iStack_1b8);
              uVar26 = ((short)(uVar62 >> 0x10) + (((U64)(uStack_244) >> 0) & 0xFFFF) + (short)uVar39 &
                       (ushort)uStack_19c) - (short)uVar39;
              uStack_244 = CONCAT22(uVar26,sVar29);
              uVar37 = uStack_244;
              *puStack_170 = uStack_244;
              uStack_214 = uVar31;
              if ((uStack_198 & 1) != 0) {
                if (piVar49[0x15d] == 0) {
                  uVar31 = fn_830C6D68(piVar49,piVar49[0x54]);
                  uStack_250 = (uVar31 & 0x7fff0000) << 1 | uVar31 & 0xffff;
                }
                else {
                  uStack_250 = fn_830C7288();
                  if (*(int *)(*piVar49 + 0x14) != 0) {
                    return 1;
                  }
                }
              }
              uVar31 = uStack_250;
              param_2 = piStack0000001c;
              iVar28 = piVar49[0x156];
              uVar54 = 0;
              uStack_254 = 0;
              uVar47 = 0;
              if ((uVar26 & 1) == 0) {
                stack_pair_260.first = uVar37;
                uVar54 = 1;
                uStack_270 = (((int)uVar37 >> 8 & 0xfffffe00U) * piVar49[0x16c] & 0xfffe0000) +
                             iVar28 * -0x20000 + 0x10000 |
                             (int)sVar29 * piVar49[0x16c] >> 8 & 0xffffU;
                uStack_254 = 1;
              }
              else {
                uStack_270 = uVar37;
                uVar36 = (longlong)sVar29 + 0x100;
                iVar52 = iVar28 * 2 + (int)(short)uVar26 + -1 >> 1;
                uVar37 = iVar52 + 0x40;
                if (((uVar36 & 0xffffffff) >> 2 | (ulonglong)uVar37) < 0x80) {
                  uVar47 = 1;
                  stack_pair_260.first = CONCAT22(*(undefined2 *)(uVar37 * 2 + piVar49[0x172]),
                                        *(undefined2 *)
                                         ((int)((uVar36 & 0xffffffff) << 1) + piVar49[0x173]));
                }
                else {
                  if ((uVar36 & 0xffffffff) < 0x200) {
                    uVar55 = (uint)*(short *)((int)((uVar36 & 0xffffffff) << 1) + piVar49[0x173]);
                  }
                  else {
                    uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                    uVar47 = (int)sVar29 + (uint)uVar26;
                    uVar55 = (int)sVar29 - (uVar26 - 1) ^ uVar47;
                    uVar55 = uVar26 - 1 & ~((int)(uVar55 | uVar47) >> 0x1f) |
                             (int)sVar29 & (int)uVar55 >> 0x1f | (int)uVar47 >> 0x1f & -(uint)uVar26
                    ;
                  }
                  if (uVar37 < 0x80) {
                    uVar47 = 1;
                    stack_pair_260.first = (int)*(short *)(uVar37 * 2 + piVar49[0x172]) << 0x10 |
                                 uVar55 & 0xffff;
                  }
                  else {
                    uVar26 = *(ushort *)(piVar49 + 0x10);
                    uVar39 = iVar52 * 2;
                    uVar47 = 1;
                    uVar40 = uVar26 - 2;
                    uVar37 = uVar39 + uVar26;
                    uVar23 = uVar39 - uVar40 ^ uVar37;
                    stack_pair_260.first = (uVar39 & (int)uVar23 >> 0x1f |
                                  uVar40 & ~((int)(uVar23 | uVar37) >> 0x1f) |
                                 (int)uVar37 >> 0x1f & -(uint)uVar26) << 0x10 | uVar55 & 0xffff;
                  }
                }
              }
              stack_pair_260.second = puVar50[1];
              sVar29 = (short)stack_pair_260.second;
              if ((stack_pair_260.second & 0x10000) == 0) {
                uVar54 = uVar54 + 1;
                uStack_26c = (((int)stack_pair_260.second >> 8 & 0xfffffe00U) * piVar49[0x16c] & 0xfffe0000) +
                             iVar28 * -0x20000 + 0x10000 |
                             (int)sVar29 * piVar49[0x16c] >> 8 & 0xffffU;
                uStack_254 = uVar54;
              }
              else {
                uVar36 = (longlong)sVar29 + 0x100;
                iVar52 = iVar28 * 2 + ((int)stack_pair_260.second >> 0x10) + -1 >> 1;
                uVar37 = iVar52 + 0x40;
                uStack_26c = stack_pair_260.second;
                if (((uVar36 & 0xffffffff) >> 2 | (ulonglong)uVar37) < 0x80) {
                  uVar47 = uVar47 + 1;
                  stack_pair_260.second = CONCAT22(*(undefined2 *)(uVar37 * 2 + piVar49[0x172]),
                                        *(undefined2 *)
                                         (piVar49[0x173] + (int)((uVar36 & 0xffffffff) << 1)));
                }
                else {
                  if ((uVar36 & 0xffffffff) < 0x200) {
                    uVar55 = (uint)*(short *)(piVar49[0x173] + (int)((uVar36 & 0xffffffff) << 1));
                  }
                  else {
                    uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                    uVar55 = (int)sVar29 + (uint)uVar26;
                    uVar23 = (int)sVar29 - (uVar26 - 1) ^ uVar55;
                    uVar55 = (int)uVar55 >> 0x1f & -(uint)uVar26 |
                             ~((int)(uVar23 | uVar55) >> 0x1f) & uVar26 - 1 |
                             (int)uVar23 >> 0x1f & (int)sVar29;
                  }
                  if (uVar37 < 0x80) {
                    uVar47 = uVar47 + 1;
                    stack_pair_260.second = (int)*(short *)(uVar37 * 2 + piVar49[0x172]) << 0x10 |
                                 uVar55 & 0xffff;
                  }
                  else {
                    uVar26 = *(ushort *)(piVar49 + 0x10);
                    uVar39 = iVar52 * 2;
                    uVar47 = uVar47 + 1;
                    uVar40 = uVar26 - 2;
                    uVar37 = uVar39 + uVar26;
                    uVar23 = uVar39 - uVar40 ^ uVar37;
                    stack_pair_260.second = ((int)uVar37 >> 0x1f & -(uint)uVar26 |
                                  ~((int)(uVar23 | uVar37) >> 0x1f) & uVar40 |
                                 (int)uVar23 >> 0x1f & uVar39) << 0x10 | uVar55 & 0xffff;
                  }
                }
              }
              uStack_258 = *puVar50;
              sVar29 = (short)uStack_258;
              if ((uStack_258 & 0x10000) == 0) {
                uStack_254 = uVar54 + 1;
                uStack_268 = (((int)uStack_258 >> 8 & 0xfffffe00U) * piVar49[0x16c] & 0xfffe0000) +
                             iVar28 * -0x20000 + 0x10000 |
                             (int)sVar29 * piVar49[0x16c] >> 8 & 0xffffU;
              }
              else {
                uVar36 = (longlong)sVar29 + 0x100;
                iVar28 = iVar28 * 2 + ((int)uStack_258 >> 0x10) + -1 >> 1;
                uVar37 = iVar28 + 0x40;
                uStack_268 = uStack_258;
                if (((uVar36 & 0xffffffff) >> 2 | (ulonglong)uVar37) < 0x80) {
                  uVar47 = uVar47 + 1;
                  uStack_258 = CONCAT22(*(undefined2 *)(uVar37 * 2 + piVar49[0x172]),
                                        *(undefined2 *)
                                         ((int)((uVar36 & 0xffffffff) << 1) + piVar49[0x173]));
                }
                else {
                  if ((uVar36 & 0xffffffff) < 0x200) {
                    uVar54 = (uint)*(short *)((int)((uVar36 & 0xffffffff) << 1) + piVar49[0x173]);
                  }
                  else {
                    uVar26 = *(ushort *)((int)piVar49 + 0x3e);
                    uVar54 = (int)sVar29 + (uint)uVar26;
                    uVar55 = (int)sVar29 - (uVar26 - 1) ^ uVar54;
                    uVar54 = (int)uVar54 >> 0x1f & -(uint)uVar26 |
                             ~((int)(uVar55 | uVar54) >> 0x1f) & uVar26 - 1 |
                             (int)uVar55 >> 0x1f & (int)sVar29;
                  }
                  if (uVar37 < 0x80) {
                    uVar47 = uVar47 + 1;
                    uStack_258 = (int)*(short *)(uVar37 * 2 + piVar49[0x172]) << 0x10 |
                                 uVar54 & 0xffff;
                  }
                  else {
                    uVar26 = *(ushort *)(piVar49 + 0x10);
                    uVar23 = iVar28 * 2;
                    uVar47 = uVar47 + 1;
                    uVar39 = uVar26 - 2;
                    uVar37 = uVar23 + uVar26;
                    uVar55 = uVar23 - uVar39 ^ uVar37;
                    uStack_258 = ((int)uVar37 >> 0x1f & -(uint)uVar26 |
                                  ~((int)(uVar55 | uVar37) >> 0x1f) & uVar39 |
                                 (int)uVar55 >> 0x1f & uVar23) << 0x10 | uVar54 & 0xffff;
                  }
                }
              }
              if ((piVar49[0x15c] == 2) || (bVar19 = false, piVar49[0x15c] == 3)) {
                bVar19 = true;
              }
              bVar21 = false;
              bVar20 = false;
              uVar37 = (int)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_258) >> 16) & 0xFFFF) ^
                       (int)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF);
              uVar26 = (ushort)((uint)((int)(short)(((U64)(uStack_258) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF))
                               >> 0x10) ^
                       (ushort)((uint)((int)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF))
                               >> 0x10);
              uVar65 = (ushort)((uint)((int)(short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF))
                               >> 0x10);
              uVar24 = (ushort)((uint)((int)(short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_258) >> 0) & 0xFFFF))
                               >> 0x10) ^ uVar65;
              uVar65 = (ushort)((uint)((int)(short)(((U64)(uStack_258) >> 0) & 0xFFFF) - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF))
                               >> 0x10) ^ uVar65;
              uVar15 = (ushort)((uint)((int)(short)(((U64)(uStack_26c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF))
                               >> 0x10);
              uVar66 = (ushort)((uint)((int)(short)(((U64)(uStack_26c) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_268) >> 16) & 0xFFFF))
                               >> 0x10) ^ uVar15;
              uVar15 = (ushort)((uint)((int)(short)(((U64)(uStack_268) >> 16) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF))
                               >> 0x10) ^ uVar15;
              uStack_1b4 = (int)uVar37 >> 0x1f & (int)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF);
              uVar17 = (ushort)((uint)((int)(short)(((U64)(uStack_26c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF))
                               >> 0x10);
              uVar16 = (ushort)((uint)((int)(short)(((U64)(uStack_26c) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF))
                               >> 0x10) ^ uVar17;
              uVar17 = (ushort)((uint)((int)(short)(((U64)(uStack_268) >> 0) & 0xFFFF) - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF))
                               >> 0x10) ^ uVar17;
              uVar24 = (short)uVar65 >> 0xf & (((U64)(stack_pair_260.first) >> 0) & 0xFFFF) |
                       (short)uVar24 >> 0xf & (((U64)(stack_pair_260.second) >> 0) & 0xFFFF) |
                       ~((short)(uVar24 | uVar65) >> 0xf) & (((U64)(uStack_258) >> 0) & 0xFFFF);
              uVar26 = (short)uVar26 >> 0xf & (((U64)(stack_pair_260.first) >> 16) & 0xFFFF) | (ushort)uStack_1b4 |
                       ~((short)((ushort)(uVar37 >> 0x10) | uVar26) >> 0xf) & (((U64)(uStack_258) >> 16) & 0xFFFF);
              uVar66 = (short)uVar15 >> 0xf & (((U64)(uStack_270) >> 16) & 0xFFFF) |
                       (short)uVar66 >> 0xf & (((U64)(uStack_26c) >> 16) & 0xFFFF) |
                       ~((short)(uVar66 | uVar15) >> 0xf) & (((U64)(uStack_268) >> 16) & 0xFFFF);
              uVar65 = (short)uVar17 >> 0xf & (((U64)(uStack_270) >> 0) & 0xFFFF) |
                       (short)uVar16 >> 0xf & (((U64)(uStack_26c) >> 0) & 0xFFFF) |
                       ~((short)(uVar16 | uVar17) >> 0xf) & (((U64)(uStack_268) >> 0) & 0xFFFF);
              uStack_160 = CONCAT22(uVar24,uVar26);
              uStack_17c = CONCAT22(uVar65,uVar66);
              uVar54 = (int)(short)uVar24 - (int)(short)(((U64)(stack_pair_260.first) >> 0) & 0xFFFF);
              uVar36 = (longlong)(short)uVar26 - (longlong)(short)(((U64)(stack_pair_260.first) >> 16) & 0xFFFF);
              uVar37 = (int)uVar54 >> 0x1f;
              if (bVar19) {
                uVar23 = (uint)((uVar36 & 0xffffffff) << 1);
                uVar55 = (int)uVar23 >> 0x1f;
                if ((0x20 < (int)(((uVar23 ^ uVar55) - uVar55) + ((uVar54 ^ uVar37) - uVar37))) ||
                   (uVar55 = (uint)(((longlong)(short)uVar26 - (longlong)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) &
                                    0xffffffffU) << 1), uVar37 = (int)uVar55 >> 0x1f,
                   uVar54 = (int)(short)uVar24 - (int)(short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) >> 0x1f,
                   0x20 < (int)(((uVar55 ^ uVar37) - uVar37) +
                               (((int)(short)uVar24 - (int)(short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) ^ uVar54) -
                               uVar54)))) {
                  bVar21 = true;
                }
                uVar55 = (uint)(((longlong)(short)uVar66 - (longlong)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) &
                                0xffffffffU) << 1);
                uVar37 = (int)uVar55 >> 0x1f;
                uVar54 = (int)(short)uVar65 - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                if ((int)(((uVar55 ^ uVar37) - uVar37) +
                         (((int)(short)uVar65 - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) ^ uVar54) - uVar54)) <
                    0x21) {
                  uVar54 = (int)(short)uVar65 - (int)(short)(((U64)(uStack_26c) >> 0) & 0xFFFF);
                  uVar37 = (uint)(((longlong)(short)uVar66 - (longlong)(short)(((U64)(uStack_26c) >> 16) & 0xFFFF) &
                                  0xffffffffU) << 1);
                  goto LAB_830d4b5c;
                }
LAB_830d4b80:
                bVar20 = true;
              }
              else {
                uVar23 = (uint)uVar36;
                uVar55 = (int)uVar23 >> 0x1f;
                if ((0x20 < (int)((((int)uVar54 >> 1 ^ uVar37) - uVar37) +
                                 ((uVar23 ^ uVar55) - uVar55))) ||
                   (uVar37 = (int)(short)uVar24 - (int)(short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) >> 0x1f,
                   uVar54 = (int)(short)uVar26 - (int)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) >> 0x1f,
                   0x20 < (int)((((int)(short)uVar24 - (int)(short)(((U64)(stack_pair_260.second) >> 0) & 0xFFFF) >> 1 ^ uVar37) -
                                uVar37) +
                               (((int)(short)uVar26 - (int)(short)(((U64)(stack_pair_260.second) >> 16) & 0xFFFF) ^ uVar54) -
                               uVar54)))) {
                  bVar21 = true;
                }
                uVar37 = (int)(short)uVar65 - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 0x1f;
                uVar54 = (int)(short)uVar66 - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) >> 0x1f;
                if (0x20 < (int)((((int)(short)uVar65 - (int)(short)(((U64)(uStack_270) >> 0) & 0xFFFF) >> 1 ^ uVar37)
                                 - uVar37) +
                                (((int)(short)uVar66 - (int)(short)(((U64)(uStack_270) >> 16) & 0xFFFF) ^ uVar54) -
                                uVar54))) goto LAB_830d4b80;
                uVar54 = (int)(short)uVar66 - (int)(short)(((U64)(uStack_26c) >> 16) & 0xFFFF);
                uVar37 = (int)(short)uVar65 - (int)(short)(((U64)(uStack_26c) >> 0) & 0xFFFF) >> 1;
LAB_830d4b5c:
                if (0x20 < (int)(((uVar37 ^ (int)uVar37 >> 0x1f) - ((int)uVar37 >> 0x1f)) +
                                ((uVar54 ^ (int)uVar54 >> 0x1f) - ((int)uVar54 >> 0x1f))))
                goto LAB_830d4b80;
              }
              if (piStack0000001c[0x15d] == 0) {
LAB_830d4ba8:
                if (piStack0000001c[0x15e] != 0) {
LAB_830d4bb4:
                  bVar18 = true;
                }
              }
              else {
                if (uStack_254 <= uVar47) goto LAB_830d4bb4;
                if (piStack0000001c[0x15d] == 0) goto LAB_830d4ba8;
              }
              if ((uStack_250 & 0x10000) == 0) {
                if (bVar18) {
                  uVar37 = uStack_17c;
                  if (bVar20) {
                    puVar10 = (ulonglong *)*piStack0000001c;
                    uVar62 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar44 = uVar36 + 0x10;
                    if ((uVar44 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar44 & 0xffffffff) == 0) break;
                        uVar62 = uVar62 - uVar44;
                        *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar62 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar44 & 0x7f);
                        if ((longlong)(uVar36 - uVar44) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar44 = uVar36 + 0x10;
                      } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                    }
                    uVar44 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                    *puVar10 = uVar44 << (uVar62 & 0x7f);
                    if ((longlong)(uVar36 - uVar62) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = uStack_26c;
                    if ((char)((char)(uVar44 >> (0x40 - uVar62 & 0x7f)) + cVar61) == '\0') {
                      uVar37 = uStack_270;
                    }
                  }
                }
                else {
                  uVar37 = uStack_160;
                  if (bVar21) {
                    puVar10 = (ulonglong *)*piStack0000001c;
                    uVar62 = 1;
                    iVar28 = 0;
                    cVar61 = '\0';
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar44 = uVar36 + 0x10;
                    if ((uVar44 & 0xffffffff) == 0) {
                      do {
                        cVar61 = (char)iVar28;
                        if ((uVar44 & 0xffffffff) == 0) break;
                        uVar62 = uVar62 - uVar44;
                        *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                        iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar62 & 0x3f)
                                 ) + iVar28;
                        cVar61 = (char)iVar28;
                        *puVar10 = *puVar10 << (uVar44 & 0x7f);
                        if ((longlong)(uVar36 - uVar44) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar44 = uVar36 + 0x10;
                      } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                    }
                    uVar44 = *puVar10;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                    *puVar10 = uVar44 << (uVar62 & 0x7f);
                    if ((longlong)(uVar36 - uVar62) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar37 = stack_pair_260.second;
                    if ((char)((char)(uVar44 >> (0x40 - uVar62 & 0x7f)) + cVar61) == '\0') {
                      uVar37 = stack_pair_260.first;
                    }
                  }
                }
              }
              else if (bVar18) {
                if (bVar21) {
                  puVar10 = (ulonglong *)*piStack0000001c;
                  uVar62 = 1;
                  iVar28 = 0;
                  cVar61 = '\0';
                  uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar44 = uVar36 + 0x10;
                  if ((uVar44 & 0xffffffff) == 0) {
                    do {
                      cVar61 = (char)iVar28;
                      if ((uVar44 & 0xffffffff) == 0) break;
                      uVar62 = uVar62 - uVar44;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                      iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar62 & 0x3f))
                               + iVar28;
                      cVar61 = (char)iVar28;
                      *puVar10 = *puVar10 << (uVar44 & 0x7f);
                      if ((longlong)(uVar36 - uVar44) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar44 = uVar36 + 0x10;
                    } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                  }
                  uVar44 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                  *puVar10 = uVar44 << (uVar62 & 0x7f);
                  if ((longlong)(uVar36 - uVar62) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  if ((char)((char)(uVar44 >> (0x40 - uVar62 & 0x7f)) + cVar61) == '\0') {
                    uVar37 = stack_pair_260.first + 0x10000;
                  }
                  else {
                    uVar37 = stack_pair_260.second + 0x10000;
                  }
                }
                else {
                  uVar37 = uStack_160 + 0x10000;
                }
              }
              else if (bVar20) {
                puVar10 = (ulonglong *)*piStack0000001c;
                uVar62 = 1;
                iVar28 = 0;
                cVar61 = '\0';
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar44 = uVar36 + 0x10;
                if ((uVar44 & 0xffffffff) == 0) {
                  do {
                    cVar61 = (char)iVar28;
                    if ((uVar44 & 0xffffffff) == 0) break;
                    uVar62 = uVar62 - uVar44;
                    *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                    iVar28 = ((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) << ((uint)uVar62 & 0x3f)) +
                             iVar28;
                    cVar61 = (char)iVar28;
                    *puVar10 = *puVar10 << (uVar44 & 0x7f);
                    if ((longlong)(uVar36 - uVar44) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                    uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar44 = uVar36 + 0x10;
                  } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                }
                uVar44 = *puVar10;
                *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                *puVar10 = uVar44 << (uVar62 & 0x7f);
                if ((longlong)(uVar36 - uVar62) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                if ((char)((char)(uVar44 >> (0x40 - uVar62 & 0x7f)) + cVar61) == '\0') {
                  uVar37 = uStack_270 + 0x10000;
                }
                else {
                  uVar37 = uStack_26c + 0x10000;
                }
              }
              else {
                uVar37 = uStack_17c + 0x10000;
              }
              uStack_240 = ((((U64)(uStack_240)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(uVar37 >> 0x10))) & ((U64)0xFFFF)) << 0));
              uStack_240 = ((((U64)(uStack_240)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)uVar37)) & ((U64)0xFFFF)) << 16));
              *(ushort *)((int)puStack_170 + 6) =
                   ((((U64)(uStack_240) >> 16) & 0xFFFF) + (short)uVar31 + (short)uStack_180 & (ushort)uStack_188) -
                   (short)uStack_180;
              *(ushort *)(puStack_170 + 1) =
                   ((short)(uVar31 >> 0x10) + (((U64)(uStack_240) >> 0) & 0xFFFF) + (short)uStack_1f0 &
                   (ushort)uStack_19c) - (short)uStack_1f0;
              puVar53 = puStack_248;
              puVar50 = puStack00000024;
              uStack_240 = uVar37;
            }
            if (uStack_ec == 0) {
              iVar28 = 0;
            }
            else {
              piVar49 = (int *)param_2[0x136];
              puVar10 = (ulonglong *)*param_2;
              if (piVar49 == (int *)0x0) {
                iVar28 = 0;
                *(undefined4 *)((int)puVar10 + 0x14) = 3;
              }
              else {
                iVar52 = *piVar49;
                sVar29 = *(short *)((int)((*puVar10 >>
                                           (0x40 - (ulonglong)*(byte *)(piVar49 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar52);
                uVar36 = (ulonglong)sVar29;
                if (sVar29 < 0) {
                  fn_82C4E470(puVar10);
                  do {
                    uVar44 = *puVar10;
                    fn_82C4E470(puVar10,1);
                    sVar29 = *(short *)((int)(((uVar36 - ((longlong)uVar44 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar52);
                    uVar36 = (ulonglong)sVar29;
                    iVar28 = (int)sVar29;
                  } while (sVar29 < 0);
                }
                else {
                  iVar28 = *(int *)(puVar10 + 1);
                  iVar52 = (int)(uVar36 & 0xf);
                  *puVar10 = *puVar10 << (uVar36 & 0xf);
                  *(int *)(puVar10 + 1) = iVar28 - iVar52;
                  if (iVar28 < iVar52) {
                    do {
                      pbVar14 = *(byte **)((int)puVar10 + 0xc);
                      if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                        bVar1 = *pbVar14;
                        bVar2 = pbVar14[1];
                        bVar3 = pbVar14[2];
                        bVar4 = pbVar14[4];
                        bVar5 = pbVar14[3];
                        bVar6 = pbVar14[5];
                        iVar28 = *(int *)(puVar10 + 1);
                        *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                        *(int *)(puVar10 + 1) = iVar28 + 0x30;
                        *puVar10 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 +
                                      (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                    (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                                   ((longlong)-iVar28 & 0x7fU)) + *puVar10;
                        goto LAB_830d50d4;
                      }
                      iVar28 = fn_82C4E3B0(puVar10);
                    } while (iVar28 == 1);
                    iVar28 = (int)sVar29 >> 4;
                  }
                  else {
LAB_830d50d4:
                    iVar28 = (int)sVar29 >> 4;
                  }
                }
              }
              iVar28 = iVar28 + 1;
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
            }
            cVar61 = *(char *)(param_2[0x13c] + iVar28);
            *(char *)((int)puVar53 + 5) = cVar61;
            if ((*(char *)((int)param_2 + 0x1b) != '\0') && (cVar61 != '\0')) {
              if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                puVar10 = (ulonglong *)*param_2;
                lVar58 = 0;
                uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar44 = uVar36 + 0x10;
                if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                  uVar62 = 3;
                  if ((uVar44 & 0xffffffff) < 3) {
                    do {
                      if ((uVar44 & 0xffffffff) == 0) break;
                      uVar62 = uVar62 - uVar44;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                      lVar58 = (ulonglong)
                               (uint)((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) <<
                                     ((uint)uVar62 & 0x3f)) + lVar58;
                      *puVar10 = *puVar10 << (uVar44 & 0x7f);
                      if ((longlong)(uVar36 - uVar44) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar44 = uVar36 + 0x10;
                    } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                  }
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                  lVar58 = (*puVar10 >> (0x40 - uVar62 & 0x7f) & 0xffffffff) + lVar58;
                  *puVar10 = *puVar10 << (uVar62 & 0x7f);
                  if ((longlong)(uVar36 - uVar62) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  if ((int)lVar58 == 7) {
                    puVar10 = (ulonglong *)*param_2;
                    uVar62 = 5;
                    lVar58 = 0;
                    uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                    uVar36 = uVar44 + 0x10;
                    if ((uVar36 & 0xffffffff) < 5) {
                      do {
                        if ((uVar36 & 0xffffffff) == 0) break;
                        uVar62 = uVar62 - uVar36;
                        *(int *)(puVar10 + 1) = (int)(uVar44 - uVar36);
                        lVar58 = (ulonglong)
                                 (uint)((int)(*puVar10 >> (0x40 - uVar36 & 0x7f)) <<
                                       ((uint)uVar62 & 0x3f)) + lVar58;
                        *puVar10 = *puVar10 << (uVar36 & 0x7f);
                        if ((longlong)(uVar44 - uVar36) < 0) {
                          fn_82C4E5E8(puVar10);
                        }
                        uVar44 = (ulonglong)*(uint *)(puVar10 + 1);
                        uVar36 = uVar44 + 0x10;
                      } while ((uVar36 & 0xffffffff) < (uVar62 & 0xffffffff));
                    }
                    *(int *)(puVar10 + 1) = (int)(uVar44 - uVar62);
                    uVar36 = (*puVar10 >> (0x40 - uVar62 & 0x7f) & 0xffffffff) + lVar58;
                    *puVar10 = *puVar10 << (uVar62 & 0x7f);
                    if ((longlong)(uVar44 - uVar62) < 0) {
                      fn_82C4E5E8(puVar10);
                    }
                  }
                  else {
                    uVar36 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar58;
                  }
                  *(char *)(puVar53 + 1) = (char)((uVar36 & 0xffffffff) << 1) + -1;
                }
                else {
                  uVar62 = 1;
                  if ((uVar44 & 0xffffffff) == 0) {
                    do {
                      if ((uVar44 & 0xffffffff) == 0) break;
                      uVar62 = uVar62 - uVar44;
                      *(int *)(puVar10 + 1) = (int)(uVar36 - uVar44);
                      lVar58 = (ulonglong)
                               (uint)((int)(*puVar10 >> (0x40 - uVar44 & 0x7f)) <<
                                     ((uint)uVar62 & 0x3f)) + lVar58;
                      *puVar10 = *puVar10 << (uVar44 & 0x7f);
                      if ((longlong)(uVar36 - uVar44) < 0) {
                        fn_82C4E5E8(puVar10);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar10 + 1);
                      uVar44 = uVar36 + 0x10;
                    } while ((uVar44 & 0xffffffff) < (uVar62 & 0xffffffff));
                  }
                  uVar44 = *puVar10;
                  *(int *)(puVar10 + 1) = (int)(uVar36 - uVar62);
                  *puVar10 = uVar44 << (uVar62 & 0x7f);
                  if ((longlong)(uVar36 - uVar62) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  if (((uVar44 >> (0x40 - uVar62 & 0x7f) & 0xffffffff) + lVar58 & 0xffffffff) == 0)
                  {
                    *(char *)(puVar53 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar53 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                }
              }
              else if ((*puVar53 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
                *(char *)(puVar53 + 1) =
                     *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
              }
              else {
                *(char *)(puVar53 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
              }
              if (*(byte *)(puVar53 + 1) == 0) {
                return 1;
              }
              if (0x3e < *(byte *)(puVar53 + 1)) {
                return 1;
              }
            }
            if ((*(char *)((int)param_2 + 0x1d) != '\0') && (cVar61 != '\0')) {
              piVar49 = (int *)param_2[0x5a];
              puVar10 = (ulonglong *)*param_2;
              if (piVar49 == (int *)0x0) {
                uVar36 = 0;
                *(undefined4 *)((int)puVar10 + 0x14) = 3;
              }
              else {
                iVar28 = *piVar49;
                sVar29 = *(short *)((int)((*puVar10 >>
                                           (0x40 - (ulonglong)*(byte *)(piVar49 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar28);
                uVar36 = (ulonglong)sVar29;
                if (sVar29 < 0) {
                  fn_82C4E470(puVar10);
                  do {
                    uVar44 = *puVar10;
                    fn_82C4E470(puVar10,1);
                    sVar29 = *(short *)((int)(((uVar36 - ((longlong)uVar44 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar28);
                    uVar36 = (ulonglong)sVar29;
                  } while (sVar29 < 0);
                }
                else {
                  iVar28 = *(int *)(puVar10 + 1);
                  iVar52 = (int)(uVar36 & 0xf);
                  *puVar10 = *puVar10 << (uVar36 & 0xf);
                  *(int *)(puVar10 + 1) = iVar28 - iVar52;
                  if (iVar28 < iVar52) {
                    do {
                      pbVar14 = *(byte **)((int)puVar10 + 0xc);
                      if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                        bVar1 = *pbVar14;
                        bVar2 = pbVar14[1];
                        bVar3 = pbVar14[2];
                        bVar4 = pbVar14[4];
                        bVar5 = pbVar14[3];
                        bVar6 = pbVar14[5];
                        iVar28 = *(int *)(puVar10 + 1);
                        *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                        *(int *)(puVar10 + 1) = iVar28 + 0x30;
                        *puVar10 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 +
                                      (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                    (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                                   ((longlong)-iVar28 & 0x7fU)) + *puVar10;
                        goto LAB_830d5528;
                      }
                      iVar28 = fn_82C4E3B0(puVar10);
                    } while (iVar28 == 1);
                    uVar36 = (ulonglong)((int)sVar29 >> 4);
                  }
                  else {
LAB_830d5528:
                    uVar36 = (ulonglong)((int)sVar29 >> 4);
                  }
                }
              }
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              uVar31 = *puVar53;
              iVar28 = (int)((uVar36 & 0xffffffff) << 2);
              uVar37 = (uint)((((~uVar36 & 0xffffffff) >> 0x1f) + (ulonglong)(7 < uVar36) & 1) <<
                             0x1c);
              *puVar53 = uVar37 | uVar31 & 0xefffffff;
              uVar54 = (*(uint *)((int)puStack_12c + iVar28 + -0x58) & 7) << 0x18;
              *puVar53 = uVar54 | uVar37 | uVar31 & 0xe8ffffff;
              *puVar53 = (*(uint *)(iVar28 + (int)puStack_12c) & 3) << 0x14 |
                         uVar54 | uVar37 | uVar31 & 0xe0cfffff;
            }
            uVar31 = *puVar53;
            cVar61 = *(char *)((int)param_2 + 0x1d);
            uVar36 = (ulonglong)*(byte *)((int)puVar53 + 5);
            uVar54 = (uint)*(byte *)((int)param_2 + 0x22);
            uVar37 = uVar31 >> 0x14 & 3;
            if (cVar61 != '\0') {
              uVar54 = uVar31 >> 0x18 & 7;
            }
            puVar51 = puVar53 + 2;
            uVar44 = 0;
            do {
              uVar62 = uVar44;
              if ((uVar36 & 1) == 0) {
                *(undefined1 *)puVar51 = 0;
              }
              else {
                if (((*puVar53 & 0x10000000) != 0) && (cVar61 == '\0')) {
                  piVar49 = (int *)param_2[0x98];
                  puVar10 = (ulonglong *)*param_2;
                  if (piVar49 == (int *)0x0) {
                    iVar52 = 0;
                    *(undefined4 *)((int)puVar10 + 0x14) = 3;
                  }
                  else {
                    iVar28 = *piVar49;
                    sVar29 = *(short *)((int)((*puVar10 >>
                                               (0x40 - (ulonglong)*(byte *)(piVar49 + 2) & 0x7f) &
                                              0xffffffff) << 1) + iVar28);
                    uVar44 = (ulonglong)sVar29;
                    if (sVar29 < 0) {
                      fn_82C4E470(puVar10);
                      do {
                        uVar30 = *puVar10;
                        fn_82C4E470(puVar10,1);
                        sVar29 = *(short *)((int)(((uVar44 - ((longlong)uVar30 >> 0x3f)) + 0x8000 &
                                                  0xffffffff) << 1) + iVar28);
                        uVar44 = (ulonglong)sVar29;
                        iVar52 = (int)sVar29;
                      } while (sVar29 < 0);
                    }
                    else {
                      iVar28 = *(int *)(puVar10 + 1);
                      iVar52 = (int)(uVar44 & 0xf);
                      *puVar10 = *puVar10 << (uVar44 & 0xf);
                      *(int *)(puVar10 + 1) = iVar28 - iVar52;
                      if (iVar28 < iVar52) {
                        do {
                          pbVar14 = *(byte **)((int)puVar10 + 0xc);
                          if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                            bVar1 = *pbVar14;
                            bVar2 = pbVar14[1];
                            bVar3 = pbVar14[2];
                            bVar4 = pbVar14[4];
                            bVar5 = pbVar14[3];
                            bVar6 = pbVar14[5];
                            iVar28 = *(int *)(puVar10 + 1);
                            *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                            *(int *)(puVar10 + 1) = iVar28 + 0x30;
                            *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                                          (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                        (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                                       ((longlong)-iVar28 & 0x7fU)) + *puVar10;
                            goto LAB_830d572c;
                          }
                          iVar28 = fn_82C4E3B0(puVar10);
                        } while (iVar28 == 1);
                        iVar52 = (int)sVar29 >> 4;
                      }
                      else {
LAB_830d572c:
                        iVar52 = (int)sVar29 >> 4;
                      }
                    }
                  }
                  if (*(int *)(*param_2 + 0x14) != 0) {
                    return 1;
                  }
                  uVar54 = (uint)*(byte *)((int)param_2 + iVar52 + 0x2ac);
                  uVar37 = (uint)*(byte *)((int)param_2 + iVar52 + 0x2b4);
                }
                *(char *)puVar51 = (char)uVar54;
                if (uVar54 == 0) {
                  uVar47 = puVar50[5];
                  uVar55 = fn_830D8E88(param_2,param_2[0x65],*(undefined1 *)(param_2 + 0x28),
                                           uVar47);
                  if (uVar55 == 0xffffffff) {
                    *(undefined1 *)puVar50[6] = 0;
                    return 0xffffffffffffffff;
                  }
                  uVar62 = uVar62 | 1;
                  cVar61 = '\0';
                  puVar50[5] = (uVar55 & 0x7f) * 2 + uVar47;
                  *(char *)puVar50[6] = (char)uVar55;
                  puVar50[6] = puVar50[6] + 1;
                }
                else {
                  if (uVar54 == 4) {
                    puVar10 = (ulonglong *)*param_2;
                    iVar28 = *(int *)param_2[0x99];
                    sVar29 = *(short *)((int)((*puVar10 >> 0x3a) << 1) + iVar28);
                    uVar44 = (ulonglong)sVar29;
                    if (sVar29 < 0) {
                      fn_82C4E470(puVar10,6);
                      do {
                        uVar30 = *puVar10;
                        fn_82C4E470(puVar10,1);
                        sVar29 = *(short *)((int)(((uVar44 - ((longlong)uVar30 >> 0x3f)) + 0x8000 &
                                                  0xffffffff) << 1) + iVar28);
                        uVar44 = (ulonglong)sVar29;
                        iVar52 = (int)sVar29;
                      } while (sVar29 < 0);
                    }
                    else {
                      iVar28 = *(int *)(puVar10 + 1);
                      iVar52 = (int)(uVar44 & 0xf);
                      *puVar10 = *puVar10 << (uVar44 & 0xf);
                      *(int *)(puVar10 + 1) = iVar28 - iVar52;
                      if (iVar28 < iVar52) {
                        do {
                          pbVar14 = *(byte **)((int)puVar10 + 0xc);
                          if (pbVar14 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                            bVar1 = *pbVar14;
                            bVar2 = pbVar14[1];
                            bVar3 = pbVar14[2];
                            bVar4 = pbVar14[4];
                            bVar5 = pbVar14[3];
                            bVar6 = pbVar14[5];
                            iVar28 = *(int *)(puVar10 + 1);
                            *(byte **)((int)puVar10 + 0xc) = pbVar14 + 6;
                            *(int *)(puVar10 + 1) = iVar28 + 0x30;
                            *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 +
                                          (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                        (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                                       ((longlong)-iVar28 & 0x7fU)) + *puVar10;
                            goto LAB_830d58cc;
                          }
                          iVar28 = fn_82C4E3B0(puVar10);
                        } while (iVar28 == 1);
                        iVar52 = (int)sVar29 >> 4;
                      }
                      else {
LAB_830d58cc:
                        iVar52 = (int)sVar29 >> 4;
                      }
                    }
                    uVar47 = iVar52 + 1;
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                  }
                  else {
                    uVar47 = uVar37;
                    if ((cVar61 == '\0') && ((*puVar53 & 0x10000000) == 0)) {
                      plVar12 = (longlong *)*param_2;
                      lVar58 = *plVar12;
                      uVar47 = *(uint *)(plVar12 + 1);
                      *plVar12 = lVar58 << 1;
                      *(int *)(plVar12 + 1) = (int)((ulonglong)uVar47 - 1);
                      if ((longlong)((ulonglong)uVar47 - 1) < 0) {
                        fn_82C4E5E8();
                      }
                      if (lVar58 < 0) {
                        plVar12 = (longlong *)*param_2;
                        lVar58 = *plVar12;
                        uVar47 = *(uint *)(plVar12 + 1);
                        *plVar12 = lVar58 << 1;
                        *(int *)(plVar12 + 1) = (int)((ulonglong)uVar47 - 1);
                        if ((longlong)((ulonglong)uVar47 - 1) < 0) {
                          fn_82C4E5E8();
                        }
                        uVar47 = 1 - (int)(lVar58 >> 0x3f);
                      }
                      else {
                        uVar47 = 3;
                      }
                    }
                  }
                  bVar1 = *(byte *)((int)param_2 + uVar47 + 0x140);
                  uVar62 = (longlong)(int)(uVar54 << 4 | uVar47) | uVar62;
                  if (bVar1 == 0) {
                    return 1;
                  }
                  uVar44 = (ulonglong)puVar50[5];
                  iVar28 = param_2[0x65];
                  iVar52 = 0;
                  uVar47 = puVar50[6];
                  uVar8 = *(undefined1 *)((int)param_2 + uVar54 + 0xa0);
                  if (bVar1 != 0) {
                    do {
                      uVar30 = fn_830D8E88(param_2,iVar28,uVar8,uVar44);
                      if ((int)uVar30 == -1) {
                        *(undefined1 *)(iVar52 + uVar47) = 0;
                      }
                      else {
                        *(char *)(iVar52 + uVar47) = (char)uVar30;
                        uVar44 = (uVar30 & 0x7f) * 2 + uVar44;
                      }
                      iVar52 = iVar52 + 1;
                    } while (iVar52 < (int)(uint)bVar1);
                  }
                  if ((uint)uVar44 == 0xffffffff) {
                    return 1;
                  }
                  puVar50[5] = (uint)uVar44;
                  cVar61 = '\0';
                  puVar50[6] = puVar50[6] + (uint)bVar1;
                }
              }
              puVar51 = (uint *)((int)puVar51 + 1);
              uVar36 = uVar36 >> 1;
              uVar44 = uVar62 << 8;
            } while ((undefined1 *)((-8 - (int)puVar53) + (int)puVar51) < (undefined1 *)0x6);
            uVar37 = (*puVar53 >> 8 & 7) - (uint)*(byte *)(param_2 + 0x14b);
            *(ulonglong *)(puVar50[1] * 8 + param_2[0x148]) =
                 ((ulonglong)*(byte *)(puVar53 + 1) << 8 |
                 ((ulonglong)((uVar31 & 0x700) == 0) << 1 |
                 (longlong)((int)(-uVar37 ^ uVar37) >> 0x1f) + 1U & 3) << 6 |
                 (ulonglong)*(byte *)((int)puVar53 + 5)) << 0x30 | uVar62 & 0xffffffffffffff;
          }
          uVar56 = 0;
          if (0 < *(int *)(iStack00000014 + 0x39f4)) {
            if (param_2[0x156] == 0) {
              lVar58 = 0;
            }
            else {
              lVar58 = (longlong)(int)(uint)*(ushort *)(param_2 + 0xd) *
                       (longlong)(int)(uint)*(ushort *)((int)param_2 + 0x32);
            }
            uVar31 = *puStack00000024;
            uVar36 = (ulonglong)*(ushort *)((int)param_2 + 0x32) + (ulonglong)uVar31;
            if (param_2[0x5e] == 0) {
              return 1;
            }
            puVar48 = (undefined4 *)(uVar31 * 4 + iStack_e8);
            iVar28 = (int)(((ulonglong)uVar31 + lVar58 & 0xffffffff) << 2);
            puVar43 = (undefined4 *)((int)((uVar36 & 0xffffffff) << 2) + iStack_e8);
            iVar52 = (int)((uVar36 + lVar58 & 0xffffffff) << 2);
            *(undefined4 *)(iVar28 + param_2[0x5e]) = *puVar48;
            *(undefined4 *)(iVar28 + param_2[0x5e] + 4) = puVar48[1];
            *(undefined4 *)(iVar52 + param_2[0x5e]) = *puVar43;
            *(undefined4 *)(iVar52 + param_2[0x5e] + 4) = puVar43[1];
          }
          puVar50 = puStack_248 + 6;
          uStack_220 = uStack_220 + 1;
          *puStack00000024 = *puStack00000024 + 2;
          param_5 = (ulonglong)uStack_1fc;
          puStack00000024[1] = puStack00000024[1] + 1;
          puVar53 = puStack_248 + 6;
          *(short *)((int)puStack00000024 + 0x12) = *(short *)((int)puStack00000024 + 0x12) + 2;
          param_4 = iStack0000002c;
          param_6 = uStack0000003c;
          param_3 = puStack00000024;
          param_1 = iStack00000014;
          uVar37 = uStack_e0;
          uVar31 = uStack_124;
          puStack_248 = puVar50;
        } while (uStack_220 < uStack_124);
      }
      param_5 = param_5 + 1;
      uStack_1fc = (uint)param_5;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      *param_3 = uVar31 * 2 + *param_3;
    } while ((param_5 & 0xffffffff) < (ulonglong)param_6);
  }
  puVar53 = (uint *)(param_2 + (param_4 + 0x5d) * 4);
  *puVar53 = param_3[5];
  puVar53[1] = param_3[6];
  puVar53[2] = param_3[7];
  puVar53[3] = param_3[8];
  if (uVar37 == param_6) {
    param_2[0x158] = param_3[8] - iStack_d8 >> 2;
    *(undefined4 *)param_3[8] = 0xffffffff;
    **(undefined8 **)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x1a);
    *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
    *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
    *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
    *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
    *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
    *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
    *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
    *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
    *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
    *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
    *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
  }
  return uVar56;
}

