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
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C75A60();
extern int fn_82CA5860();
extern int fn_82CA5C50();
extern int fn_830D8E88();
extern int fn_830D9228();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int lbl_820FC61C;
extern unsigned int lbl_820FDD78;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000003c;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


undefined8
fn_830C1B68(int param_1,int *param_2,uint *param_3,int param_4,ulonglong param_5,uint param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  undefined1 *puVar17;
  uint uVar18;
  byte *pbVar19;
  short *psVar20;
  uint uVar21;
  bool bVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  int iVar36;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  longlong lVar41;
  short sVar42;
  ulonglong uVar43;
  longlong lVar44;
  ulonglong uVar45;
  short *psVar46;
  short *psVar47;
  ulonglong uVar48;
  longlong lVar49;
  ulonglong uVar50;
  uint uVar54;
  short sVar57;
  ulonglong uVar51;
  undefined4 *puVar55;
  ulonglong uVar52;
  int iVar56;
  ulonglong uVar53;
  uint *puVar58;
  undefined1 uVar59;
  uint uVar62;
  ulonglong uVar60;
  ulonglong uVar61;
  uint uVar63;
  uint uVar65;
  ulonglong uVar64;
  ushort *puVar66;
  short sVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  int iStack00000014;
  uint *puStack00000024;
  int iStack0000002c;
  uint uStack0000003c;
  uint *puStack_140;
  uint uStack_13c;
  uint uStack_134;
  uint uStack_130;
  int *piStack_128;
  uint uStack_124;
  uint uStack_120;
  ulonglong uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_104;
  uint uStack_fc;
  uint uStack_f4;
  int *piStack_f0;
  uint uStack_ec;
  uint *puStack_e8;
  uint uStack_e4;
  short asStack_d0 [8];
  short sStack_c0;
  undefined *puStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  
  uVar27 = ZEXT48(&stack0x00000000);
  puVar58 = *(uint **)(param_1 + 0x110);
  uVar9 = *(ushort *)((int)param_2 + 0x32) >> 1;
  uVar29 = (uint)uVar9;
  uStack_a8 = (uint)(*(ushort *)(param_2 + 0xd) >> 1);
  uStack_a4 = (uint)uVar9;
  uVar28 = 0;
  uStack_130 = (uint)param_5;
  if (param_4 == 0) {
    uVar65 = 0;
    uVar62 = 0;
    param_3[5] = *(uint *)(param_1 + 0x56f8);
    param_3[6] = *(uint *)(param_1 + 0x5704);
    param_3[7] = *(uint *)(param_1 + 0x56fc);
    param_3[8] = *(uint *)(param_1 + 0x5708);
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined2 *)(param_3 + 4) = 0;
  }
  else {
    uVar10 = *(ushort *)(param_2 + 0x13);
    puVar35 = (uint *)(param_2 + (param_4 + 0x5c) * 4);
    uVar65 = (uint)*(ushort *)((int)param_2 + 0x4a) * 0x10 * uStack_130;
    param_3[5] = *puVar35;
    uVar62 = (uint)uVar10 * 8 * uStack_130;
    param_3[6] = puVar35[1];
    param_3[7] = puVar35[2];
    puVar58 = puVar58 + uStack_a4 * uStack_130 * 6;
    param_3[8] = puVar35[3];
    *param_3 = (uint)uVar9 * 4 * uStack_130;
    param_3[1] = uStack_a4 * uStack_130;
    *(short *)(param_3 + 4) = (short)((param_5 & 0xffffffff) << 1);
  }
  *(undefined2 *)((int)param_3 + 0x12) = 0;
  if ((param_5 & 0xffffffff) < (ulonglong)param_6) {
    puStack_b0 = &lbl_820FC61C;
    iStack00000014 = param_1;
    puStack00000024 = param_3;
    iStack0000002c = param_4;
    uStack0000003c = param_6;
    puStack_140 = puVar58;
    do {
      param_3[2] = uVar65;
      param_3[3] = uVar62;
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      param_2[0x4c] = (int)(param_2 + 0x42);
      uStack_13c = 0xffffffff;
      if (*(int *)(param_1 + 0x55b4) != 0) {
        iVar32 = (int)((param_5 & 0xffffffff) << 2);
        if (*(int *)(iVar32 + param_2[0x146]) != 0) {
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
          puVar12 = *(ulonglong **)(param_1 + 0x54);
          if (*(int *)((int)puVar12 + 0x1c) != 0) {
            uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
            uVar68 = 1;
            uVar48 = uVar43 + 0x10;
            if ((uVar48 & 0xffffffff) == 0) {
              do {
                if ((uVar48 & 0xffffffff) == 0) break;
                uVar40 = *puVar12;
                uVar68 = uVar68 - uVar48;
                *(int *)(puVar12 + 1) = (int)(uVar43 - uVar48);
                *puVar12 = uVar40 << (uVar48 & 0x7f);
                if ((longlong)(uVar43 - uVar48) < 0) {
                  fn_82C4E5E8(puVar12,uVar40 >> (0x40 - uVar48 & 0x7f) & 0xffffffff);
                }
                uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                uVar48 = uVar43 + 0x10;
              } while ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff));
            }
            *puVar12 = *puVar12 << (uVar68 & 0x7f);
            *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
            if ((longlong)(uVar43 - uVar68) < 0) {
              fn_82C4E5E8(puVar12);
            }
          }
          fn_82C4E470(puVar12,*(uint *)(puVar12 + 1) & 7);
          uVar28 = fn_82CA5860(param_1,param_5);
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
          *(undefined1 *)((int)param_2 + 0x4e3) = 1;
          if ((int)uVar28 != 0) {
            return uVar28;
          }
        }
        uStack_13c = *(int *)(iVar32 + param_2[0x146]) - 1;
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
        uVar28 = fn_82CA5C50(param_1,param_5);
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
        if ((int)uVar28 != 0) {
          return uVar28;
        }
      }
      uStack_134 = 0;
      if (uVar29 != 0) {
        do {
          dataCacheBlockTouch((ulonglong)*(uint *)(*param_2 + 0xc) + 0x80);
          *(undefined1 *)(puVar58 + 1) = *(undefined1 *)(param_2 + 6);
          *puVar58 = *puVar58 & 0xef3fffff;
          if (*(char *)((int)param_2 + 0x19) == '\0') {
            plVar13 = (longlong *)*param_2;
            lVar44 = *plVar13;
            uVar29 = *(uint *)(plVar13 + 1);
            *plVar13 = lVar44 << 1;
            *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
            if ((longlong)((ulonglong)uVar29 - 1) < 0) {
              fn_82C4E5E8();
            }
            *puVar58 = (int)(char)(byte)((ulonglong)lVar44 >> 0x3f) << 8 | *puVar58 & 0xfffff8ff;
          }
          if (*(char *)((int)param_2 + 0x1a) == '\0') {
            puVar12 = (ulonglong *)*param_2;
            uVar43 = *puVar12;
            uVar29 = *(uint *)(puVar12 + 1);
            *puVar12 = uVar43 << 1;
            *(int *)(puVar12 + 1) = (int)((ulonglong)uVar29 - 1);
            if ((longlong)((ulonglong)uVar29 - 1) < 0) {
              fn_82C4E5E8();
            }
            *puVar58 = (uint)((uVar43 >> 0x3f) << 0x1f) | *puVar58 & 0x7fffffff;
          }
          uVar29 = *puVar58;
          uVar18 = (uint)LZCOUNT(uVar29 & 0x700) >> 5;
          if (uVar18 == 0) {
            puStack_e8 = (uint *)param_2[1];
            if ((uVar29 & 0x80000000) == 0) {
              puVar12 = (ulonglong *)*param_2;
              iVar32 = *(int *)param_2[0x59];
              sVar57 = *(short *)((int)((*puVar12 >> 0x38) << 1) + iVar32);
              uVar43 = (ulonglong)sVar57;
              if (sVar57 < 0) {
                fn_82C4E470(puVar12,8);
                do {
                  uVar48 = *puVar12;
                  fn_82C4E470(puVar12,1);
                  sVar57 = *(short *)((int)(((uVar43 - ((longlong)uVar48 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar32);
                  uVar43 = (ulonglong)sVar57;
                  uStack_e4 = (uint)sVar57;
                } while ((int)uStack_e4 < 0);
              }
              else {
                iVar32 = *(int *)(puVar12 + 1);
                iVar31 = (int)(uVar43 & 0xf);
                *puVar12 = *puVar12 << (uVar43 & 0xf);
                *(int *)(puVar12 + 1) = iVar32 - iVar31;
                if (iVar32 < iVar31) {
                  do {
                    pbVar19 = *(byte **)((int)puVar12 + 0xc);
                    if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                      bVar2 = *pbVar19;
                      bVar3 = pbVar19[1];
                      bVar4 = pbVar19[2];
                      bVar5 = pbVar19[4];
                      bVar6 = pbVar19[3];
                      bVar7 = pbVar19[5];
                      iVar32 = *(int *)(puVar12 + 1);
                      *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                      *(int *)(puVar12 + 1) = iVar32 + 0x30;
                      *puVar12 = ((((((ulonglong)bVar3 + (ulonglong)bVar2 * 0x100) * 0x100 +
                                    (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                  (ulonglong)bVar5) * 0x100 + (ulonglong)bVar7 <<
                                 ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                      goto LAB_830c3d98;
                    }
                    iVar32 = fn_82C4E3B0(puVar12);
                  } while (iVar32 == 1);
                  uStack_e4 = (int)sVar57 >> 4;
                  uVar43 = (ulonglong)(int)uStack_e4;
                }
                else {
LAB_830c3d98:
                  uStack_e4 = (int)sVar57 >> 4;
                  uVar43 = (ulonglong)(int)uStack_e4;
                }
              }
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              uVar40 = 0;
              uVar50 = 0;
              uStack_108 = 0;
              uStack_ec = 0;
              bVar22 = false;
              *puVar58 = *puVar58 & 0xbfffffff;
              uVar60 = 0;
              uVar48 = uVar43;
              uVar68 = 0;
              do {
                uVar64 = uVar68;
                uVar68 = 0;
                if ((uVar48 & 1) != 0) {
                  puVar12 = (ulonglong *)*param_2;
                  iVar32 = *(int *)param_2[0x54];
                  sVar57 = *(short *)((int)((*puVar12 >> 0x36) << 1) + iVar32);
                  uVar68 = (ulonglong)sVar57;
                  if (sVar57 < 0) {
                    fn_82C4E470(puVar12,10);
                    do {
                      uVar45 = *puVar12;
                      fn_82C4E470(puVar12,1);
                      sVar57 = *(short *)((int)(((uVar68 - ((longlong)uVar45 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar32);
                      uVar68 = (ulonglong)sVar57;
                    } while (sVar57 < 0);
                  }
                  else {
                    iVar32 = *(int *)(puVar12 + 1);
                    iVar31 = (int)(uVar68 & 0xf);
                    *puVar12 = *puVar12 << (uVar68 & 0xf);
                    *(int *)(puVar12 + 1) = iVar32 - iVar31;
                    if (iVar32 < iVar31) {
                      do {
                        pbVar19 = *(byte **)((int)puVar12 + 0xc);
                        if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                          bVar2 = *pbVar19;
                          bVar3 = pbVar19[1];
                          bVar4 = pbVar19[2];
                          bVar5 = pbVar19[4];
                          bVar6 = pbVar19[3];
                          bVar7 = pbVar19[5];
                          iVar32 = *(int *)(puVar12 + 1);
                          *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                          *(int *)(puVar12 + 1) = iVar32 + 0x30;
                          *puVar12 = ((((((ulonglong)bVar3 + (ulonglong)bVar2 * 0x100) * 0x100 +
                                        (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                      (ulonglong)bVar5) * 0x100 + (ulonglong)bVar7 <<
                                     ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                          goto LAB_830c3f0c;
                        }
                        iVar32 = fn_82C4E3B0(puVar12);
                      } while (iVar32 == 1);
                      uVar68 = (ulonglong)((int)sVar57 >> 4);
                    }
                    else {
LAB_830c3f0c:
                      uVar68 = (ulonglong)((int)sVar57 >> 4);
                    }
                  }
                  uVar45 = uVar68 + 1;
                  lVar44 = (longlong)((int)uVar45 >> 0x1f) + (ulonglong)(0x24 < uVar45);
                  if (lVar44 != 0) {
                    uVar45 = uVar68 - 0x24;
                  }
                  uVar68 = 0;
                  iVar32 = (int)uVar45;
                  if (iVar32 != 0) {
                    if (iVar32 < 0x23) {
                      uVar29 = *(uint *)((int)((uVar45 & 0xffffffff) << 2) + param_2[3]);
                      uVar45 = (ulonglong)(uint)((int)uVar29 >> 4) & 0xf;
                      uVar51 = uVar45 + ((ulonglong)uVar29 & 0xf);
                      if (uVar51 == 0) {
LAB_830c4084:
                        uVar52 = 0;
                      }
                      else {
                        uVar61 = (ulonglong)*(uint *)(puVar12 + 1);
                        lVar38 = 0;
                        uVar52 = uVar61 + 0x10;
                        if ((0x20 < uVar51) || (uVar51 == 0)) goto LAB_830c4084;
                        if ((uVar52 & 0xffffffff) < uVar51) {
                          do {
                            if ((uVar52 & 0xffffffff) == 0) break;
                            uVar51 = uVar51 - uVar52;
                            *(int *)(puVar12 + 1) = (int)(uVar61 - uVar52);
                            lVar38 = (ulonglong)
                                     (uint)((int)(*puVar12 >> (0x40 - uVar52 & 0x7f)) <<
                                           ((uint)uVar51 & 0x3f)) + lVar38;
                            *puVar12 = *puVar12 << (uVar52 & 0x7f);
                            if ((longlong)(uVar61 - uVar52) < 0) {
                              fn_82C4E5E8(puVar12);
                            }
                            uVar61 = (ulonglong)*(uint *)(puVar12 + 1);
                            uVar52 = uVar61 + 0x10;
                          } while ((uVar52 & 0xffffffff) < (uVar51 & 0xffffffff));
                        }
                        *(int *)(puVar12 + 1) = (int)(uVar61 - uVar51);
                        uVar52 = (*puVar12 >> (0x40 - uVar51 & 0x7f) & 0xffffffff) + lVar38;
                        *puVar12 = *puVar12 << (uVar51 & 0x7f);
                        if ((longlong)(uVar61 - uVar51) < 0) {
                          fn_82C4E5E8(puVar12);
                        }
                      }
                      uVar30 = (int)uVar52 >> (int)uVar45;
                      uVar52 = uVar52 & (ulonglong)(uint)((int)uVar29 >> 0x18) & 0xff;
                      uVar45 = (ulonglong)uVar30 & 1;
                      uVar51 = uVar52 & 1;
                      uVar45 = (((longlong)((int)uVar52 >> 1) +
                                 ((ulonglong)(uint)((int)uVar29 >> 0x10) & 0xff) ^ -uVar51) + uVar51
                               & 0xffff) << 0x10 |
                               ((longlong)((int)uVar30 >> 1) +
                                ((ulonglong)(uint)((int)uVar29 >> 8) & 0xff) ^ -uVar45) + uVar45 &
                               0xffffffff0000ffff;
                    }
                    else if (iVar32 == 0x24) {
                      uVar68 = 1;
                      uVar45 = 0;
                    }
                    else {
                      lVar49 = 0;
                      lVar38 = (ulonglong)*(ushort *)((int)param_2 + 0x46) -
                               (ulonglong)*(byte *)((int)param_2 + 0x1e);
                      uVar45 = (ulonglong)*(uint *)(puVar12 + 1);
                      lVar41 = (ulonglong)*(ushort *)(param_2 + 0x12) -
                               (ulonglong)*(byte *)((int)param_2 + 0x1e);
                      uVar51 = uVar45 + 0x10;
                      uVar61 = lVar41 + lVar38;
                      if ((uVar61 & 0xffffffff) < 0x21) {
                        if ((uVar61 & 0xffffffff) == 0) {
                          uVar51 = 0;
                        }
                        else {
                          if ((uVar51 & 0xffffffff) < (uVar61 & 0xffffffff)) {
                            do {
                              if ((uVar51 & 0xffffffff) == 0) break;
                              uVar61 = uVar61 - uVar51;
                              *(int *)(puVar12 + 1) = (int)(uVar45 - uVar51);
                              lVar49 = (ulonglong)
                                       (uint)((int)(*puVar12 >> (0x40 - uVar51 & 0x7f)) <<
                                             ((uint)uVar61 & 0x3f)) + lVar49;
                              *puVar12 = *puVar12 << (uVar51 & 0x7f);
                              if ((longlong)(uVar45 - uVar51) < 0) {
                                fn_82C4E5E8(puVar12);
                              }
                              uVar45 = (ulonglong)*(uint *)(puVar12 + 1);
                              uVar51 = uVar45 + 0x10;
                            } while ((uVar51 & 0xffffffff) < (uVar61 & 0xffffffff));
                          }
                          *(int *)(puVar12 + 1) = (int)(uVar45 - uVar61);
                          uVar51 = (*puVar12 >> (0x40 - uVar61 & 0x7f) & 0xffffffff) + lVar49;
                          *puVar12 = *puVar12 << (uVar61 & 0x7f);
                          if ((longlong)(uVar45 - uVar61) < 0) {
                            fn_82C4E5E8(puVar12);
                          }
                        }
                      }
                      else {
                        uVar51 = 0;
                      }
                      uVar29 = (uint)lVar41;
                      uVar45 = ((ulonglong)(uint)(1 << (uVar29 & 0x3f)) - 1 & uVar51 & 0xffff) <<
                               0x10 | (longlong)((int)uVar51 >> (uVar29 & 0x3f)) &
                                      (ulonglong)(uint)(1 << ((uint)lVar38 & 0x3f)) - 1 &
                                      0xffffffff0000ffff;
                    }
                  }
                  uVar68 = ((longlong)(int)lVar44 << 8 | uVar68) << 0x20 | uVar45 & 0xffffffff;
                }
                iVar31 = (int)((uVar60 + 0x12 & 0xffffffff) << 1);
                iVar32 = param_2[0x57];
                uVar45 = uVar60 & 1;
                uVar48 = (ulonglong)((int)uVar48 >> 1);
                lVar44 = (longlong)((int)uVar60 >> 1);
                uVar51 = uVar68 >> 0x20 & 1;
                uVar61 = (ulonglong)*(ushort *)(iVar31 + (int)param_2) + (ulonglong)*puStack00000024
                ;
                iVar37 = (uint)*(ushort *)((int)puStack00000024 + 0x12) + (int)uVar45;
                if (((ulonglong)*(ushort *)(puStack00000024 + 4) & (ulonglong)uStack_13c) + lVar44
                    == 0) {
                  uVar29 = 0;
                  if (iVar37 != 0) {
                    uVar30 = *(uint *)((int)((uVar61 - 1 & 0xffffffff) << 2) + iVar32);
                    uVar52 = (ulonglong)uVar30;
                    if ((uVar30 != 0x4000) &&
                       (uVar53 = (uVar60 & 2) * 0x8000 + uVar45 + (ulonglong)puStack00000024[4] &
                                 0x7ffffff, uVar29 = uVar30,
                       ((((ulonglong)(uint)param_2[0x47] + uVar53 * -0x20) - uVar52 |
                        (ulonglong)(uint)param_2[0x46] + ((ulonglong)uVar30 & 0x8000) * -2 +
                        uVar53 * 0x20 + uVar52) & 0x80008000) != 0)) {
                      uVar29 = fn_82C75A60(param_2,0,uVar60,uVar52,puStack00000024);
                    }
                  }
                  if ((uVar68 & 0x100000000) == 0) {
                    iVar36 = (int)uVar29 >> 0x10;
                    iVar56 = (int)(short)uVar29;
                    goto LAB_830c45c4;
                  }
LAB_830c45b0:
                  uVar29 = 0x4000;
                  *(undefined4 *)((int)((uVar61 & 0xffffffff) << 2) + iVar32) = 0x4000;
                }
                else {
                  uVar52 = 0;
                  if (iVar37 != 0) {
                    uVar52 = (ulonglong)*(uint *)((int)((uVar61 - 1 & 0xffffffff) << 2) + iVar32);
                  }
                  uVar53 = uVar61 - *(ushort *)((int)param_2 + 0x32);
                  uVar29 = *(uint *)((int)((uVar53 & 0xffffffff) << 2) + iVar32);
                  uVar69 = (ulonglong)uVar29;
                  uVar30 = *(uint *)((int)(((longlong)*(char *)(param_2[0x4c] + (int)uVar60) +
                                            uVar53 & 0xffffffff) << 2) + iVar32);
                  uVar53 = (ulonglong)uVar30;
                  lVar38 = ((ulonglong)(uVar30 >> 1 ^ uVar30) & 0x4000) +
                           ((ulonglong)(uVar29 >> 1 ^ uVar29) & 0x4000) +
                           ((uVar52 >> 1 ^ uVar52) & 0x4000);
                  if (lVar38 == 0) {
LAB_830c4364:
                    uVar21 = (uint)uVar69;
                    uVar63 = (uint)uVar53;
                    uVar29 = (uint)uVar52;
                    uVar33 = uVar63 - uVar29 ^ uVar63 - uVar21;
                    uVar34 = uVar29 - uVar21 ^ uVar63 - uVar21;
                    uVar43 = (uVar53 & 0xffff) << 0x10;
                    uVar40 = (uVar52 & 0xffff) << 0x10;
                    uVar53 = (uVar69 & 0xffff) << 0x10;
                    iVar56 = (int)uVar40;
                    iVar36 = (int)uVar43;
                    iVar23 = (int)uVar53;
                    uVar30 = iVar36 - iVar23;
                    uVar39 = iVar36 - iVar56 ^ uVar30;
                    uVar30 = iVar56 - iVar23 ^ uVar30;
                    uVar43 = ((longlong)((int)uVar30 >> 0x1f) & uVar53 |
                              (longlong)((int)uVar39 >> 0x1f) & uVar43 |
                             ~(longlong)((int)(uVar39 | uVar30) >> 0x1f) & uVar40) >> 0x10;
                    uVar53 = uVar43 | ((ulonglong)
                                       (uint)((int)((int)uVar33 >> 0x1f & uVar63 |
                                                    ~((int)(uVar33 | uVar34) >> 0x1f) & uVar29 |
                                                   (int)uVar34 >> 0x1f & uVar21) >> 0x10) & 0xffff)
                                      << 0x10;
                    uVar40 = (uVar60 & 2) * 0x8000 + uVar45 + (ulonglong)puStack00000024[4] &
                             0x7ffffff;
                    if (((((ulonglong)(uint)param_2[0x47] + uVar40 * -0x20) - uVar53 |
                         (ulonglong)(uint)param_2[0x46] + (uVar43 & 0x8000) * -2 + uVar40 * 0x20 +
                         uVar53) & 0x80008000) != 0) {
                      uVar53 = fn_82C75A60(param_2,0,uVar60,uVar53,puStack00000024);
                    }
                    uVar43 = (ulonglong)uStack_e4;
                    uVar40 = (ulonglong)uStack_ec;
                  }
                  else {
                    if ((int)lVar38 == 0x4000) {
                      if (uVar69 == 0x4000) {
                        uVar69 = 0;
                      }
                      else if (uVar53 == 0x4000) {
                        uVar53 = 0;
                      }
                      else if (uVar52 == 0x4000) {
                        uVar52 = 0;
                      }
                      goto LAB_830c4364;
                    }
                    uVar53 = 0;
                    uVar69 = -(ulonglong)(uVar69 != 0x4000) & uVar69;
                    uVar52 = -(ulonglong)(uVar52 != 0x4000) & uVar52;
                  }
                  iVar36 = (int)uVar53 >> 0x10;
                  iVar56 = (int)((uVar53 & 0xffff) << 0x10);
                  if ((iVar37 == 0) || ((uVar68 & 0x100000000) != 0)) {
                    if ((uVar68 & 0x100000000) != 0) goto LAB_830c45b0;
                  }
                  else {
                    iVar37 = iVar56 - (int)(uVar52 << 0x10);
                    uVar63 = iVar36 - ((int)uVar52 >> 0x10);
                    uVar29 = (int)uVar63 >> 0x1f;
                    uVar30 = iVar37 >> 0x1f;
                    if ((0x20 < (int)(((uVar63 ^ uVar29) - uVar29) +
                                     ((iVar37 >> 0x10 ^ uVar30) - uVar30))) ||
                       (iVar37 = iVar56 - (int)(uVar69 << 0x10),
                       uVar63 = iVar36 - ((int)uVar69 >> 0x10), uVar29 = (int)uVar63 >> 0x1f,
                       uVar30 = iVar37 >> 0x1f,
                       0x20 < (int)(((uVar63 ^ uVar29) - uVar29) +
                                   ((iVar37 >> 0x10 ^ uVar30) - uVar30)))) {
                      plVar13 = (longlong *)*param_2;
                      lVar38 = *plVar13;
                      uVar29 = *(uint *)(plVar13 + 1);
                      *plVar13 = lVar38 << 1;
                      *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                      if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                        fn_82C4E5E8();
                      }
                      iVar32 = param_2[0x57];
                      psVar46 = (short *)((int)((uVar61 - *(ushort *)
                                                           ((0x13 - (int)(lVar38 >> 0x3f)) * 2 +
                                                           (int)param_2) & 0xffffffff) << 2) +
                                         iVar32);
                      sVar57 = psVar46[1];
                      iVar56 = (int)sVar57;
                      iVar36 = (int)*psVar46;
                      if (sVar57 == 0x4000) {
                        iVar36 = 0;
                        iVar56 = 0;
                      }
                      goto LAB_830c45c4;
                    }
                  }
                  iVar56 = iVar56 >> 0x10;
LAB_830c45c4:
                  uVar29 = (((((uint)(uVar68 >> 0x10) & 0xffff) <<
                             (*(byte *)((int)param_2 + 0x1e) & 0x3f)) +
                             (uint)*(ushort *)(param_2 + 0x10) + iVar36 &
                            (uint)*(ushort *)(param_2 + 0x11)) - (uint)*(ushort *)(param_2 + 0x10))
                           * 0x10000 |
                           ((((uint)uVar68 & 0xffff) << (*(byte *)((int)param_2 + 0x1e) & 0x3f)) +
                            (uint)*(ushort *)((int)param_2 + 0x3e) + iVar56 &
                           (uint)*(ushort *)((int)param_2 + 0x42)) -
                           (uint)*(ushort *)((int)param_2 + 0x3e) & 0xffff;
                  *(uint *)((int)((uVar61 & 0xffffffff) << 2) + iVar32) = uVar29;
                }
                *puStack_e8 = uVar29;
                if ((int)uVar51 != 0) {
                  bVar2 = 0;
                  uVar61 = (ulonglong)*(ushort *)(iVar31 + (int)param_2) +
                           (ulonglong)*puStack00000024;
                  if ((((ulonglong)*(ushort *)(puStack00000024 + 4) & (ulonglong)uStack_13c) +
                       lVar44 != 0) &&
                     (*(short *)((int)((uVar61 - *(ushort *)((int)param_2 + 0x32) & 0xffffffff) << 2
                                      ) + param_2[0x57] + 2) == 0x4000)) {
                    bVar2 = 1;
                  }
                  if ((uVar45 + uStack_134 != 0) &&
                     (*(short *)((int)((uVar61 & 0xffffffff) << 2) + param_2[0x57] + -2) == 0x4000))
                  {
                    bVar2 = 1;
                  }
                  bVar22 = (bool)(bVar2 | bVar22);
                }
                uVar45 = (ulonglong)uStack_108;
                uVar60 = uVar60 + 1;
                uVar40 = (uVar68 >> 0x28 & 1 | uVar40 & 0x7fffffff) << 1;
                puStack_e8 = puStack_e8 + 1;
                uStack_108 = (uint)(uVar51 + uVar45);
                uVar50 = (uVar51 | uVar50 & 0x7fffffff) << 1;
                uStack_ec = (uint)uVar40;
                uVar68 = (uVar51 | uVar64 & 0x7fffffff) << 1;
              } while ((int)uVar60 < 4);
              uVar43 = (ulonglong)(byte)puStack_b0[(int)uStack_ec >> 1] | uVar43 & 0x30;
              uVar29 = (uint)uVar43;
              if ((*(char *)(param_2 + 7) == '\0') || (bVar24 = true, uVar29 == 0)) {
                bVar24 = false;
              }
              if ((*(char *)((int)param_2 + 0x1d) == '\0') ||
                 (bVar25 = true,
                 (uVar29 & ~((uint)(byte)puStack_b0[(int)uVar50 >> 1] |
                            -(uint)((uVar51 + uVar45 & 0xffffffff) - 3 < 0xffffffff7ffffffd) & 0x30)
                 ) == 0)) {
                bVar25 = false;
              }
              uStack_104 = (uint)((uVar51 | uVar64 & 0x3fffffff) << 2);
              bVar26 = false;
              if (2 < (int)uStack_108) {
                uStack_104 = uStack_104 | 3;
                bVar26 = true;
                bVar2 = 0;
                if (((uStack_13c & uStack_130) != 0) &&
                   (*(short *)((puStack00000024[1] - (uint)(*(ushort *)((int)param_2 + 0x32) >> 1))
                               * 4 + param_2[0x58] + 2) == 0x4000)) {
                  bVar2 = 1;
                }
                if ((uStack_134 != 0) &&
                   (*(short *)(puStack00000024[1] * 4 + param_2[0x58] + -2) == 0x4000)) {
                  bVar2 = 1;
                }
                bVar22 = (bool)(bVar2 | bVar22);
              }
              if ((*(char *)((int)param_2 + 0x1b) != '\0') && ((uVar29 != 0 || (uStack_108 != 0))))
              {
                if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                  puVar12 = (ulonglong *)*param_2;
                  lVar44 = 0;
                  uVar48 = (ulonglong)*(uint *)(puVar12 + 1);
                  uVar68 = uVar48 + 0x10;
                  if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                    uVar40 = 3;
                    if ((uVar68 & 0xffffffff) < 3) {
                      do {
                        if ((uVar68 & 0xffffffff) == 0) break;
                        uVar40 = uVar40 - uVar68;
                        *(int *)(puVar12 + 1) = (int)(uVar48 - uVar68);
                        lVar44 = (ulonglong)
                                 (uint)((int)(*puVar12 >> (0x40 - uVar68 & 0x7f)) <<
                                       ((uint)uVar40 & 0x3f)) + lVar44;
                        *puVar12 = *puVar12 << (uVar68 & 0x7f);
                        if ((longlong)(uVar48 - uVar68) < 0) {
                          fn_82C4E5E8(puVar12);
                        }
                        uVar48 = (ulonglong)*(uint *)(puVar12 + 1);
                        uVar68 = uVar48 + 0x10;
                      } while ((uVar68 & 0xffffffff) < (uVar40 & 0xffffffff));
                    }
                    *(int *)(puVar12 + 1) = (int)(uVar48 - uVar40);
                    lVar44 = (*puVar12 >> (0x40 - uVar40 & 0x7f) & 0xffffffff) + lVar44;
                    *puVar12 = *puVar12 << (uVar40 & 0x7f);
                    if ((longlong)(uVar48 - uVar40) < 0) {
                      fn_82C4E5E8(puVar12);
                    }
                    if ((int)lVar44 == 7) {
                      puVar12 = (ulonglong *)*param_2;
                      uVar40 = 5;
                      lVar44 = 0;
                      uVar68 = (ulonglong)*(uint *)(puVar12 + 1);
                      uVar48 = uVar68 + 0x10;
                      if ((uVar48 & 0xffffffff) < 5) {
                        do {
                          if ((uVar48 & 0xffffffff) == 0) break;
                          uVar40 = uVar40 - uVar48;
                          *(int *)(puVar12 + 1) = (int)(uVar68 - uVar48);
                          lVar44 = (ulonglong)
                                   (uint)((int)(*puVar12 >> (0x40 - uVar48 & 0x7f)) <<
                                         ((uint)uVar40 & 0x3f)) + lVar44;
                          *puVar12 = *puVar12 << (uVar48 & 0x7f);
                          if ((longlong)(uVar68 - uVar48) < 0) {
                            fn_82C4E5E8(puVar12);
                          }
                          uVar68 = (ulonglong)*(uint *)(puVar12 + 1);
                          uVar48 = uVar68 + 0x10;
                        } while ((uVar48 & 0xffffffff) < (uVar40 & 0xffffffff));
                      }
                      *(int *)(puVar12 + 1) = (int)(uVar68 - uVar40);
                      uVar48 = (*puVar12 >> (0x40 - uVar40 & 0x7f) & 0xffffffff) + lVar44;
                      *puVar12 = *puVar12 << (uVar40 & 0x7f);
                      if ((longlong)(uVar68 - uVar40) < 0) {
                        fn_82C4E5E8(puVar12);
                      }
                    }
                    else {
                      uVar48 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar44;
                    }
                    *(char *)(puStack_140 + 1) = (char)((uVar48 & 0xffffffff) << 1) + -1;
                  }
                  else {
                    uVar40 = 1;
                    if ((uVar68 & 0xffffffff) == 0) {
                      do {
                        if ((uVar68 & 0xffffffff) == 0) break;
                        uVar40 = uVar40 - uVar68;
                        *(int *)(puVar12 + 1) = (int)(uVar48 - uVar68);
                        lVar44 = (ulonglong)
                                 (uint)((int)(*puVar12 >> (0x40 - uVar68 & 0x7f)) <<
                                       ((uint)uVar40 & 0x3f)) + lVar44;
                        *puVar12 = *puVar12 << (uVar68 & 0x7f);
                        if ((longlong)(uVar48 - uVar68) < 0) {
                          fn_82C4E5E8(puVar12);
                        }
                        uVar48 = (ulonglong)*(uint *)(puVar12 + 1);
                        uVar68 = uVar48 + 0x10;
                      } while ((uVar68 & 0xffffffff) < (uVar40 & 0xffffffff));
                    }
                    uVar68 = *puVar12;
                    *(int *)(puVar12 + 1) = (int)(uVar48 - uVar40);
                    *puVar12 = uVar68 << (uVar40 & 0x7f);
                    if ((longlong)(uVar48 - uVar40) < 0) {
                      fn_82C4E5E8(puVar12);
                    }
                    if (((uVar68 >> (0x40 - uVar40 & 0x7f) & 0xffffffff) + lVar44 & 0xffffffff) == 0
                       ) {
                      *(char *)(puStack_140 + 1) =
                           *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                           -1;
                    }
                    else {
                      *(char *)(puStack_140 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                    }
                  }
                }
                else if ((*puStack_140 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
                  *(char *)(puStack_140 + 1) =
                       *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                }
                else {
                  *(char *)(puStack_140 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                }
                if (*(byte *)(puStack_140 + 1) == 0) {
                  return 1;
                }
                if (0x3e < *(byte *)(puStack_140 + 1)) {
                  return 1;
                }
              }
              if (bVar22) {
                puVar12 = (ulonglong *)*param_2;
                uVar48 = *puVar12;
                uVar29 = *(uint *)(puVar12 + 1);
                *puVar12 = uVar48 << 1;
                *(int *)(puVar12 + 1) = (int)((ulonglong)uVar29 - 1);
                if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                  fn_82C4E5E8();
                }
                *puStack_140 = (uint)((uVar48 >> 0x3f) << 3) | *puStack_140 & 0xffffffe7;
              }
              if (bVar24) {
                plVar13 = (longlong *)*param_2;
                lVar38 = *plVar13;
                uVar29 = *(uint *)(plVar13 + 1);
                lVar44 = -(lVar38 >> 0x3f);
                *plVar13 = lVar38 << 1;
                *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                  fn_82C4E5E8();
                }
                if (lVar38 < 0) {
                  plVar13 = (longlong *)*param_2;
                  lVar38 = *plVar13;
                  uVar29 = *(uint *)(plVar13 + 1);
                  *plVar13 = lVar38 << 1;
                  *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                  if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  lVar44 = lVar44 - (lVar38 >> 0x3f);
                }
                *puStack_140 = (uint)(lVar44 << 0x16) | *puStack_140 & 0xff3fffff;
              }
              if (bVar25) {
                puVar12 = (ulonglong *)*param_2;
                iVar32 = *(int *)param_2[0x5a];
                sVar57 = *(short *)((int)((*puVar12 >> 0x38) << 1) + iVar32);
                uVar48 = (ulonglong)sVar57;
                if (sVar57 < 0) {
                  fn_82C4E470(puVar12,8);
                  do {
                    uVar68 = *puVar12;
                    fn_82C4E470(puVar12,1);
                    sVar57 = *(short *)((int)(((uVar48 - ((longlong)uVar68 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar32);
                    uVar48 = (ulonglong)sVar57;
                  } while (sVar57 < 0);
                }
                else {
                  iVar32 = *(int *)(puVar12 + 1);
                  iVar31 = (int)(uVar48 & 0xf);
                  *puVar12 = *puVar12 << (uVar48 & 0xf);
                  *(int *)(puVar12 + 1) = iVar32 - iVar31;
                  if (iVar32 < iVar31) {
                    do {
                      pbVar19 = *(byte **)((int)puVar12 + 0xc);
                      if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                        bVar2 = *pbVar19;
                        bVar3 = pbVar19[1];
                        bVar4 = pbVar19[2];
                        bVar5 = pbVar19[4];
                        bVar6 = pbVar19[3];
                        bVar7 = pbVar19[5];
                        iVar32 = *(int *)(puVar12 + 1);
                        *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                        *(int *)(puVar12 + 1) = iVar32 + 0x30;
                        *puVar12 = ((((((ulonglong)bVar3 + (ulonglong)bVar2 * 0x100) * 0x100 +
                                      (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                    (ulonglong)bVar5) * 0x100 + (ulonglong)bVar7 <<
                                   ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                        goto LAB_830c4c98;
                      }
                      iVar32 = fn_82C4E3B0(puVar12);
                    } while (iVar32 == 1);
                    uVar48 = (ulonglong)((int)sVar57 >> 4);
                  }
                  else {
LAB_830c4c98:
                    uVar48 = (ulonglong)((int)sVar57 >> 4);
                  }
                }
                if (*(int *)(*param_2 + 0x14) != 0) {
                  return 1;
                }
                uVar30 = (uint)uVar48 & 7;
                uVar29 = *puStack_140;
                uVar21 = (uint)((((~uVar48 & 0xffffffff) >> 0x1f) + (ulonglong)(7 < uVar48) & 1) <<
                               0x1c);
                *puStack_140 = uVar21 | uVar29 & 0xefffffff;
                uVar63 = (*(byte *)((int)param_2 + uVar30 + 0x2ac) & 7) << 0x18;
                *puStack_140 = uVar63 | uVar21 | uVar29 & 0xe8ffffff;
                *puStack_140 = (*(byte *)((int)param_2 + uVar30 + 0x2b4) & 3) << 0x14 |
                               uVar63 | uVar21 | uVar29 & 0xe0cfffff;
              }
              *(char *)((int)puStack_140 + 5) = (char)uVar43;
              iVar32 = *(int *)(*param_2 + 0x14);
              param_3 = puStack00000024;
              param_1 = iStack00000014;
              puVar58 = puStack_140;
            }
            else {
              uVar43 = 0;
              *(undefined1 *)((int)puVar58 + 5) = 0;
              puVar66 = (ushort *)(param_2 + 9);
              do {
                uVar48 = uVar43 & 1;
                uVar29 = (int)uVar43 >> 1;
                uVar68 = (ulonglong)*(ushort *)(param_3 + 4);
                lVar44 = *(ushort *)((int)param_3 + 0x12) + uVar48;
                iVar31 = (int)lVar44;
                uVar40 = (ulonglong)*(ushort *)((int)param_2 + 0x32);
                uVar50 = (ulonglong)*puVar66 + (ulonglong)*param_3;
                iVar32 = param_2[0x57];
                if ((uVar68 & uStack_13c) + (longlong)(int)uVar29 == 0) {
                  uVar30 = 0;
                  if (iVar31 != 0) {
                    uVar63 = *(uint *)((int)((uVar50 - 1 & 0xffffffff) << 2) + iVar32);
                    if ((uVar63 != 0x4000) &&
                       (uVar48 = (uVar43 & 2) * 0x8000 + uVar48 + (ulonglong)param_3[4] & 0x7ffffff,
                       uVar30 = uVar63,
                       ((((ulonglong)(uint)param_2[0x47] + uVar48 * -0x20) - (ulonglong)uVar63 |
                        (ulonglong)(uint)param_2[0x46] + ((ulonglong)uVar63 & 0x8000) * -2 +
                        uVar48 * 0x20 + (ulonglong)uVar63) & 0x80008000) != 0)) {
                      uVar60 = (ulonglong)(short)uVar63;
                      uVar48 = (ulonglong)((int)uVar63 >> 0x10);
                      lVar49 = lVar44 * 0x20 + uVar60;
                      lVar38 = uVar40 * 0x20 + -4;
                      lVar44 = (ulonglong)*(ushort *)(param_2 + 0xd) * 0x20 + -4;
                      lVar41 = (((ulonglong)uVar29 & 1) + uVar68) * 0x20 + uVar48;
                      if ((int)lVar49 < -0x1c) {
                        uVar60 = (uVar60 - lVar49) - 0x1c;
                      }
                      else if ((int)lVar38 < (int)lVar49) {
                        uVar60 = (lVar38 - lVar49) + uVar60;
                      }
                      if (-0x1d < (int)lVar41) {
                        if ((int)lVar44 < (int)lVar41) {
                          uVar48 = (lVar44 - lVar41) + uVar48;
                        }
                        uVar30 = (uint)((uVar48 & 0xffffffff) << 0x10) | (uint)uVar60 & 0xffff;
                        goto LAB_830c3924;
                      }
                      iVar37 = (int)((uint)(((uVar48 - lVar41) - 0x1c & 0xffffffff) << 0x10) |
                                    (uint)(uVar60 & 0xffffffff0000ffff)) >> 0x10;
                      iVar36 = (int)(short)(uVar60 & 0xffffffff0000ffff);
                      goto LAB_830c3c3c;
                    }
                  }
LAB_830c3924:
                  iVar37 = (int)uVar30 >> 0x10;
                  iVar36 = (int)(short)uVar30;
                }
                else {
                  uVar60 = 0;
                  if (iVar31 != 0) {
                    uVar60 = (ulonglong)*(uint *)((int)((uVar50 - 1 & 0xffffffff) << 2) + iVar32);
                  }
                  uVar30 = *(uint *)((int)((uVar50 - uVar40 & 0xffffffff) << 2) + iVar32);
                  uVar64 = (ulonglong)uVar30;
                  uVar63 = *(uint *)((int)(((longlong)*(char *)(param_2[0x4c] + (int)uVar43) +
                                            (uVar50 - uVar40) & 0xffffffff) << 2) + iVar32);
                  uVar45 = (ulonglong)uVar63;
                  lVar38 = ((ulonglong)(uVar63 >> 1 ^ uVar63) & 0x4000) +
                           ((ulonglong)(uVar30 >> 1 ^ uVar30) & 0x4000) +
                           ((uVar60 >> 1 ^ uVar60) & 0x4000);
                  if (lVar38 == 0) {
LAB_830c39a8:
                    uVar34 = (uint)uVar64;
                    uVar21 = (uint)uVar45;
                    uVar30 = (uint)uVar60;
                    uVar33 = uVar21 - uVar30 ^ uVar21 - uVar34;
                    uVar39 = uVar30 - uVar34 ^ uVar21 - uVar34;
                    uVar61 = (uVar45 & 0xffff) << 0x10;
                    uVar51 = (uVar60 & 0xffff) << 0x10;
                    uVar45 = (uVar64 & 0xffff) << 0x10;
                    iVar56 = (int)uVar45;
                    iVar36 = (int)uVar61;
                    uVar63 = iVar36 - iVar56;
                    iVar37 = (int)uVar51;
                    uVar54 = iVar36 - iVar37 ^ uVar63;
                    uVar63 = iVar37 - iVar56 ^ uVar63;
                    uVar51 = (longlong)((int)uVar54 >> 0x1f) & uVar61 |
                             ~(longlong)((int)(uVar54 | uVar63) >> 0x1f) & uVar51 |
                             (longlong)((int)uVar63 >> 0x1f) & uVar45;
                    uVar45 = uVar51 >> 0x10;
                    uVar61 = uVar45 | ((ulonglong)
                                       (uint)((int)((int)uVar33 >> 0x1f & uVar21 |
                                                    ~((int)(uVar33 | uVar39) >> 0x1f) & uVar30 |
                                                   (int)uVar39 >> 0x1f & uVar34) >> 0x10) & 0xffff)
                                      << 0x10;
                    uVar48 = (uVar43 & 2) * 0x8000 + uVar48 + (ulonglong)param_3[4] & 0x7ffffff;
                    param_1 = iStack00000014;
                    if (((((ulonglong)(uint)param_2[0x47] + uVar48 * -0x20) - uVar61 |
                         (ulonglong)(uint)param_2[0x46] + (uVar45 & 0x8000) * -2 + uVar48 * 0x20 +
                         uVar61) & 0x80008000) != 0) {
                      uVar45 = (ulonglong)(short)(uVar51 >> 0x10);
                      uVar48 = (ulonglong)((int)uVar61 >> 0x10);
                      lVar49 = lVar44 * 0x20 + uVar45;
                      lVar38 = uVar40 * 0x20 + -4;
                      lVar44 = (ulonglong)*(ushort *)(param_2 + 0xd) * 0x20 + -4;
                      lVar41 = (((ulonglong)uVar29 & 1) + uVar68) * 0x20 + uVar48;
                      if ((int)lVar49 < -0x1c) {
                        uVar45 = (uVar45 - lVar49) - 0x1c;
                      }
                      else if ((int)lVar38 < (int)lVar49) {
                        uVar45 = (lVar38 - lVar49) + uVar45;
                      }
                      if ((int)lVar41 < -0x1c) {
                        uVar48 = (uVar48 - lVar41) - 0x1c;
                      }
                      else if ((int)lVar44 < (int)lVar41) {
                        uVar48 = (lVar44 - lVar41) + uVar48;
                      }
                      uVar61 = (uVar48 & 0xffff) << 0x10 | uVar45 & 0xffffffff0000ffff;
                    }
                  }
                  else {
                    if ((int)lVar38 == 0x4000) {
                      if (uVar64 == 0x4000) {
                        uVar64 = 0;
                      }
                      else if (uVar45 == 0x4000) {
                        uVar45 = 0;
                      }
                      else if (uVar60 == 0x4000) {
                        uVar60 = 0;
                      }
                      goto LAB_830c39a8;
                    }
                    uVar61 = 0;
                    uVar64 = -(ulonglong)(uVar64 != 0x4000) & uVar64;
                    uVar60 = -(ulonglong)(uVar60 != 0x4000) & uVar60;
                  }
                  iVar37 = (int)uVar61 >> 0x10;
                  iVar36 = (int)((uVar61 & 0xffff) << 0x10);
                  if ((iVar31 == 0) ||
                     ((iVar31 = iVar36 - (int)(uVar60 << 0x10),
                      uVar63 = iVar37 - ((int)uVar60 >> 0x10), uVar29 = (int)uVar63 >> 0x1f,
                      uVar30 = iVar31 >> 0x1f,
                      (int)(((uVar63 ^ uVar29) - uVar29) + ((iVar31 >> 0x10 ^ uVar30) - uVar30)) <
                      0x21 && (iVar31 = iVar36 - (int)(uVar64 << 0x10),
                              uVar63 = iVar37 - ((int)uVar64 >> 0x10), uVar29 = (int)uVar63 >> 0x1f,
                              uVar30 = iVar31 >> 0x1f,
                              (int)(((uVar63 ^ uVar29) - uVar29) +
                                   ((iVar31 >> 0x10 ^ uVar30) - uVar30)) < 0x21)))) {
                    iVar36 = iVar36 >> 0x10;
                  }
                  else {
                    plVar13 = (longlong *)*param_2;
                    lVar44 = *plVar13;
                    uVar29 = *(uint *)(plVar13 + 1);
                    *plVar13 = lVar44 << 1;
                    *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                    if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    iVar32 = param_2[0x57];
                    psVar46 = (short *)((int)((uVar50 - *(ushort *)
                                                         ((0x13 - (int)(lVar44 >> 0x3f)) * 2 +
                                                         (int)param_2) & 0xffffffff) << 2) + iVar32)
                    ;
                    sVar57 = psVar46[1];
                    iVar36 = (int)sVar57;
                    iVar37 = (int)*psVar46;
                    if (sVar57 == 0x4000) {
                      iVar37 = 0;
                      iVar36 = 0;
                    }
                  }
                }
LAB_830c3c3c:
                uVar43 = uVar43 + 1;
                iVar31 = 0 << (*(byte *)((int)param_2 + 0x1e) & 0x3f);
                puVar66 = puVar66 + 1;
                uVar29 = ((iVar31 + (uint)*(ushort *)(param_2 + 0x10) + iVar37 &
                          (uint)*(ushort *)(param_2 + 0x11)) - (uint)*(ushort *)(param_2 + 0x10)) *
                         0x10000 | (iVar31 + (uint)*(ushort *)((int)param_2 + 0x3e) + iVar36 &
                                   (uint)*(ushort *)((int)param_2 + 0x42)) -
                                   (uint)*(ushort *)((int)param_2 + 0x3e) & 0xffff;
                *(uint *)((int)((uVar50 & 0xffffffff) << 2) + iVar32) = uVar29;
                *puStack_e8 = uVar29;
                puStack_e8 = puStack_e8 + 1;
              } while ((int)uVar43 < 4);
              uStack_104 = 0;
              bVar26 = false;
              iVar32 = *(int *)(*param_2 + 0x14);
            }
          }
          else {
            puVar35 = (uint *)param_2[1];
            uVar59 = 0;
            if ((uVar29 & 0x80000000) == 0) {
              puVar12 = (ulonglong *)*param_2;
              iVar32 = *(int *)param_2[0x54];
              sVar57 = *(short *)((int)((*puVar12 >> 0x36) << 1) + iVar32);
              uVar43 = (ulonglong)sVar57;
              if (sVar57 < 0) {
                fn_82C4E470(puVar12,10);
                do {
                  uVar48 = *puVar12;
                  fn_82C4E470(puVar12,1);
                  sVar57 = *(short *)((int)(((uVar43 - ((longlong)uVar48 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar32);
                  uVar43 = (ulonglong)sVar57;
                } while (sVar57 < 0);
              }
              else {
                iVar32 = *(int *)(puVar12 + 1);
                iVar31 = (int)(uVar43 & 0xf);
                *puVar12 = *puVar12 << (uVar43 & 0xf);
                *(int *)(puVar12 + 1) = iVar32 - iVar31;
                if (iVar32 < iVar31) {
                  do {
                    pbVar19 = *(byte **)((int)puVar12 + 0xc);
                    if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                      bVar2 = *pbVar19;
                      bVar3 = pbVar19[1];
                      bVar4 = pbVar19[2];
                      bVar5 = pbVar19[4];
                      bVar6 = pbVar19[3];
                      bVar7 = pbVar19[5];
                      iVar32 = *(int *)(puVar12 + 1);
                      *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                      *(int *)(puVar12 + 1) = iVar32 + 0x30;
                      *puVar12 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar3) * 0x100 +
                                    (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                  (ulonglong)bVar5) * 0x100 + (ulonglong)bVar7 <<
                                 ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                      goto LAB_830c265c;
                    }
                    iVar32 = fn_82C4E3B0(puVar12);
                  } while (iVar32 == 1);
                  uVar43 = (ulonglong)((int)sVar57 >> 4);
                }
                else {
LAB_830c265c:
                  uVar43 = (ulonglong)((int)sVar57 >> 4);
                }
              }
              uVar68 = uVar43 + 1;
              uVar48 = (longlong)((int)uVar68 >> 0x1f) + (ulonglong)(0x24 < uVar68);
              if (uVar48 != 0) {
                uVar68 = uVar43 - 0x24;
              }
              bVar2 = 0;
              bVar26 = false;
              iVar32 = (int)uVar68;
              if (iVar32 == 0) {
                uVar43 = 0;
              }
              else if (iVar32 < 0x23) {
                uVar29 = *(uint *)((int)((uVar68 & 0xffffffff) << 2) + param_2[3]);
                uVar43 = (ulonglong)(uint)((int)uVar29 >> 4) & 0xf;
                uVar68 = uVar43 + ((ulonglong)uVar29 & 0xf);
                if (uVar68 == 0) {
LAB_830c27d4:
                  uVar50 = 0;
                }
                else {
                  uVar40 = (ulonglong)*(uint *)(puVar12 + 1);
                  lVar44 = 0;
                  uVar50 = uVar40 + 0x10;
                  if ((0x20 < uVar68) || (uVar68 == 0)) goto LAB_830c27d4;
                  if ((uVar50 & 0xffffffff) < uVar68) {
                    do {
                      if ((uVar50 & 0xffffffff) == 0) break;
                      uVar68 = uVar68 - uVar50;
                      *(int *)(puVar12 + 1) = (int)(uVar40 - uVar50);
                      lVar44 = (ulonglong)
                               (uint)((int)(*puVar12 >> (0x40 - uVar50 & 0x7f)) <<
                                     ((uint)uVar68 & 0x3f)) + lVar44;
                      *puVar12 = *puVar12 << (uVar50 & 0x7f);
                      if ((longlong)(uVar40 - uVar50) < 0) {
                        fn_82C4E5E8(puVar12);
                      }
                      uVar40 = (ulonglong)*(uint *)(puVar12 + 1);
                      uVar50 = uVar40 + 0x10;
                    } while ((uVar50 & 0xffffffff) < (uVar68 & 0xffffffff));
                  }
                  *(int *)(puVar12 + 1) = (int)(uVar40 - uVar68);
                  uVar50 = (*puVar12 >> (0x40 - uVar68 & 0x7f) & 0xffffffff) + lVar44;
                  *puVar12 = *puVar12 << (uVar68 & 0x7f);
                  if ((longlong)(uVar40 - uVar68) < 0) {
                    fn_82C4E5E8(puVar12);
                  }
                }
                uVar30 = (int)uVar50 >> (int)uVar43;
                uVar50 = uVar50 & (ulonglong)(uint)((int)uVar29 >> 0x18) & 0xff;
                uVar43 = (ulonglong)uVar30 & 1;
                uVar68 = uVar50 & 1;
                uVar43 = (((longlong)((int)uVar50 >> 1) +
                           ((ulonglong)(uint)((int)uVar29 >> 0x10) & 0xff) ^ -uVar68) + uVar68 &
                         0xffff) << 0x10 |
                         ((longlong)((int)uVar30 >> 1) +
                          ((ulonglong)(uint)((int)uVar29 >> 8) & 0xff) ^ -uVar43) + uVar43 &
                         0xffffffff0000ffff;
              }
              else if (iVar32 == 0x24) {
                bVar2 = 1;
                bVar26 = true;
                uVar43 = 0;
              }
              else {
                lVar41 = 0;
                lVar44 = (ulonglong)*(ushort *)((int)param_2 + 0x46) -
                         (ulonglong)*(byte *)((int)param_2 + 0x1e);
                uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                lVar38 = (ulonglong)*(ushort *)(param_2 + 0x12) -
                         (ulonglong)*(byte *)((int)param_2 + 0x1e);
                uVar68 = uVar43 + 0x10;
                uVar40 = lVar38 + lVar44;
                if ((uVar40 & 0xffffffff) < 0x21) {
                  if ((uVar40 & 0xffffffff) == 0) {
                    uVar68 = 0;
                  }
                  else {
                    if ((uVar68 & 0xffffffff) < (uVar40 & 0xffffffff)) {
                      do {
                        if ((uVar68 & 0xffffffff) == 0) break;
                        uVar40 = uVar40 - uVar68;
                        *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
                        lVar41 = (ulonglong)
                                 (uint)((int)(*puVar12 >> (0x40 - uVar68 & 0x7f)) <<
                                       ((uint)uVar40 & 0x3f)) + lVar41;
                        *puVar12 = *puVar12 << (uVar68 & 0x7f);
                        if ((longlong)(uVar43 - uVar68) < 0) {
                          fn_82C4E5E8(puVar12);
                        }
                        uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                        uVar68 = uVar43 + 0x10;
                      } while ((uVar68 & 0xffffffff) < (uVar40 & 0xffffffff));
                    }
                    *(int *)(puVar12 + 1) = (int)(uVar43 - uVar40);
                    uVar68 = (*puVar12 >> (0x40 - uVar40 & 0x7f) & 0xffffffff) + lVar41;
                    *puVar12 = *puVar12 << (uVar40 & 0x7f);
                    if ((longlong)(uVar43 - uVar40) < 0) {
                      fn_82C4E5E8(puVar12);
                    }
                  }
                }
                else {
                  uVar68 = 0;
                }
                uVar29 = (uint)lVar38;
                uVar43 = ((ulonglong)(uint)(1 << (uVar29 & 0x3f)) - 1 & uVar68 & 0xffff) << 0x10 |
                         (longlong)((int)uVar68 >> (uVar29 & 0x3f)) &
                         (ulonglong)(uint)(1 << ((uint)lVar44 & 0x3f)) - 1 & 0xffffffff0000ffff;
              }
              uVar50 = (ulonglong)*(ushort *)(param_3 + 4);
              uVar60 = (ulonglong)*(ushort *)(param_2 + 9) + (ulonglong)*param_3;
              uVar9 = *(ushort *)((int)param_3 + 0x12);
              uVar40 = uVar50 & uStack_13c;
              uVar68 = (ulonglong)*(ushort *)((int)param_2 + 0x32);
              iVar32 = param_2[0x57];
              if ((int)uVar40 == 0) {
                uVar29 = 0;
                if (uVar9 != 0) {
                  uVar30 = *(uint *)((int)((uVar60 - 1 & 0xffffffff) << 2) + iVar32);
                  if (uVar30 != 0x4000) {
                    uVar64 = ((ulonglong)(uint)param_2[0x49] - (ulonglong)uVar30) +
                             ((ulonglong)param_3[4] & 0x7ffffff) * -0x20 |
                             (ulonglong)(uint)param_2[0x48] + ((ulonglong)uVar30 & 0x8000) * -2 +
                             (ulonglong)uVar30 + ((ulonglong)param_3[4] & 0x7ffffff) * 0x20;
                    uVar40 = (uVar64 & 0xffff8000) << 0x20 | uVar64 & 0x80008000;
                    uVar29 = uVar30;
                    if ((uVar64 & 0x80008000) != 0) {
                      sVar57 = (short)uVar30;
                      uVar29 = (uint)sVar57;
                      uVar64 = (ulonglong)((int)uVar30 >> 0x10);
                      iVar37 = (uint)uVar9 * 0x20 + (int)sVar57;
                      iVar31 = (uint)*(ushort *)((int)param_2 + 0x32) * 0x20 + -4;
                      lVar44 = (ulonglong)*(ushort *)(param_2 + 0xd) * 0x20 + -4;
                      lVar38 = uVar50 * 0x20 + uVar64;
                      if (iVar37 < -0x3c) {
                        uVar29 = (sVar57 - iVar37) - 0x3c;
                      }
                      else if (iVar31 < iVar37) {
                        uVar29 = (iVar31 - iVar37) + (int)sVar57;
                      }
                      if ((int)lVar38 < -0x3c) {
                        uVar64 = (uVar64 - lVar38) - 0x3c;
                      }
                      else if ((int)lVar44 < (int)lVar38) {
                        uVar64 = (lVar44 - lVar38) + uVar64;
                      }
                      uVar29 = (uint)((uVar64 & 0xffffffff) << 0x10) | uVar29 & 0xffff;
                    }
                  }
                }
                if (!bVar26) {
                  iVar31 = (int)uVar29 >> 0x10;
                  lVar44 = (longlong)(short)uVar29;
                  goto LAB_830c2d8c;
                }
LAB_830c2d78:
                uVar29 = 0x4000;
                *(undefined4 *)((int)((uVar60 & 0xffffffff) << 2) + iVar32) = 0x4000;
              }
              else {
                uVar64 = 0;
                if (uVar9 != 0) {
                  uVar64 = (ulonglong)*(uint *)((int)((uVar60 - 1 & 0xffffffff) << 2) + iVar32);
                }
                uVar29 = *(uint *)((int)((uVar60 - uVar68 & 0xffffffff) << 2) + iVar32);
                uVar45 = (ulonglong)uVar29;
                uVar30 = *(uint *)((int)(((longlong)*(char *)(param_2[0x4c] + 4) + (uVar60 - uVar68)
                                         & 0xffffffff) << 2) + iVar32);
                uVar51 = (ulonglong)uVar30;
                uVar40 = (ulonglong)(uVar30 >> 1 ^ uVar30);
                lVar44 = (uVar40 & 0x4000) + ((ulonglong)(uVar29 >> 1 ^ uVar29) & 0x4000) +
                         ((uVar64 >> 1 ^ uVar64) & 0x4000);
                if (lVar44 == 0) {
LAB_830c2ae0:
                  uVar21 = (uint)uVar45;
                  uVar63 = (uint)uVar51;
                  uVar29 = (uint)uVar64;
                  uVar34 = uVar63 - uVar29 ^ uVar63 - uVar21;
                  uVar33 = uVar29 - uVar21 ^ uVar63 - uVar21;
                  uVar61 = (uVar51 & 0xffff) << 0x10;
                  uVar51 = (uVar64 & 0xffff) << 0x10;
                  uVar40 = (uVar45 & 0xffff) << 0x10;
                  iVar36 = (int)uVar40;
                  iVar37 = (int)uVar61;
                  uVar30 = iVar37 - iVar36;
                  iVar31 = (int)uVar51;
                  uVar39 = iVar37 - iVar31 ^ uVar30;
                  uVar30 = iVar31 - iVar36 ^ uVar30;
                  uVar61 = (longlong)((int)uVar39 >> 0x1f) & uVar61 |
                           ~(longlong)((int)(uVar39 | uVar30) >> 0x1f) & uVar51 |
                           (longlong)((int)uVar30 >> 0x1f) & uVar40;
                  uVar40 = uVar61 >> 0x10;
                  uVar51 = uVar40 | ((ulonglong)
                                     (uint)((int)((int)uVar34 >> 0x1f & uVar63 |
                                                  ~((int)(uVar34 | uVar33) >> 0x1f) & uVar29 |
                                                 (int)uVar33 >> 0x1f & uVar21) >> 0x10) & 0xffff) <<
                                    0x10;
                  uVar40 = ((uint)param_2[0x49] - uVar51) +
                           ((ulonglong)param_3[4] & 0x7ffffff) * -0x20 |
                           (ulonglong)(uint)param_2[0x48] + (uVar40 & 0x8000) * -2 + uVar51 +
                           ((ulonglong)param_3[4] & 0x7ffffff) * 0x20;
                  if ((uVar40 & 0x80008000) != 0) {
                    uVar61 = (ulonglong)(short)(uVar61 >> 0x10);
                    uVar51 = (ulonglong)((int)uVar51 >> 0x10);
                    lVar38 = (ulonglong)uVar9 * 0x20 + uVar61;
                    uVar68 = uVar68 * 0x20 - 4;
                    uVar40 = (ulonglong)*(ushort *)(param_2 + 0xd) * 0x20 - 4;
                    lVar44 = uVar50 * 0x20 + uVar51;
                    if ((int)lVar38 < -0x3c) {
                      uVar61 = (uVar61 - lVar38) - 0x3c;
                    }
                    else if ((int)uVar68 < (int)lVar38) {
                      uVar61 = (uVar68 - lVar38) + uVar61;
                    }
                    if ((int)lVar44 < -0x3c) {
                      uVar51 = (uVar51 - lVar44) - 0x3c;
                    }
                    else if ((int)uVar40 < (int)lVar44) {
                      uVar51 = (uVar40 - lVar44) + uVar51;
                    }
                    uVar51 = (uVar51 & 0xffff) << 0x10 | uVar61 & 0xffffffff0000ffff;
                  }
                }
                else {
                  if ((int)lVar44 == 0x4000) {
                    if (uVar45 == 0x4000) {
                      uVar45 = 0;
                    }
                    else if (uVar51 == 0x4000) {
                      uVar51 = 0;
                    }
                    else if (uVar64 == 0x4000) {
                      uVar64 = 0;
                    }
                    goto LAB_830c2ae0;
                  }
                  uVar51 = 0;
                  uVar68 = -(uVar64 - 0x4000);
                  uVar45 = -(ulonglong)(uVar45 != 0x4000) & uVar45;
                  uVar64 = -(ulonglong)(uVar64 - 0x4000 != 0) & uVar64;
                }
                iVar31 = (int)uVar51 >> 0x10;
                iVar37 = (int)((uVar51 & 0xffff) << 0x10);
                if ((uVar9 == 0) || (bVar26)) {
                  if (bVar26) goto LAB_830c2d78;
                }
                else {
                  iVar36 = iVar37 - (int)(uVar64 << 0x10);
                  uVar63 = iVar31 - ((int)uVar64 >> 0x10);
                  uVar29 = (int)uVar63 >> 0x1f;
                  uVar30 = iVar36 >> 0x1f;
                  if ((0x20 < (int)(((uVar63 ^ uVar29) - uVar29) +
                                   ((iVar36 >> 0x10 ^ uVar30) - uVar30))) ||
                     (iVar36 = iVar37 - (int)(uVar45 << 0x10),
                     uVar63 = iVar31 - ((int)uVar45 >> 0x10), uVar29 = (int)uVar63 >> 0x1f,
                     uVar30 = iVar36 >> 0x1f,
                     0x20 < (int)(((uVar63 ^ uVar29) - uVar29) +
                                 ((iVar36 >> 0x10 ^ uVar30) - uVar30)))) {
                    plVar13 = (longlong *)*param_2;
                    lVar44 = *plVar13;
                    uVar29 = *(uint *)(plVar13 + 1);
                    *plVar13 = lVar44 << 1;
                    *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                    if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    iVar32 = param_2[0x57];
                    psVar46 = (short *)((int)((uVar60 - *(ushort *)
                                                         ((0x13 - (int)(lVar44 >> 0x3f)) * 2 +
                                                         (int)param_2) & 0xffffffff) << 2) + iVar32)
                    ;
                    sVar57 = psVar46[1];
                    lVar44 = (longlong)sVar57;
                    iVar31 = (int)*psVar46;
                    if (sVar57 == 0x4000) {
                      iVar31 = 0;
                      lVar44 = 0;
                    }
                    goto LAB_830c2d8c;
                  }
                }
                lVar44 = (longlong)(iVar37 >> 0x10);
LAB_830c2d8c:
                uVar40 = (ulonglong)
                         (((uint)uVar43 & 0xffff) << (*(byte *)((int)param_2 + 0x1e) & 0x3f)) +
                         (ulonglong)*(ushort *)((int)param_2 + 0x3e) + lVar44;
                uVar68 = (uVar60 & 0x3fffffff) << 2;
                uVar29 = (((((uint)(uVar43 >> 0x10) & 0xffff) <<
                           (*(byte *)((int)param_2 + 0x1e) & 0x3f)) +
                           (uint)*(ushort *)(param_2 + 0x10) + iVar31 &
                          (uint)*(ushort *)(param_2 + 0x11)) - (uint)*(ushort *)(param_2 + 0x10)) *
                         0x10000 | ((uint)uVar40 & (uint)*(ushort *)((int)param_2 + 0x42)) -
                                   (uint)*(ushort *)((int)param_2 + 0x3e) & 0xffff;
                *(uint *)((int)uVar68 + iVar32) = uVar29;
              }
              *puVar35 = uVar29;
              uVar29 = (uint)bVar2;
              if ((uVar48 & 1) == 0) {
                uVar30 = *puVar58;
                *puVar58 = uVar30 | 0x40000000;
                if (*(char *)((int)param_2 + 0x1b) != '\0') {
                  if (!bVar26) goto LAB_830c378c;
                  if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                    puVar12 = (ulonglong *)*param_2;
                    lVar44 = 0;
                    uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                    uVar48 = uVar43 + 0x10;
                    if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                      uVar68 = 3;
                      if ((uVar48 & 0xffffffff) < 3) {
                        do {
                          if ((uVar48 & 0xffffffff) == 0) break;
                          uVar68 = uVar68 - uVar48;
                          *(int *)(puVar12 + 1) = (int)(uVar43 - uVar48);
                          lVar44 = (ulonglong)
                                   (uint)((int)(*puVar12 >> (0x40 - uVar48 & 0x7f)) <<
                                         ((uint)uVar68 & 0x3f)) + lVar44;
                          *puVar12 = *puVar12 << (uVar48 & 0x7f);
                          if ((longlong)(uVar43 - uVar48) < 0) {
                            fn_82C4E5E8(puVar12);
                          }
                          uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                          uVar48 = uVar43 + 0x10;
                        } while ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff));
                      }
                      *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
                      lVar44 = (*puVar12 >> (0x40 - uVar68 & 0x7f) & 0xffffffff) + lVar44;
                      *puVar12 = *puVar12 << (uVar68 & 0x7f);
                      if ((longlong)(uVar43 - uVar68) < 0) {
                        fn_82C4E5E8(puVar12);
                      }
                      if ((int)lVar44 == 7) {
                        puVar12 = (ulonglong *)*param_2;
                        uVar68 = 5;
                        lVar44 = 0;
                        uVar48 = (ulonglong)*(uint *)(puVar12 + 1);
                        uVar43 = uVar48 + 0x10;
                        if ((uVar43 & 0xffffffff) < 5) {
                          do {
                            if ((uVar43 & 0xffffffff) == 0) break;
                            uVar68 = uVar68 - uVar43;
                            *(int *)(puVar12 + 1) = (int)(uVar48 - uVar43);
                            lVar44 = (ulonglong)
                                     (uint)((int)(*puVar12 >> (0x40 - uVar43 & 0x7f)) <<
                                           ((uint)uVar68 & 0x3f)) + lVar44;
                            *puVar12 = *puVar12 << (uVar43 & 0x7f);
                            if ((longlong)(uVar48 - uVar43) < 0) {
                              fn_82C4E5E8(puVar12);
                            }
                            uVar48 = (ulonglong)*(uint *)(puVar12 + 1);
                            uVar43 = uVar48 + 0x10;
                          } while ((uVar43 & 0xffffffff) < (uVar68 & 0xffffffff));
                        }
                        *(int *)(puVar12 + 1) = (int)(uVar48 - uVar68);
                        uVar43 = (*puVar12 >> (0x40 - uVar68 & 0x7f) & 0xffffffff) + lVar44;
                        *puVar12 = *puVar12 << (uVar68 & 0x7f);
                        if ((longlong)(uVar48 - uVar68) < 0) {
                          fn_82C4E5E8(puVar12);
                        }
                      }
                      else {
                        uVar43 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar44;
                      }
                      *(char *)(puVar58 + 1) = (char)((uVar43 & 0xffffffff) << 1) + -1;
                    }
                    else {
                      uVar68 = 1;
                      if ((uVar48 & 0xffffffff) == 0) {
                        do {
                          if ((uVar48 & 0xffffffff) == 0) break;
                          uVar68 = uVar68 - uVar48;
                          *(int *)(puVar12 + 1) = (int)(uVar43 - uVar48);
                          lVar44 = (ulonglong)
                                   (uint)((int)(*puVar12 >> (0x40 - uVar48 & 0x7f)) <<
                                         ((uint)uVar68 & 0x3f)) + lVar44;
                          *puVar12 = *puVar12 << (uVar48 & 0x7f);
                          if ((longlong)(uVar43 - uVar48) < 0) {
                            fn_82C4E5E8(puVar12);
                          }
                          uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                          uVar48 = uVar43 + 0x10;
                        } while ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff));
                      }
                      uVar48 = *puVar12;
                      *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
                      *puVar12 = uVar48 << (uVar68 & 0x7f);
                      if ((longlong)(uVar43 - uVar68) < 0) {
                        fn_82C4E5E8(puVar12);
                      }
                      if (((uVar48 >> (0x40 - uVar68 & 0x7f) & 0xffffffff) + lVar44 & 0xffffffff) ==
                          0) {
                        *(char *)(puVar58 + 1) =
                             *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                             -1;
                      }
                      else {
                        *(char *)(puVar58 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                      }
                    }
                  }
                  else if (((uint)*(byte *)((int)param_2 + 0x4dd) & uVar30 >> 0xc & 0xf) == 0) {
                    *(char *)(puVar58 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar58 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                  if (*(byte *)(puVar58 + 1) == 0) {
                    return 1;
                  }
                  if (0x3e < *(byte *)(puVar58 + 1)) {
                    return 1;
                  }
                }
                if (bVar26) {
                  puVar12 = (ulonglong *)*param_2;
                  uVar43 = *puVar12;
                  uVar30 = *(uint *)(puVar12 + 1);
                  *puVar12 = uVar43 << 1;
                  *(int *)(puVar12 + 1) = (int)((ulonglong)uVar30 - 1);
                  if ((longlong)((ulonglong)uVar30 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  *puVar58 = (uint)((uVar43 >> 0x3f) << 3) | *puVar58 & 0xffffffe7;
                }
              }
              else {
                cVar1 = *(char *)(param_2 + 7);
                if ((*(char *)((int)param_2 + 0x1d) == '\0') || (bVar26)) {
                  bVar22 = false;
                  if (bVar26) {
                    puVar12 = (ulonglong *)*param_2;
                    uVar43 = *puVar12;
                    uVar30 = *(uint *)(puVar12 + 1);
                    *puVar12 = uVar43 << 1;
                    *(int *)(puVar12 + 1) = (int)((ulonglong)uVar30 - 1);
                    if ((longlong)((ulonglong)uVar30 - 1) < 0) {
                      fn_82C4E5E8(puVar12,uVar40,uVar68);
                    }
                    *puVar58 = (uint)((uVar43 >> 0x3f) << 3) | *puVar58 & 0xffffffe7;
                  }
                }
                else {
                  bVar22 = true;
                }
                puVar12 = (ulonglong *)*param_2;
                iVar32 = *(int *)param_2[0x59];
                sVar57 = *(short *)((int)((*puVar12 >> 0x38) << 1) + iVar32);
                uVar43 = (ulonglong)sVar57;
                if (sVar57 < 0) {
                  fn_82C4E470(puVar12,8);
                  do {
                    uVar48 = *puVar12;
                    fn_82C4E470(puVar12,1);
                    sVar57 = *(short *)((int)(((uVar43 - ((longlong)uVar48 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar32);
                    uVar43 = (ulonglong)sVar57;
                  } while (sVar57 < 0);
                }
                else {
                  iVar32 = *(int *)(puVar12 + 1);
                  iVar31 = (int)(uVar43 & 0xf);
                  *puVar12 = *puVar12 << (uVar43 & 0xf);
                  *(int *)(puVar12 + 1) = iVar32 - iVar31;
                  if (iVar32 < iVar31) {
                    do {
                      pbVar19 = *(byte **)((int)puVar12 + 0xc);
                      if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                        bVar2 = *pbVar19;
                        bVar3 = pbVar19[1];
                        bVar4 = pbVar19[2];
                        bVar5 = pbVar19[4];
                        bVar6 = pbVar19[3];
                        bVar7 = pbVar19[5];
                        iVar32 = *(int *)(puVar12 + 1);
                        *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                        *(int *)(puVar12 + 1) = iVar32 + 0x30;
                        *puVar12 = ((((((ulonglong)bVar3 + (ulonglong)bVar2 * 0x100) * 0x100 +
                                      (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                    (ulonglong)bVar5) * 0x100 + (ulonglong)bVar7 <<
                                   ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                        goto LAB_830c3260;
                      }
                      iVar32 = fn_82C4E3B0(puVar12);
                    } while (iVar32 == 1);
                    uVar43 = (ulonglong)((int)sVar57 >> 4);
                  }
                  else {
LAB_830c3260:
                    uVar43 = (ulonglong)((int)sVar57 >> 4);
                  }
                }
                puVar12 = (ulonglong *)*param_2;
                uVar59 = (undefined1)uVar43;
                if (*(int *)((int)puVar12 + 0x14) != 0) {
                  return 1;
                }
                if (*(char *)((int)param_2 + 0x1b) != '\0') {
                  if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                    lVar44 = 0;
                    uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                    uVar48 = uVar43 + 0x10;
                    if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                      uVar68 = 3;
                      if ((uVar48 & 0xffffffff) < 3) {
                        do {
                          if ((uVar48 & 0xffffffff) == 0) break;
                          uVar68 = uVar68 - uVar48;
                          *(int *)(puVar12 + 1) = (int)(uVar43 - uVar48);
                          lVar44 = (ulonglong)
                                   (uint)((int)(*puVar12 >> (0x40 - uVar48 & 0x7f)) <<
                                         ((uint)uVar68 & 0x3f)) + lVar44;
                          *puVar12 = *puVar12 << (uVar48 & 0x7f);
                          if ((longlong)(uVar43 - uVar48) < 0) {
                            fn_82C4E5E8(puVar12);
                          }
                          uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                          uVar48 = uVar43 + 0x10;
                        } while ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff));
                      }
                      *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
                      lVar44 = (*puVar12 >> (0x40 - uVar68 & 0x7f) & 0xffffffff) + lVar44;
                      *puVar12 = *puVar12 << (uVar68 & 0x7f);
                      if ((longlong)(uVar43 - uVar68) < 0) {
                        fn_82C4E5E8(puVar12);
                      }
                      if ((int)lVar44 == 7) {
                        puVar12 = (ulonglong *)*param_2;
                        uVar68 = 5;
                        lVar44 = 0;
                        uVar48 = (ulonglong)*(uint *)(puVar12 + 1);
                        uVar43 = uVar48 + 0x10;
                        if ((uVar43 & 0xffffffff) < 5) {
                          do {
                            if ((uVar43 & 0xffffffff) == 0) break;
                            uVar68 = uVar68 - uVar43;
                            *(int *)(puVar12 + 1) = (int)(uVar48 - uVar43);
                            lVar44 = (ulonglong)
                                     (uint)((int)(*puVar12 >> (0x40 - uVar43 & 0x7f)) <<
                                           ((uint)uVar68 & 0x3f)) + lVar44;
                            *puVar12 = *puVar12 << (uVar43 & 0x7f);
                            if ((longlong)(uVar48 - uVar43) < 0) {
                              fn_82C4E5E8(puVar12);
                            }
                            uVar48 = (ulonglong)*(uint *)(puVar12 + 1);
                            uVar43 = uVar48 + 0x10;
                          } while ((uVar43 & 0xffffffff) < (uVar68 & 0xffffffff));
                        }
                        *(int *)(puVar12 + 1) = (int)(uVar48 - uVar68);
                        uVar43 = (*puVar12 >> (0x40 - uVar68 & 0x7f) & 0xffffffff) + lVar44;
                        *puVar12 = *puVar12 << (uVar68 & 0x7f);
                        if ((longlong)(uVar48 - uVar68) < 0) {
                          fn_82C4E5E8(puVar12);
                        }
                      }
                      else {
                        uVar43 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar44;
                      }
                      *(char *)(puVar58 + 1) = (char)((uVar43 & 0xffffffff) << 1) + -1;
                    }
                    else {
                      uVar68 = 1;
                      if ((uVar48 & 0xffffffff) == 0) {
                        do {
                          if ((uVar48 & 0xffffffff) == 0) break;
                          uVar68 = uVar68 - uVar48;
                          *(int *)(puVar12 + 1) = (int)(uVar43 - uVar48);
                          lVar44 = (ulonglong)
                                   (uint)((int)(*puVar12 >> (0x40 - uVar48 & 0x7f)) <<
                                         ((uint)uVar68 & 0x3f)) + lVar44;
                          *puVar12 = *puVar12 << (uVar48 & 0x7f);
                          if ((longlong)(uVar43 - uVar48) < 0) {
                            fn_82C4E5E8(puVar12);
                          }
                          uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                          uVar48 = uVar43 + 0x10;
                        } while ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff));
                      }
                      uVar48 = *puVar12;
                      *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
                      *puVar12 = uVar48 << (uVar68 & 0x7f);
                      if ((longlong)(uVar43 - uVar68) < 0) {
                        fn_82C4E5E8(puVar12);
                      }
                      if (((uVar48 >> (0x40 - uVar68 & 0x7f) & 0xffffffff) + lVar44 & 0xffffffff) ==
                          0) {
                        *(char *)(puVar58 + 1) =
                             *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                             -1;
                      }
                      else {
                        *(char *)(puVar58 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                      }
                    }
                  }
                  else if ((*puVar58 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
                    *(char *)(puVar58 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar58 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                  if (*(byte *)(puVar58 + 1) == 0) {
                    return 1;
                  }
                  if (0x3e < *(byte *)(puVar58 + 1)) {
                    return 1;
                  }
                }
                *puVar58 = *puVar58 & 0xbfffffff;
                if (cVar1 != '\0') {
                  plVar13 = (longlong *)*param_2;
                  lVar38 = *plVar13;
                  uVar30 = *(uint *)(plVar13 + 1);
                  lVar44 = -(lVar38 >> 0x3f);
                  *plVar13 = lVar38 << 1;
                  *(int *)(plVar13 + 1) = (int)((ulonglong)uVar30 - 1);
                  if ((longlong)((ulonglong)uVar30 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  if (lVar38 < 0) {
                    plVar13 = (longlong *)*param_2;
                    lVar38 = *plVar13;
                    uVar30 = *(uint *)(plVar13 + 1);
                    *plVar13 = lVar38 << 1;
                    *(int *)(plVar13 + 1) = (int)((ulonglong)uVar30 - 1);
                    if ((longlong)((ulonglong)uVar30 - 1) < 0) {
                      fn_82C4E5E8();
                    }
                    lVar44 = lVar44 - (lVar38 >> 0x3f);
                  }
                  *puVar58 = (uint)(lVar44 << 0x16) | *puVar58 & 0xff3fffff;
                }
                if (bVar22) {
                  puVar12 = (ulonglong *)*param_2;
                  iVar32 = *(int *)param_2[0x5a];
                  sVar57 = *(short *)((int)((*puVar12 >> 0x38) << 1) + iVar32);
                  uVar43 = (ulonglong)sVar57;
                  if (sVar57 < 0) {
                    fn_82C4E470(puVar12,8);
                    do {
                      uVar48 = *puVar12;
                      fn_82C4E470(puVar12,1);
                      sVar57 = *(short *)((int)(((uVar43 - ((longlong)uVar48 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar32);
                      uVar43 = (ulonglong)sVar57;
                    } while (sVar57 < 0);
                  }
                  else {
                    iVar32 = *(int *)(puVar12 + 1);
                    iVar31 = (int)(uVar43 & 0xf);
                    *puVar12 = *puVar12 << (uVar43 & 0xf);
                    *(int *)(puVar12 + 1) = iVar32 - iVar31;
                    if (iVar32 < iVar31) {
                      do {
                        pbVar19 = *(byte **)((int)puVar12 + 0xc);
                        if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                          bVar2 = *pbVar19;
                          bVar3 = pbVar19[1];
                          bVar4 = pbVar19[2];
                          bVar5 = pbVar19[4];
                          bVar6 = pbVar19[3];
                          bVar7 = pbVar19[5];
                          iVar32 = *(int *)(puVar12 + 1);
                          *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                          *(int *)(puVar12 + 1) = iVar32 + 0x30;
                          *puVar12 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar3) * 0x100 +
                                        (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                      (ulonglong)bVar5) * 0x100 + (ulonglong)bVar7 <<
                                     ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                          goto LAB_830c36e8;
                        }
                        iVar32 = fn_82C4E3B0(puVar12);
                      } while (iVar32 == 1);
                      uVar43 = (ulonglong)((int)sVar57 >> 4);
                    }
                    else {
LAB_830c36e8:
                      uVar43 = (ulonglong)((int)sVar57 >> 4);
                    }
                  }
                  if (*(int *)(*param_2 + 0x14) != 0) {
                    return 1;
                  }
                  uVar30 = *puVar58;
                  uVar63 = (uint)uVar43 & 7;
                  uVar34 = (uint)((((~uVar43 & 0xffffffff) >> 0x1f) + (ulonglong)(7 < uVar43) & 1)
                                 << 0x1c);
                  *puVar58 = uVar34 | uVar30 & 0xefffffff;
                  uVar21 = (*(byte *)((int)param_2 + uVar63 + 0x2ac) & 7) << 0x18;
                  *puVar58 = uVar21 | uVar34 | uVar30 & 0xe8ffffff;
                  *puVar58 = (*(byte *)((int)param_2 + uVar63 + 0x2b4) & 3) << 0x14 |
                             uVar21 | uVar34 | uVar30 & 0xe0cfffff;
                }
              }
LAB_830c378c:
              *(undefined1 *)((int)puVar58 + 5) = uVar59;
            }
            else {
              *(undefined1 *)((int)puVar58 + 5) = 0;
              iVar32 = param_2[0x57];
              uVar9 = *(ushort *)(param_3 + 4);
              uVar29 = (uint)uVar9;
              uVar48 = (ulonglong)*(ushort *)(param_2 + 9) + (ulonglong)*param_3;
              uVar10 = *(ushort *)((int)param_3 + 0x12);
              uVar43 = (ulonglong)*(ushort *)((int)param_2 + 0x32);
              if ((uVar29 & uStack_13c) == 0) {
                uVar30 = 0;
                if (((uVar10 != 0) &&
                    (uVar63 = *(uint *)((int)((uVar48 - 1 & 0xffffffff) << 2) + iVar32),
                    uVar63 != 0x4000)) &&
                   (uVar30 = uVar63,
                   (((param_2[0x49] - uVar63) + (param_3[4] & 0x7ffffff) * -0x20 |
                    param_2[0x48] + (uVar63 & 0x8000) * -2 + uVar63 + param_3[4] * 0x20) &
                   0x80008000) != 0)) {
                  uVar40 = (ulonglong)(short)uVar63;
                  uVar68 = (ulonglong)((int)uVar63 >> 0x10);
                  lVar49 = (ulonglong)uVar10 * 0x20 + uVar40;
                  lVar38 = uVar43 * 0x20 + -4;
                  lVar44 = (ulonglong)*(ushort *)(param_2 + 0xd) * 0x20 + -4;
                  lVar41 = ((ulonglong)CONCAT24(uVar9,uVar29) & 0x7ffffff) * 0x20 + uVar68;
                  if ((int)lVar49 < -0x3c) {
                    uVar40 = (uVar40 - lVar49) - 0x3c;
                  }
                  else if ((int)lVar38 < (int)lVar49) {
                    uVar40 = (lVar38 - lVar49) + uVar40;
                  }
                  if ((int)lVar41 < -0x3c) {
                    iVar31 = (int)((uint)(((uVar68 - lVar41) - 0x3c & 0xffffffff) << 0x10) |
                                  (uint)(uVar40 & 0xffffffff0000ffff)) >> 0x10;
                    iVar37 = (int)(short)(uVar40 & 0xffffffff0000ffff);
                    goto LAB_830c252c;
                  }
                  if ((int)lVar44 < (int)lVar41) {
                    uVar68 = (lVar44 - lVar41) + uVar68;
                  }
                  uVar30 = (uint)((uVar68 & 0xffffffff) << 0x10) | (uint)uVar40 & 0xffff;
                }
                iVar31 = (int)uVar30 >> 0x10;
                iVar37 = (int)(short)uVar30;
              }
              else {
                uVar68 = 0;
                if (uVar10 != 0) {
                  uVar68 = (ulonglong)*(uint *)((int)((uVar48 - 1 & 0xffffffff) << 2) + iVar32);
                }
                uVar30 = *(uint *)((int)((uVar48 - uVar43 & 0xffffffff) << 2) + iVar32);
                uVar40 = (ulonglong)uVar30;
                uVar63 = *(uint *)((int)(((longlong)*(char *)(param_2[0x4c] + 4) + (uVar48 - uVar43)
                                         & 0xffffffff) << 2) + iVar32);
                uVar50 = (ulonglong)uVar63;
                lVar44 = ((ulonglong)(uVar63 >> 1 ^ uVar63) & 0x4000) +
                         ((ulonglong)(uVar30 >> 1 ^ uVar30) & 0x4000) +
                         ((uVar68 >> 1 ^ uVar68) & 0x4000);
                if (lVar44 == 0) {
LAB_830c22b8:
                  uVar34 = (uint)uVar40;
                  uVar21 = (uint)uVar50;
                  uVar30 = (uint)uVar68;
                  uVar33 = uVar21 - uVar30 ^ uVar21 - uVar34;
                  uVar39 = uVar30 - uVar34 ^ uVar21 - uVar34;
                  uVar64 = (uVar50 & 0xffff) << 0x10;
                  uVar60 = (uVar68 & 0xffff) << 0x10;
                  uVar50 = (uVar40 & 0xffff) << 0x10;
                  iVar36 = (int)uVar50;
                  iVar37 = (int)uVar64;
                  uVar63 = iVar37 - iVar36;
                  iVar31 = (int)uVar60;
                  uVar54 = iVar37 - iVar31 ^ uVar63;
                  uVar63 = iVar31 - iVar36 ^ uVar63;
                  uVar64 = (longlong)((int)uVar54 >> 0x1f) & uVar64 |
                           ~(longlong)((int)(uVar54 | uVar63) >> 0x1f) & uVar60 |
                           (longlong)((int)uVar63 >> 0x1f) & uVar50;
                  uVar50 = uVar64 >> 0x10;
                  uVar60 = uVar50 | ((ulonglong)
                                     (uint)((int)(~((int)(uVar33 | uVar39) >> 0x1f) & uVar30 |
                                                  (int)uVar33 >> 0x1f & uVar21 |
                                                 (int)uVar39 >> 0x1f & uVar34) >> 0x10) & 0xffff) <<
                                    0x10;
                  if (((((uint)param_2[0x49] - uVar60) + ((ulonglong)param_3[4] & 0x7ffffff) * -0x20
                       | (ulonglong)(uint)param_2[0x48] + (uVar50 & 0x8000) * -2 + uVar60 +
                         ((ulonglong)param_3[4] & 0x7ffffff) * 0x20) & 0x80008000) != 0) {
                    uVar64 = (ulonglong)(short)(uVar64 >> 0x10);
                    uVar50 = (ulonglong)((int)uVar60 >> 0x10);
                    lVar49 = (ulonglong)uVar10 * 0x20 + uVar64;
                    lVar38 = uVar43 * 0x20 + -4;
                    lVar44 = (ulonglong)*(ushort *)(param_2 + 0xd) * 0x20 + -4;
                    lVar41 = ((ulonglong)CONCAT24(uVar9,uVar29) & 0x7ffffff) * 0x20 + uVar50;
                    if ((int)lVar49 < -0x3c) {
                      uVar64 = (uVar64 - lVar49) - 0x3c;
                    }
                    else if ((int)lVar38 < (int)lVar49) {
                      uVar64 = (lVar38 - lVar49) + uVar64;
                    }
                    if ((int)lVar41 < -0x3c) {
                      uVar50 = (uVar50 - lVar41) - 0x3c;
                    }
                    else if ((int)lVar44 < (int)lVar41) {
                      uVar50 = (lVar44 - lVar41) + uVar50;
                    }
                    uVar60 = (uVar50 & 0xffff) << 0x10 | uVar64 & 0xffffffff0000ffff;
                  }
                }
                else {
                  if ((int)lVar44 == 0x4000) {
                    if (uVar40 == 0x4000) {
                      uVar40 = 0;
                    }
                    else if (uVar50 == 0x4000) {
                      uVar50 = 0;
                    }
                    else if (uVar68 == 0x4000) {
                      uVar68 = 0;
                    }
                    goto LAB_830c22b8;
                  }
                  uVar60 = 0;
                  uVar40 = -(ulonglong)(uVar40 != 0x4000) & uVar40;
                  uVar68 = -(ulonglong)(uVar68 != 0x4000) & uVar68;
                }
                iVar31 = (int)uVar60 >> 0x10;
                iVar37 = (int)((uVar60 & 0xffff) << 0x10);
                if ((uVar10 == 0) ||
                   ((iVar36 = iVar37 - (int)(uVar68 << 0x10),
                    uVar63 = iVar31 - ((int)uVar68 >> 0x10), uVar29 = (int)uVar63 >> 0x1f,
                    uVar30 = iVar36 >> 0x1f,
                    (int)(((uVar63 ^ uVar29) - uVar29) + ((iVar36 >> 0x10 ^ uVar30) - uVar30)) <
                    0x21 && (iVar36 = iVar37 - (int)(uVar40 << 0x10),
                            uVar63 = iVar31 - ((int)uVar40 >> 0x10), uVar29 = (int)uVar63 >> 0x1f,
                            uVar30 = iVar36 >> 0x1f,
                            (int)(((uVar63 ^ uVar29) - uVar29) +
                                 ((iVar36 >> 0x10 ^ uVar30) - uVar30)) < 0x21)))) {
                  iVar37 = iVar37 >> 0x10;
                }
                else {
                  plVar13 = (longlong *)*param_2;
                  lVar44 = *plVar13;
                  uVar29 = *(uint *)(plVar13 + 1);
                  *plVar13 = lVar44 << 1;
                  *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                  if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                    fn_82C4E5E8();
                  }
                  iVar32 = param_2[0x57];
                  psVar46 = (short *)((int)((uVar48 - *(ushort *)
                                                       ((0x13 - (int)(lVar44 >> 0x3f)) * 2 +
                                                       (int)param_2) & 0xffffffff) << 2) + iVar32);
                  sVar57 = psVar46[1];
                  iVar37 = (int)sVar57;
                  iVar31 = (int)*psVar46;
                  if (sVar57 == 0x4000) {
                    iVar31 = 0;
                    iVar37 = 0;
                  }
                }
              }
LAB_830c252c:
              uVar29 = 0;
              bVar26 = false;
              iVar36 = 0 << (*(byte *)((int)param_2 + 0x1e) & 0x3f);
              uVar30 = ((iVar36 + (uint)*(ushort *)(param_2 + 0x10) + iVar31 &
                        (uint)*(ushort *)(param_2 + 0x11)) - (uint)*(ushort *)(param_2 + 0x10)) *
                       0x10000 | (iVar36 + (uint)*(ushort *)((int)param_2 + 0x3e) + iVar37 &
                                 (uint)*(ushort *)((int)param_2 + 0x42)) -
                                 (uint)*(ushort *)((int)param_2 + 0x3e) & 0xffff;
              *(uint *)((int)((uVar48 & 0xffffffff) << 2) + iVar32) = uVar30;
              *puVar35 = uVar30;
            }
            uStack_104 = -uVar29 & 0x3f;
            puVar55 = (undefined4 *)(*param_3 * 4 + param_2[0x57]);
            uVar14 = *puVar55;
            puVar55 = puVar55 + 1;
            *puVar55 = uVar14;
            uVar9 = *(ushort *)((int)param_2 + 0x32);
            puVar55[uVar9] = uVar14;
            (puVar55 + uVar9)[-1] = uVar14;
            iVar32 = *(int *)(*param_2 + 0x14);
          }
          if (iVar32 != 0) {
            return 1;
          }
          *(uint *)(param_3[1] * 4 + param_2[0x58]) = (uint)bVar26 << 0xe;
          if (((*(byte *)((int)puVar58 + 5) != 0) || (uVar18 == 0)) || (bVar26)) {
            uVar29 = *puVar58;
            uStack_fc = uVar29 >> 0x14 & 3;
            uStack_ac = uVar29 >> 0x1c & 1;
            uStack_f4 = (uint)*(byte *)((int)param_2 + 0x1d);
            uStack_110 = (uint)*(byte *)((int)param_2 + 0x22);
            uStack_120 = (uint)*(byte *)((int)puVar58 + 5);
            uStack_118 = 0;
            if (*(char *)(param_2 + 7) == '\0') {
              piStack_128 = param_2 + 0x65;
              piStack_f0 = param_2 + 0x68;
            }
            else {
              uVar30 = uVar29 >> 0x14 & 0xc;
              piStack_128 = (int *)(param_2[99] + uVar30);
              piStack_f0 = (int *)(param_2[100] + uVar30);
            }
            if (uStack_f4 != 0) {
              uStack_110 = uVar29 >> 0x18 & 7;
            }
            uStack_124 = 0;
            uVar43 = uStack_118;
            do {
              uStack_118 = uVar43;
              uVar29 = uStack_ac;
              puVar58 = puStack00000024;
              if ((uStack_104 & 0x20) == 0) {
                if ((uStack_120 & 1) != 0) {
                  if ((uStack_f4 - 1 & uStack_ac) != 0) {
                    puVar12 = (ulonglong *)*param_2;
                    iVar32 = *(int *)param_2[0x98];
                    sVar57 = *(short *)((int)((*puVar12 >> 0x3a) << 1) + iVar32);
                    uVar43 = (ulonglong)sVar57;
                    if (sVar57 < 0) {
                      fn_82C4E470(puVar12,6);
                      do {
                        uVar48 = *puVar12;
                        fn_82C4E470(puVar12,1);
                        sVar57 = *(short *)((int)(((uVar43 - ((longlong)uVar48 >> 0x3f)) + 0x8000 &
                                                  0xffffffff) << 1) + iVar32);
                        uVar43 = (ulonglong)sVar57;
                        iVar31 = (int)sVar57;
                      } while (sVar57 < 0);
                    }
                    else {
                      iVar32 = *(int *)(puVar12 + 1);
                      iVar31 = (int)(uVar43 & 0xf);
                      *puVar12 = *puVar12 << (uVar43 & 0xf);
                      *(int *)(puVar12 + 1) = iVar32 - iVar31;
                      if (iVar32 < iVar31) {
                        do {
                          pbVar19 = *(byte **)((int)puVar12 + 0xc);
                          if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                            bVar2 = *pbVar19;
                            bVar3 = pbVar19[1];
                            bVar4 = pbVar19[2];
                            bVar5 = pbVar19[3];
                            bVar6 = pbVar19[4];
                            bVar7 = pbVar19[5];
                            iVar32 = *(int *)(puVar12 + 1);
                            *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                            *(int *)(puVar12 + 1) = iVar32 + 0x30;
                            *puVar12 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar3) * 0x100 +
                                          (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                        (ulonglong)bVar6) * 0x100 + (ulonglong)bVar7 <<
                                       ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                            goto LAB_830c5d34;
                          }
                          iVar32 = fn_82C4E3B0(puVar12);
                        } while (iVar32 == 1);
                        iVar31 = (int)sVar57 >> 4;
                      }
                      else {
LAB_830c5d34:
                        iVar31 = (int)sVar57 >> 4;
                      }
                    }
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                    uStack_110 = (uint)*(byte *)((int)param_2 + iVar31 + 0x2ac);
                    uStack_fc = (uint)*(byte *)((int)param_2 + iVar31 + 0x2b4);
                  }
                  puVar58 = puStack00000024;
                  if (uStack_110 == 0) {
                    puVar35 = puStack00000024 + 5;
                    uVar29 = puStack00000024[5];
                    uVar30 = fn_830D8E88(param_2,*piStack_128,*(undefined1 *)(param_2 + 0x28),
                                             uVar29);
                    if (uVar30 == 0xffffffff) {
                      *(undefined1 *)puVar58[6] = 0;
                      return 0xffffffffffffffff;
                    }
                    puVar17 = (undefined1 *)puVar58[6];
                    uStack_118 = uStack_118 | 1;
                    *puVar35 = (uVar30 & 0x7f) * 2 + uVar29;
                    *puVar17 = (char)uVar30;
                    puVar58[6] = puVar58[6] + 1;
                  }
                  else {
                    if (uStack_110 < 3) {
                      uVar30 = uStack_fc;
                      if (uVar29 == 0 && uStack_f4 == 0) {
                        plVar13 = (longlong *)*param_2;
                        lVar44 = *plVar13;
                        uVar29 = *(uint *)(plVar13 + 1);
                        *plVar13 = lVar44 << 1;
                        *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                        if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                          fn_82C4E5E8();
                        }
                        if (lVar44 < 0) {
                          plVar13 = (longlong *)*param_2;
                          lVar44 = *plVar13;
                          uVar29 = *(uint *)(plVar13 + 1);
                          *plVar13 = lVar44 << 1;
                          *(int *)(plVar13 + 1) = (int)((ulonglong)uVar29 - 1);
                          if ((longlong)((ulonglong)uVar29 - 1) < 0) {
                            fn_82C4E5E8();
                          }
                          uVar30 = 1 - (int)(lVar44 >> 0x3f);
                        }
                        else {
                          uVar30 = 3;
                        }
                      }
                    }
                    else {
                      puVar12 = (ulonglong *)*param_2;
                      iVar32 = *(int *)param_2[0x99];
                      sVar57 = *(short *)((int)((*puVar12 >> 0x3a) << 1) + iVar32);
                      uVar43 = (ulonglong)sVar57;
                      if (sVar57 < 0) {
                        fn_82C4E470(puVar12,6);
                        do {
                          uVar48 = *puVar12;
                          fn_82C4E470(puVar12,1);
                          sVar57 = *(short *)((int)(((uVar43 - ((longlong)uVar48 >> 0x3f)) + 0x8000
                                                    & 0xffffffff) << 1) + iVar32);
                          uVar43 = (ulonglong)sVar57;
                          iVar31 = (int)sVar57;
                        } while (sVar57 < 0);
                      }
                      else {
                        iVar32 = *(int *)(puVar12 + 1);
                        iVar31 = (int)(uVar43 & 0xf);
                        *puVar12 = *puVar12 << (uVar43 & 0xf);
                        *(int *)(puVar12 + 1) = iVar32 - iVar31;
                        if (iVar32 < iVar31) {
                          do {
                            pbVar19 = *(byte **)((int)puVar12 + 0xc);
                            if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                              bVar2 = *pbVar19;
                              bVar3 = pbVar19[1];
                              bVar4 = pbVar19[2];
                              bVar5 = pbVar19[3];
                              bVar6 = pbVar19[4];
                              bVar7 = pbVar19[5];
                              iVar32 = *(int *)(puVar12 + 1);
                              *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                              *(int *)(puVar12 + 1) = iVar32 + 0x30;
                              *puVar12 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar3) * 0x100 +
                                            (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                          (ulonglong)bVar6) * 0x100 + (ulonglong)bVar7 <<
                                         ((longlong)-iVar32 & 0x7fU)) + *puVar12;
                              goto LAB_830c5f8c;
                            }
                            iVar32 = fn_82C4E3B0(puVar12);
                          } while (iVar32 == 1);
                          iVar31 = (int)sVar57 >> 4;
                        }
                        else {
LAB_830c5f8c:
                          iVar31 = (int)sVar57 >> 4;
                        }
                      }
                      uVar30 = iVar31 + 1;
                      if (*(int *)(*param_2 + 0x14) != 0) {
                        return 1;
                      }
                    }
                    puVar58 = puStack00000024;
                    bVar2 = *(byte *)((int)param_2 + uVar30 + 0x140);
                    uStack_118 = (longlong)(int)(uStack_110 << 4 | uVar30) | uStack_118;
                    if (bVar2 == 0) {
                      return 1;
                    }
                    iVar31 = 0;
                    uVar43 = (ulonglong)puStack00000024[5];
                    iVar32 = *piStack_128;
                    uVar29 = puStack00000024[6];
                    uVar59 = *(undefined1 *)((int)param_2 + uStack_110 + 0xa0);
                    if (bVar2 != 0) {
                      do {
                        uVar48 = fn_830D8E88(param_2,iVar32,uVar59,uVar43);
                        if ((int)uVar48 == -1) {
                          *(undefined1 *)(iVar31 + uVar29) = 0;
                        }
                        else {
                          *(char *)(iVar31 + uVar29) = (char)uVar48;
                          uVar43 = (uVar48 & 0x7f) * 2 + uVar43;
                        }
                        iVar31 = iVar31 + 1;
                      } while (iVar31 < (int)(uint)bVar2);
                    }
                    if ((uint)uVar43 == 0xffffffff) {
                      return 1;
                    }
                    puVar58[5] = (uint)uVar43;
                    puVar58[6] = puVar58[6] + (uint)bVar2;
                  }
                  uStack_f4 = 0;
                }
              }
              else {
                uVar43 = (ulonglong)uStack_130 & 1;
                bVar2 = *(byte *)(puStack_140 + 1);
                uVar68 = (ulonglong)uStack_134;
                iVar32 = puStack00000024[1] * 8 + param_2[0x148];
                uVar48 = -uVar43 & (ulonglong)*(ushort *)((int)param_2 + 0x32);
                lVar44 = (longlong)(int)(uint)*(ushort *)((int)param_2 + 0x32) *
                         (longlong)(int)uStack_130;
                uVar29 = *(int *)(param_2[0x146] + uStack_130 * 4) - 1U & uStack_130;
                if ((int)uStack_124 >> 2 == 0) {
                  iVar31 = param_2[0x57];
                  piVar15 = (int *)param_2[0x132];
                  uVar43 = (ulonglong)*(ushort *)((uStack_124 + 0x12) * 2 + (int)param_2);
                  iVar37 = (int)(((lVar44 + uVar68 & 0x7fffffff) * 2 + uVar43 & 0xffffffff) << 2);
                  sVar57 = *(short *)((int)(((((ulonglong)uStack_130 & 1) << 1 |
                                             (longlong)((int)uStack_124 >> 1)) + 0xb8 & 0xffffffff)
                                           << 1) + (int)param_2);
                  uVar29 = ((int)uStack_124 >> 1) + uVar29;
                  lVar44 = ((uVar48 + uVar68 & 0x7fffffff) * 2 + uVar43 & 0x7ffffff) * 0x20 +
                           (ulonglong)(uint)param_2[0x6c];
                  piVar16 = piStack_f0;
                  uVar30 = (uStack_124 & 1) + uStack_134;
                }
                else {
                  iVar31 = param_2[0x58];
                  piVar15 = (int *)param_2[0x133];
                  iVar37 = (int)(((longlong)((int)lVar44 >> 1) + uVar68 & 0xffffffff) << 2);
                  sVar57 = *(short *)(((int)uVar43 + 0xb6) * 2 + (int)param_2);
                  lVar44 = (ulonglong)(uint)param_2[uStack_124 + 0x69] +
                           ((longlong)((int)uVar48 >> 1) + uVar68 & 0x7ffffff) * 0x20;
                  piVar16 = piStack_128;
                  uVar30 = uStack_134;
                }
                iVar36 = *(int *)((uint)bVar2 * 0x14 + param_2[0x61] + 0x10);
                iVar37 = iVar37 + iVar31;
                lVar38 = (ulonglong)puStack00000024[7] - 0x80;
                puStack00000024[7] = (uint)(short *)lVar38;
                dataCacheBlockClearToZero(lVar38);
                sVar42 = 0;
                puVar12 = (ulonglong *)*param_2;
                if (piVar15 == (int *)0x0) {
                  uVar43 = 0;
                  *(undefined4 *)((int)puVar12 + 0x14) = 3;
                }
                else {
                  iVar31 = *piVar15;
                  sVar67 = *(short *)((int)((*puVar12 >>
                                             (0x40 - (ulonglong)*(byte *)(piVar15 + 2) & 0x7f) &
                                            0xffffffff) << 1) + iVar31);
                  uVar43 = (ulonglong)sVar67;
                  if (sVar67 < 0) {
                    fn_82C4E470(puVar12);
                    do {
                      uVar48 = *puVar12;
                      fn_82C4E470(puVar12,1);
                      sVar67 = *(short *)((int)(((uVar43 - ((longlong)uVar48 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar31);
                      uVar43 = (ulonglong)sVar67;
                    } while (sVar67 < 0);
                  }
                  else {
                    iVar31 = *(int *)(puVar12 + 1);
                    iVar56 = (int)(uVar43 & 0xf);
                    *puVar12 = *puVar12 << (uVar43 & 0xf);
                    *(int *)(puVar12 + 1) = iVar31 - iVar56;
                    if (iVar31 < iVar56) {
                      do {
                        pbVar19 = *(byte **)((int)puVar12 + 0xc);
                        if (pbVar19 < (byte *)(*(int *)(puVar12 + 2) - 4U)) {
                          bVar3 = *pbVar19;
                          bVar4 = pbVar19[1];
                          bVar5 = pbVar19[2];
                          bVar6 = pbVar19[3];
                          bVar7 = pbVar19[4];
                          bVar8 = pbVar19[5];
                          iVar31 = *(int *)(puVar12 + 1);
                          *(byte **)((int)puVar12 + 0xc) = pbVar19 + 6;
                          *(int *)(puVar12 + 1) = iVar31 + 0x30;
                          *puVar12 = ((((((ulonglong)bVar3 * 0x100 + (ulonglong)bVar4) * 0x100 +
                                        (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6) * 0x100 +
                                      (ulonglong)bVar7) * 0x100 + (ulonglong)bVar8 <<
                                     ((longlong)-iVar31 & 0x7fU)) + *puVar12;
                          goto LAB_830c50ec;
                        }
                        iVar31 = fn_82C4E3B0(puVar12);
                      } while (iVar31 == 1);
                      uVar43 = (ulonglong)((int)sVar67 >> 4);
                    }
                    else {
LAB_830c50ec:
                      uVar43 = (ulonglong)((int)sVar67 >> 4);
                    }
                  }
                }
                sVar67 = (short)uVar43;
                if ((int)(uVar43 & 0xffff) == 0x77) {
                  if (iVar36 < 5) {
                    lVar41 = 3 - (longlong)(iVar36 >> 1);
                  }
                  else {
                    lVar41 = 0;
                  }
                  uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                  uVar68 = lVar41 + 8;
                  iVar31 = 0;
                  sVar67 = 0;
                  uVar48 = uVar43 + 0x10;
                  if ((uVar68 & 0xffffffff) < 0x21) {
                    if ((uVar68 & 0xffffffff) == 0) {
                      sVar67 = 0;
                    }
                    else {
                      if ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff)) {
                        do {
                          sVar67 = (short)iVar31;
                          if ((uVar48 & 0xffffffff) == 0) break;
                          uVar68 = uVar68 - uVar48;
                          *(int *)(puVar12 + 1) = (int)(uVar43 - uVar48);
                          iVar31 = ((int)(*puVar12 >> (0x40 - uVar48 & 0x7f)) <<
                                   ((uint)uVar68 & 0x3f)) + iVar31;
                          sVar67 = (short)iVar31;
                          *puVar12 = *puVar12 << (uVar48 & 0x7f);
                          if ((longlong)(uVar43 - uVar48) < 0) {
                            fn_82C4E5E8(puVar12);
                          }
                          uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                          uVar48 = uVar43 + 0x10;
                        } while ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff));
                      }
                      *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
                      sVar67 = (short)(*puVar12 >> (0x40 - uVar68 & 0x7f)) + sVar67;
                      *puVar12 = *puVar12 << (uVar68 & 0x7f);
                      if ((longlong)(uVar43 - uVar68) < 0) {
                        fn_82C4E5E8(puVar12);
                      }
                    }
                  }
                  else {
                    sVar67 = 0;
                  }
LAB_830c5344:
                  uVar43 = *puVar12;
                  uVar63 = *(uint *)(puVar12 + 1);
                  *puVar12 = uVar43 << 1;
                  *(int *)(puVar12 + 1) = (int)((ulonglong)uVar63 - 1);
                  if ((longlong)((ulonglong)uVar63 - 1) < 0) {
                    fn_82C4E5E8(puVar12);
                  }
                  sVar42 = (1 - (short)((uVar43 >> 0x3f) << 1)) * sVar67;
                }
                else if ((uVar43 & 0xffff) != 0) {
                  if (iVar36 == 4) {
                    uVar43 = *puVar12;
                    uVar63 = *(uint *)(puVar12 + 1);
                    *puVar12 = uVar43 << 1;
                    *(int *)(puVar12 + 1) = (int)((ulonglong)uVar63 - 1);
                    if ((longlong)((ulonglong)uVar63 - 1) < 0) {
                      fn_82C4E5E8(puVar12);
                    }
                    sVar67 = (sVar67 * 2 - (short)((longlong)uVar43 >> 0x3f)) + -1;
                  }
                  else if (iVar36 == 2) {
                    uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                    uVar68 = 2;
                    iVar31 = 0;
                    sVar42 = 0;
                    uVar48 = uVar43 + 0x10;
                    if ((uVar48 & 0xffffffff) < 2) {
                      do {
                        sVar42 = (short)iVar31;
                        if ((uVar48 & 0xffffffff) == 0) break;
                        uVar68 = uVar68 - uVar48;
                        *(int *)(puVar12 + 1) = (int)(uVar43 - uVar48);
                        iVar31 = ((int)(*puVar12 >> (0x40 - uVar48 & 0x7f)) << ((uint)uVar68 & 0x3f)
                                 ) + iVar31;
                        sVar42 = (short)iVar31;
                        *puVar12 = *puVar12 << (uVar48 & 0x7f);
                        if ((longlong)(uVar43 - uVar48) < 0) {
                          fn_82C4E5E8(puVar12);
                        }
                        uVar43 = (ulonglong)*(uint *)(puVar12 + 1);
                        uVar48 = uVar43 + 0x10;
                      } while ((uVar48 & 0xffffffff) < (uVar68 & 0xffffffff));
                    }
                    uVar48 = *puVar12;
                    *(int *)(puVar12 + 1) = (int)(uVar43 - uVar68);
                    *puVar12 = uVar48 << (uVar68 & 0x7f);
                    if ((longlong)(uVar43 - uVar68) < 0) {
                      fn_82C4E5E8(puVar12);
                    }
                    sVar67 = sVar67 * 4 + (short)(uVar48 >> (0x40 - uVar68 & 0x7f)) + sVar42 + -3;
                  }
                  goto LAB_830c5344;
                }
                *(short *)lVar38 = sVar42;
                if (*(int *)(*param_2 + 0x14) != 0) {
                  return 1;
                }
                if (((uStack_120 & 1) != 0) &&
                   (iVar31 = fn_830D9228(param_2,*piVar16,lVar38,param_2[0x6f]), iVar31 < 0)) {
                  return 1;
                }
                uVar63 = 1;
                uVar43 = 0;
                uVar9 = *(ushort *)((int)param_2 + 0x32);
                uVar10 = uVar9 >> ((int)uStack_124 >> 2 & 0x3fU);
                if ((uVar29 != 0) && (*(int *)(iVar37 + (uint)uVar10 * -4) == 0x4000)) {
                  uVar63 = 8;
                  uVar43 = lVar44 + ((longlong)sVar57 & 0x7ffffffU) * -0x20;
                }
                uVar48 = uVar43;
                uVar68 = 0;
                if ((uVar30 == 0) || (*(int *)(iVar37 + -4) != 0x4000)) {
LAB_830c5688:
                  if ((uVar48 & 0xffffffff) != 0) {
                    uVar63 = -((uint)LZCOUNT(*puStack_140 & 0x18) >> 5) | uVar63;
                    psVar46 = (short *)uVar48;
                    if (*(char *)((int)param_2 + 0x1b) == '\0') {
                      if ((uVar48 & 0xffffffff) == (uVar43 & 0xffffffff)) {
                        uVar48 = uVar48 + 0x10;
                      }
                    }
                    else if ((uVar48 & 0xffffffff) == (uVar68 & 0xffffffff)) {
                      if (((uStack_124 == 0) || (uStack_124 == 2)) ||
                         ((uStack_124 == 4 || (uStack_124 == 5)))) {
                        uVar29 = *(byte *)(iVar32 + -8) & 0x3f;
                        iVar31 = *(int *)(&lbl_820FDD78 + (bVar2 & 0x3f) * 4);
                        lVar38 = uVar27 - 0xd6;
                        lVar49 = 3;
                        lVar41 = uVar48 + 6;
                        asStack_d0[0] =
                             (short)(*(int *)(&lbl_820FDD78 +
                                             (*(uint *)((uint)bVar2 * 0x14 + param_2[0x61] + 0x10) &
                                             0x3f) * 4) *
                                     *(int *)((uVar29 + (*(byte *)(iVar32 + -8) & 0x3f) * 4) * 4 +
                                              param_2[0x61] + 0x10) * (int)*psVar46 + 0x20000 >>
                                    0x12);
                        do {
                          psVar20 = (short *)lVar41;
                          sVar57 = psVar20[-1];
                          sVar42 = *psVar20;
                          sVar67 = psVar20[1];
                          sVar11 = psVar20[2];
                          *(short *)((int)lVar38 + 8) =
                               (short)((int)(psVar20[-2] * iVar31 * uVar29 + 0x20000) >> 0x12);
                          lVar38 = lVar38 + 10;
                          *(short *)lVar38 =
                               (short)((int)(sVar57 * iVar31 * uVar29 + 0x20000) >> 0x12);
                          *(short *)(((int)asStack_d0 - (int)psVar46) + (int)psVar20) =
                               (short)((int)(sVar42 * iVar31 * uVar29 + 0x20000) >> 0x12);
                          *(short *)((int)asStack_d0 + (2 - (int)psVar46) + (int)psVar20) =
                               (short)((int)(sVar67 * iVar31 * uVar29 + 0x20000) >> 0x12);
                          *(short *)((int)asStack_d0 + (4 - (int)psVar46) + (int)psVar20) =
                               (short)((int)(iVar31 * (int)sVar11 * uVar29 + 0x20000) >> 0x12);
                          lVar41 = lVar41 + 10;
                          lVar49 = lVar49 + -1;
                        } while (lVar49 != 0);
                        uVar48 = uVar27 - 0xd0;
                        sStack_c0 = asStack_d0[0];
                      }
                      else {
                        lVar38 = uVar48 - 2;
                        lVar41 = uVar27 - 0xd2;
                        lVar49 = 0x10;
                        do {
                          lVar38 = lVar38 + 2;
                          lVar41 = lVar41 + 2;
                          *(undefined2 *)lVar41 = *(undefined2 *)lVar38;
                          lVar49 = lVar49 + -1;
                        } while (lVar49 != 0);
                        uVar48 = uVar27 - 0xd0;
                      }
                    }
                    else if (((uStack_124 == 0) || (uStack_124 == 1)) ||
                            ((uStack_124 == 4 || (uStack_124 == 5)))) {
                      uVar30 = (uint)*(byte *)(iVar32 + (uVar9 & 0x3ffffffe) * -4);
                      uVar29 = uVar30 & 0x3f;
                      lVar49 = 3;
                      iVar32 = *(int *)(&lbl_820FDD78 + (bVar2 & 0x3f) * 4);
                      lVar38 = uVar27 - 0xd6;
                      lVar41 = uVar48 + 6;
                      asStack_d0[0] =
                           (short)(*(int *)(&lbl_820FDD78 +
                                           (*(uint *)((uint)bVar2 * 0x14 + param_2[0x61] + 0x10) &
                                           0x3f) * 4) *
                                   *(int *)((uVar29 + (uVar30 & 0x3f) * 4) * 4 + param_2[0x61] +
                                           0x10) * (int)*psVar46 + 0x20000 >> 0x12);
                      do {
                        psVar20 = (short *)lVar41;
                        sVar57 = psVar20[-1];
                        sVar42 = *psVar20;
                        sVar67 = psVar20[1];
                        sVar11 = psVar20[2];
                        *(short *)((int)lVar38 + 8) =
                             (short)((int)(psVar20[-2] * iVar32 * uVar29 + 0x20000) >> 0x12);
                        lVar38 = lVar38 + 10;
                        *(short *)lVar38 =
                             (short)((int)(sVar57 * iVar32 * uVar29 + 0x20000) >> 0x12);
                        *(short *)((int)psVar20 + ((int)asStack_d0 - (int)psVar46)) =
                             (short)((int)(sVar42 * iVar32 * uVar29 + 0x20000) >> 0x12);
                        *(short *)((int)psVar20 + (int)asStack_d0 + (2 - (int)psVar46)) =
                             (short)((int)(sVar67 * iVar32 * uVar29 + 0x20000) >> 0x12);
                        *(short *)((int)psVar20 + (int)asStack_d0 + (4 - (int)psVar46)) =
                             (short)((int)(iVar32 * (int)sVar11 * uVar29 + 0x20000) >> 0x12);
                        lVar41 = lVar41 + 10;
                        lVar49 = lVar49 + -1;
                      } while (lVar49 != 0);
                      uVar48 = uVar27 - 0xc0;
                      sStack_c0 = asStack_d0[0];
                    }
                    else {
                      lVar38 = uVar48 - 2;
                      lVar41 = uVar27 - 0xd2;
                      lVar49 = 0x10;
                      do {
                        lVar38 = lVar38 + 2;
                        lVar41 = lVar41 + 2;
                        *(undefined2 *)lVar41 = *(undefined2 *)lVar38;
                        lVar49 = lVar49 + -1;
                      } while (lVar49 != 0);
                      uVar48 = uVar27 - 0xc0;
                    }
                  }
                }
                else {
                  uVar48 = lVar44 - 0x20;
                  uVar63 = 1;
                  if (uVar48 != 0) {
                    uVar68 = uVar48;
                    uVar63 = 1;
                    if ((uVar43 & 0xffffffff) != 0) {
                      iVar31 = 0;
                      if (*(int *)(iVar37 + (uVar10 + 1) * -4) == 0x4000) {
                        iVar31 = (int)*(short *)((int)uVar43 + -0x10);
                      }
                      sVar57 = *(short *)((int)uVar43 + 0x10);
                      sVar42 = *(short *)uVar48;
                      iVar37 = (int)sVar57;
                      iVar36 = (int)sVar42;
                      if (*(char *)((int)param_2 + 0x1b) != '\0') {
                        if (((uStack_124 == 0) || (uStack_124 == 4)) || (uStack_124 == 5)) {
                          iVar36 = param_2[0x61];
                          pbVar19 = (byte *)(iVar32 + (uVar9 & 0x3ffffffe) * -4);
                          uVar30 = (uint)pbVar19[-8];
                          uVar29 = (uint)*pbVar19;
                          iVar56 = *(int *)(&lbl_820FDD78 +
                                           (*(uint *)((uint)bVar2 * 0x14 + iVar36 + 0x10) & 0x3f) *
                                           4);
                          iVar31 = iVar56 * *(int *)(((uVar30 & 0x3f) + (uVar30 & 0x3f) * 4) * 4 +
                                                     iVar36 + 0x10) * iVar31 + 0x20000 >> 0x12;
                          iVar37 = iVar56 * *(int *)(((uVar29 & 0x3f) + (uVar29 & 0x3f) * 4) * 4 +
                                                     iVar36 + 0x10) * (int)sVar57 + 0x20000 >> 0x12;
                          iVar36 = iVar56 * *(int *)(((*(byte *)(iVar32 + -8) & 0x3f) +
                                                     (*(byte *)(iVar32 + -8) & 0x3f) * 4) * 4 +
                                                     iVar36 + 0x10) * (int)sVar42 + 0x20000 >> 0x12;
                        }
                        else if (uStack_124 == 1) {
                          uVar29 = (uint)*(byte *)(iVar32 + (uVar9 & 0x3ffffffe) * -4);
                          iVar37 = *(int *)(((uVar29 & 0x3f) + (uVar29 & 0x3f) * 4) * 4 +
                                            param_2[0x61] + 0x10);
                          iVar31 = *(int *)(&lbl_820FDD78 +
                                           (*(uint *)((uint)bVar2 * 0x14 + param_2[0x61] + 0x10) &
                                           0x3f) * 4) * iVar37 * iVar31 + 0x20000 >> 0x12;
                          iVar37 = *(int *)(&lbl_820FDD78 +
                                           (*(uint *)((uint)bVar2 * 0x14 + param_2[0x61] + 0x10) &
                                           0x3f) * 4) * iVar37 * sVar57 + 0x20000 >> 0x12;
                        }
                        else if (uStack_124 == 2) {
                          iVar36 = *(int *)(((*(byte *)(iVar32 + -8) & 0x3f) +
                                            (*(byte *)(iVar32 + -8) & 0x3f) * 4) * 4 + param_2[0x61]
                                           + 0x10);
                          iVar31 = *(int *)(&lbl_820FDD78 +
                                           (*(uint *)((uint)bVar2 * 0x14 + param_2[0x61] + 0x10) &
                                           0x3f) * 4) * iVar36 * iVar31 + 0x20000 >> 0x12;
                          iVar36 = *(int *)(&lbl_820FDD78 +
                                           (*(uint *)((uint)bVar2 * 0x14 + param_2[0x61] + 0x10) &
                                           0x3f) * 4) * iVar36 * sVar42 + 0x20000 >> 0x12;
                        }
                      }
                      uVar29 = iVar31 - iVar37 >> 0x1f;
                      uVar30 = iVar31 - iVar36 >> 0x1f;
                      uVar63 = 1;
                      if ((int)((iVar31 - iVar36 ^ uVar30) - uVar30) <
                          (int)((iVar31 - iVar37 ^ uVar29) - uVar29)) {
                        uVar48 = uVar43;
                        uVar63 = 8;
                      }
                    }
                    goto LAB_830c5688;
                  }
                }
                psVar46 = (short *)puVar58[7];
                psVar20 = (short *)lVar44;
                if ((uVar48 & 0xffffffff) == 0) {
                  sVar57 = *psVar46;
                  *psVar20 = sVar57;
                  psVar20[8] = sVar57;
LAB_830c5b98:
                  psVar20[1] = psVar46[1];
                  *(undefined4 *)(psVar20 + 2) = *(undefined4 *)(psVar46 + 2);
                  *(undefined8 *)(psVar20 + 4) = *(undefined8 *)(psVar46 + 4);
                  psVar20[9] = psVar46[8];
                  psVar20[10] = psVar46[0x10];
                  psVar20[0xb] = psVar46[0x18];
                  psVar20[0xc] = psVar46[0x20];
                  psVar20[0xd] = psVar46[0x28];
                  psVar20[0xe] = psVar46[0x30];
                  psVar20[0xf] = psVar46[0x38];
                }
                else {
                  psVar47 = (short *)uVar48;
                  sVar57 = *psVar46 + *psVar47;
                  *psVar46 = sVar57;
                  *psVar20 = sVar57;
                  psVar20[8] = sVar57;
                  if (uVar63 == 1) {
                    sVar57 = psVar47[1];
                    sVar42 = psVar46[1];
                    psVar46[1] = sVar57 + sVar42;
                    psVar20[1] = sVar57 + sVar42;
                    sVar57 = psVar47[2];
                    sVar42 = psVar46[2];
                    psVar46[2] = sVar57 + sVar42;
                    psVar20[2] = sVar57 + sVar42;
                    sVar57 = psVar47[3];
                    sVar42 = psVar46[3];
                    psVar46[3] = sVar57 + sVar42;
                    psVar20[3] = sVar57 + sVar42;
                    sVar57 = psVar47[4];
                    sVar42 = psVar46[4];
                    psVar46[4] = sVar57 + sVar42;
                    psVar20[4] = sVar57 + sVar42;
                    sVar57 = psVar47[5];
                    sVar42 = psVar46[5];
                    psVar46[5] = sVar57 + sVar42;
                    psVar20[5] = sVar57 + sVar42;
                    sVar57 = psVar46[6];
                    sVar42 = psVar47[6];
                    psVar46[6] = sVar42 + sVar57;
                    psVar20[6] = sVar42 + sVar57;
                    sVar57 = psVar47[7];
                    sVar42 = psVar46[7];
                    psVar46[7] = sVar57 + sVar42;
                    psVar20[7] = sVar57 + sVar42;
                    psVar20[9] = psVar46[8];
                    psVar20[10] = psVar46[0x10];
                    psVar20[0xb] = psVar46[0x18];
                    psVar20[0xc] = psVar46[0x20];
                    psVar20[0xd] = psVar46[0x28];
                    psVar20[0xe] = psVar46[0x30];
                    psVar20[0xf] = psVar46[0x38];
                  }
                  else {
                    if (uVar63 != 8) goto LAB_830c5b98;
                    psVar20[1] = psVar46[1];
                    *(undefined4 *)(psVar20 + 2) = *(undefined4 *)(psVar46 + 2);
                    *(undefined8 *)(psVar20 + 4) = *(undefined8 *)(psVar46 + 4);
                    sVar57 = psVar47[1];
                    sVar42 = psVar46[8];
                    psVar46[8] = sVar57 + sVar42;
                    psVar20[9] = sVar57 + sVar42;
                    sVar57 = psVar46[0x10];
                    sVar42 = psVar47[2];
                    psVar46[0x10] = sVar42 + sVar57;
                    psVar20[10] = sVar42 + sVar57;
                    sVar57 = psVar47[3];
                    sVar42 = psVar46[0x18];
                    psVar46[0x18] = sVar57 + sVar42;
                    psVar20[0xb] = sVar57 + sVar42;
                    sVar57 = psVar47[4];
                    sVar42 = psVar46[0x20];
                    psVar46[0x20] = sVar57 + sVar42;
                    psVar20[0xc] = sVar57 + sVar42;
                    sVar57 = psVar47[5];
                    sVar42 = psVar46[0x28];
                    psVar46[0x28] = sVar57 + sVar42;
                    psVar20[0xd] = sVar57 + sVar42;
                    sVar57 = psVar47[6];
                    sVar42 = psVar46[0x30];
                    psVar46[0x30] = sVar57 + sVar42;
                    psVar20[0xe] = sVar57 + sVar42;
                    sVar57 = psVar47[7];
                    sVar42 = psVar46[0x38];
                    psVar46[0x38] = sVar57 + sVar42;
                    psVar20[0xf] = sVar57 + sVar42;
                  }
                }
                uStack_118 = (ulonglong)uStack_120 & 1 | 0x80 | uStack_118;
                *(uint *)puVar58[8] = (uStack_124 << 0xc | uStack_130) << 0x10 | uStack_134;
                puVar58[8] = puVar58[8] + 4;
              }
              uStack_124 = uStack_124 + 1;
              uStack_120 = (int)uStack_120 >> 1;
              uStack_104 = uStack_104 << 1;
              uVar43 = uStack_118 << 8;
            } while ((int)uStack_124 < 6);
            uVar29 = (*puStack_140 >> 8 & 7) - (uint)*(byte *)(param_2 + 0x14b);
            *(ulonglong *)(puStack00000024[1] * 8 + param_2[0x148]) =
                 ((ulonglong)*(byte *)(puStack_140 + 1) << 8 |
                 ((ulonglong)uVar18 << 1 | (longlong)((int)(-uVar29 ^ uVar29) >> 0x1f) + 1U & 3) <<
                 6 | (ulonglong)*(byte *)((int)puStack_140 + 5)) << 0x30 |
                 uStack_118 & 0xffffffffffffff;
            param_3 = puStack00000024;
            param_1 = iStack00000014;
          }
          else {
            *(ulonglong *)(param_3[1] * 8 + param_2[0x148]) =
                 ((ulonglong)*(byte *)(puVar58 + 1) << 8 |
                 (LZCOUNT((uint)*(byte *)(param_2 + 0x14b) - (*puVar58 >> 8 & 7)) & 0x20U) << 1 |
                 0x80) << 0x30;
            puStack_140 = puVar58;
          }
          uVar28 = 0;
          *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
          *param_3 = *param_3 + 2;
          param_3[3] = param_3[3] + 8;
          param_3[1] = param_3[1] + 1;
          param_3[2] = param_3[2] + 0x10;
          param_2[0x4c] = (int)param_2 + 0x10d;
          if ((uint)*(ushort *)((int)param_3 + 0x12) == *(ushort *)((int)param_2 + 0x32) - 2) {
            param_2[0x4c] = (int)param_2 + 0x112;
          }
          puVar58 = puStack_140 + 6;
          uStack_134 = uStack_134 + 1;
          puStack_140 = puVar58;
        } while (uStack_134 < uStack_a4);
        param_5 = (ulonglong)uStack_130;
        param_4 = iStack0000002c;
        param_6 = uStack0000003c;
        uVar29 = uStack_a4;
      }
      param_5 = param_5 + 1;
      uStack_130 = (uint)param_5;
      *param_3 = uVar29 * 2 + *param_3;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      uVar65 = (uint)*(ushort *)((int)param_2 + 0x4a) * 0x10 + uVar65;
      uVar62 = (uint)*(ushort *)(param_2 + 0x13) * 8 + uVar62;
    } while ((param_5 & 0xffffffff) < (ulonglong)param_6);
  }
  *(undefined4 *)param_3[8] = 0xffffffff;
  puVar58 = (uint *)(param_2 + (param_4 + 0x5d) * 4);
  param_3[8] = param_3[8] + 4;
  *puVar58 = param_3[5];
  puVar58[1] = param_3[6];
  puVar58[2] = param_3[7];
  puVar58[3] = param_3[8];
  if (uStack_a8 == param_6) {
    *(int *)(param_1 + 0xb0b4) = (int)(param_3[8] - *(int *)(param_1 + 0x5708)) >> 2;
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
  return uVar28;
}

