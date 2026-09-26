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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA5860();
extern int fn_82CA5C50();
extern int fn_830C6850();
extern int fn_830C98F0();
extern int fn_830D9228();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int lbl_820FD9B8;
extern unsigned int lbl_820FDD78;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000003c;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern V16 vectorAddSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


undefined8
fn_830C9FC8(int param_1,int *param_2,int *param_3,int param_4,ulonglong param_5,uint param_6)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  ulonglong *puVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ushort uVar21;
  ushort uVar22;
  undefined8 in_r0;
  ulonglong uVar23;
  undefined8 uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  byte bVar31;
  int iVar30;
  int *piVar33;
  ulonglong uVar32;
  byte bVar35;
  short sVar34;
  uint uVar36;
  ulonglong uVar37;
  int iVar39;
  longlong lVar38;
  ulonglong uVar40;
  longlong lVar41;
  int *piVar42;
  int iVar43;
  int iVar44;
  uint *puVar45;
  short sVar46;
  longlong lVar47;
  short *psVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  short *psVar52;
  uint uVar53;
  longlong lVar54;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  int iStack00000014;
  int *piStack00000024;
  int iStack0000002c;
  uint uStack0000003c;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e0;
  uint uStack_dc;
  short asStack_c0 [8];
  short sStack_b0;
  
  uVar23 = ZEXT48(&stack0x00000000);
  uVar8 = *(ushort *)(param_2 + 0xd);
  iVar15 = param_2[0x57];
  uVar21 = *(ushort *)((int)param_2 + 0x32) >> 1;
  puVar45 = *(uint **)(param_1 + 0x110);
  uVar24 = 0;
  uStack_f0 = (uint)param_5;
  if (param_4 == 0) {
    param_3[5] = *(int *)(param_1 + 0x56f8);
    param_3[6] = *(int *)(param_1 + 0x5704);
    param_3[7] = *(int *)(param_1 + 0x56fc);
    param_3[8] = *(int *)(param_1 + 0x5708);
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined2 *)(param_3 + 4) = 0;
  }
  else {
    piVar33 = param_2 + (param_4 + 0x5c) * 4;
    param_3[5] = *piVar33;
    puVar45 = puVar45 + uVar21 * uStack_f0 * 6;
    param_3[6] = piVar33[1];
    param_3[7] = piVar33[2];
    param_3[8] = piVar33[3];
    *param_3 = (uint)uVar21 * 4 * uStack_f0;
    param_3[1] = uVar21 * uStack_f0;
    *(short *)(param_3 + 4) = (short)((param_5 & 0xffffffff) << 1);
  }
  *(undefined2 *)((int)param_3 + 0x12) = 0;
  iStack00000014 = param_1;
  piStack00000024 = param_3;
  iStack0000002c = param_4;
  uStack0000003c = param_6;
  if ((param_5 & 0xffffffff) < (ulonglong)param_6) {
    do {
      uStack_dc = (uint)uVar21;
      uVar51 = 0;
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      param_2[0x4c] = (int)(param_2 + 0x42);
      if ((*(int *)(param_1 + 0x55b4) != 0) &&
         (*(int *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2)) != 0)) {
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
        puVar16 = *(ulonglong **)(param_1 + 0x54);
        if (*(int *)((int)puVar16 + 0x1c) != 0) {
          uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
          uVar49 = 1;
          uVar40 = uVar37 + 0x10;
          if ((uVar40 & 0xffffffff) == 0) {
            do {
              if ((uVar40 & 0xffffffff) == 0) break;
              uVar32 = *puVar16;
              uVar49 = uVar49 - uVar40;
              *(int *)(puVar16 + 1) = (int)(uVar37 - uVar40);
              *puVar16 = uVar32 << (uVar40 & 0x7f);
              if ((longlong)(uVar37 - uVar40) < 0) {
                fn_82C4E5E8(puVar16,uVar32 >> (0x40 - uVar40 & 0x7f) & 0xffffffff);
              }
              uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
              uVar40 = uVar37 + 0x10;
            } while ((uVar40 & 0xffffffff) < (uVar49 & 0xffffffff));
          }
          *puVar16 = *puVar16 << (uVar49 & 0x7f);
          *(int *)(puVar16 + 1) = (int)(uVar37 - uVar49);
          if ((longlong)(uVar37 - uVar49) < 0) {
            fn_82C4E5E8(puVar16);
          }
        }
        fn_82C4E470(puVar16,*(uint *)(puVar16 + 1) & 7);
        uVar24 = fn_82CA5860(param_1,param_5);
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
        if ((int)uVar24 != 0) {
          return uVar24;
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
        uVar24 = fn_82CA5C50(param_1,param_5);
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
        if ((int)uVar24 != 0) {
          return uVar24;
        }
      }
      uStack_ec = 0;
      iVar44 = (*(uint *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2)) |
               (-(int)param_5 >> 0x1f) + 1U) - 1;
      if (uVar21 != 0) {
LAB_830ca484:
        dataCacheBlockTouch((ulonglong)*(uint *)(*param_2 + 0xc) + 0x80);
        *(undefined1 *)(puVar45 + 1) = *(undefined1 *)(param_2 + 6);
        *puVar45 = *puVar45 & 0xeffcffe7 | 0x20000;
        if (*(char *)((int)param_2 + 0x1a) == '\0') {
          puVar16 = (ulonglong *)*param_2;
          uVar37 = *puVar16;
          uVar36 = *(uint *)(puVar16 + 1);
          *puVar16 = uVar37 << 1;
          *(int *)(puVar16 + 1) = (int)((ulonglong)uVar36 - 1);
          if ((longlong)((ulonglong)uVar36 - 1) < 0) {
            fn_82C4E5E8();
          }
          *puVar45 = (uint)((uVar37 >> 0x3f) << 0x1f) | *puVar45 & 0x7fffffff;
        }
        uVar36 = *puVar45;
        *puVar45 = uVar36 & 0xfffff7ff;
        if ((uVar36 & 0x80000000) == 0x80000000) {
          bVar35 = 0;
          bVar31 = 0;
          *puVar45 = uVar36 & 0xfffef0ff;
        }
        else {
          piVar33 = (int *)param_2[0x15b];
          puVar16 = (ulonglong *)*param_2;
          if (piVar33 == (int *)0x0) {
            *(undefined4 *)((int)puVar16 + 0x14) = 3;
            iVar43 = 0;
          }
          else {
            iVar39 = *piVar33;
            sVar34 = *(short *)((int)((*puVar16 >> (0x40 - (ulonglong)*(byte *)(piVar33 + 2) & 0x7f)
                                      & 0xffffffff) << 1) + iVar39);
            uVar37 = (ulonglong)sVar34;
            if (sVar34 < 0) {
              fn_82C4E470(puVar16);
              do {
                uVar40 = *puVar16;
                fn_82C4E470(puVar16,1);
                sVar34 = *(short *)((int)(((uVar37 - ((longlong)uVar40 >> 0x3f)) + 0x8000 &
                                          0xffffffff) << 1) + iVar39);
                uVar37 = (ulonglong)sVar34;
                iVar43 = (int)sVar34;
              } while (sVar34 < 0);
            }
            else {
              iVar39 = *(int *)(puVar16 + 1);
              iVar43 = (int)(uVar37 & 0xf);
              *puVar16 = *puVar16 << (uVar37 & 0xf);
              *(int *)(puVar16 + 1) = iVar39 - iVar43;
              if (iVar39 < iVar43) {
                do {
                  pbVar17 = *(byte **)((int)puVar16 + 0xc);
                  if (pbVar17 < (byte *)(*(int *)(puVar16 + 2) - 4U)) {
                    bVar2 = *pbVar17;
                    bVar35 = pbVar17[1];
                    bVar31 = pbVar17[2];
                    bVar3 = pbVar17[4];
                    bVar4 = pbVar17[3];
                    bVar5 = pbVar17[5];
                    iVar39 = *(int *)(puVar16 + 1);
                    *(byte **)((int)puVar16 + 0xc) = pbVar17 + 6;
                    *(int *)(puVar16 + 1) = iVar39 + 0x30;
                    *puVar16 = ((((((ulonglong)bVar35 + (ulonglong)bVar2 * 0x100) * 0x100 +
                                  (ulonglong)bVar31) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5 <<
                               ((longlong)-iVar39 & 0x7fU)) + *puVar16;
                    goto LAB_830ca628;
                  }
                  iVar39 = fn_82C4E3B0(puVar16);
                } while (iVar39 == 1);
                iVar43 = (int)sVar34 >> 4;
              }
              else {
LAB_830ca628:
                iVar43 = (int)sVar34 >> 4;
              }
            }
            if ((iVar43 < 0) || (0xe < iVar43)) {
              return 1;
            }
          }
          if ((param_2[0x15c] == 1) && (iVar43 == 8)) {
            iVar43 = 0xe;
          }
          bVar2 = (&lbl_820FD9B8)[iVar43];
          bVar35 = (char)bVar2 >> 4 & 1;
          bVar31 = (char)bVar2 >> 5 & 1;
          *puVar45 = ((int)(char)((int)(bVar2 & 8) >> 3) << 8 | bVar2 & 7) << 8 |
                     *puVar45 & 0xfffef8ff;
        }
        if ((*puVar45 & 0x700) == 0x400) {
          uVar49 = 0;
          uVar32 = 1;
          lVar47 = 0;
          *puVar45 = (*(byte *)((int)param_2 + 0x21) & 1) << 0xb | *puVar45 & 0xfffdf7ff;
          puVar16 = (ulonglong *)*param_2;
          uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
          uVar40 = uVar37 + 0x10;
          if ((uVar40 & 0xffffffff) == 0) {
            do {
              if ((uVar40 & 0xffffffff) == 0) break;
              uVar32 = uVar32 - uVar40;
              *(int *)(puVar16 + 1) = (int)(uVar37 - uVar40);
              lVar47 = (ulonglong)
                       (uint)((int)(*puVar16 >> (0x40 - uVar40 & 0x7f)) << ((uint)uVar32 & 0x3f)) +
                       lVar47;
              *puVar16 = *puVar16 << (uVar40 & 0x7f);
              if ((longlong)(uVar37 - uVar40) < 0) {
                fn_82C4E5E8(puVar16);
              }
              uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
              uVar40 = uVar37 + 0x10;
            } while ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff));
          }
          uVar40 = *puVar16;
          *(int *)(puVar16 + 1) = (int)(uVar37 - uVar32);
          *puVar16 = uVar40 << (uVar32 & 0x7f);
          if ((longlong)(uVar37 - uVar32) < 0) {
            fn_82C4E5E8(puVar16);
          }
          uVar50 = 1;
          iVar43 = 0;
          *puVar45 = (uint)(((uVar40 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar47 & 0xff) <<
                           0x10) & 0x10000 | *puVar45 & 0xfffeffff;
          puVar16 = (ulonglong *)*param_2;
          uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
          uVar40 = uVar37 + 0x10;
          iVar39 = 0;
          if ((uVar40 & 0xffffffff) == 0) {
            do {
              iVar43 = iVar39;
              if ((uVar40 & 0xffffffff) == 0) break;
              uVar50 = uVar50 - uVar40;
              *(int *)(puVar16 + 1) = (int)(uVar37 - uVar40);
              iVar43 = ((int)(*puVar16 >> (0x40 - uVar40 & 0x7f)) << ((uint)uVar50 & 0x3f)) + iVar43
              ;
              *puVar16 = *puVar16 << (uVar40 & 0x7f);
              if ((longlong)(uVar37 - uVar40) < 0) {
                fn_82C4E5E8(puVar16);
              }
              uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
              uVar40 = uVar37 + 0x10;
              iVar39 = iVar43;
            } while ((uVar40 & 0xffffffff) < (uVar50 & 0xffffffff));
          }
          uVar40 = *puVar16;
          *(int *)(puVar16 + 1) = (int)(uVar37 - uVar50);
          *puVar16 = uVar40 << (uVar50 & 0x7f);
          if ((longlong)(uVar37 - uVar50) < 0) {
            fn_82C4E5E8(puVar16);
          }
          if ((int)(uVar40 >> (0x40 - uVar50 & 0x7f)) + iVar43 == 0) {
            iVar39 = 0;
          }
          else {
            piVar33 = (int *)param_2[0x135];
            puVar16 = (ulonglong *)*param_2;
            if (piVar33 == (int *)0x0) {
              iVar39 = 0;
              *(undefined4 *)((int)puVar16 + 0x14) = 3;
            }
            else {
              iVar43 = *piVar33;
              sVar34 = *(short *)((int)((*puVar16 >>
                                         (0x40 - (ulonglong)*(byte *)(piVar33 + 2) & 0x7f) &
                                        0xffffffff) << 1) + iVar43);
              uVar37 = (ulonglong)sVar34;
              if (sVar34 < 0) {
                fn_82C4E470(puVar16);
                do {
                  uVar40 = *puVar16;
                  fn_82C4E470(puVar16,1);
                  sVar34 = *(short *)((int)(((uVar37 - ((longlong)uVar40 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar43);
                  uVar37 = (ulonglong)sVar34;
                  iVar39 = (int)sVar34;
                } while (sVar34 < 0);
              }
              else {
                iVar39 = *(int *)(puVar16 + 1);
                iVar43 = (int)(uVar37 & 0xf);
                *puVar16 = *puVar16 << (uVar37 & 0xf);
                *(int *)(puVar16 + 1) = iVar39 - iVar43;
                if (iVar39 < iVar43) {
                  do {
                    pbVar17 = *(byte **)((int)puVar16 + 0xc);
                    if (pbVar17 < (byte *)(*(int *)(puVar16 + 2) - 4U)) {
                      bVar2 = *pbVar17;
                      bVar35 = pbVar17[1];
                      bVar31 = pbVar17[2];
                      bVar3 = pbVar17[4];
                      bVar4 = pbVar17[3];
                      bVar5 = pbVar17[5];
                      iVar39 = *(int *)(puVar16 + 1);
                      *(byte **)((int)puVar16 + 0xc) = pbVar17 + 6;
                      *(int *)(puVar16 + 1) = iVar39 + 0x30;
                      *puVar16 = ((((((ulonglong)bVar35 + (ulonglong)bVar2 * 0x100) * 0x100 +
                                    (ulonglong)bVar31) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                  (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5 <<
                                 ((longlong)-iVar39 & 0x7fU)) + *puVar16;
                      goto LAB_830ca978;
                    }
                    iVar39 = fn_82C4E3B0(puVar16);
                  } while (iVar39 == 1);
                  iVar39 = (int)sVar34 >> 4;
                }
                else {
LAB_830ca978:
                  iVar39 = (int)sVar34 >> 4;
                }
              }
            }
            iVar39 = iVar39 + 1;
            if ((iVar39 < 0) || (0x3f < iVar39)) goto LAB_830cacdc;
          }
          puVar16 = (ulonglong *)*param_2;
          if (*(int *)((int)puVar16 + 0x14) == 0) {
            uVar37 = *puVar16;
            uVar36 = *(uint *)(puVar16 + 1);
            uVar7 = *(undefined1 *)(param_2[0x13c] + iVar39);
            *puVar16 = uVar37 << 1;
            *(int *)(puVar16 + 1) = (int)((ulonglong)uVar36 - 1);
            if ((longlong)((ulonglong)uVar36 - 1) < 0) {
              fn_82C4E5E8();
            }
            *(undefined1 *)((int)puVar45 + 5) = uVar7;
            *puVar45 = (uint)((uVar37 >> 0x3f) << 3) | *puVar45 & 0xffffffe7;
            if (*(char *)((int)param_2 + 0x1b) != '\0') {
              if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                puVar16 = (ulonglong *)*param_2;
                lVar47 = 0;
                uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
                uVar40 = uVar37 + 0x10;
                if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                  uVar32 = 3;
                  if ((uVar40 & 0xffffffff) < 3) {
                    do {
                      if ((uVar40 & 0xffffffff) == 0) break;
                      uVar32 = uVar32 - uVar40;
                      *(int *)(puVar16 + 1) = (int)(uVar37 - uVar40);
                      lVar47 = (ulonglong)
                               (uint)((int)(*puVar16 >> (0x40 - uVar40 & 0x7f)) <<
                                     ((uint)uVar32 & 0x3f)) + lVar47;
                      *puVar16 = *puVar16 << (uVar40 & 0x7f);
                      if ((longlong)(uVar37 - uVar40) < 0) {
                        fn_82C4E5E8(puVar16);
                      }
                      uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
                      uVar40 = uVar37 + 0x10;
                    } while ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff));
                  }
                  *(int *)(puVar16 + 1) = (int)(uVar37 - uVar32);
                  lVar47 = (*puVar16 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar47;
                  *puVar16 = *puVar16 << (uVar32 & 0x7f);
                  if ((longlong)(uVar37 - uVar32) < 0) {
                    fn_82C4E5E8(puVar16);
                  }
                  if ((int)lVar47 == 7) {
                    puVar16 = (ulonglong *)*param_2;
                    uVar32 = 5;
                    lVar47 = 0;
                    uVar40 = (ulonglong)*(uint *)(puVar16 + 1);
                    uVar37 = uVar40 + 0x10;
                    if ((uVar37 & 0xffffffff) < 5) {
                      do {
                        if ((uVar37 & 0xffffffff) == 0) break;
                        uVar32 = uVar32 - uVar37;
                        *(int *)(puVar16 + 1) = (int)(uVar40 - uVar37);
                        lVar47 = (ulonglong)
                                 (uint)((int)(*puVar16 >> (0x40 - uVar37 & 0x7f)) <<
                                       ((uint)uVar32 & 0x3f)) + lVar47;
                        *puVar16 = *puVar16 << (uVar37 & 0x7f);
                        if ((longlong)(uVar40 - uVar37) < 0) {
                          fn_82C4E5E8(puVar16);
                        }
                        uVar40 = (ulonglong)*(uint *)(puVar16 + 1);
                        uVar37 = uVar40 + 0x10;
                      } while ((uVar37 & 0xffffffff) < (uVar32 & 0xffffffff));
                    }
                    *(int *)(puVar16 + 1) = (int)(uVar40 - uVar32);
                    uVar37 = (*puVar16 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar47;
                    *puVar16 = *puVar16 << (uVar32 & 0x7f);
                    if ((longlong)(uVar40 - uVar32) < 0) {
                      fn_82C4E5E8(puVar16);
                    }
                  }
                  else {
                    uVar37 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar47;
                  }
                  *(char *)(puVar45 + 1) = (char)((uVar37 & 0xffffffff) << 1) + -1;
                }
                else {
                  uVar32 = 1;
                  if ((uVar40 & 0xffffffff) == 0) {
                    do {
                      if ((uVar40 & 0xffffffff) == 0) break;
                      uVar32 = uVar32 - uVar40;
                      *(int *)(puVar16 + 1) = (int)(uVar37 - uVar40);
                      lVar47 = (ulonglong)
                               (uint)((int)(*puVar16 >> (0x40 - uVar40 & 0x7f)) <<
                                     ((uint)uVar32 & 0x3f)) + lVar47;
                      *puVar16 = *puVar16 << (uVar40 & 0x7f);
                      if ((longlong)(uVar37 - uVar40) < 0) {
                        fn_82C4E5E8(puVar16);
                      }
                      uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
                      uVar40 = uVar37 + 0x10;
                    } while ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff));
                  }
                  uVar40 = *puVar16;
                  *(int *)(puVar16 + 1) = (int)(uVar37 - uVar32);
                  *puVar16 = uVar40 << (uVar32 & 0x7f);
                  if ((longlong)(uVar37 - uVar32) < 0) {
                    fn_82C4E5E8(puVar16);
                  }
                  if (((uVar40 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar47 & 0xffffffff) == 0)
                  {
                    *(char *)(puVar45 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar45 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                }
              }
              else if ((*puVar45 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
                *(char *)(puVar45 + 1) =
                     *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
              }
              else {
                *(char *)(puVar45 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
              }
            }
          }
LAB_830cacdc:
          bVar2 = *(byte *)(puVar45 + 1);
          iVar39 = param_2[0x61];
          uStack_e0 = (uint)*(byte *)((int)puVar45 + 5);
          do {
            uVar9 = *(ushort *)((int)param_2 + 0x32);
            iVar43 = (int)uVar49;
            uVar36 = 0;
            uVar22 = uVar9 >> 1;
            uVar27 = 0;
            uVar53 = 0;
            bVar1 = (int)uVar51 != 0;
            if (iVar43 >> 2 == 0) {
              piVar42 = param_2 + 0x68;
              if (bVar1) {
                uVar27 = (uint)((~(ulonglong)puVar45[-6] & 0xffffffff) >> 0x11) & 1;
              }
              uVar37 = uVar49 & 1;
              uVar27 = (int)uVar37 + uVar27;
              if (iVar44 != 0) {
                uVar36 = (uint)((~(ulonglong)puVar45[(uint)uVar22 * -6] & 0xffffffff) >> 0x11) & 1;
              }
              iVar26 = iVar43 >> 1;
              uVar36 = iVar26 + uVar36;
              if ((uVar27 != 0) && (uVar36 != 0)) {
                uVar40 = (longlong)(iVar26 + -1) * (longlong)(int)(uint)uVar22 + uVar37;
                uVar53 = (uint)((~(ulonglong)
                                  *(uint *)((int)puVar45 +
                                           (int)((uVar40 + (uVar40 & 0x7fffffff) * 2 & 0xffffffff)
                                                << 3) + -0x18) & 0xffffffff) >> 0x11) & 1;
              }
              piVar33 = (int *)param_2[0x132];
              lVar47 = ((longlong)(int)(uStack_f0 * 2 + iVar26) * (longlong)(int)(uint)uVar9 +
                        (uVar51 & 0x7fffffff) * 2 + uVar37 & 0x7ffffff) * 0x20 +
                       (ulonglong)(uint)param_2[0x6c];
            }
            else {
              piVar33 = (int *)param_2[0x133];
              uVar25 = -iVar44;
              piVar42 = param_2 + 0x65;
              if (bVar1) {
                uVar27 = (uint)((~(ulonglong)puVar45[-6] & 0xffffffff) >> 0x11) & 1;
              }
              uVar36 = 0;
              if (uVar25 != 0) {
                uVar36 = uVar25 & ~(puVar45[(uint)uVar22 * -6] >> 0x11) & 1;
              }
              if ((uVar27 != 0) && (uVar36 != 0)) {
                uVar53 = (uint)((~(ulonglong)puVar45[(uVar22 + 1) * -6] & 0xffffffff) >> 0x11) & 1;
              }
              lVar47 = (ulonglong)*(uint *)((int)((uVar49 + 0x69 & 0xffffffff) << 2) + (int)param_2)
                       + ((longlong)(int)(uint)uVar22 * (longlong)(int)uStack_f0 + uVar51 &
                         0x7ffffff) * 0x20;
              uVar9 = uVar22;
            }
            uVar25 = *puVar45;
            iVar26 = *(int *)((uint)bVar2 * 0x14 + iVar39 + 0x10);
            uVar51 = 0;
            iVar30 = 0;
            uVar37 = lVar47 - 0x10;
            uVar40 = lVar47 + (ulonglong)uVar9 * -0x20;
            if (uVar27 == 0) {
              if (uVar36 != 0) {
LAB_830cb0cc:
                iVar30 = 1;
                uVar51 = uVar40;
                goto LAB_830cb0d4;
              }
            }
            else {
              if (uVar36 != 0) {
                psVar48 = (short *)uVar40;
                if (uVar53 == 0) {
                  iVar30 = 0;
                }
                else {
                  iVar30 = (int)psVar48[-0x10];
                }
                sVar34 = *psVar48;
                sVar46 = *(short *)uVar37;
                iVar29 = (int)sVar34;
                iVar28 = (int)sVar46;
                if (*(char *)((int)param_2 + 0x1b) != '\0') {
                  if (((iVar43 == 0) || (iVar43 == 4)) || (iVar43 == 5)) {
                    iVar28 = param_2[0x61];
                    iVar18 = *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar45 + 1) * 0x14 + iVar28 + 0x10)
                                     & 0x3f) * 4);
                    iVar30 = iVar18 * *(int *)((uint)*(byte *)(puVar45 + (uint)uVar22 * -6 + -5) *
                                               0x14 + iVar28 + 0x10) * iVar30 + 0x20000 >> 0x12;
                    iVar29 = iVar18 * *(int *)((uint)*(byte *)(puVar45 + (uint)uVar22 * -6 + 1) *
                                               0x14 + iVar28 + 0x10) * (int)sVar34 + 0x20000 >> 0x12
                    ;
                    iVar28 = iVar18 * *(int *)((uint)*(byte *)(puVar45 + -5) * 0x14 + iVar28 + 0x10)
                                      * (int)sVar46 + 0x20000 >> 0x12;
                  }
                  else if (iVar43 == 1) {
                    iVar29 = *(int *)((uint)*(byte *)(puVar45 + (uint)uVar22 * -6 + 1) * 0x14 +
                                      param_2[0x61] + 0x10);
                    iVar30 = *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar45 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) * iVar29 * iVar30 + 0x20000 >>
                             0x12;
                    iVar29 = *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar45 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) * iVar29 * sVar34 + 0x20000 >>
                             0x12;
                  }
                  else if (iVar43 == 2) {
                    iVar28 = *(int *)((uint)*(byte *)(puVar45 + -5) * 0x14 + param_2[0x61] + 0x10);
                    iVar30 = *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar45 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) * iVar28 * iVar30 + 0x20000 >>
                             0x12;
                    iVar28 = *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar45 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) * iVar28 * sVar46 + 0x20000 >>
                             0x12;
                  }
                }
                uVar36 = iVar30 - iVar28 >> 0x1f;
                uVar27 = iVar30 - iVar29 >> 0x1f;
                if ((int)((iVar30 - iVar28 ^ uVar36) - uVar36) <
                    (int)((iVar30 - iVar29 ^ uVar27) - uVar27)) goto LAB_830cb0cc;
              }
              iVar30 = 8;
              uVar51 = uVar37;
LAB_830cb0d4:
              if (((uVar51 & 0xffffffff) != 0) && (*(char *)((int)param_2 + 0x1b) != '\0')) {
                psVar48 = (short *)uVar51;
                if ((uVar51 & 0xffffffff) == (uVar37 & 0xffffffff)) {
                  if ((((iVar43 == 0) || (iVar43 == 2)) || (iVar43 == 4)) || (iVar43 == 5)) {
                    bVar35 = *(byte *)(puVar45 + -5);
                    lVar54 = 3;
                    iVar29 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar45 + 1) & 0x3f) * 4);
                    lVar41 = uVar23 - 0xc6;
                    lVar38 = uVar51 + 6;
                    asStack_c0[0] =
                         (short)((uint)(*(int *)(&lbl_820FDD78 +
                                                (*(uint *)((uint)*(byte *)(puVar45 + 1) * 0x14 +
                                                           param_2[0x61] + 0x10) & 0x3f) * 4) *
                                        *(int *)((uint)*(byte *)(puVar45 + -5) * 0x14 +
                                                 param_2[0x61] + 0x10) * (int)*psVar48 + 0x20000) >>
                                0x10);
                    do {
                      psVar52 = (short *)lVar38;
                      sVar34 = psVar52[-1];
                      sVar46 = *psVar52;
                      sVar10 = psVar52[1];
                      sVar11 = psVar52[2];
                      uVar36 = (uint)bVar35;
                      *(short *)((int)lVar41 + 8) =
                           (short)((int)((int)psVar52[-2] * (uint)bVar35 * iVar29 + 0x20000) >> 0x12
                                  );
                      lVar41 = lVar41 + 10;
                      *(short *)lVar41 =
                           (short)((int)((int)sVar34 * (uint)bVar35 * iVar29 + 0x20000) >> 0x12);
                      *(short *)(((int)asStack_c0 - (int)psVar48) + (int)psVar52) =
                           (short)((int)((int)sVar46 * uVar36 * iVar29 + 0x20000) >> 0x12);
                      *(short *)((int)asStack_c0 + (2 - (int)psVar48) + (int)psVar52) =
                           (short)((int)((int)sVar10 * uVar36 * iVar29 + 0x20000) >> 0x12);
                      *(short *)((int)asStack_c0 + (4 - (int)psVar48) + (int)psVar52) =
                           (short)((int)(iVar29 * (int)sVar11 * uVar36 + 0x20000) >> 0x12);
                      lVar38 = lVar38 + 10;
                      lVar54 = lVar54 + -1;
                    } while (lVar54 != 0);
LAB_830cb3dc:
                    asStack_c0[0] = asStack_c0[0] >> 2;
                    sStack_b0 = asStack_c0[0];
                  }
                  else {
                    lVar38 = uVar23 - 0xc2;
                    lVar41 = uVar51 - 2;
                    lVar54 = 0x10;
                    do {
                      lVar41 = lVar41 + 2;
                      lVar38 = lVar38 + 2;
                      *(undefined2 *)lVar38 = *(undefined2 *)lVar41;
                      lVar54 = lVar54 + -1;
                    } while (lVar54 != 0);
                  }
                }
                else {
                  if (((iVar43 == 0) || (iVar43 == 1)) || ((iVar43 == 4 || (iVar43 == 5)))) {
                    bVar35 = *(byte *)(puVar45 +
                                      (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) * -6 + 1);
                    lVar41 = uVar23 - 0xc6;
                    iVar29 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar45 + 1) & 0x3f) * 4);
                    lVar54 = 3;
                    lVar38 = uVar51 + 6;
                    asStack_c0[0] =
                         (short)((uint)(*(int *)(&lbl_820FDD78 +
                                                (*(uint *)((uint)*(byte *)(puVar45 + 1) * 0x14 +
                                                           param_2[0x61] + 0x10) & 0x3f) * 4) *
                                        *(int *)((uint)*(byte *)(puVar45 + (uint)uVar22 * -6 + 1) *
                                                 0x14 + param_2[0x61] + 0x10) * (int)*psVar48 +
                                       0x20000) >> 0x10);
                    do {
                      psVar52 = (short *)lVar38;
                      iVar28 = iVar29 * (uint)bVar35;
                      sVar34 = psVar52[-1];
                      sVar46 = psVar52[2];
                      sVar10 = *psVar52;
                      sVar11 = psVar52[1];
                      *(short *)((int)lVar41 + 8) = (short)(psVar52[-2] * iVar28 + 0x20000 >> 0x12);
                      lVar41 = lVar41 + 10;
                      *(short *)lVar41 = (short)(sVar34 * iVar28 + 0x20000 >> 0x12);
                      *(short *)(((int)asStack_c0 - (int)psVar48) + (int)psVar52) =
                           (short)(sVar10 * iVar28 + 0x20000 >> 0x12);
                      *(short *)((int)asStack_c0 + (2 - (int)psVar48) + (int)psVar52) =
                           (short)(sVar11 * iVar28 + 0x20000 >> 0x12);
                      *(short *)((int)asStack_c0 + (4 - (int)psVar48) + (int)psVar52) =
                           (short)((int)((int)sVar46 * (uint)bVar35 * iVar29 + 0x20000) >> 0x12);
                      lVar38 = lVar38 + 10;
                      lVar54 = lVar54 + -1;
                    } while (lVar54 != 0);
                    goto LAB_830cb3dc;
                  }
                  lVar38 = uVar23 - 0xc2;
                  lVar41 = uVar51 - 2;
                  lVar54 = 0x10;
                  do {
                    lVar41 = lVar41 + 2;
                    lVar38 = lVar38 + 2;
                    *(undefined2 *)lVar38 = *(undefined2 *)lVar41;
                    lVar54 = lVar54 + -1;
                  } while (lVar54 != 0);
                }
                uVar51 = uVar23 - 0xc0;
              }
            }
            uVar36 = piStack00000024[7];
            lVar41 = (ulonglong)uVar36 - 0x80;
            psVar48 = (short *)lVar41;
            piStack00000024[7] = (int)psVar48;
            dataCacheBlockClearToZero(lVar41);
            dataCacheBlockTouch(lVar41);
            dataCacheBlockTouch(uVar51);
            dataCacheBlockTouch(lVar47);
            sVar34 = 0;
            puVar16 = (ulonglong *)*param_2;
            if (piVar33 == (int *)0x0) {
              uVar37 = 0;
              *(undefined4 *)((int)puVar16 + 0x14) = 3;
            }
            else {
              iVar29 = *piVar33;
              sVar46 = *(short *)((int)((*puVar16 >>
                                         (0x40 - (ulonglong)*(byte *)(piVar33 + 2) & 0x7f) &
                                        0xffffffff) << 1) + iVar29);
              uVar37 = (ulonglong)sVar46;
              if (sVar46 < 0) {
                fn_82C4E470(puVar16);
                do {
                  uVar40 = *puVar16;
                  fn_82C4E470(puVar16,1);
                  sVar46 = *(short *)((int)(((uVar37 - ((longlong)uVar40 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar29);
                  uVar37 = (ulonglong)sVar46;
                } while (sVar46 < 0);
              }
              else {
                iVar29 = *(int *)(puVar16 + 1);
                iVar28 = (int)(uVar37 & 0xf);
                *puVar16 = *puVar16 << (uVar37 & 0xf);
                *(int *)(puVar16 + 1) = iVar29 - iVar28;
                if (iVar29 < iVar28) {
                  do {
                    pbVar17 = *(byte **)((int)puVar16 + 0xc);
                    if (pbVar17 < (byte *)(*(int *)(puVar16 + 2) - 4U)) {
                      bVar35 = *pbVar17;
                      bVar31 = pbVar17[1];
                      bVar3 = pbVar17[2];
                      bVar4 = pbVar17[3];
                      bVar5 = pbVar17[4];
                      bVar6 = pbVar17[5];
                      iVar29 = *(int *)(puVar16 + 1);
                      *(byte **)((int)puVar16 + 0xc) = pbVar17 + 6;
                      *(int *)(puVar16 + 1) = iVar29 + 0x30;
                      *puVar16 = ((((((ulonglong)bVar31 + (ulonglong)bVar35 * 0x100) * 0x100 +
                                    (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                  (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                                 ((longlong)-iVar29 & 0x7fU)) + *puVar16;
                      goto LAB_830cb510;
                    }
                    iVar29 = fn_82C4E3B0(puVar16);
                  } while (iVar29 == 1);
                  uVar37 = (ulonglong)((int)sVar46 >> 4);
                }
                else {
LAB_830cb510:
                  uVar37 = (ulonglong)((int)sVar46 >> 4);
                }
              }
            }
            sVar46 = (short)uVar37;
            if ((int)(uVar37 & 0xffff) == 0x77) {
              if (iVar26 < 5) {
                lVar38 = 3 - (longlong)(iVar26 >> 1);
              }
              else {
                lVar38 = 0;
              }
              uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
              uVar32 = lVar38 + 8;
              iVar26 = 0;
              sVar46 = 0;
              uVar40 = uVar37 + 0x10;
              if ((uVar32 & 0xffffffff) < 0x21) {
                if ((uVar32 & 0xffffffff) == 0) {
                  sVar46 = 0;
                }
                else {
                  if ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff)) {
                    do {
                      sVar46 = (short)iVar26;
                      if ((uVar40 & 0xffffffff) == 0) break;
                      uVar32 = uVar32 - uVar40;
                      *(int *)(puVar16 + 1) = (int)(uVar37 - uVar40);
                      iVar26 = ((int)(*puVar16 >> (0x40 - uVar40 & 0x7f)) << ((uint)uVar32 & 0x3f))
                               + iVar26;
                      sVar46 = (short)iVar26;
                      *puVar16 = *puVar16 << (uVar40 & 0x7f);
                      if ((longlong)(uVar37 - uVar40) < 0) {
                        fn_82C4E5E8(puVar16);
                      }
                      uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
                      uVar40 = uVar37 + 0x10;
                    } while ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff));
                  }
                  *(int *)(puVar16 + 1) = (int)(uVar37 - uVar32);
                  sVar46 = (short)(*puVar16 >> (0x40 - uVar32 & 0x7f)) + sVar46;
                  *puVar16 = *puVar16 << (uVar32 & 0x7f);
                  if ((longlong)(uVar37 - uVar32) < 0) {
                    fn_82C4E5E8(puVar16);
                  }
                }
              }
              else {
                sVar46 = 0;
              }
LAB_830cb768:
              uVar37 = *puVar16;
              uVar27 = *(uint *)(puVar16 + 1);
              *puVar16 = uVar37 << 1;
              *(int *)(puVar16 + 1) = (int)((ulonglong)uVar27 - 1);
              if ((longlong)((ulonglong)uVar27 - 1) < 0) {
                fn_82C4E5E8(puVar16);
              }
              sVar34 = (1 - (short)((uVar37 >> 0x3f) << 1)) * sVar46;
            }
            else if ((uVar37 & 0xffff) != 0) {
              if (iVar26 == 4) {
                uVar37 = *puVar16;
                uVar27 = *(uint *)(puVar16 + 1);
                *puVar16 = uVar37 << 1;
                *(int *)(puVar16 + 1) = (int)((ulonglong)uVar27 - 1);
                if ((longlong)((ulonglong)uVar27 - 1) < 0) {
                  fn_82C4E5E8(puVar16);
                }
                sVar46 = (sVar46 * 2 - (short)((longlong)uVar37 >> 0x3f)) + -1;
              }
              else if (iVar26 == 2) {
                uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
                uVar32 = 2;
                iVar26 = 0;
                sVar34 = 0;
                uVar40 = uVar37 + 0x10;
                if ((uVar40 & 0xffffffff) < 2) {
                  do {
                    sVar34 = (short)iVar26;
                    if ((uVar40 & 0xffffffff) == 0) break;
                    uVar32 = uVar32 - uVar40;
                    *(int *)(puVar16 + 1) = (int)(uVar37 - uVar40);
                    iVar26 = ((int)(*puVar16 >> (0x40 - uVar40 & 0x7f)) << ((uint)uVar32 & 0x3f)) +
                             iVar26;
                    sVar34 = (short)iVar26;
                    *puVar16 = *puVar16 << (uVar40 & 0x7f);
                    if ((longlong)(uVar37 - uVar40) < 0) {
                      fn_82C4E5E8(puVar16);
                    }
                    uVar37 = (ulonglong)*(uint *)(puVar16 + 1);
                    uVar40 = uVar37 + 0x10;
                  } while ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff));
                }
                uVar40 = *puVar16;
                *(int *)(puVar16 + 1) = (int)(uVar37 - uVar32);
                *puVar16 = uVar40 << (uVar32 & 0x7f);
                if ((longlong)(uVar37 - uVar32) < 0) {
                  fn_82C4E5E8(puVar16);
                }
                sVar46 = sVar46 * 4 + (short)(uVar40 >> (0x40 - uVar32 & 0x7f)) + sVar34 + -3;
              }
              goto LAB_830cb768;
            }
            *psVar48 = sVar34;
            if (*(int *)(*param_2 + 0x14) != 0) {
              return 1;
            }
            if ((uVar25 >> 3 & 3) == 0) {
              iVar26 = param_2[0x13d];
              iVar30 = 0;
            }
            else {
              iVar26 = param_2[iVar30 + 0x13d];
              if (((*(char *)(param_2 + 0x139) != '\0') && (iVar30 != 0)) &&
                 (bVar1 = iVar30 == 8, iVar30 = 8, bVar1)) {
                iVar30 = 1;
              }
            }
            if (((uStack_e0 & 1) != 0) &&
               (iVar26 = fn_830D9228(param_2,*piVar42,lVar41,iVar26), iVar26 < 0)) {
              return 1;
            }
            iVar26 = (int)in_r0;
            if ((uVar51 & 0xffffffff) != 0) {
              psVar52 = (short *)uVar51;
              if (iVar30 == 1) {
                puVar20 = (undefined4 *)(iVar26 + (int)psVar52 & 0xfffffff0);
                uVar55 = puVar20[1];
                uVar56 = puVar20[2];
                uVar57 = puVar20[3];{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
                puVar19 = (undefined4 *)(iVar26 + (int)psVar48 & 0xfffffff0);
                *puVar19 = *puVar20;
                puVar19[1] = uVar55;
                puVar19[2] = uVar56;
                puVar19[3] = uVar57;
              }
              else if (iVar30 == 8) {
                sVar34 = *(short *)(uVar36 - 0x70);
                sVar46 = *(short *)(uVar36 - 0x60);
                sVar10 = *(short *)(uVar36 - 0x20);
                *psVar48 = *psVar48 + *psVar52;
                sVar11 = *(short *)(uVar36 - 0x50);
                sVar12 = *(short *)(uVar36 - 0x40);
                sVar13 = *(short *)(uVar36 - 0x30);
                sVar14 = *(short *)(uVar36 - 0x10);
                *(short *)(uVar36 - 0x70) = psVar52[1] + sVar34;
                *(short *)(uVar36 - 0x60) = psVar52[2] + sVar46;
                *(short *)(uVar36 - 0x50) = psVar52[3] + sVar11;
                *(short *)(uVar36 - 0x40) = psVar52[4] + sVar12;
                *(short *)(uVar36 - 0x30) = psVar52[5] + sVar13;
                *(short *)(uVar36 - 0x20) = psVar52[6] + sVar10;
                *(short *)(uVar36 - 0x10) = psVar52[7] + sVar14;
              }
              else {
                *psVar48 = *psVar48 + *psVar52;
              }
            }
            psVar52 = (short *)lVar47;
            if (*(char *)(param_2 + 0x139) == '\0') {
              altv207_13(in_vs32,in_vs61);
              puVar20 = (undefined4 *)(iVar26 + (int)psVar52 & 0xfffffff0);
              *puVar20 = in_register_000103e0;
              puVar20[1] = in_register_000103e4;
              puVar20[2] = in_register_000103e8;
              puVar20[3] = in_vr62;
              psVar52[8] = *psVar48;
              psVar52[9] = *(short *)(uVar36 - 0x70);
              psVar52[10] = *(short *)(uVar36 - 0x60);
              psVar52[0xb] = *(short *)(uVar36 - 0x50);
              psVar52[0xc] = *(short *)(uVar36 - 0x40);
              psVar52[0xd] = *(short *)(uVar36 - 0x30);
              psVar52[0xe] = *(short *)(uVar36 - 0x20);
              psVar52[0xf] = *(short *)(uVar36 - 0x10);
            }
            else {
              *psVar52 = *psVar48;
              psVar52[1] = *(short *)(uVar36 - 0x70);
              psVar52[2] = *(short *)(uVar36 - 0x60);
              psVar52[3] = *(short *)(uVar36 - 0x50);
              psVar52[4] = *(short *)(uVar36 - 0x40);
              psVar52[5] = *(short *)(uVar36 - 0x30);
              psVar52[6] = *(short *)(uVar36 - 0x20);
              psVar52[7] = *(short *)(uVar36 - 0x10);
              altv207_13(in_vs32,in_vs61);
              puVar20 = (undefined4 *)((uint)(psVar52 + 8) & 0xfffffff0);
              *puVar20 = in_register_000103f0;
              puVar20[1] = in_register_000103f4;
              puVar20[2] = in_register_000103f8;
              puVar20[3] = in_vr63;
            }
            uVar49 = uVar49 + 1;
            uStack_e0 = (int)uStack_e0 >> 1;
            *(undefined1 *)((int)puVar45 + iVar43 + 8) = 0;
            if (5 < (int)uVar49) goto code_r0x830cb9bc;
            uVar51 = (ulonglong)uStack_ec;
          } while( true );
        }
        uVar24 = fn_830C98F0(param_2,puVar45,uVar51,uStack_f0,bVar31,bVar35,param_3);
        if ((int)uVar24 != 0) {
          return uVar24;
        }
        uVar24 = fn_830C6850(param_2,puVar45,param_3);
        if ((int)uVar24 != 0) {
          return uVar24;
        }
        goto LAB_830cba78;
      }
LAB_830cbb90:
      uStack_f0 = uStack_f0 + 1;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      *param_3 = (uint)uVar21 * 2 + *param_3;
      if (param_6 <= uStack_f0) break;
      param_5 = (ulonglong)uStack_f0;
    } while( true );
  }
  piVar33 = param_2 + (param_4 + 0x5d) * 4;
  *piVar33 = param_3[5];
  piVar33[1] = param_3[6];
  piVar33[2] = param_3[7];
  piVar33[3] = param_3[8];
  if (uVar8 >> 1 == param_6) {
    *(int *)(param_1 + 0xb0b4) = param_3[8] - *(int *)(param_1 + 0x5708) >> 2;
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
  return uVar24;
code_r0x830cb9bc:
  uVar36 = *puVar45;
  uVar24 = 0;
  iVar39 = param_2[0x148];
  iVar43 = piStack00000024[1];
  *(uint *)piStack00000024[8] =
       (*(ushort *)(piStack00000024 + 4) & 0x1fffe) << 0xf |
       (uint)(*(ushort *)((int)piStack00000024 + 0x12) >> 1);
  piStack00000024[8] = piStack00000024[8] + 4;
  *(ulonglong *)(iVar43 * 8 + iVar39) =
       ((ulonglong)*(byte *)(puVar45 + 1) << 8 |
       (ulonglong)*(byte *)((int)puVar45 + 5) | (ulonglong)(uVar36 >> 2) & 0xc0) << 0x30;
LAB_830cba78:
  if (0 < *(int *)(iStack00000014 + 0x39f4)) {
    uVar51 = (((longlong)(int)*(uint *)(iStack00000014 + 0x88) * (longlong)(int)uStack_f0 &
              0x7fffffffU) * 2 + (ulonglong)uStack_ec & 0x7fffffff) * 2;
    iVar39 = (int)((uVar51 & 0x3fffffff) << 2);
    iVar43 = (int)((((ulonglong)*(uint *)(iStack00000014 + 0x88) & 0x7fffffff) * 2 + uVar51 &
                   0x3fffffff) << 2);
    if ((*puVar45 & 0x700) == 0x400) {
      *(undefined4 *)(iVar39 + param_2[0x5e]) = 0;
      *(undefined4 *)(iVar39 + param_2[0x5e] + 4) = 0;
      *(undefined4 *)(iVar43 + param_2[0x5e]) = 0;
      *(undefined4 *)(iVar43 + param_2[0x5e] + 4) = 0;
    }
    else {
      *(undefined4 *)(iVar39 + param_2[0x5e]) = *(undefined4 *)(iVar39 + iVar15);
      *(undefined4 *)(iVar39 + param_2[0x5e] + 4) = *(undefined4 *)(iVar39 + iVar15 + 4);
      *(undefined4 *)(iVar43 + param_2[0x5e]) = *(undefined4 *)(iVar43 + iVar15);
      *(undefined4 *)(iVar43 + param_2[0x5e] + 4) = *(undefined4 *)(iVar43 + iVar15 + 4);
    }
  }
  puVar45 = puVar45 + 6;
  piStack00000024[1] = piStack00000024[1] + 1;
  uStack_ec = uStack_ec + 1;
  *piStack00000024 = *piStack00000024 + 2;
  *(short *)((int)piStack00000024 + 0x12) = *(short *)((int)piStack00000024 + 0x12) + 2;
  param_6 = uStack0000003c;
  param_4 = iStack0000002c;
  param_1 = iStack00000014;
  param_3 = piStack00000024;
  if (uStack_dc <= uStack_ec) goto LAB_830cbb90;
  uVar51 = (ulonglong)uStack_ec;
  goto LAB_830ca484;
}

