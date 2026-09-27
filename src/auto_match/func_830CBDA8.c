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
extern int memset();
extern int fn_830C6850();
extern int fn_830C6D68();
extern int fn_830D9228();
extern unsigned int iStack00000014;
extern unsigned int lbl_820FD978;
extern unsigned int lbl_820FD9B8;
extern unsigned int lbl_820FD9D0;
extern unsigned int lbl_820FDD78;
extern unsigned int stack0x00000000;
extern unsigned int uStack_dc;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern V16 vectorAddSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_830CBDA8(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  ulonglong *puVar15;
  int *piVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  undefined8 in_r0;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  short sVar34;
  uint uVar35;
  ulonglong uVar36;
  int iVar38;
  longlong lVar37;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  int *piVar42;
  uint *puVar43;
  int iVar45;
  ulonglong uVar44;
  ulonglong uVar46;
  byte bVar47;
  byte bVar49;
  short sVar48;
  longlong lVar50;
  short *psVar51;
  ulonglong uVar52;
  short *psVar53;
  undefined8 uVar54;
  uint uVar55;
  ushort *puVar56;
  longlong lVar57;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined4 uVar58;
  undefined4 uVar59;
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
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_dc;
  short asStack_c0 [8];
  short sStack_b0;
  
  uVar24 = ZEXT48(&stack0x00000000);
  puVar43 = *(uint **)(param_1 + 0x110);
  iVar29 = param_2[0x57];
  uVar54 = 0;
  param_3[5] = *(int *)(param_1 + 0x56f8);
  param_3[6] = *(int *)(param_1 + 0x5704);
  param_3[7] = *(int *)(param_1 + 0x56fc);
  param_3[8] = *(int *)(param_1 + 0x5708);
  uVar21 = *(ushort *)(param_2 + 0xd) >> 1;
  uVar44 = (ulonglong)uVar21;
  uVar22 = *(ushort *)((int)param_2 + 0x32) >> 1;
  param_3[1] = 0;
  *param_3 = 0;
  *(undefined2 *)(param_3 + 4) = 0;
  iStack00000014 = param_1;
  piStack00000024 = param_3;
  memset(iVar29,0,(longlong)(int)(uint)uVar21 * (longlong)(int)(uint)uVar22 * 0x10 &
                        0xfffffff0);
  uVar46 = 0;
  uStack_e8 = 0;
  if (uVar44 != 0) {
    do {
      uStack_dc = (uint)uVar22;
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      if ((*(int *)(param_1 + 0x55b4) != 0) &&
         (*(int *)(param_2[0x146] + (int)((uVar46 & 0xffffffff) << 2)) != 0)) {
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
        puVar15 = *(ulonglong **)(param_1 + 0x54);
        if (*(int *)((int)puVar15 + 0x1c) != 0) {
          uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
          uVar52 = 1;
          uVar39 = uVar36 + 0x10;
          if ((uVar39 & 0xffffffff) == 0) {
            do {
              if ((uVar39 & 0xffffffff) == 0) break;
              uVar33 = *puVar15;
              uVar52 = uVar52 - uVar39;
              *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
              *puVar15 = uVar33 << (uVar39 & 0x7f);
              if ((longlong)(uVar36 - uVar39) < 0) {
                fn_82C4E5E8(puVar15,uVar33 >> (0x40 - uVar39 & 0x7f) & 0xffffffff);
              }
              uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar39 = uVar36 + 0x10;
            } while ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff));
          }
          *puVar15 = *puVar15 << (uVar52 & 0x7f);
          *(int *)(puVar15 + 1) = (int)(uVar36 - uVar52);
          if ((longlong)(uVar36 - uVar52) < 0) {
            fn_82C4E5E8(puVar15);
          }
        }
        fn_82C4E470(puVar15,*(uint *)(puVar15 + 1) & 7);
        uVar54 = fn_82CA5860(param_1,uVar46);
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
        if ((int)uVar54 != 0) {
          return uVar54;
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
        uVar54 = fn_82CA5C50(param_1,uVar46);
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
        if ((int)uVar54 != 0) {
          return uVar54;
        }
      }
      uStack_ec = 0;
      iVar29 = (*(uint *)(param_2[0x146] + (int)((uVar46 & 0xffffffff) << 2)) |
               (-(int)uVar46 >> 0x1f) + 1U) - 1;
      if (uVar22 != 0) {
        do {
          uVar44 = 0;
          dataCacheBlockTouch((ulonglong)*(uint *)(*param_2 + 0xc) + 0x80);
          *(undefined1 *)(puVar43 + 1) = *(undefined1 *)(param_2 + 6);
          *puVar43 = *puVar43 & 0xeffcffe7 | 0x20000;
          if (*(char *)((int)param_2 + 0x1a) == '\0') {
            puVar15 = (ulonglong *)*param_2;
            uVar46 = *puVar15;
            uVar41 = *(uint *)(puVar15 + 1);
            *puVar15 = uVar46 << 1;
            *(int *)(puVar15 + 1) = (int)((ulonglong)uVar41 - 1);
            if ((longlong)((ulonglong)uVar41 - 1) < 0) {
              fn_82C4E5E8();
            }
            *puVar43 = (uint)((uVar46 >> 0x3f) << 0x1f) | *puVar43 & 0x7fffffff;
          }
          uVar41 = *puVar43;
          *puVar43 = uVar41 & 0xfffff7ff;
          if ((uVar41 & 0x80000000) == 0x80000000) {
            bVar47 = 0;
            uVar41 = uVar41 & 0xfffef0ff;
            bVar49 = 0;
          }
          else {
            piVar16 = (int *)param_2[0x15b];
            puVar15 = (ulonglong *)*param_2;
            if (piVar16 == (int *)0x0) {
              iVar38 = 0;
              *(undefined4 *)((int)puVar15 + 0x14) = 3;
            }
            else {
              iVar45 = *piVar16;
              sVar34 = *(short *)((int)((*puVar15 >>
                                         (0x40 - (ulonglong)*(byte *)(piVar16 + 2) & 0x7f) &
                                        0xffffffff) << 1) + iVar45);
              uVar46 = (ulonglong)sVar34;
              if (sVar34 < 0) {
                fn_82C4E470(puVar15);
                do {
                  uVar36 = *puVar15;
                  fn_82C4E470(puVar15,1);
                  sVar34 = *(short *)((int)(((uVar46 - ((longlong)uVar36 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar45);
                  uVar46 = (ulonglong)sVar34;
                  iVar38 = (int)sVar34;
                } while (sVar34 < 0);
              }
              else {
                iVar38 = *(int *)(puVar15 + 1);
                iVar45 = (int)(uVar46 & 0xf);
                *puVar15 = *puVar15 << (uVar46 & 0xf);
                *(int *)(puVar15 + 1) = iVar38 - iVar45;
                if (iVar38 < iVar45) {
                  do {
                    pbVar17 = *(byte **)((int)puVar15 + 0xc);
                    if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                      bVar2 = *pbVar17;
                      bVar47 = pbVar17[1];
                      bVar49 = pbVar17[2];
                      bVar3 = pbVar17[4];
                      bVar4 = pbVar17[3];
                      bVar5 = pbVar17[5];
                      iVar38 = *(int *)(puVar15 + 1);
                      *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                      *(int *)(puVar15 + 1) = iVar38 + 0x30;
                      *puVar15 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar47) * 0x100 +
                                    (ulonglong)bVar49) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                  (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5 <<
                                 ((longlong)-iVar38 & 0x7fU)) + *puVar15;
                      goto LAB_830cc38c;
                    }
                    iVar38 = fn_82C4E3B0(puVar15);
                  } while (iVar38 == 1);
                  iVar38 = (int)sVar34 >> 4;
                }
                else {
LAB_830cc38c:
                  iVar38 = (int)sVar34 >> 4;
                }
              }
              if (iVar38 < 0) {
                return 1;
              }
              if (0xe < iVar38) {
                return 1;
              }
            }
            if ((param_2[0x15c] == 1) && (iVar38 == 8)) {
              iVar38 = 0xe;
            }
            bVar2 = (&lbl_820FD9B8)[iVar38];
            bVar47 = (char)bVar2 >> 4 & 1;
            bVar49 = (char)bVar2 >> 5 & 1;
            uVar41 = ((int)(char)((int)(bVar2 & 8) >> 3) << 8 | bVar2 & 7) << 8 |
                     *puVar43 & 0xfffef8ff;
          }
          piVar16 = piStack00000024;
          *puVar43 = uVar41;
          if ((uVar41 & 0x700) == 0x400) {
            uVar39 = 1;
            lVar50 = 0;
            *puVar43 = (*(byte *)((int)param_2 + 0x21) & 1) << 0xb | *puVar43 & 0xfffdf7ff;
            puVar15 = (ulonglong *)*param_2;
            uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar36 = uVar46 + 0x10;
            if ((uVar36 & 0xffffffff) == 0) {
              do {
                if ((uVar36 & 0xffffffff) == 0) break;
                uVar39 = uVar39 - uVar36;
                *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                lVar50 = (ulonglong)
                         (uint)((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) << ((uint)uVar39 & 0x3f))
                         + lVar50;
                *puVar15 = *puVar15 << (uVar36 & 0x7f);
                if ((longlong)(uVar46 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
                uVar36 = uVar46 + 0x10;
              } while ((uVar36 & 0xffffffff) < (uVar39 & 0xffffffff));
            }
            uVar36 = *puVar15;
            *(int *)(puVar15 + 1) = (int)(uVar46 - uVar39);
            *puVar15 = uVar36 << (uVar39 & 0x7f);
            if ((longlong)(uVar46 - uVar39) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar52 = 1;
            iVar45 = 0;
            *puVar43 = (uint)(((uVar36 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50 & 0xff) <<
                             0x10) & 0x10000 | *puVar43 & 0xfffeffff;
            puVar15 = (ulonglong *)*param_2;
            uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar36 = uVar46 + 0x10;
            iVar38 = 0;
            if ((uVar36 & 0xffffffff) == 0) {
              do {
                iVar45 = iVar38;
                if ((uVar36 & 0xffffffff) == 0) break;
                uVar52 = uVar52 - uVar36;
                *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                iVar45 = ((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) << ((uint)uVar52 & 0x3f)) +
                         iVar45;
                *puVar15 = *puVar15 << (uVar36 & 0x7f);
                if ((longlong)(uVar46 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
                uVar36 = uVar46 + 0x10;
                iVar38 = iVar45;
              } while ((uVar36 & 0xffffffff) < (uVar52 & 0xffffffff));
            }
            uVar36 = *puVar15;
            *(int *)(puVar15 + 1) = (int)(uVar46 - uVar52);
            *puVar15 = uVar36 << (uVar52 & 0x7f);
            if ((longlong)(uVar46 - uVar52) < 0) {
              fn_82C4E5E8(puVar15);
            }
            if ((int)(uVar36 >> (0x40 - uVar52 & 0x7f)) + iVar45 == 0) {
              iVar38 = 0;
LAB_830cc730:
              puVar15 = (ulonglong *)*param_2;
              if (*(int *)((int)puVar15 + 0x14) == 0) {
                uVar46 = *puVar15;
                uVar41 = *(uint *)(puVar15 + 1);
                uVar7 = *(undefined1 *)(param_2[0x13c] + iVar38);
                *puVar15 = uVar46 << 1;
                *(int *)(puVar15 + 1) = (int)((ulonglong)uVar41 - 1);
                if ((longlong)((ulonglong)uVar41 - 1) < 0) {
                  fn_82C4E5E8();
                }
                *(undefined1 *)((int)puVar43 + 5) = uVar7;
                *puVar43 = (uint)((uVar46 >> 0x3f) << 3) | *puVar43 & 0xffffffe7;
                if (*(char *)((int)param_2 + 0x1b) != '\0') {
                  if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                    puVar15 = (ulonglong *)*param_2;
                    lVar50 = 0;
                    uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
                    uVar36 = uVar46 + 0x10;
                    if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                      uVar39 = 3;
                      if ((uVar36 & 0xffffffff) < 3) {
                        do {
                          if ((uVar36 & 0xffffffff) == 0) break;
                          uVar39 = uVar39 - uVar36;
                          *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                          lVar50 = (ulonglong)
                                   (uint)((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) <<
                                         ((uint)uVar39 & 0x3f)) + lVar50;
                          *puVar15 = *puVar15 << (uVar36 & 0x7f);
                          if ((longlong)(uVar46 - uVar36) < 0) {
                            fn_82C4E5E8(puVar15);
                          }
                          uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
                          uVar36 = uVar46 + 0x10;
                        } while ((uVar36 & 0xffffffff) < (uVar39 & 0xffffffff));
                      }
                      *(int *)(puVar15 + 1) = (int)(uVar46 - uVar39);
                      lVar50 = (*puVar15 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50;
                      *puVar15 = *puVar15 << (uVar39 & 0x7f);
                      if ((longlong)(uVar46 - uVar39) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      if ((int)lVar50 == 7) {
                        puVar15 = (ulonglong *)*param_2;
                        uVar39 = 5;
                        lVar50 = 0;
                        uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
                        uVar46 = uVar36 + 0x10;
                        if ((uVar46 & 0xffffffff) < 5) {
                          do {
                            if ((uVar46 & 0xffffffff) == 0) break;
                            uVar39 = uVar39 - uVar46;
                            *(int *)(puVar15 + 1) = (int)(uVar36 - uVar46);
                            lVar50 = (ulonglong)
                                     (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                           ((uint)uVar39 & 0x3f)) + lVar50;
                            *puVar15 = *puVar15 << (uVar46 & 0x7f);
                            if ((longlong)(uVar36 - uVar46) < 0) {
                              fn_82C4E5E8(puVar15);
                            }
                            uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
                            uVar46 = uVar36 + 0x10;
                          } while ((uVar46 & 0xffffffff) < (uVar39 & 0xffffffff));
                        }
                        *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
                        uVar46 = (*puVar15 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50;
                        *puVar15 = *puVar15 << (uVar39 & 0x7f);
                        if ((longlong)(uVar36 - uVar39) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                      }
                      else {
                        uVar46 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar50;
                      }
                      *(char *)(puVar43 + 1) = (char)((uVar46 & 0xffffffff) << 1) + -1;
                    }
                    else {
                      uVar39 = 1;
                      if ((uVar36 & 0xffffffff) == 0) {
                        do {
                          if ((uVar36 & 0xffffffff) == 0) break;
                          uVar39 = uVar39 - uVar36;
                          *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                          lVar50 = (ulonglong)
                                   (uint)((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) <<
                                         ((uint)uVar39 & 0x3f)) + lVar50;
                          *puVar15 = *puVar15 << (uVar36 & 0x7f);
                          if ((longlong)(uVar46 - uVar36) < 0) {
                            fn_82C4E5E8(puVar15);
                          }
                          uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
                          uVar36 = uVar46 + 0x10;
                        } while ((uVar36 & 0xffffffff) < (uVar39 & 0xffffffff));
                      }
                      uVar36 = *puVar15;
                      *(int *)(puVar15 + 1) = (int)(uVar46 - uVar39);
                      *puVar15 = uVar36 << (uVar39 & 0x7f);
                      if ((longlong)(uVar46 - uVar39) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      if (((uVar36 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) ==
                          0) {
                        *(char *)(puVar43 + 1) =
                             *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                             -1;
                      }
                      else {
                        *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                      }
                    }
                  }
                  else if ((*puVar43 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
                    *(char *)(puVar43 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                }
              }
            }
            else {
              piVar16 = (int *)param_2[0x135];
              puVar15 = (ulonglong *)*param_2;
              if (piVar16 == (int *)0x0) {
                iVar38 = 0;
                *(undefined4 *)((int)puVar15 + 0x14) = 3;
              }
              else {
                iVar45 = *piVar16;
                sVar34 = *(short *)((int)((*puVar15 >>
                                           (0x40 - (ulonglong)*(byte *)(piVar16 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar45);
                uVar46 = (ulonglong)sVar34;
                if (sVar34 < 0) {
                  fn_82C4E470(puVar15);
                  do {
                    uVar36 = *puVar15;
                    fn_82C4E470(puVar15,1);
                    sVar34 = *(short *)((int)(((uVar46 - ((longlong)uVar36 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar45);
                    uVar46 = (ulonglong)sVar34;
                    iVar38 = (int)sVar34;
                  } while (sVar34 < 0);
                }
                else {
                  iVar38 = *(int *)(puVar15 + 1);
                  iVar45 = (int)(uVar46 & 0xf);
                  *puVar15 = *puVar15 << (uVar46 & 0xf);
                  *(int *)(puVar15 + 1) = iVar38 - iVar45;
                  if (iVar38 < iVar45) {
                    do {
                      pbVar17 = *(byte **)((int)puVar15 + 0xc);
                      if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                        bVar2 = *pbVar17;
                        bVar47 = pbVar17[1];
                        bVar49 = pbVar17[2];
                        bVar3 = pbVar17[4];
                        bVar4 = pbVar17[3];
                        bVar5 = pbVar17[5];
                        iVar38 = *(int *)(puVar15 + 1);
                        *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                        *(int *)(puVar15 + 1) = iVar38 + 0x30;
                        *puVar15 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar47) * 0x100 +
                                      (ulonglong)bVar49) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                    (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5 <<
                                   ((longlong)-iVar38 & 0x7fU)) + *puVar15;
                        goto LAB_830cc6dc;
                      }
                      iVar38 = fn_82C4E3B0(puVar15);
                    } while (iVar38 == 1);
                    iVar38 = (int)sVar34 >> 4;
                  }
                  else {
LAB_830cc6dc:
                    iVar38 = (int)sVar34 >> 4;
                  }
                }
              }
              iVar38 = iVar38 + 1;
              if ((-1 < iVar38) && (iVar38 < 0x40)) goto LAB_830cc730;
            }
            bVar2 = *(byte *)(puVar43 + 1);
            uVar41 = (uint)*(byte *)((int)puVar43 + 5);
            iVar38 = param_2[0x61];
            do {
              uVar9 = *(ushort *)((int)param_2 + 0x32);
              iVar45 = (int)uVar44;
              uVar35 = 0;
              uVar23 = uVar9 >> 1;
              uVar28 = 0;
              uVar55 = 0;
              if (iVar45 >> 2 == 0) {
                piVar42 = param_2 + 0x68;
                if (uStack_ec != 0) {
                  uVar28 = (uint)((~(ulonglong)puVar43[-6] & 0xffffffff) >> 0x11) & 1;
                }
                uVar46 = uVar44 & 1;
                uVar28 = uVar28 + (int)uVar46;
                if (iVar29 != 0) {
                  uVar35 = (uint)((~(ulonglong)puVar43[(uint)uVar23 * -6] & 0xffffffff) >> 0x11) & 1
                  ;
                }
                iVar26 = iVar45 >> 1;
                uVar35 = uVar35 + iVar26;
                if ((uVar28 != 0) && (uVar35 != 0)) {
                  uVar36 = (longlong)(iVar26 + -1) * (longlong)(int)(uint)uVar23 + uVar46;
                  uVar55 = (uint)((~(ulonglong)
                                    *(uint *)((int)puVar43 +
                                             (int)((uVar36 + (uVar36 & 0x7fffffff) * 2 & 0xffffffff)
                                                  << 3) + -0x18) & 0xffffffff) >> 0x11) & 1;
                }
                piVar16 = (int *)param_2[0x132];
                lVar50 = ((longlong)(int)(uStack_e8 * 2 + iVar26) * (longlong)(int)(uint)uVar9 +
                          ((ulonglong)uStack_ec & 0x7fffffff) * 2 + uVar46 & 0x7ffffff) * 0x20 +
                         (ulonglong)(uint)param_2[0x6c];
              }
              else {
                piVar42 = param_2 + 0x65;
                piVar16 = (int *)param_2[0x133];
                uVar25 = -iVar29;
                if (uStack_ec != 0) {
                  uVar28 = (uint)((~(ulonglong)puVar43[-6] & 0xffffffff) >> 0x11) & 1;
                }
                uVar35 = 0;
                if (uVar25 != 0) {
                  uVar35 = uVar25 & ~(puVar43[(uint)uVar23 * -6] >> 0x11) & 1;
                }
                if ((uVar28 != 0) && (uVar35 != 0)) {
                  uVar55 = (uint)((~(ulonglong)puVar43[(uVar23 + 1) * -6] & 0xffffffff) >> 0x11) & 1
                  ;
                }
                lVar50 = (ulonglong)
                         *(uint *)((int)((uVar44 + 0x69 & 0xffffffff) << 2) + (int)param_2) +
                         ((longlong)(int)(uint)uVar23 * (longlong)(int)uStack_e8 +
                          (ulonglong)uStack_ec & 0x7ffffff) * 0x20;
                uVar9 = uVar23;
              }
              uVar25 = *puVar43;
              iVar26 = *(int *)((uint)bVar2 * 0x14 + iVar38 + 0x10);
              uVar46 = 0;
              iVar32 = 0;
              uVar36 = lVar50 - 0x10;
              uVar39 = lVar50 + (ulonglong)uVar9 * -0x20;
              if (uVar28 == 0) {
                if (uVar35 != 0) {
LAB_830cce6c:
                  iVar32 = 1;
                  uVar46 = uVar39;
                  goto LAB_830cce74;
                }
              }
              else {
                uVar46 = uVar36;
                if (uVar35 == 0) {
                  iVar32 = 8;
                }
                else {
                  psVar51 = (short *)uVar39;
                  if (uVar55 == 0) {
                    iVar32 = 0;
                  }
                  else {
                    iVar32 = (int)psVar51[-0x10];
                  }
                  sVar34 = *psVar51;
                  sVar48 = *(short *)uVar36;
                  iVar31 = (int)sVar34;
                  iVar30 = (int)sVar48;
                  if (*(char *)((int)param_2 + 0x1b) != '\0') {
                    if (((iVar45 == 0) || (iVar45 == 4)) || (iVar45 == 5)) {
                      iVar30 = param_2[0x61];
                      iVar18 = *(int *)(&lbl_820FDD78 +
                                       (*(uint *)((uint)*(byte *)(puVar43 + 1) * 0x14 + iVar30 +
                                                 0x10) & 0x3f) * 4);
                      iVar32 = *(int *)((uint)*(byte *)(puVar43 + (uint)uVar23 * -6 + -5) * 0x14 +
                                        iVar30 + 0x10) * iVar32 * iVar18 + 0x20000 >> 0x12;
                      iVar31 = *(int *)((uint)*(byte *)(puVar43 + (uint)uVar23 * -6 + 1) * 0x14 +
                                        iVar30 + 0x10) * (int)sVar34 * iVar18 + 0x20000 >> 0x12;
                      iVar30 = *(int *)((uint)*(byte *)(puVar43 + -5) * 0x14 + iVar30 + 0x10) *
                               (int)sVar48 * iVar18 + 0x20000 >> 0x12;
                    }
                    else if (iVar45 == 1) {
                      iVar31 = *(int *)((uint)*(byte *)(puVar43 + (uint)uVar23 * -6 + 1) * 0x14 +
                                        param_2[0x61] + 0x10);
                      iVar32 = iVar31 * iVar32 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(uint *)((uint)*(byte *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                      iVar31 = iVar31 * sVar34 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(uint *)((uint)*(byte *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                    }
                    else if (iVar45 == 2) {
                      iVar30 = *(int *)((uint)*(byte *)(puVar43 + -5) * 0x14 + param_2[0x61] + 0x10)
                      ;
                      iVar32 = iVar30 * iVar32 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(uint *)((uint)*(byte *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                      iVar30 = iVar30 * sVar48 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(uint *)((uint)*(byte *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                    }
                  }
                  uVar35 = iVar32 - iVar30 >> 0x1f;
                  uVar28 = iVar32 - iVar31 >> 0x1f;
                  if ((int)((iVar32 - iVar30 ^ uVar35) - uVar35) <
                      (int)((iVar32 - iVar31 ^ uVar28) - uVar28)) goto LAB_830cce6c;
                  iVar32 = 8;
                }
LAB_830cce74:
                if (((uVar46 & 0xffffffff) != 0) && (*(char *)((int)param_2 + 0x1b) != '\0')) {
                  psVar51 = (short *)uVar46;
                  if ((uVar46 & 0xffffffff) == (uVar36 & 0xffffffff)) {
                    if ((((iVar45 == 0) || (iVar45 == 2)) || (iVar45 == 4)) || (iVar45 == 5)) {
                      bVar47 = *(byte *)(puVar43 + -5);
                      lVar57 = 3;
                      lVar40 = uVar24 - 0xc6;
                      iVar31 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar43 + 1) & 0x3f) * 4);
                      lVar37 = uVar46 + 6;
                      asStack_c0[0] =
                           (short)((uint)(*(int *)(&lbl_820FDD78 +
                                                  (*(uint *)((uint)*(byte *)(puVar43 + 1) * 0x14 +
                                                             param_2[0x61] + 0x10) & 0x3f) * 4) *
                                          *(int *)((uint)*(byte *)(puVar43 + -5) * 0x14 +
                                                   param_2[0x61] + 0x10) * (int)*psVar51 + 0x20000)
                                  >> 0x10);
                      do {
                        psVar53 = (short *)lVar37;
                        sVar34 = psVar53[-1];
                        sVar48 = *psVar53;
                        sVar10 = psVar53[1];
                        sVar11 = psVar53[2];
                        uVar35 = (uint)bVar47;
                        *(short *)((int)lVar40 + 8) =
                             (short)((int)((int)psVar53[-2] * (uint)bVar47 * iVar31 + 0x20000) >>
                                    0x12);
                        lVar40 = lVar40 + 10;
                        *(short *)lVar40 =
                             (short)((int)((int)sVar34 * (uint)bVar47 * iVar31 + 0x20000) >> 0x12);
                        *(short *)(((int)asStack_c0 - (int)psVar51) + (int)psVar53) =
                             (short)((int)((int)sVar48 * uVar35 * iVar31 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_c0 + (2 - (int)psVar51) + (int)psVar53) =
                             (short)((int)((int)sVar10 * uVar35 * iVar31 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_c0 + (4 - (int)psVar51) + (int)psVar53) =
                             (short)((int)((int)sVar11 * uVar35 * iVar31 + 0x20000) >> 0x12);
                        lVar37 = lVar37 + 10;
                        lVar57 = lVar57 + -1;
                      } while (lVar57 != 0);
LAB_830cd18c:
                      asStack_c0[0] = asStack_c0[0] >> 2;
                      sStack_b0 = asStack_c0[0];
                    }
                    else {
                      lVar37 = uVar24 - 0xc2;
                      lVar40 = uVar46 - 2;
                      lVar57 = 0x10;
                      do {
                        lVar40 = lVar40 + 2;
                        lVar37 = lVar37 + 2;
                        *(undefined2 *)lVar37 = *(undefined2 *)lVar40;
                        lVar57 = lVar57 + -1;
                      } while (lVar57 != 0);
                    }
                  }
                  else {
                    if (((iVar45 == 0) || (iVar45 == 1)) || ((iVar45 == 4 || (iVar45 == 5)))) {
                      bVar47 = *(byte *)(puVar43 +
                                        (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) * -6 + 1);
                      iVar31 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar43 + 1) & 0x3f) * 4);
                      lVar40 = uVar24 - 0xc6;
                      lVar57 = 3;
                      lVar37 = uVar46 + 6;
                      asStack_c0[0] =
                           (short)((uint)(*(int *)(&lbl_820FDD78 +
                                                  (*(uint *)((uint)*(byte *)(puVar43 + 1) * 0x14 +
                                                             param_2[0x61] + 0x10) & 0x3f) * 4) *
                                          *(int *)((uint)*(byte *)(puVar43 + (uint)uVar23 * -6 + 1)
                                                   * 0x14 + param_2[0x61] + 0x10) * (int)*psVar51 +
                                         0x20000) >> 0x10);
                      do {
                        psVar53 = (short *)lVar37;
                        iVar30 = iVar31 * (uint)bVar47;
                        sVar34 = psVar53[-1];
                        sVar48 = psVar53[2];
                        sVar10 = *psVar53;
                        sVar11 = psVar53[1];
                        *(short *)((int)lVar40 + 8) =
                             (short)(psVar53[-2] * iVar30 + 0x20000 >> 0x12);
                        lVar40 = lVar40 + 10;
                        *(short *)lVar40 = (short)(sVar34 * iVar30 + 0x20000 >> 0x12);
                        *(short *)((int)psVar53 + ((int)asStack_c0 - (int)psVar51)) =
                             (short)(sVar10 * iVar30 + 0x20000 >> 0x12);
                        *(short *)((int)psVar53 + (int)asStack_c0 + (2 - (int)psVar51)) =
                             (short)(sVar11 * iVar30 + 0x20000 >> 0x12);
                        *(short *)((int)psVar53 + (int)asStack_c0 + (4 - (int)psVar51)) =
                             (short)((int)((int)sVar48 * (uint)bVar47 * iVar31 + 0x20000) >> 0x12);
                        lVar37 = lVar37 + 10;
                        lVar57 = lVar57 + -1;
                      } while (lVar57 != 0);
                      goto LAB_830cd18c;
                    }
                    lVar37 = uVar24 - 0xc2;
                    lVar40 = uVar46 - 2;
                    lVar57 = 0x10;
                    do {
                      lVar40 = lVar40 + 2;
                      lVar37 = lVar37 + 2;
                      *(undefined2 *)lVar37 = *(undefined2 *)lVar40;
                      lVar57 = lVar57 + -1;
                    } while (lVar57 != 0);
                  }
                  uVar46 = uVar24 - 0xc0;
                }
              }
              uVar35 = piStack00000024[7];
              lVar40 = (ulonglong)uVar35 - 0x80;
              psVar51 = (short *)lVar40;
              piStack00000024[7] = (int)psVar51;
              dataCacheBlockClearToZero(lVar40);
              dataCacheBlockTouch(lVar40);
              dataCacheBlockTouch(uVar46);
              dataCacheBlockTouch(lVar50);
              sVar34 = 0;
              puVar15 = (ulonglong *)*param_2;
              if (piVar16 == (int *)0x0) {
                uVar36 = 0;
                *(undefined4 *)((int)puVar15 + 0x14) = 3;
              }
              else {
                iVar31 = *piVar16;
                sVar48 = *(short *)((int)((*puVar15 >>
                                           (0x40 - (ulonglong)*(byte *)(piVar16 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar31);
                uVar36 = (ulonglong)sVar48;
                if (sVar48 < 0) {
                  fn_82C4E470(puVar15);
                  do {
                    uVar39 = *puVar15;
                    fn_82C4E470(puVar15,1);
                    sVar48 = *(short *)((int)(((uVar36 - ((longlong)uVar39 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar31);
                    uVar36 = (ulonglong)sVar48;
                  } while (sVar48 < 0);
                }
                else {
                  iVar31 = *(int *)(puVar15 + 1);
                  iVar30 = (int)(uVar36 & 0xf);
                  *puVar15 = *puVar15 << (uVar36 & 0xf);
                  *(int *)(puVar15 + 1) = iVar31 - iVar30;
                  if (iVar31 < iVar30) {
                    do {
                      pbVar17 = *(byte **)((int)puVar15 + 0xc);
                      if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                        bVar47 = *pbVar17;
                        bVar49 = pbVar17[1];
                        bVar3 = pbVar17[2];
                        bVar4 = pbVar17[4];
                        bVar5 = pbVar17[3];
                        bVar6 = pbVar17[5];
                        iVar31 = *(int *)(puVar15 + 1);
                        *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                        *(int *)(puVar15 + 1) = iVar31 + 0x30;
                        *puVar15 = ((((((ulonglong)bVar49 + (ulonglong)bVar47 * 0x100) * 0x100 +
                                      (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5) * 0x100 +
                                    (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6 <<
                                   ((longlong)-iVar31 & 0x7fU)) + *puVar15;
                        goto LAB_830cd2c0;
                      }
                      iVar31 = fn_82C4E3B0(puVar15);
                    } while (iVar31 == 1);
                    uVar36 = (ulonglong)((int)sVar48 >> 4);
                  }
                  else {
LAB_830cd2c0:
                    uVar36 = (ulonglong)((int)sVar48 >> 4);
                  }
                }
              }
              sVar48 = (short)uVar36;
              if ((int)(uVar36 & 0xffff) == 0x77) {
                if (iVar26 < 5) {
                  lVar37 = 3 - (longlong)(iVar26 >> 1);
                }
                else {
                  lVar37 = 0;
                }
                uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
                uVar52 = lVar37 + 8;
                iVar26 = 0;
                sVar48 = 0;
                uVar39 = uVar36 + 0x10;
                if ((uVar52 & 0xffffffff) < 0x21) {
                  if ((uVar52 & 0xffffffff) == 0) {
                    sVar48 = 0;
                  }
                  else {
                    if ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff)) {
                      do {
                        sVar48 = (short)iVar26;
                        if ((uVar39 & 0xffffffff) == 0) break;
                        uVar52 = uVar52 - uVar39;
                        *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
                        iVar26 = ((int)(*puVar15 >> (0x40 - uVar39 & 0x7f)) << ((uint)uVar52 & 0x3f)
                                 ) + iVar26;
                        sVar48 = (short)iVar26;
                        *puVar15 = *puVar15 << (uVar39 & 0x7f);
                        if ((longlong)(uVar36 - uVar39) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
                        uVar39 = uVar36 + 0x10;
                      } while ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff));
                    }
                    *(int *)(puVar15 + 1) = (int)(uVar36 - uVar52);
                    sVar48 = (short)(*puVar15 >> (0x40 - uVar52 & 0x7f)) + sVar48;
                    *puVar15 = *puVar15 << (uVar52 & 0x7f);
                    if ((longlong)(uVar36 - uVar52) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                  }
                }
                else {
                  sVar48 = 0;
                }
LAB_830cd518:
                uVar36 = *puVar15;
                uVar28 = *(uint *)(puVar15 + 1);
                *puVar15 = uVar36 << 1;
                *(int *)(puVar15 + 1) = (int)((ulonglong)uVar28 - 1);
                if ((longlong)((ulonglong)uVar28 - 1) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                sVar34 = (1 - (short)((uVar36 >> 0x3f) << 1)) * sVar48;
              }
              else if ((uVar36 & 0xffff) != 0) {
                if (iVar26 == 4) {
                  uVar36 = *puVar15;
                  uVar28 = *(uint *)(puVar15 + 1);
                  *puVar15 = uVar36 << 1;
                  *(int *)(puVar15 + 1) = (int)((ulonglong)uVar28 - 1);
                  if ((longlong)((ulonglong)uVar28 - 1) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  sVar48 = (sVar48 * 2 - (short)((longlong)uVar36 >> 0x3f)) + -1;
                }
                else if (iVar26 == 2) {
                  uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
                  uVar52 = 2;
                  iVar26 = 0;
                  sVar34 = 0;
                  uVar39 = uVar36 + 0x10;
                  if ((uVar39 & 0xffffffff) < 2) {
                    do {
                      sVar34 = (short)iVar26;
                      if ((uVar39 & 0xffffffff) == 0) break;
                      uVar52 = uVar52 - uVar39;
                      *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
                      iVar26 = ((int)(*puVar15 >> (0x40 - uVar39 & 0x7f)) << ((uint)uVar52 & 0x3f))
                               + iVar26;
                      sVar34 = (short)iVar26;
                      *puVar15 = *puVar15 << (uVar39 & 0x7f);
                      if ((longlong)(uVar36 - uVar39) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      uVar36 = (ulonglong)*(uint *)(puVar15 + 1);
                      uVar39 = uVar36 + 0x10;
                    } while ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff));
                  }
                  uVar39 = *puVar15;
                  *(int *)(puVar15 + 1) = (int)(uVar36 - uVar52);
                  *puVar15 = uVar39 << (uVar52 & 0x7f);
                  if ((longlong)(uVar36 - uVar52) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  sVar48 = sVar48 * 4 + (short)(uVar39 >> (0x40 - uVar52 & 0x7f)) + sVar34 + -3;
                }
                goto LAB_830cd518;
              }
              *psVar51 = sVar34;
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              if ((uVar25 >> 3 & 3) == 0) {
                iVar26 = param_2[0x13d];
                iVar32 = 0;
              }
              else {
                iVar26 = param_2[iVar32 + 0x13d];
                if (((*(char *)(param_2 + 0x139) != '\0') && (iVar32 != 0)) &&
                   (bVar1 = iVar32 == 8, iVar32 = 8, bVar1)) {
                  iVar32 = 1;
                }
              }
              if (((uVar41 & 1) != 0) &&
                 (iVar26 = fn_830D9228(param_2,*piVar42,lVar40,iVar26), iVar26 < 0)) {
                return 1;
              }
              iVar26 = (int)in_r0;
              if ((uVar46 & 0xffffffff) != 0) {
                psVar53 = (short *)uVar46;
                if (iVar32 == 1) {
                  puVar20 = (undefined4 *)(iVar26 + (int)psVar53 & 0xfffffff0);
                  uVar27 = puVar20[1];
                  uVar58 = puVar20[2];
                  uVar59 = puVar20[3];{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
                  puVar19 = (undefined4 *)(iVar26 + (int)psVar51 & 0xfffffff0);
                  *puVar19 = *puVar20;
                  puVar19[1] = uVar27;
                  puVar19[2] = uVar58;
                  puVar19[3] = uVar59;
                }
                else if (iVar32 == 8) {
                  sVar34 = *(short *)(uVar35 - 0x70);
                  sVar48 = *(short *)(uVar35 - 0x60);
                  *psVar51 = *psVar53 + *psVar51;
                  sVar10 = *(short *)(uVar35 - 0x50);
                  sVar11 = *(short *)(uVar35 - 0x40);
                  sVar12 = *(short *)(uVar35 - 0x30);
                  sVar13 = *(short *)(uVar35 - 0x20);
                  sVar14 = *(short *)(uVar35 - 0x10);
                  *(short *)(uVar35 - 0x70) = psVar53[1] + sVar34;
                  *(short *)(uVar35 - 0x60) = psVar53[2] + sVar48;
                  *(short *)(uVar35 - 0x50) = psVar53[3] + sVar10;
                  *(short *)(uVar35 - 0x40) = psVar53[4] + sVar11;
                  *(short *)(uVar35 - 0x30) = psVar53[5] + sVar12;
                  *(short *)(uVar35 - 0x20) = psVar53[6] + sVar13;
                  *(short *)(uVar35 - 0x10) = psVar53[7] + sVar14;
                }
                else {
                  *psVar51 = *psVar53 + *psVar51;
                }
              }
              psVar53 = (short *)lVar50;
              if (*(char *)(param_2 + 0x139) == '\0') {
                altv207_13(in_vs32,in_vs61);
                puVar20 = (undefined4 *)(iVar26 + (int)psVar53 & 0xfffffff0);
                *puVar20 = in_register_000103e0;
                puVar20[1] = in_register_000103e4;
                puVar20[2] = in_register_000103e8;
                puVar20[3] = in_vr62;
                psVar53[8] = *psVar51;
                psVar53[9] = *(short *)(uVar35 - 0x70);
                psVar53[10] = *(short *)(uVar35 - 0x60);
                psVar53[0xb] = *(short *)(uVar35 - 0x50);
                psVar53[0xc] = *(short *)(uVar35 - 0x40);
                psVar53[0xd] = *(short *)(uVar35 - 0x30);
                psVar53[0xe] = *(short *)(uVar35 - 0x20);
                psVar53[0xf] = *(short *)(uVar35 - 0x10);
              }
              else {
                *psVar53 = *psVar51;
                psVar53[1] = *(short *)(uVar35 - 0x70);
                psVar53[2] = *(short *)(uVar35 - 0x60);
                psVar53[3] = *(short *)(uVar35 - 0x50);
                psVar53[4] = *(short *)(uVar35 - 0x40);
                psVar53[5] = *(short *)(uVar35 - 0x30);
                psVar53[6] = *(short *)(uVar35 - 0x20);
                psVar53[7] = *(short *)(uVar35 - 0x10);
                altv207_13(in_vs32,in_vs61);
                puVar20 = (undefined4 *)((uint)(psVar53 + 8) & 0xfffffff0);
                *puVar20 = in_register_000103f0;
                puVar20[1] = in_register_000103f4;
                puVar20[2] = in_register_000103f8;
                puVar20[3] = in_vr63;
              }
              uVar44 = uVar44 + 1;
              *(undefined1 *)((int)puVar43 + iVar45 + 8) = 0;
              uVar41 = (int)uVar41 >> 1;
            } while ((int)uVar44 < 6);
            uVar41 = *puVar43;
            iVar38 = param_2[0x148];
            uVar54 = 0;
            iVar45 = piStack00000024[1];
            *(uint *)piStack00000024[8] =
                 (*(ushort *)(piStack00000024 + 4) & 0x1fffe) << 0xf |
                 (uint)(*(ushort *)((int)piStack00000024 + 0x12) >> 1);
            piStack00000024[8] = piStack00000024[8] + 4;
            *(ulonglong *)(iVar45 * 8 + iVar38) =
                 ((ulonglong)*(byte *)(puVar43 + 1) << 8 |
                 (ulonglong)*(byte *)((int)puVar43 + 5) | (ulonglong)(uVar41 >> 2) & 0xc0) << 0x30;
          }
          else {
            iVar38 = param_2[0x57];
            uVar9 = *(ushort *)((int)param_2 + 0x32);
            iVar45 = *piStack00000024;
            if (param_2[0x1a8] == 0) {
              puVar15 = (ulonglong *)*param_2;
              lVar50 = 0;
              uVar36 = 1;
              uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar46 = uVar44 + 0x10;
              if ((uVar46 & 0xffffffff) == 0) {
                do {
                  if ((uVar46 & 0xffffffff) == 0) break;
                  uVar36 = uVar36 - uVar46;
                  *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                  lVar50 = (ulonglong)
                           (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) << ((uint)uVar36 & 0x3f)
                                 ) + lVar50;
                  *puVar15 = *puVar15 << (uVar46 & 0x7f);
                  if ((longlong)(uVar44 - uVar46) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                  uVar46 = uVar44 + 0x10;
                } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
              }
              uVar46 = *puVar15;
              *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
              *puVar15 = uVar46 << (uVar36 & 0x7f);
              if ((longlong)(uVar44 - uVar36) < 0) {
                fn_82C4E5E8(puVar15);
              }
              *puVar43 = (uint)(((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 &
                                0xffffffff) << 5) & 0xe0 | *puVar43 & 0xffffff1f;
            }
            if ((*puVar43 & 0xe0) == 0) {
              puVar15 = (ulonglong *)*param_2;
              lVar50 = 0;
              uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar46 = uVar44 + 0x10;
              if ((*puVar43 & 0x700) == 0x200) {
                uVar36 = 2;
                if ((uVar46 & 0xffffffff) < 2) {
                  do {
                    if ((uVar46 & 0xffffffff) == 0) break;
                    uVar36 = uVar36 - uVar46;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                    lVar50 = (ulonglong)
                             (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                   ((uint)uVar36 & 0x3f)) + lVar50;
                    *puVar15 = *puVar15 << (uVar46 & 0x7f);
                    if ((longlong)(uVar44 - uVar46) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                    uVar46 = uVar44 + 0x10;
                  } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                }
                *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                uVar46 = (*puVar15 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50;
                *puVar15 = *puVar15 << (uVar36 & 0x7f);
                if ((longlong)(uVar44 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                if ((uVar46 & 0xffffffff) < 4) {
                  if ((int)uVar46 == 0) goto LAB_830cdb18;
                  if (uVar46 == 1) {
                    *puVar43 = (2U - param_2[0x1a9] & 7) << 5 | *puVar43 & 0xffffff1f;
                  }
                  else {
                    if (uVar46 != 2) goto LAB_830cdbf4;
                    puVar15 = (ulonglong *)*param_2;
                    uVar36 = 1;
                    lVar50 = 0;
                    uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                    uVar46 = uVar44 + 0x10;
                    if ((uVar46 & 0xffffffff) == 0) {
                      do {
                        if ((uVar46 & 0xffffffff) == 0) break;
                        uVar36 = uVar36 - uVar46;
                        *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                        lVar50 = (ulonglong)
                                 (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                       ((uint)uVar36 & 0x3f)) + lVar50;
                        *puVar15 = *puVar15 << (uVar46 & 0x7f);
                        if ((longlong)(uVar44 - uVar46) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                        uVar46 = uVar44 + 0x10;
                      } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                    }
                    uVar46 = *puVar15;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                    *puVar15 = uVar46 << (uVar36 & 0x7f);
                    if ((longlong)(uVar44 - uVar36) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    uVar44 = (ulonglong)(uint)param_2[0x1aa];
                    uVar41 = *puVar43;
                    if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0
                       ) goto LAB_830cdbe8;
                    *puVar43 = (uint)((2 - uVar44 & 0xffffffff) << 5) & 0xe0 | uVar41 & 0xffffff1f;
                  }
                }
              }
              else {
                uVar36 = 1;
                if ((uVar46 & 0xffffffff) == 0) {
                  do {
                    if ((uVar46 & 0xffffffff) == 0) break;
                    uVar36 = uVar36 - uVar46;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                    lVar50 = (ulonglong)
                             (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                   ((uint)uVar36 & 0x3f)) + lVar50;
                    *puVar15 = *puVar15 << (uVar46 & 0x7f);
                    if ((longlong)(uVar44 - uVar46) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                    uVar46 = uVar44 + 0x10;
                  } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                }
                uVar46 = *puVar15;
                *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                *puVar15 = uVar46 << (uVar36 & 0x7f);
                if ((longlong)(uVar44 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0) {
LAB_830cdb18:
                  *puVar43 = (param_2[0x1a9] & 7U) << 5 | *puVar43 & 0xffffff1f;
                }
                else {
                  puVar15 = (ulonglong *)*param_2;
                  uVar36 = 1;
                  lVar50 = 0;
                  uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                  uVar46 = uVar44 + 0x10;
                  if ((uVar46 & 0xffffffff) == 0) {
                    do {
                      if ((uVar46 & 0xffffffff) == 0) break;
                      uVar36 = uVar36 - uVar46;
                      *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                      lVar50 = (ulonglong)
                               (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                     ((uint)uVar36 & 0x3f)) + lVar50;
                      *puVar15 = *puVar15 << (uVar46 & 0x7f);
                      if ((longlong)(uVar44 - uVar46) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                      uVar46 = uVar44 + 0x10;
                    } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                  }
                  uVar46 = *puVar15;
                  *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                  *puVar15 = uVar46 << (uVar36 & 0x7f);
                  if ((longlong)(uVar44 - uVar36) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0)
                  {
                    uVar44 = (ulonglong)(uint)param_2[0x1aa];
                    uVar41 = *puVar43;
LAB_830cdbe8:
                    *puVar43 = (uint)(uVar44 << 5) & 0xe0 | uVar41 & 0xffffff1f;
                  }
                  else {
LAB_830cdbf4:
                    *puVar43 = *puVar43 & 0xffffff1f | 0x40;
                  }
                }
              }
            }
            if ((*puVar43 & 0x80000000) == 0) {
              if (bVar49 == 0) {
                iVar26 = 0;
              }
              else {
                piVar42 = (int *)param_2[0x136];
                puVar15 = (ulonglong *)*param_2;
                if (piVar42 == (int *)0x0) {
                  iVar26 = 0;
                  *(undefined4 *)((int)puVar15 + 0x14) = 3;
                }
                else {
                  iVar32 = *piVar42;
                  sVar34 = *(short *)((int)((*puVar15 >>
                                             (0x40 - (ulonglong)*(byte *)(piVar42 + 2) & 0x7f) &
                                            0xffffffff) << 1) + iVar32);
                  uVar44 = (ulonglong)sVar34;
                  if (sVar34 < 0) {
                    fn_82C4E470(puVar15);
                    do {
                      uVar46 = *puVar15;
                      fn_82C4E470(puVar15,1);
                      sVar34 = *(short *)((int)(((uVar44 - ((longlong)uVar46 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar32);
                      uVar44 = (ulonglong)sVar34;
                      iVar26 = (int)sVar34;
                    } while (sVar34 < 0);
                  }
                  else {
                    iVar26 = *(int *)(puVar15 + 1);
                    iVar32 = (int)(uVar44 & 0xf);
                    *puVar15 = *puVar15 << (uVar44 & 0xf);
                    *(int *)(puVar15 + 1) = iVar26 - iVar32;
                    if (iVar26 < iVar32) {
                      do {
                        pbVar17 = *(byte **)((int)puVar15 + 0xc);
                        if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                          bVar2 = *pbVar17;
                          bVar49 = pbVar17[1];
                          bVar3 = pbVar17[2];
                          bVar4 = pbVar17[3];
                          bVar5 = pbVar17[4];
                          bVar6 = pbVar17[5];
                          iVar26 = *(int *)(puVar15 + 1);
                          *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                          *(int *)(puVar15 + 1) = iVar26 + 0x30;
                          *puVar15 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar49) * 0x100 +
                                        (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                      (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                                     ((longlong)-iVar26 & 0x7fU)) + *puVar15;
                          goto LAB_830cdd38;
                        }
                        iVar26 = fn_82C4E3B0(puVar15);
                      } while (iVar26 == 1);
                      iVar26 = (int)sVar34 >> 4;
                    }
                    else {
LAB_830cdd38:
                      iVar26 = (int)sVar34 >> 4;
                    }
                  }
                }
                iVar26 = iVar26 + 1;
                if (*(int *)(*param_2 + 0x14) != 0) {
                  return 1;
                }
              }
              uVar41 = *puVar43 >> 5 & 7;
              cVar8 = *(char *)(param_2[0x13c] + iVar26);
              *(char *)((int)puVar43 + 5) = cVar8;
              if (uVar41 != 1) {
                if ((*puVar43 & 0x700) == 0) {
                  if (uVar41 == 2) {
                    piVar42 = (int *)param_2[0x56];
                    puVar15 = (ulonglong *)*param_2;
                    if (piVar42 == (int *)0x0) {
                      uVar44 = 0;
                      *(undefined4 *)((int)puVar15 + 0x14) = 3;
                    }
                    else {
                      iVar26 = *piVar42;
                      sVar34 = *(short *)((int)((*puVar15 >>
                                                 (0x40 - (ulonglong)*(byte *)(piVar42 + 2) & 0x7f) &
                                                0xffffffff) << 1) + iVar26);
                      uVar44 = (ulonglong)sVar34;
                      if (sVar34 < 0) {
                        fn_82C4E470(puVar15);
                        do {
                          uVar46 = *puVar15;
                          fn_82C4E470(puVar15,1);
                          sVar34 = *(short *)((int)(((uVar44 - ((longlong)uVar46 >> 0x3f)) + 0x8000
                                                    & 0xffffffff) << 1) + iVar26);
                          uVar44 = (ulonglong)sVar34;
                        } while (sVar34 < 0);
                      }
                      else {
                        iVar26 = *(int *)(puVar15 + 1);
                        iVar32 = (int)(uVar44 & 0xf);
                        *puVar15 = *puVar15 << (uVar44 & 0xf);
                        *(int *)(puVar15 + 1) = iVar26 - iVar32;
                        if (iVar26 < iVar32) {
                          do {
                            pbVar17 = *(byte **)((int)puVar15 + 0xc);
                            if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                              bVar2 = *pbVar17;
                              bVar47 = pbVar17[1];
                              bVar49 = pbVar17[2];
                              bVar3 = pbVar17[3];
                              bVar4 = pbVar17[4];
                              bVar5 = pbVar17[5];
                              iVar26 = *(int *)(puVar15 + 1);
                              *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                              *(int *)(puVar15 + 1) = iVar26 + 0x30;
                              *puVar15 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar47) * 0x100
                                            + (ulonglong)bVar49) * 0x100 + (ulonglong)bVar3) * 0x100
                                          + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                                         ((longlong)-iVar26 & 0x7fU)) + *puVar15;
                              goto LAB_830cdf0c;
                            }
                            iVar26 = fn_82C4E3B0(puVar15);
                          } while (iVar26 == 1);
                          uVar44 = (ulonglong)((int)sVar34 >> 4);
                        }
                        else {
LAB_830cdf0c:
                          uVar44 = (ulonglong)((int)sVar34 >> 4);
                        }
                      }
                    }
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                    if ((uVar44 & 2) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(undefined4 *)(iVar45 * 4 + iVar38) = uVar27;
                    }
                    if ((uVar44 & 1) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(undefined4 *)((iVar45 + 1) * 4 + iVar38) = uVar27;
                    }
                  }
                  else if (bVar47 != 0) {
                    uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                    *(undefined4 *)(iVar45 * 4 + iVar38) = uVar27;
                  }
                }
                else {
                  puVar15 = (ulonglong *)*param_2;
                  if (uVar41 == 2) {
                    piVar42 = (int *)param_2[0x55];
                    if (piVar42 == (int *)0x0) {
                      uVar41 = 0;
                      *(undefined4 *)((int)puVar15 + 0x14) = 3;
                    }
                    else {
                      iVar26 = *piVar42;
                      sVar34 = *(short *)((int)((*puVar15 >>
                                                 (0x40 - (ulonglong)*(byte *)(piVar42 + 2) & 0x7f) &
                                                0xffffffff) << 1) + iVar26);
                      uVar44 = (ulonglong)sVar34;
                      if (sVar34 < 0) {
                        fn_82C4E470(puVar15);
                        do {
                          uVar46 = *puVar15;
                          fn_82C4E470(puVar15,1);
                          sVar34 = *(short *)((int)(((uVar44 - ((longlong)uVar46 >> 0x3f)) + 0x8000
                                                    & 0xffffffff) << 1) + iVar26);
                          uVar44 = (ulonglong)sVar34;
                          uVar41 = (uint)sVar34;
                        } while (sVar34 < 0);
                      }
                      else {
                        iVar26 = *(int *)(puVar15 + 1);
                        iVar32 = (int)(uVar44 & 0xf);
                        *puVar15 = *puVar15 << (uVar44 & 0xf);
                        *(int *)(puVar15 + 1) = iVar26 - iVar32;
                        if (iVar26 < iVar32) {
                          do {
                            pbVar17 = *(byte **)((int)puVar15 + 0xc);
                            if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                              bVar2 = *pbVar17;
                              bVar47 = pbVar17[1];
                              bVar49 = pbVar17[2];
                              bVar3 = pbVar17[3];
                              bVar4 = pbVar17[4];
                              bVar5 = pbVar17[5];
                              iVar26 = *(int *)(puVar15 + 1);
                              *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                              *(int *)(puVar15 + 1) = iVar26 + 0x30;
                              *puVar15 = ((((((ulonglong)bVar47 + (ulonglong)bVar2 * 0x100) * 0x100
                                            + (ulonglong)bVar49) * 0x100 + (ulonglong)bVar3) * 0x100
                                          + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                                         ((longlong)-iVar26 & 0x7fU)) + *puVar15;
                              goto LAB_830ce240;
                            }
                            iVar26 = fn_82C4E3B0(puVar15);
                          } while (iVar26 == 1);
                          uVar41 = (int)sVar34 >> 4;
                        }
                        else {
LAB_830ce240:
                          uVar41 = (int)sVar34 >> 4;
                        }
                      }
                    }
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                    uVar35 = 3;
                    puVar56 = (ushort *)(param_2 + 9);
                    do {
                      if ((1 << (uVar35 & 0x3f) & uVar41) != 0) {
                        uVar9 = *puVar56;
                        uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                        *(undefined4 *)(((uint)uVar9 + iVar45) * 4 + iVar38) = uVar27;
                      }
                      uVar35 = uVar35 - 1;
                      puVar56 = puVar56 + 1;
                    } while (-1 < (int)uVar35);
                  }
                  else {
                    piVar42 = (int *)param_2[0x56];
                    if (piVar42 == (int *)0x0) {
                      uVar44 = 0;
                      *(undefined4 *)((int)puVar15 + 0x14) = 3;
                    }
                    else {
                      iVar26 = *piVar42;
                      sVar34 = *(short *)((int)((*puVar15 >>
                                                 (0x40 - (ulonglong)*(byte *)(piVar42 + 2) & 0x7f) &
                                                0xffffffff) << 1) + iVar26);
                      uVar44 = (ulonglong)sVar34;
                      if (sVar34 < 0) {
                        fn_82C4E470(puVar15);
                        do {
                          uVar46 = *puVar15;
                          fn_82C4E470(puVar15,1);
                          sVar34 = *(short *)((int)(((uVar44 - ((longlong)uVar46 >> 0x3f)) + 0x8000
                                                    & 0xffffffff) << 1) + iVar26);
                          uVar44 = (ulonglong)sVar34;
                        } while (sVar34 < 0);
                      }
                      else {
                        iVar26 = *(int *)(puVar15 + 1);
                        iVar32 = (int)(uVar44 & 0xf);
                        *puVar15 = *puVar15 << (uVar44 & 0xf);
                        *(int *)(puVar15 + 1) = iVar26 - iVar32;
                        if (iVar26 < iVar32) {
                          do {
                            pbVar17 = *(byte **)((int)puVar15 + 0xc);
                            if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                              bVar2 = *pbVar17;
                              bVar47 = pbVar17[1];
                              bVar49 = pbVar17[2];
                              bVar3 = pbVar17[3];
                              bVar4 = pbVar17[4];
                              bVar5 = pbVar17[5];
                              iVar26 = *(int *)(puVar15 + 1);
                              *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                              *(int *)(puVar15 + 1) = iVar26 + 0x30;
                              *puVar15 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar47) * 0x100
                                            + (ulonglong)bVar49) * 0x100 + (ulonglong)bVar3) * 0x100
                                          + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                                         ((longlong)-iVar26 & 0x7fU)) + *puVar15;
                              goto LAB_830ce0ac;
                            }
                            iVar26 = fn_82C4E3B0(puVar15);
                          } while (iVar26 == 1);
                          uVar44 = (ulonglong)((int)sVar34 >> 4);
                        }
                        else {
LAB_830ce0ac:
                          uVar44 = (ulonglong)((int)sVar34 >> 4);
                        }
                      }
                    }
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                    if ((uVar44 & 2) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(undefined4 *)(iVar45 * 4 + iVar38) = uVar27;
                    }
                    if ((uVar44 & 1) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(undefined4 *)(((uint)uVar9 + iVar45) * 4 + iVar38) = uVar27;
                    }
                  }
                }
              }
              if ((*(char *)((int)param_2 + 0x1b) != '\0') && (cVar8 != '\0')) {
                if (*(byte *)((int)param_2 + 0x4dd) == 0) {
                  puVar15 = (ulonglong *)*param_2;
                  lVar50 = 0;
                  uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                  uVar46 = uVar44 + 0x10;
                  if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                    uVar36 = 3;
                    if ((uVar46 & 0xffffffff) < 3) {
                      do {
                        if ((uVar46 & 0xffffffff) == 0) break;
                        uVar36 = uVar36 - uVar46;
                        *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                        lVar50 = (ulonglong)
                                 (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                       ((uint)uVar36 & 0x3f)) + lVar50;
                        *puVar15 = *puVar15 << (uVar46 & 0x7f);
                        if ((longlong)(uVar44 - uVar46) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                        uVar46 = uVar44 + 0x10;
                      } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                    }
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                    lVar50 = (*puVar15 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50;
                    *puVar15 = *puVar15 << (uVar36 & 0x7f);
                    if ((longlong)(uVar44 - uVar36) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    if ((int)lVar50 == 7) {
                      puVar15 = (ulonglong *)*param_2;
                      uVar36 = 5;
                      lVar50 = 0;
                      uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
                      uVar44 = uVar46 + 0x10;
                      if ((uVar44 & 0xffffffff) < 5) {
                        do {
                          if ((uVar44 & 0xffffffff) == 0) break;
                          uVar36 = uVar36 - uVar44;
                          *(int *)(puVar15 + 1) = (int)(uVar46 - uVar44);
                          lVar50 = (ulonglong)
                                   (uint)((int)(*puVar15 >> (0x40 - uVar44 & 0x7f)) <<
                                         ((uint)uVar36 & 0x3f)) + lVar50;
                          *puVar15 = *puVar15 << (uVar44 & 0x7f);
                          if ((longlong)(uVar46 - uVar44) < 0) {
                            fn_82C4E5E8(puVar15);
                          }
                          uVar46 = (ulonglong)*(uint *)(puVar15 + 1);
                          uVar44 = uVar46 + 0x10;
                        } while ((uVar44 & 0xffffffff) < (uVar36 & 0xffffffff));
                      }
                      *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                      uVar44 = (*puVar15 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50;
                      *puVar15 = *puVar15 << (uVar36 & 0x7f);
                      if ((longlong)(uVar46 - uVar36) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                    }
                    else {
                      uVar44 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar50;
                    }
                    *(char *)(puVar43 + 1) = (char)((uVar44 & 0xffffffff) << 1) + -1;
                  }
                  else {
                    uVar36 = 1;
                    if ((uVar46 & 0xffffffff) == 0) {
                      do {
                        if ((uVar46 & 0xffffffff) == 0) break;
                        uVar36 = uVar36 - uVar46;
                        *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                        lVar50 = (ulonglong)
                                 (uint)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                       ((uint)uVar36 & 0x3f)) + lVar50;
                        *puVar15 = *puVar15 << (uVar46 & 0x7f);
                        if ((longlong)(uVar44 - uVar46) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar44 = (ulonglong)*(uint *)(puVar15 + 1);
                        uVar46 = uVar44 + 0x10;
                      } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                    }
                    uVar46 = *puVar15;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                    *puVar15 = uVar46 << (uVar36 & 0x7f);
                    if ((longlong)(uVar44 - uVar36) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0
                       ) {
                      *(char *)(puVar43 + 1) =
                           *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                           -1;
                    }
                    else {
                      *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                    }
                  }
                }
                else if ((*puVar43 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
                  *(char *)(puVar43 + 1) =
                       *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                }
                else {
                  *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                }
                if (*(byte *)(puVar43 + 1) == 0) {
                  return 1;
                }
                if (0x3e < *(byte *)(puVar43 + 1)) {
                  return 1;
                }
              }
              if ((*(char *)((int)param_2 + 0x1d) != '\0') && (cVar8 != '\0')) {
                piVar42 = (int *)param_2[0x5a];
                puVar15 = (ulonglong *)*param_2;
                if (piVar42 == (int *)0x0) {
                  uVar44 = 0;
                  *(undefined4 *)((int)puVar15 + 0x14) = 3;
                }
                else {
                  iVar38 = *piVar42;
                  sVar34 = *(short *)((int)((*puVar15 >>
                                             (0x40 - (ulonglong)*(byte *)(piVar42 + 2) & 0x7f) &
                                            0xffffffff) << 1) + iVar38);
                  uVar44 = (ulonglong)sVar34;
                  if (sVar34 < 0) {
                    fn_82C4E470(puVar15);
                    do {
                      uVar46 = *puVar15;
                      fn_82C4E470(puVar15,1);
                      sVar34 = *(short *)((int)(((uVar44 - ((longlong)uVar46 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar38);
                      uVar44 = (ulonglong)sVar34;
                    } while (sVar34 < 0);
                  }
                  else {
                    iVar38 = *(int *)(puVar15 + 1);
                    iVar45 = (int)(uVar44 & 0xf);
                    *puVar15 = *puVar15 << (uVar44 & 0xf);
                    *(int *)(puVar15 + 1) = iVar38 - iVar45;
                    if (iVar38 < iVar45) {
                      do {
                        pbVar17 = *(byte **)((int)puVar15 + 0xc);
                        if (pbVar17 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
                          bVar2 = *pbVar17;
                          bVar47 = pbVar17[1];
                          bVar49 = pbVar17[2];
                          bVar3 = pbVar17[3];
                          bVar4 = pbVar17[4];
                          bVar5 = pbVar17[5];
                          iVar38 = *(int *)(puVar15 + 1);
                          *(byte **)((int)puVar15 + 0xc) = pbVar17 + 6;
                          *(int *)(puVar15 + 1) = iVar38 + 0x30;
                          *puVar15 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar47) * 0x100 +
                                        (ulonglong)bVar49) * 0x100 + (ulonglong)bVar3) * 0x100 +
                                      (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                                     ((longlong)-iVar38 & 0x7fU)) + *puVar15;
                          goto LAB_830ce6bc;
                        }
                        iVar38 = fn_82C4E3B0(puVar15);
                      } while (iVar38 == 1);
                      uVar44 = (ulonglong)((int)sVar34 >> 4);
                    }
                    else {
LAB_830ce6bc:
                      uVar44 = (ulonglong)((int)sVar34 >> 4);
                    }
                  }
                }
                if (*(int *)(*param_2 + 0x14) != 0) {
                  return 1;
                }
                uVar41 = *puVar43;
                iVar38 = (int)((uVar44 & 0xffffffff) << 2);
                uVar35 = (uint)((((~uVar44 & 0xffffffff) >> 0x1f) + (ulonglong)(7 < uVar44) & 1) <<
                               0x1c);
                *puVar43 = uVar35 | uVar41 & 0xefffffff;
                uVar28 = (*(uint *)((int)&lbl_820FD978 + iVar38) & 7) << 0x18;
                *puVar43 = uVar28 | uVar35 | uVar41 & 0xe8ffffff;
                *puVar43 = (*(uint *)((int)&lbl_820FD9D0 + iVar38) & 3) << 0x14 |
                           uVar28 | uVar35 | uVar41 & 0xe0cfffff;
              }
            }
            else {
              *(undefined1 *)((int)puVar43 + 5) = 0;
            }
            uVar54 = fn_830C6850(param_2,puVar43,piVar16);
            if ((int)uVar54 != 0) {
              return uVar54;
            }
          }
          puVar43 = puVar43 + 6;
          uStack_ec = uStack_ec + 1;
          piStack00000024[1] = piStack00000024[1] + 1;
          *piStack00000024 = *piStack00000024 + 2;
          *(short *)((int)piStack00000024 + 0x12) = *(short *)((int)piStack00000024 + 0x12) + 2;
        } while (uStack_ec < uStack_dc);
        uVar44 = (ulonglong)(uint)uVar21;
        uVar46 = (ulonglong)uStack_e8;
        param_3 = piStack00000024;
        param_1 = iStack00000014;
      }
      uVar46 = uVar46 + 1;
      uStack_e8 = (uint)uVar46;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      *param_3 = (uint)uVar22 * 2 + *param_3;
    } while ((uVar46 & 0xffffffff) < uVar44);
  }
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
  return uVar54;
}

