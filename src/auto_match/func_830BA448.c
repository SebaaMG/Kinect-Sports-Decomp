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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA5860();
extern int fn_82CA5C50();
extern int fn_830CEA08();
extern int fn_830D9228();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int iStack_d4;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int lbl_820FDD78;
extern unsigned int uStack0000003c;
extern unsigned int uStack_100;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_fc;


undefined8
fn_830BA448(int param_1,int *param_2,int *param_3,int param_4,ulonglong param_5,uint param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  short sVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  byte bVar34;
  short *psVar33;
  ulonglong uVar35;
  byte bVar37;
  int *piVar36;
  short *psVar38;
  uint *puVar39;
  char cVar40;
  undefined8 uVar41;
  uint uVar42;
  int *piVar43;
  short sVar44;
  ulonglong uVar45;
  int *piVar46;
  short *psVar47;
  longlong lVar48;
  int iStack00000014;
  int *piStack00000024;
  int iStack0000002c;
  uint uStack0000003c;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f4;
  int iStack_f0;
  int *piStack_ec;
  int *piStack_e4;
  int *piStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  undefined4 uStack_c8;
  short sStack_c2;
  undefined4 uStack_c0;
  short asStack_bc [6];
  short asStack_b0 [88];
  
  uVar7 = *(ushort *)(param_2 + 0xd) >> 1;
  uVar28 = (uint)uVar7;
  uVar16 = *(ushort *)((int)param_2 + 0x32) >> 1;
  uVar41 = 0;
  uStack_c8 = (uint)uVar7;
  uVar32 = (uint)uVar16;
  if (param_2[0x5e] == 0) {
    iStack_d4 = 0;
  }
  else {
    iStack_d4 = param_2[0x156] * (uint)*(ushort *)(param_2 + 0xd) *
                (uint)*(ushort *)((int)param_2 + 0x32) * 4 + param_2[0x5e];
  }
  puVar39 = (uint *)(param_2[0x156] * uStack_c8 * uVar32 * 0x18 + *(int *)(param_1 + 0x110));
  uStack_fc = (uint)param_5;
  if (param_4 == 0) {
    if ((*(byte *)((int)param_2 + 0x21) & 1) != 0) {
      lVar30 = (longlong)(int)uStack_c8 * (longlong)(int)uVar32;
      lVar48 = lVar30 * 4;
      if (0 < (int)lVar48) {
        iVar18 = 0;
        do {
          *(undefined4 *)(iVar18 + param_2[0x57]) = 0x4000;
          iVar18 = iVar18 + 4;
          lVar48 = lVar48 + -1;
        } while (lVar48 != 0);
      }
      if ((int)lVar30 != 0) {
        iVar18 = 0;
        do {
          *(undefined4 *)(param_2[0x58] + iVar18) = 0x4000;
          iVar18 = iVar18 + 4;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
      }
    }
    iStack_f4 = 0;
    iStack_f0 = 0;
    iVar19 = uStack_c8 * uVar32 * 6;
    iVar17 = param_2[0x156] * iVar19 * 0x80 + *(int *)(param_1 + 0x56f8);
    param_3[5] = iVar17;
    iVar18 = *(int *)(param_1 + 0x5704);
    iVar27 = param_2[0x156];
    param_3[7] = uStack_c8 * uVar32 * 0x300 + iVar17;
    param_3[6] = iVar27 * iVar19 * 4 + iVar18;
    iVar18 = *(int *)(param_1 + 0x5708);
    iVar27 = param_2[0x156];
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined2 *)(param_3 + 4) = 0;
    *(undefined2 *)((int)param_3 + 0x12) = 0;
    param_3[8] = iVar27 * iVar19 * 4 + iVar18;
    if ((*(int *)(param_1 + 0x55b4) != 0) && (param_2[0x157] == 1)) {
      *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + 1;
    }
  }
  else {
    uVar7 = *(ushort *)(param_2 + 0x13);
    piVar21 = param_2 + (param_4 + 0x5c) * 4;
    iStack_f4 = (uint)*(ushort *)((int)param_2 + 0x4a) * 0x10 * uStack_fc;
    param_3[5] = *piVar21;
    iStack_f0 = (uint)uVar7 * 8 * uStack_fc;
    param_3[6] = piVar21[1];
    param_3[7] = piVar21[2];
    puVar39 = puVar39 + uVar32 * uStack_fc * 6;
    param_3[8] = piVar21[3];
    *param_3 = (uint)uVar16 * 4 * uStack_fc;
    param_3[1] = uVar32 * uStack_fc;
    *(undefined2 *)((int)param_3 + 0x12) = 0;
    *(short *)(param_3 + 4) = (short)((param_5 & 0xffffffff) << 1);
  }
  iStack00000014 = param_1;
  piStack00000024 = param_3;
  iStack0000002c = param_4;
  uStack0000003c = param_6;
  if ((ulonglong)param_6 <= (param_5 & 0xffffffff)) {
LAB_830bc6e8:
    piVar21 = param_2 + (iStack0000002c + 0x5d) * 4;
    *piVar21 = param_3[5];
    piVar21[1] = param_3[6];
    piVar21[2] = param_3[7];
    piVar21[3] = param_3[8];
    if (uVar28 == param_6) {
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
    return uVar41;
  }
LAB_830ba694:
  uStack_d0 = (uint)uVar16;
  param_3[2] = iStack_f4;
  param_3[3] = iStack_f0;
  *(undefined2 *)((int)param_3 + 0x12) = 0;
  if ((*(int *)(param_1 + 0x55b4) != 0) &&
     (*(int *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2)) != 0)) {
    *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + 1;
    if ((*(int *)(param_1 + 0x10) == 0) ||
       ((*(int *)(param_1 + 0xb0cc) != 0 || (param_2[0x18d] != 1)))) {
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
        uVar31 = (ulonglong)*(uint *)(puVar10 + 1);
        uVar45 = 1;
        uVar35 = uVar31 + 0x10;
        if ((uVar35 & 0xffffffff) == 0) {
          do {
            if ((uVar35 & 0xffffffff) == 0) break;
            uVar24 = *puVar10;
            uVar45 = uVar45 - uVar35;
            *(int *)(puVar10 + 1) = (int)(uVar31 - uVar35);
            *puVar10 = uVar24 << (uVar35 & 0x7f);
            if ((longlong)(uVar31 - uVar35) < 0) {
              fn_82C4E5E8(puVar10,uVar24 >> (0x40 - uVar35 & 0x7f) & 0xffffffff);
            }
            uVar31 = (ulonglong)*(uint *)(puVar10 + 1);
            uVar35 = uVar31 + 0x10;
          } while ((uVar35 & 0xffffffff) < (uVar45 & 0xffffffff));
        }
        *puVar10 = *puVar10 << (uVar45 & 0x7f);
        *(int *)(puVar10 + 1) = (int)(uVar31 - uVar45);
        if ((longlong)(uVar31 - uVar45) < 0) {
          fn_82C4E5E8(puVar10);
        }
      }
      fn_82C4E470(puVar10,*(uint *)(puVar10 + 1) & 7);
      uVar41 = fn_82CA5860(param_1,param_5);
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
        uVar31 = (ulonglong)*(uint *)(puVar10 + 1);
        uVar45 = 1;
        uVar35 = uVar31 + 0x10;
        if ((uVar35 & 0xffffffff) == 0) {
          do {
            if ((uVar35 & 0xffffffff) == 0) break;
            uVar24 = *puVar10;
            uVar45 = uVar45 - uVar35;
            *(int *)(puVar10 + 1) = (int)(uVar31 - uVar35);
            *puVar10 = uVar24 << (uVar35 & 0x7f);
            if ((longlong)(uVar31 - uVar35) < 0) {
              fn_82C4E5E8(puVar10,uVar24 >> (0x40 - uVar35 & 0x7f) & 0xffffffff);
            }
            uVar31 = (ulonglong)*(uint *)(puVar10 + 1);
            uVar35 = uVar31 + 0x10;
          } while ((uVar35 & 0xffffffff) < (uVar45 & 0xffffffff));
        }
        *puVar10 = *puVar10 << (uVar45 & 0x7f);
        *(int *)(puVar10 + 1) = (int)(uVar31 - uVar45);
        if ((longlong)(uVar31 - uVar45) < 0) {
          fn_82C4E5E8(puVar10);
        }
      }
      fn_82C4E470(puVar10,*(uint *)(puVar10 + 1) & 7);
      fn_830CEA08(param_2,param_5);
    }
    *(undefined4 *)(param_1 + 0x79c) = 1;
    *(undefined1 *)((int)param_2 + 0x4e3) = 1;
    if ((int)uVar41 != 0) {
      return uVar41;
    }
  }
  if ((*(int *)(param_1 + 0xf94) != 0) && (*(int *)(param_1 + 0x120) != 4)) {
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
    uVar41 = fn_82CA5C50(param_1,param_5);
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
    if ((int)uVar41 != 0) {
      return uVar41;
    }
  }
  uVar32 = -((uint)param_5 & 1) & (uint)*(ushort *)((int)param_2 + 0x32);
  uVar35 = ((ulonglong)*(uint *)(param_2[0x146] + (int)((param_5 & 0xffffffff) << 2)) |
           (longlong)((int)-(uint)param_5 >> 0x1f) + 1U) - 1;
  uStack_100 = 0;
  uVar31 = uVar35;
  if (uVar16 != 0) {
    do {
      puVar10 = (ulonglong *)*param_2;
      dataCacheBlockTouch((ulonglong)*(uint *)((int)puVar10 + 0xc) + 0x80);
      dataCacheBlockTouch((ulonglong)*(uint *)((int)puVar10 + 0xc) + 0x100);
      piVar21 = (int *)param_2[0x134];
      if (piVar21 == (int *)0x0) {
        uVar45 = 0;
        *(undefined4 *)((int)puVar10 + 0x14) = 3;
      }
      else {
        iVar18 = *piVar21;
        sVar25 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar21 + 2) & 0x7f) &
                                  0xffffffff) << 1) + iVar18);
        uVar45 = (ulonglong)sVar25;
        if (sVar25 < 0) {
          fn_82C4E470(puVar10);
          do {
            uVar24 = *puVar10;
            fn_82C4E470(puVar10,1);
            sVar25 = *(short *)((int)(((uVar45 - ((longlong)uVar24 >> 0x3f)) + 0x8000 & 0xffffffff)
                                     << 1) + iVar18);
            uVar45 = (ulonglong)sVar25;
          } while (sVar25 < 0);
        }
        else {
          iVar18 = *(int *)(puVar10 + 1);
          iVar27 = (int)(uVar45 & 0xf);
          *puVar10 = *puVar10 << (uVar45 & 0xf);
          *(int *)(puVar10 + 1) = iVar18 - iVar27;
          if (iVar18 < iVar27) {
            do {
              pbVar13 = *(byte **)((int)puVar10 + 0xc);
              if (pbVar13 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                bVar34 = *pbVar13;
                bVar37 = pbVar13[1];
                bVar2 = pbVar13[2];
                bVar3 = pbVar13[4];
                bVar4 = pbVar13[3];
                bVar5 = pbVar13[5];
                iVar18 = *(int *)(puVar10 + 1);
                *(byte **)((int)puVar10 + 0xc) = pbVar13 + 6;
                *(int *)(puVar10 + 1) = iVar18 + 0x30;
                *puVar10 = ((((((ulonglong)bVar37 + (ulonglong)bVar34 * 0x100) * 0x100 +
                              (ulonglong)bVar2) * 0x100 + (ulonglong)bVar4) * 0x100 +
                            (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5 <<
                           ((longlong)-iVar18 & 0x7fU)) + *puVar10;
                goto LAB_830bac64;
              }
              iVar18 = fn_82C4E3B0(puVar10);
            } while (iVar18 == 1);
            uVar45 = (ulonglong)((int)sVar25 >> 4);
          }
          else {
LAB_830bac64:
            uVar45 = (ulonglong)((int)sVar25 >> 4);
          }
        }
        if (0x3f < (uVar45 & 0xffffffff)) {
          return 1;
        }
      }
      uVar24 = 0;
      *(short *)((int)puVar39 + 6) = (short)((uVar45 & 0xffffffff) << 6);
      uVar28 = (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) & (uint)uVar31;
      uVar26 = 0;
      bVar34 = *(byte *)(param_2[0x13c] + (int)uVar45);
      uVar45 = *(byte *)((int)puVar39 + uVar28 * -0x18 + 5) & uVar31;
      if (uStack_100 != 0) {
        uVar26 = (ulonglong)*(byte *)((int)puVar39 + -0x13);
        uVar24 = *(byte *)((int)puVar39 + uVar28 * -0x18 + -0x13) & uVar31;
      }
      bVar37 = *(byte *)(param_2[0x13b] +
                        ((uint)((((uVar26 & 2 | uVar45 & 4) << 3 | uVar26 & 8) << 1 | uVar24 & 8) <<
                               1) | bVar34 & 0xf));
      if ((uVar45 & 8) != 0) {
        bVar37 = bVar37 >> 4;
      }
      bVar34 = bVar37 & 0xf | bVar34 & 0xf0;
      if ((param_2[0x124] != 7) || (*(char *)((int)param_2 + 0x4e6) == '\0')) {
        puVar10 = (ulonglong *)*param_2;
        uVar31 = *puVar10;
        uVar28 = *(uint *)(puVar10 + 1);
        *puVar10 = uVar31 << 1;
        *(int *)(puVar10 + 1) = (int)((ulonglong)uVar28 - 1);
        if ((longlong)((ulonglong)uVar28 - 1) < 0) {
          fn_82C4E5E8();
        }
        *puVar39 = (uint)((uVar31 >> 0x3f) << 3) | *puVar39 & 0xffffffe7;
      }
      if (*(int *)(*param_2 + 0x14) != 0) {
        return 1;
      }
      *(byte *)((int)puVar39 + 5) = bVar34;
      *puVar39 = *puVar39 & 0xff3fffff;
      if ((*(char *)(param_2 + 7) != '\0') && (bVar34 != 0)) {
        plVar11 = (longlong *)*param_2;
        lVar30 = *plVar11;
        uVar28 = *(uint *)(plVar11 + 1);
        lVar48 = -(lVar30 >> 0x3f);
        *plVar11 = lVar30 << 1;
        *(int *)(plVar11 + 1) = (int)((ulonglong)uVar28 - 1);
        if ((longlong)((ulonglong)uVar28 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar30 < 0) {
          plVar11 = (longlong *)*param_2;
          lVar30 = *plVar11;
          uVar28 = *(uint *)(plVar11 + 1);
          *plVar11 = lVar30 << 1;
          *(int *)(plVar11 + 1) = (int)((ulonglong)uVar28 - 1);
          if ((longlong)((ulonglong)uVar28 - 1) < 0) {
            fn_82C4E5E8();
          }
          lVar48 = lVar48 - (lVar30 >> 0x3f);
        }
        *puVar39 = (uint)(lVar48 << 0x16) | *puVar39 & 0xff3fffff;
      }
      if (((*(byte *)((int)param_2 + 0x21) & 4) != 0) && (*(char *)((int)param_2 + 0x4e7) == '\0'))
      {
        puVar10 = (ulonglong *)*param_2;
        uVar31 = *puVar10;
        uVar28 = *(uint *)(puVar10 + 1);
        *puVar10 = uVar31 << 1;
        *(int *)(puVar10 + 1) = (int)((ulonglong)uVar28 - 1);
        if ((longlong)((ulonglong)uVar28 - 1) < 0) {
          fn_82C4E5E8();
        }
        *puVar39 = (uint)((uVar31 >> 0x3f) << 0xb) | *puVar39 & 0xfffff7ff;
      }
      *(undefined1 *)(puVar39 + 1) = *(undefined1 *)(param_2 + 6);
      if (*(char *)((int)param_2 + 0x1b) != '\0') {
        if (*(byte *)((int)param_2 + 0x4dd) == 0) {
          puVar10 = (ulonglong *)*param_2;
          lVar48 = 0;
          uVar31 = (ulonglong)*(uint *)(puVar10 + 1);
          uVar45 = uVar31 + 0x10;
          if (*(char *)((int)param_2 + 0x4e2) == '\0') {
            uVar24 = 3;
            if ((uVar45 & 0xffffffff) < 3) {
              do {
                if ((uVar45 & 0xffffffff) == 0) break;
                uVar24 = uVar24 - uVar45;
                *(int *)(puVar10 + 1) = (int)(uVar31 - uVar45);
                lVar48 = (ulonglong)
                         (uint)((int)(*puVar10 >> (0x40 - uVar45 & 0x7f)) << ((uint)uVar24 & 0x3f))
                         + lVar48;
                *puVar10 = *puVar10 << (uVar45 & 0x7f);
                if ((longlong)(uVar31 - uVar45) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                uVar31 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar45 = uVar31 + 0x10;
              } while ((uVar45 & 0xffffffff) < (uVar24 & 0xffffffff));
            }
            *(int *)(puVar10 + 1) = (int)(uVar31 - uVar24);
            lVar48 = (*puVar10 >> (0x40 - uVar24 & 0x7f) & 0xffffffff) + lVar48;
            *puVar10 = *puVar10 << (uVar24 & 0x7f);
            if ((longlong)(uVar31 - uVar24) < 0) {
              fn_82C4E5E8(puVar10);
            }
            if ((int)lVar48 == 7) {
              puVar10 = (ulonglong *)*param_2;
              uVar24 = 5;
              lVar48 = 0;
              uVar45 = (ulonglong)*(uint *)(puVar10 + 1);
              uVar31 = uVar45 + 0x10;
              if ((uVar31 & 0xffffffff) < 5) {
                do {
                  if ((uVar31 & 0xffffffff) == 0) break;
                  uVar24 = uVar24 - uVar31;
                  *(int *)(puVar10 + 1) = (int)(uVar45 - uVar31);
                  lVar48 = (ulonglong)
                           (uint)((int)(*puVar10 >> (0x40 - uVar31 & 0x7f)) << ((uint)uVar24 & 0x3f)
                                 ) + lVar48;
                  *puVar10 = *puVar10 << (uVar31 & 0x7f);
                  if ((longlong)(uVar45 - uVar31) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  uVar45 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar31 = uVar45 + 0x10;
                } while ((uVar31 & 0xffffffff) < (uVar24 & 0xffffffff));
              }
              *(int *)(puVar10 + 1) = (int)(uVar45 - uVar24);
              uVar31 = (*puVar10 >> (0x40 - uVar24 & 0x7f) & 0xffffffff) + lVar48;
              *puVar10 = *puVar10 << (uVar24 & 0x7f);
              if ((longlong)(uVar45 - uVar24) < 0) {
                fn_82C4E5E8(puVar10);
              }
            }
            else {
              uVar31 = (ulonglong)*(byte *)(param_2 + 0x137) + lVar48;
            }
            *(char *)(puVar39 + 1) = (char)((uVar31 & 0xffffffff) << 1) + -1;
          }
          else {
            uVar24 = 1;
            if ((uVar45 & 0xffffffff) == 0) {
              do {
                if ((uVar45 & 0xffffffff) == 0) break;
                uVar24 = uVar24 - uVar45;
                *(int *)(puVar10 + 1) = (int)(uVar31 - uVar45);
                lVar48 = (ulonglong)
                         (uint)((int)(*puVar10 >> (0x40 - uVar45 & 0x7f)) << ((uint)uVar24 & 0x3f))
                         + lVar48;
                *puVar10 = *puVar10 << (uVar45 & 0x7f);
                if ((longlong)(uVar31 - uVar45) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                uVar31 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar45 = uVar31 + 0x10;
              } while ((uVar45 & 0xffffffff) < (uVar24 & 0xffffffff));
            }
            uVar45 = *puVar10;
            *(int *)(puVar10 + 1) = (int)(uVar31 - uVar24);
            *puVar10 = uVar45 << (uVar24 & 0x7f);
            if ((longlong)(uVar31 - uVar24) < 0) {
              fn_82C4E5E8(puVar10);
            }
            if (((uVar45 >> (0x40 - uVar24 & 0x7f) & 0xffffffff) + lVar48 & 0xffffffff) == 0) {
              *(char *)(puVar39 + 1) =
                   *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
            }
            else {
              *(char *)(puVar39 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
            }
          }
        }
        else if ((*puVar39 >> 0xc & 0xf & (uint)*(byte *)((int)param_2 + 0x4dd)) == 0) {
          *(char *)(puVar39 + 1) =
               *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
        }
        else {
          *(char *)(puVar39 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
        }
        if (*(byte *)(puVar39 + 1) == 0) {
          return 1;
        }
        if (0x3e < *(byte *)(puVar39 + 1)) {
          return 1;
        }
      }
      bVar34 = *(byte *)(puVar39 + 1);
      iVar18 = param_2[0x61];
      uStack_d8 = (uint)*(byte *)((int)puVar39 + 5);
      if (*(char *)(param_2 + 7) == '\0') {
        piStack_e4 = param_2 + 0x65;
        piStack_ec = param_2 + 0x68;
      }
      else {
        uVar28 = *puVar39 >> 0x14 & 0xc;
        piStack_e4 = (int *)(param_2[99] + uVar28);
        piStack_ec = (int *)(param_2[100] + uVar28);
      }
      uVar31 = 0;
      uStack_dc = 0;
      do {
        uVar28 = (uint)uVar31;
        if ((int)uVar28 >> 2 == 0) {
          piVar21 = (int *)param_2[0x132];
          piStack_e0 = piStack_ec;
          sVar25 = *(short *)((((uStack_fc & 1) << 1 | (int)uVar28 >> 1) + 0xb8) * 2 + (int)param_2)
          ;
          iVar27 = ((int)uVar28 >> 1) - (int)uVar35;
          psVar38 = (short *)(((uint)*(ushort *)
                                      ((int)((uVar31 + 0x12 & 0xffffffff) << 1) + (int)param_2) +
                              (uStack_100 + uVar32) * 2) * 0x20 + param_2[0x6c]);
          uVar22 = (uVar28 & 1) + uStack_100;
        }
        else {
          piVar21 = (int *)param_2[0x133];
          piStack_e0 = piStack_e4;
          iVar27 = -(int)uVar35;
          sVar25 = *(short *)(((uStack_fc & 1) + 0xb6) * 2 + (int)param_2);
          psVar38 = (short *)(*(int *)((int)((uVar31 + 0x69 & 0xffffffff) << 2) + (int)param_2) +
                             (((int)uVar32 >> 1) + uStack_100) * 0x20);
          uVar22 = uStack_100;
        }
        uVar23 = 0;
        piVar46 = (int *)0x0;
        piVar43 = (int *)0x0;
        uVar12 = *(uint *)((uint)bVar34 * 0x14 + iVar18 + 0x10);
        if (param_2[0x124] == 7) {
          uVar42 = 1;
          if (iVar27 != 0) {
            uVar42 = 8;
            piVar46 = (int *)(psVar38 + ((int)sVar25 & 0x7ffffffU) * -0x10);
          }
          piVar36 = piVar46;
          if (uVar22 != 0) {
            piVar43 = (int *)(psVar38 + -0x10);
            uVar42 = 1;
            piVar36 = piVar43;
            if (piVar43 == (int *)0x0) goto LAB_830bbf04;
            uVar42 = 1;
            if (piVar46 != (int *)0x0) {
              sVar25 = *(short *)(piVar46 + 4);
              sVar44 = *(short *)piVar43;
              iVar27 = (int)*(short *)(piVar46 + -4);
              iVar19 = (int)sVar25;
              iVar17 = (int)sVar44;
              if (*(char *)((int)param_2 + 0x1b) != '\0') {
                iVar20 = (int)*(short *)(piVar46 + -4);
                if (((uVar28 == 0) || (uVar28 == 4)) || (uVar28 == 5)) {
                  uVar7 = *(ushort *)((int)param_2 + 0x32) >> 1;
                  iVar17 = param_2[0x61];
                  iVar29 = *(int *)(&lbl_820FDD78 +
                                   (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + iVar17 + 0x10) &
                                   0x3f) * 4);
                  iVar27 = iVar29 * *(int *)((uint)*(byte *)(puVar39 + (uint)uVar7 * -6 + -5) * 0x14
                                             + iVar17 + 0x10) * iVar20 + 0x20000 >> 0x12;
                  iVar19 = iVar29 * *(int *)((uint)*(byte *)(puVar39 + (uint)uVar7 * -6 + 1) * 0x14
                                             + iVar17 + 0x10) * (int)sVar25 + 0x20000 >> 0x12;
                  iVar17 = iVar29 * *(int *)((uint)*(byte *)(puVar39 + -5) * 0x14 + iVar17 + 0x10) *
                                    (int)sVar44 + 0x20000 >> 0x12;
                }
                else if (uVar28 == 1) {
                  iVar19 = *(int *)((uint)*(byte *)(puVar39 +
                                                   (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) *
                                                   -6 + 1) * 0x14 + param_2[0x61] + 0x10);
                  iVar27 = *(int *)(&lbl_820FDD78 +
                                   (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61] +
                                             0x10) & 0x3f) * 4) * iVar19 * iVar20 + 0x20000 >> 0x12;
                  iVar19 = *(int *)(&lbl_820FDD78 +
                                   (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61] +
                                             0x10) & 0x3f) * 4) * iVar19 * sVar25 + 0x20000 >> 0x12;
                }
                else if (uVar28 == 2) {
                  iVar17 = *(int *)((uint)*(byte *)(puVar39 + -5) * 0x14 + param_2[0x61] + 0x10);
                  iVar27 = *(int *)(&lbl_820FDD78 +
                                   (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61] +
                                             0x10) & 0x3f) * 4) * iVar17 * iVar20 + 0x20000 >> 0x12;
                  iVar17 = *(int *)(&lbl_820FDD78 +
                                   (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61] +
                                             0x10) & 0x3f) * 4) * iVar17 * sVar44 + 0x20000 >> 0x12;
                }
              }
              uVar22 = iVar27 - iVar19 >> 0x1f;
              uVar15 = iVar27 - iVar17 >> 0x1f;
              if ((int)((iVar27 - iVar17 ^ uVar15) - uVar15) <
                  (int)((iVar27 - iVar19 ^ uVar22) - uVar22)) {
                uVar42 = 8;
                piVar36 = piVar46;
              }
            }
          }
          if (piVar36 != (int *)0x0) {
            uVar42 = -(uint)((*puVar39 & 0x18) != 0) & uVar42;
            if (*(char *)((int)param_2 + 0x1b) == '\0') {
              if (piVar36 == piVar46) {
                piVar36 = piVar36 + 4;
              }
            }
            else if (piVar36 == piVar43) {
              if (((uVar28 == 0) || (uVar28 == 2)) || ((uVar28 == 4 || (uVar28 == 5)))) {
                bVar37 = *(byte *)(puVar39 + -5);
                lVar48 = 3;
                iVar27 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar39 + 1) & 0x3f) * 4);
                psVar33 = (short *)((int)piVar36 + 6);
                psVar47 = (short *)((int)&uStack_c8 + 2);
                uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(*(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) *
                             *(int *)((uint)bVar37 * 0x14 + param_2[0x61] + 0x10) *
                             (int)*(short *)piVar36 + 0x20000 >> 0x12))) & ((U64)0xFFFF)) << 0));
                do {
                  sVar25 = psVar33[-1];
                  sVar44 = *psVar33;
                  sVar8 = psVar33[1];
                  sVar9 = psVar33[2];
                  uVar28 = (uint)bVar37;
                  psVar47[4] = (short)((int)(psVar33[-2] * iVar27 * (uint)bVar37 + 0x20000) >> 0x12)
                  ;
                  psVar47 = psVar47 + 5;
                  *psVar47 = (short)((int)(sVar25 * iVar27 * uVar28 + 0x20000) >> 0x12);
                  *(short *)((int)asStack_bc + (-4 - (int)piVar36) + (int)psVar33) =
                       (short)((int)(sVar44 * iVar27 * uVar28 + 0x20000) >> 0x12);
                  *(short *)((int)asStack_bc + (-2 - (int)piVar36) + (int)psVar33) =
                       (short)((int)(sVar8 * iVar27 * uVar28 + 0x20000) >> 0x12);
                  *(short *)(((int)asStack_bc - (int)piVar36) + (int)psVar33) =
                       (short)((int)(iVar27 * (int)sVar9 * (uint)bVar37 + 0x20000) >> 0x12);
                  psVar33 = psVar33 + 5;
                  lVar48 = lVar48 + -1;
                } while (lVar48 != 0);
                piVar36 = &uStack_c0;
                asStack_b0[0] = (((U64)(uStack_c0) >> 0) & 0xFFFF);
              }
              else {
                psVar33 = &sStack_c2;
                psVar47 = (short *)((int)piVar36 + -2);
                lVar48 = 0x10;
                do {
                  psVar47 = psVar47 + 1;
                  psVar33 = psVar33 + 1;
                  *psVar33 = *psVar47;
                  lVar48 = lVar48 + -1;
                } while (lVar48 != 0);
                piVar36 = &uStack_c0;
              }
            }
            else if (((uVar28 == 0) || (uVar28 == 1)) || ((uVar28 == 4 || (uVar28 == 5)))) {
              lVar48 = 3;
              iVar27 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar39 + 1) & 0x3f) * 4);
              psVar47 = (short *)((int)&uStack_c8 + 2);
              bVar37 = *(byte *)(puVar39 + (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) * -6 + 1);
              psVar33 = (short *)((int)piVar36 + 6);
              uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(*(int *)(&lbl_820FDD78 +
                                   (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61] +
                                             0x10) & 0x3f) * 4) *
                           *(int *)((uint)*(byte *)(puVar39 +
                                                   (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) *
                                                   -6 + 1) * 0x14 + param_2[0x61] + 0x10) *
                           (int)*(short *)piVar36 + 0x20000 >> 0x12))) & ((U64)0xFFFF)) << 0));
              do {
                iVar19 = iVar27 * (uint)bVar37;
                sVar25 = psVar33[-1];
                sVar44 = psVar33[2];
                sVar8 = *psVar33;
                sVar9 = psVar33[1];
                psVar47[4] = (short)(psVar33[-2] * iVar19 + 0x20000 >> 0x12);
                psVar47 = psVar47 + 5;
                *psVar47 = (short)(sVar25 * iVar19 + 0x20000 >> 0x12);
                *(short *)((int)psVar33 + (int)asStack_bc + (-4 - (int)piVar36)) =
                     (short)(sVar8 * iVar19 + 0x20000 >> 0x12);
                *(short *)((int)psVar33 + (int)asStack_bc + (-2 - (int)piVar36)) =
                     (short)(sVar9 * iVar19 + 0x20000 >> 0x12);
                *(short *)((int)psVar33 + ((int)asStack_bc - (int)piVar36)) =
                     (short)((int)((int)sVar44 * (uint)bVar37 * iVar27 + 0x20000) >> 0x12);
                psVar33 = psVar33 + 5;
                lVar48 = lVar48 + -1;
              } while (lVar48 != 0);
              piVar36 = (int *)asStack_b0;
              asStack_b0[0] = (((U64)(uStack_c0) >> 0) & 0xFFFF);
            }
            else {
              psVar33 = &sStack_c2;
              psVar47 = (short *)((int)piVar36 + -2);
              lVar48 = 0x10;
              do {
                psVar47 = psVar47 + 1;
                psVar33 = psVar33 + 1;
                *psVar33 = *psVar47;
                lVar48 = lVar48 + -1;
              } while (lVar48 != 0);
              piVar36 = (int *)asStack_b0;
            }
          }
        }
        else {
          uVar42 = 0;
          cVar40 = '\0';
          iVar19 = 0;
          if (((*(byte *)((int)param_2 + 0x21) & 1) == 0) || (*(byte *)(param_2 + 0x137) < 9)) {
            trapWord(6,(ulonglong)uVar12,0);
            uVar23 = ((int)uVar12 >> 1) + 0x400;
            iVar19 = (int)uVar23 / (int)uVar12;
            trapWord(5,(ulonglong)uVar12 &
                       ~((((ulonglong)uVar23 & 0x7fffffff) << 1 | (ulonglong)(uVar23 >> 0x1f)) - 1),
                     0xffff);
          }
          if (iVar27 != 0) {
            cVar40 = '\x01';
            piVar46 = (int *)(psVar38 + ((int)sVar25 & 0x7ffffffU) * -0x10);
            uVar42 = 8;
            uVar23 = *(short *)piVar46 - iVar19 >> 0x1f;
            if ((int)((*(short *)piVar46 - iVar19 ^ uVar23) - uVar23) <
                (int)(uint)*(byte *)((int)param_2 + 0x4e5)) {
              cVar40 = '\0';
              uVar42 = 0;
            }
          }
          piVar36 = piVar46;
          if (uVar22 == 0) {
LAB_830bbb4c:
            if (piVar36 == (int *)0x0) goto LAB_830bbe9c;
            if (*(char *)((int)param_2 + 0x1b) == '\0') {
              if (piVar36 == piVar46) {
                piVar36 = piVar36 + 4;
              }
            }
            else {
              iVar27 = (int)uVar31;
              if (piVar36 == piVar43) {
                if (((iVar27 == 0) || (iVar27 == 2)) || ((iVar27 == 4 || (iVar27 == 5)))) {
                  bVar37 = *(byte *)(puVar39 + -5);
                  lVar48 = 3;
                  iVar27 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar39 + 1) & 0x3f) * 4);
                  psVar33 = (short *)((int)piVar36 + 6);
                  psVar47 = (short *)((int)&uStack_c8 + 2);
                  uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(*(int *)(&lbl_820FDD78 +
                                       (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) *
                               *(int *)((uint)bVar37 * 0x14 + param_2[0x61] + 0x10) *
                               (int)*(short *)piVar36 + 0x20000 >> 0x12))) & ((U64)0xFFFF)) << 0));
                  do {
                    sVar25 = psVar33[-1];
                    sVar44 = *psVar33;
                    sVar8 = psVar33[1];
                    sVar9 = psVar33[2];
                    uVar28 = (uint)bVar37;
                    psVar47[4] = (short)((int)((int)psVar33[-2] * (uint)bVar37 * iVar27 + 0x20000)
                                        >> 0x12);
                    psVar47 = psVar47 + 5;
                    *psVar47 = (short)((int)((int)sVar25 * (uint)bVar37 * iVar27 + 0x20000) >> 0x12)
                    ;
                    *(short *)((int)asStack_bc + (-4 - (int)piVar36) + (int)psVar33) =
                         (short)((int)((int)sVar44 * uVar28 * iVar27 + 0x20000) >> 0x12);
                    *(short *)((int)asStack_bc + (-2 - (int)piVar36) + (int)psVar33) =
                         (short)((int)((int)sVar8 * uVar28 * iVar27 + 0x20000) >> 0x12);
                    *(short *)(((int)asStack_bc - (int)piVar36) + (int)psVar33) =
                         (short)((int)((int)sVar9 * uVar28 * iVar27 + 0x20000) >> 0x12);
                    psVar33 = psVar33 + 5;
                    lVar48 = lVar48 + -1;
                  } while (lVar48 != 0);
                  piVar36 = &uStack_c0;
                  asStack_b0[0] = (((U64)(uStack_c0) >> 0) & 0xFFFF);
                }
                else {
                  psVar47 = (short *)((int)piVar36 + -2);
                  psVar33 = &sStack_c2;
                  lVar48 = 0x10;
                  do {
                    psVar47 = psVar47 + 1;
                    psVar33 = psVar33 + 1;
                    *psVar33 = *psVar47;
                    lVar48 = lVar48 + -1;
                  } while (lVar48 != 0);
                  piVar36 = &uStack_c0;
                }
              }
              else if (((iVar27 == 0) || (iVar27 == 1)) || ((iVar27 == 4 || (iVar27 == 5)))) {
                lVar48 = 3;
                iVar27 = *(int *)(&lbl_820FDD78 + (*(byte *)(puVar39 + 1) & 0x3f) * 4);
                psVar47 = (short *)((int)&uStack_c8 + 2);
                psVar33 = (short *)((int)piVar36 + 6);
                bVar37 = *(byte *)(puVar39 + (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) * -6 + 1)
                ;
                uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)(*(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) *
                             *(int *)((uint)*(byte *)(puVar39 +
                                                     (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) *
                                                     -6 + 1) * 0x14 + param_2[0x61] + 0x10) *
                             (int)*(short *)piVar36 + 0x20000 >> 0x12))) & ((U64)0xFFFF)) << 0));
                do {
                  iVar19 = iVar27 * (uint)bVar37;
                  sVar25 = psVar33[-1];
                  sVar44 = psVar33[2];
                  sVar8 = *psVar33;
                  sVar9 = psVar33[1];
                  psVar47[4] = (short)(psVar33[-2] * iVar19 + 0x20000 >> 0x12);
                  psVar47 = psVar47 + 5;
                  *psVar47 = (short)(sVar25 * iVar19 + 0x20000 >> 0x12);
                  *(short *)((int)asStack_bc + (-4 - (int)piVar36) + (int)psVar33) =
                       (short)(sVar8 * iVar19 + 0x20000 >> 0x12);
                  *(short *)((int)asStack_bc + (-2 - (int)piVar36) + (int)psVar33) =
                       (short)(sVar9 * iVar19 + 0x20000 >> 0x12);
                  *(short *)(((int)asStack_bc - (int)piVar36) + (int)psVar33) =
                       (short)((int)((int)sVar44 * (uint)bVar37 * iVar27 + 0x20000) >> 0x12);
                  psVar33 = psVar33 + 5;
                  lVar48 = lVar48 + -1;
                } while (lVar48 != 0);
                piVar36 = (int *)asStack_b0;
                asStack_b0[0] = (((U64)(uStack_c0) >> 0) & 0xFFFF);
              }
              else {
                psVar47 = (short *)((int)piVar36 + -2);
                psVar33 = &sStack_c2;
                lVar48 = 0x10;
                do {
                  psVar47 = psVar47 + 1;
                  psVar33 = psVar33 + 1;
                  *psVar33 = *psVar47;
                  lVar48 = lVar48 + -1;
                } while (lVar48 != 0);
                piVar36 = (int *)asStack_b0;
              }
            }
          }
          else {
            piVar43 = (int *)(psVar38 + -0x10);
            cVar40 = '\0';
            uVar42 = 1;
            if (piVar43 != (int *)0x0) {
              piVar36 = piVar43;
              if (piVar46 != (int *)0x0) {
                sVar25 = *(short *)(piVar46 + 4);
                sVar44 = *(short *)piVar43;
                iVar27 = (int)*(short *)(piVar46 + -4);
                iVar17 = (int)sVar25;
                iVar20 = (int)sVar44;
                if (*(char *)((int)param_2 + 0x1b) != '\0') {
                  iVar29 = (int)*(short *)(piVar46 + -4);
                  if (((uVar28 == 0) || (uVar28 == 4)) || (uVar28 == 5)) {
                    uVar7 = *(ushort *)((int)param_2 + 0x32) >> 1;
                    iVar20 = param_2[0x61];
                    uVar31 = (ulonglong)uStack_dc;
                    iVar14 = *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + iVar20 + 0x10)
                                     & 0x3f) * 4);
                    iVar27 = *(int *)((uint)*(byte *)(puVar39 + (uint)uVar7 * -6 + -5) * 0x14 +
                                      iVar20 + 0x10) * iVar29 * iVar14 + 0x20000 >> 0x12;
                    iVar17 = *(int *)((uint)*(byte *)(puVar39 + (uint)uVar7 * -6 + 1) * 0x14 +
                                      iVar20 + 0x10) * (int)sVar25 * iVar14 + 0x20000 >> 0x12;
                    iVar20 = *(int *)((uint)*(byte *)(puVar39 + -5) * 0x14 + iVar20 + 0x10) *
                             (int)sVar44 * iVar14 + 0x20000 >> 0x12;
                  }
                  else if (uVar28 == 1) {
                    iVar17 = *(int *)((uint)*(byte *)(puVar39 +
                                                     (uint)(*(ushort *)((int)param_2 + 0x32) >> 1) *
                                                     -6 + 1) * 0x14 + param_2[0x61] + 0x10);
                    iVar27 = iVar17 * iVar29 *
                             *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) + 0x20000 >> 0x12;
                    iVar17 = iVar17 * sVar25 *
                             *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) + 0x20000 >> 0x12;
                  }
                  else if (uVar28 == 2) {
                    iVar20 = *(int *)((uint)*(byte *)(puVar39 + -5) * 0x14 + param_2[0x61] + 0x10);
                    iVar27 = iVar20 * iVar29 *
                             *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) + 0x20000 >> 0x12;
                    iVar20 = iVar20 * sVar44 *
                             *(int *)(&lbl_820FDD78 +
                                     (*(uint *)((uint)*(byte *)(puVar39 + 1) * 0x14 + param_2[0x61]
                                               + 0x10) & 0x3f) * 4) + 0x20000 >> 0x12;
                  }
                }
                uVar28 = iVar27 - iVar17 >> 0x1f;
                uVar22 = iVar27 - iVar20 >> 0x1f;
                if ((int)((iVar27 - iVar20 ^ uVar22) - uVar22) <
                    (int)((iVar27 - iVar17 ^ uVar28) - uVar28)) {
                  cVar40 = '\x01';
                  uVar42 = 8;
                  piVar36 = piVar46;
                }
              }
              goto LAB_830bbb4c;
            }
LAB_830bbe9c:
            piVar36 = param_2 + 0x13a;
            *(short *)(param_2 + 0x13a) = (short)iVar19;
          }
          cVar1 = *(char *)(param_2 + 0x139);
          if ((*puVar39 & 0x18) == 0) {
            uVar42 = 0;
            uVar23 = (cVar1 == '\0' ^ 1) + 4;
          }
          else if (cVar40 == cVar1) {
            uVar23 = -(uint)(cVar1 != '\0') & 3;
          }
          else {
            uVar23 = (cVar1 == '\0') + 1;
          }
        }
LAB_830bbf04:
        uVar28 = piStack00000024[7];
        lVar48 = (ulonglong)uVar28 - 0x80;
        psVar47 = (short *)lVar48;
        piStack00000024[7] = (int)psVar47;
        dataCacheBlockClearToZero(lVar48);
        sVar25 = 0;
        puVar10 = (ulonglong *)*param_2;
        if (piVar21 == (int *)0x0) {
          uVar45 = 0;
          *(undefined4 *)((int)puVar10 + 0x14) = 3;
        }
        else {
          iVar27 = *piVar21;
          sVar44 = *(short *)((int)((*puVar10 >> (0x40 - (ulonglong)*(byte *)(piVar21 + 2) & 0x7f) &
                                    0xffffffff) << 1) + iVar27);
          uVar45 = (ulonglong)sVar44;
          if (sVar44 < 0) {
            fn_82C4E470(puVar10);
            do {
              uVar24 = *puVar10;
              fn_82C4E470(puVar10,1);
              sVar44 = *(short *)((int)(((uVar45 - ((longlong)uVar24 >> 0x3f)) + 0x8000 & 0xffffffff
                                        ) << 1) + iVar27);
              uVar45 = (ulonglong)sVar44;
            } while (sVar44 < 0);
          }
          else {
            iVar27 = *(int *)(puVar10 + 1);
            iVar19 = (int)(uVar45 & 0xf);
            *puVar10 = *puVar10 << (uVar45 & 0xf);
            *(int *)(puVar10 + 1) = iVar27 - iVar19;
            if (iVar27 < iVar19) {
              do {
                pbVar13 = *(byte **)((int)puVar10 + 0xc);
                if (pbVar13 < (byte *)(*(int *)(puVar10 + 2) - 4U)) {
                  bVar37 = *pbVar13;
                  bVar2 = pbVar13[1];
                  bVar3 = pbVar13[2];
                  bVar4 = pbVar13[3];
                  bVar5 = pbVar13[4];
                  bVar6 = pbVar13[5];
                  iVar27 = *(int *)(puVar10 + 1);
                  *(byte **)((int)puVar10 + 0xc) = pbVar13 + 6;
                  *(int *)(puVar10 + 1) = iVar27 + 0x30;
                  *puVar10 = ((((((ulonglong)bVar2 + (ulonglong)bVar37 * 0x100) * 0x100 +
                                (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                              (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                             ((longlong)-iVar27 & 0x7fU)) + *puVar10;
                  goto LAB_830bc01c;
                }
                iVar27 = fn_82C4E3B0(puVar10);
              } while (iVar27 == 1);
              uVar45 = (ulonglong)((int)sVar44 >> 4);
            }
            else {
LAB_830bc01c:
              uVar45 = (ulonglong)((int)sVar44 >> 4);
            }
          }
        }
        sVar44 = (short)uVar45;
        if ((int)(uVar45 & 0xffff) == 0x77) {
          if ((int)uVar12 < 5) {
            lVar30 = 3 - (longlong)((int)uVar12 >> 1);
          }
          else {
            lVar30 = 0;
          }
          uVar45 = (ulonglong)*(uint *)(puVar10 + 1);
          uVar26 = lVar30 + 8;
          iVar27 = 0;
          sVar44 = 0;
          uVar24 = uVar45 + 0x10;
          if ((uVar26 & 0xffffffff) < 0x21) {
            if ((uVar26 & 0xffffffff) == 0) {
              sVar44 = 0;
            }
            else {
              if ((uVar24 & 0xffffffff) < (uVar26 & 0xffffffff)) {
                do {
                  sVar44 = (short)iVar27;
                  if ((uVar24 & 0xffffffff) == 0) break;
                  uVar26 = uVar26 - uVar24;
                  *(int *)(puVar10 + 1) = (int)(uVar45 - uVar24);
                  iVar27 = ((int)(*puVar10 >> (0x40 - uVar24 & 0x7f)) << ((uint)uVar26 & 0x3f)) +
                           iVar27;
                  sVar44 = (short)iVar27;
                  *puVar10 = *puVar10 << (uVar24 & 0x7f);
                  if ((longlong)(uVar45 - uVar24) < 0) {
                    fn_82C4E5E8(puVar10);
                  }
                  uVar45 = (ulonglong)*(uint *)(puVar10 + 1);
                  uVar24 = uVar45 + 0x10;
                } while ((uVar24 & 0xffffffff) < (uVar26 & 0xffffffff));
              }
              *(int *)(puVar10 + 1) = (int)(uVar45 - uVar26);
              sVar44 = (short)(*puVar10 >> (0x40 - uVar26 & 0x7f)) + sVar44;
              *puVar10 = *puVar10 << (uVar26 & 0x7f);
              if ((longlong)(uVar45 - uVar26) < 0) {
                fn_82C4E5E8(puVar10);
              }
            }
          }
          else {
            sVar44 = 0;
          }
LAB_830bc274:
          uVar45 = *puVar10;
          uVar22 = *(uint *)(puVar10 + 1);
          *puVar10 = uVar45 << 1;
          *(int *)(puVar10 + 1) = (int)((ulonglong)uVar22 - 1);
          if ((longlong)((ulonglong)uVar22 - 1) < 0) {
            fn_82C4E5E8(puVar10);
          }
          sVar25 = (1 - (short)((uVar45 >> 0x3f) << 1)) * sVar44;
        }
        else if ((uVar45 & 0xffff) != 0) {
          if (uVar12 == 4) {
            uVar45 = *puVar10;
            uVar22 = *(uint *)(puVar10 + 1);
            *puVar10 = uVar45 << 1;
            *(int *)(puVar10 + 1) = (int)((ulonglong)uVar22 - 1);
            if ((longlong)((ulonglong)uVar22 - 1) < 0) {
              fn_82C4E5E8(puVar10);
            }
            sVar44 = (sVar44 * 2 - (short)((longlong)uVar45 >> 0x3f)) + -1;
          }
          else if (uVar12 == 2) {
            uVar45 = (ulonglong)*(uint *)(puVar10 + 1);
            uVar26 = 2;
            iVar27 = 0;
            sVar25 = 0;
            uVar24 = uVar45 + 0x10;
            if ((uVar24 & 0xffffffff) < 2) {
              do {
                sVar25 = (short)iVar27;
                if ((uVar24 & 0xffffffff) == 0) break;
                uVar26 = uVar26 - uVar24;
                *(int *)(puVar10 + 1) = (int)(uVar45 - uVar24);
                iVar27 = ((int)(*puVar10 >> (0x40 - uVar24 & 0x7f)) << ((uint)uVar26 & 0x3f)) +
                         iVar27;
                sVar25 = (short)iVar27;
                *puVar10 = *puVar10 << (uVar24 & 0x7f);
                if ((longlong)(uVar45 - uVar24) < 0) {
                  fn_82C4E5E8(puVar10);
                }
                uVar45 = (ulonglong)*(uint *)(puVar10 + 1);
                uVar24 = uVar45 + 0x10;
              } while ((uVar24 & 0xffffffff) < (uVar26 & 0xffffffff));
            }
            uVar24 = *puVar10;
            *(int *)(puVar10 + 1) = (int)(uVar45 - uVar26);
            *puVar10 = uVar24 << (uVar26 & 0x7f);
            if ((longlong)(uVar45 - uVar26) < 0) {
              fn_82C4E5E8(puVar10);
            }
            sVar44 = sVar44 * 4 + (short)(uVar24 >> (0x40 - uVar26 & 0x7f)) + sVar25 + -3;
          }
          goto LAB_830bc274;
        }
        *psVar47 = sVar25;
        if (*(int *)(*param_2 + 0x14) != 0) {
          return 1;
        }
        if ((uStack_d8 & 1) != 0) {
          if (param_2[0x124] == 7) {
            iVar27 = param_2[(*puVar39 >> 2 & 6 | (int)uVar42 >> 3) + 0x13d];
          }
          else {
            iVar27 = param_2[uVar23 + 0x13d];
          }
          iVar27 = fn_830D9228(param_2,*piStack_e0,lVar48,iVar27);
          if (iVar27 < 0) {
            return 1;
          }
        }
        sVar25 = *psVar47;
        if (piVar36 == (int *)0x0) {
          *psVar38 = sVar25;
          psVar38[8] = sVar25;
LAB_830bc50c:
          psVar38[1] = *(short *)(uVar28 - 0x7e);
          *(undefined4 *)(psVar38 + 2) = *(undefined4 *)(uVar28 - 0x7c);
          *(undefined8 *)(psVar38 + 4) = *(undefined8 *)(uVar28 - 0x78);
          psVar38[9] = *(short *)(uVar28 - 0x70);
          psVar38[10] = *(short *)(uVar28 - 0x60);
          psVar38[0xb] = *(short *)(uVar28 - 0x50);
          psVar38[0xc] = *(short *)(uVar28 - 0x40);
          psVar38[0xd] = *(short *)(uVar28 - 0x30);
          psVar38[0xe] = *(short *)(uVar28 - 0x20);
          psVar38[0xf] = *(short *)(uVar28 - 0x10);
        }
        else {
          sVar25 = sVar25 + *(short *)piVar36;
          *psVar47 = sVar25;
          *psVar38 = sVar25;
          psVar38[8] = sVar25;
          if (uVar42 == 1) {
            sVar25 = (short)*piVar36 + *(short *)(uVar28 - 0x7e);
            *(short *)(uVar28 - 0x7e) = sVar25;
            psVar38[1] = sVar25;
            sVar25 = *(short *)(piVar36 + 1) + *(short *)(uVar28 - 0x7c);
            *(short *)(uVar28 - 0x7c) = sVar25;
            psVar38[2] = sVar25;
            sVar25 = *(short *)((int)piVar36 + 6) + *(short *)(uVar28 - 0x7a);
            *(short *)(uVar28 - 0x7a) = sVar25;
            psVar38[3] = sVar25;
            sVar25 = *(short *)(piVar36 + 2) + *(short *)(uVar28 - 0x78);
            *(short *)(uVar28 - 0x78) = sVar25;
            psVar38[4] = sVar25;
            sVar25 = *(short *)((int)piVar36 + 10) + *(short *)(uVar28 - 0x76);
            *(short *)(uVar28 - 0x76) = sVar25;
            psVar38[5] = sVar25;
            sVar25 = *(short *)(piVar36 + 3) + *(short *)(uVar28 - 0x74);
            *(short *)(uVar28 - 0x74) = sVar25;
            psVar38[6] = sVar25;
            sVar25 = *(short *)((int)piVar36 + 0xe) + *(short *)(uVar28 - 0x72);
            *(short *)(uVar28 - 0x72) = sVar25;
            psVar38[7] = sVar25;
            psVar38[9] = *(short *)(uVar28 - 0x70);
            psVar38[10] = *(short *)(uVar28 - 0x60);
            psVar38[0xb] = *(short *)(uVar28 - 0x50);
            psVar38[0xc] = *(short *)(uVar28 - 0x40);
            psVar38[0xd] = *(short *)(uVar28 - 0x30);
            psVar38[0xe] = *(short *)(uVar28 - 0x20);
            psVar38[0xf] = *(short *)(uVar28 - 0x10);
          }
          else {
            if (uVar42 != 8) goto LAB_830bc50c;
            psVar38[1] = *(short *)(uVar28 - 0x7e);
            *(undefined4 *)(psVar38 + 2) = *(undefined4 *)(uVar28 - 0x7c);
            *(undefined8 *)(psVar38 + 4) = *(undefined8 *)(uVar28 - 0x78);
            sVar25 = (short)*piVar36 + *(short *)(uVar28 - 0x70);
            *(short *)(uVar28 - 0x70) = sVar25;
            psVar38[9] = sVar25;
            sVar25 = *(short *)(piVar36 + 1) + *(short *)(uVar28 - 0x60);
            *(short *)(uVar28 - 0x60) = sVar25;
            psVar38[10] = sVar25;
            sVar25 = *(short *)((int)piVar36 + 6) + *(short *)(uVar28 - 0x50);
            *(short *)(uVar28 - 0x50) = sVar25;
            psVar38[0xb] = sVar25;
            sVar25 = *(short *)(piVar36 + 2) + *(short *)(uVar28 - 0x40);
            *(short *)(uVar28 - 0x40) = sVar25;
            psVar38[0xc] = sVar25;
            sVar25 = *(short *)((int)piVar36 + 10) + *(short *)(uVar28 - 0x30);
            *(short *)(uVar28 - 0x30) = sVar25;
            psVar38[0xd] = sVar25;
            sVar25 = *(short *)(piVar36 + 3) + *(short *)(uVar28 - 0x20);
            *(short *)(uVar28 - 0x20) = sVar25;
            psVar38[0xe] = sVar25;
            sVar25 = *(short *)((int)piVar36 + 0xe) + *(short *)(uVar28 - 0x10);
            *(short *)(uVar28 - 0x10) = sVar25;
            psVar38[0xf] = sVar25;
          }
        }
        iVar27 = (int)uVar31;
        uVar31 = uVar31 + 1;
        uStack_d8 = (int)uStack_d8 >> 1;
        uStack_dc = (uint)uVar31;
        *(undefined1 *)((int)puVar39 + iVar27 + 8) = 0;
      } while ((int)uStack_dc < 6);
      uVar41 = 0;
      if ((*(char *)(param_2 + 8) != '\0') && (param_2[0x147] != 4)) {
        if (iStack_d4 == 0) {
          return 1;
        }
        *(undefined4 *)(((uint)*(ushort *)(param_2 + 9) + *piStack00000024) * 4 + iStack_d4) =
             0x4000;
        *(undefined4 *)(((uint)*(ushort *)((int)param_2 + 0x26) + *piStack00000024) * 4 + iStack_d4)
             = 0x4000;
        *(undefined4 *)(((uint)*(ushort *)(param_2 + 10) + *piStack00000024) * 4 + iStack_d4) =
             0x4000;
        *(undefined4 *)(((uint)*(ushort *)((int)param_2 + 0x2a) + *piStack00000024) * 4 + iStack_d4)
             = 0x4000;
      }
      puVar39 = puVar39 + 6;
      uStack_100 = uStack_100 + 1;
      piStack00000024[3] = piStack00000024[3] + 8;
      *piStack00000024 = *piStack00000024 + 2;
      piStack00000024[1] = piStack00000024[1] + 1;
      piStack00000024[2] = piStack00000024[2] + 0x10;
      *(short *)((int)piStack00000024 + 0x12) = *(short *)((int)piStack00000024 + 0x12) + 2;
      if (uStack_d0 <= uStack_100) goto code_r0x830bc668;
      uVar31 = uVar35 & 0xffffffff;
    } while( true );
  }
  goto LAB_830bc688;
code_r0x830bc668:
  param_5 = (ulonglong)uStack_fc;
  param_6 = uStack0000003c;
  param_3 = piStack00000024;
  param_1 = iStack00000014;
  uVar28 = uStack_c8;
LAB_830bc688:
  param_5 = param_5 + 1;
  uStack_fc = (uint)param_5;
  *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
  *param_3 = (uint)*(ushort *)((int)param_2 + 0x32) + *param_3;
  iStack_f4 = (uint)*(ushort *)((int)param_2 + 0x4a) * 0x10 + iStack_f4;
  iStack_f0 = (uint)*(ushort *)(param_2 + 0x13) * 8 + iStack_f0;
  if ((ulonglong)param_6 <= (param_5 & 0xffffffff)) goto LAB_830bc6e8;
  goto LAB_830ba694;
}

