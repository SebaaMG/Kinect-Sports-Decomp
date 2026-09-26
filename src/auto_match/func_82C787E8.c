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
extern int fn_82C779E0();
extern int fn_830EDBD0();
extern int fn_830EDD18();
extern int fn_830EDF70();
extern int fn_830EE0C0();
extern int fn_830EE330();
extern int fn_830EE490();
extern int fn_830EE740();
extern int fn_830EEB30();
extern unsigned int lbl_820FC500;
extern unsigned int lbl_820FC504;
extern unsigned int lbl_820FC508;
extern unsigned int lbl_820FC50C;
extern unsigned int lbl_821090E6;


void fn_82C787E8(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  short sVar15;
  undefined2 uVar16;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined4 uVar17;
  longlong lVar18;
  
  param_2[400] = 0;
  if (*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(*(int *)(param_1 + 0x6070) + 0x4818);
  }
  param_2[400] = uVar17;
  fn_82C779E0(param_1);
  uVar8 = 0;
  param_2[0x124] = *(undefined4 *)(param_1 + 0x3cb0);
  param_2[0x125] = *(undefined4 *)(param_1 + 0x56a8);
  param_2[1] = *(undefined4 *)(param_1 + 0x168);
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  *(undefined8 *)(param_2 + 0x1a) = **(undefined8 **)(param_1 + 0x54);
  param_2[0x1c] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 8);
  param_2[0x1d] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc);
  param_2[0x1e] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x10);
  param_2[0x1f] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x14);
  param_2[0x20] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x18);
  param_2[0x21] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x1c);
  param_2[0x22] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x20);
  param_2[0x23] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x24);
  param_2[0x24] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x28);
  param_2[0x25] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x2c);
  param_2[0x26] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x30);
  *param_2 = param_2 + 0x1a;
  param_2[0x57] = *(undefined4 *)(param_1 + 0x17c);
  param_2[0x58] = *(undefined4 *)(param_1 + 0x180);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x88) & 0x7fff;
  sVar15 = (short)(uVar7 << 1);
  *(short *)((int)param_2 + 0x32) = sVar15;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x8c) & 0x7fff;
  *(short *)(param_2 + 0xd) = (short)(uVar5 << 1);
  *(short *)(param_2 + 10) = sVar15;
  *(undefined2 *)(param_2 + 9) = 0;
  *(undefined2 *)((int)param_2 + 0x26) = 1;
  *(short *)((int)param_2 + 0x36) = (short)(uVar7 << 4);
  *(short *)((int)param_2 + 0x2a) = sVar15 + 1;
  *(short *)(param_2 + 0xe) = (short)(uVar5 << 4);
  *(short *)((int)param_2 + 0x3a) = (short)(uVar7 << 3);
  *(short *)(param_2 + 0xf) = (short)(uVar5 << 3);
  uVar3 = (undefined2)*(undefined4 *)(param_1 + 0xcc);
  *(undefined2 *)((int)param_2 + 0x4a) = uVar3;
  uVar16 = (undefined2)*(undefined4 *)(param_1 + 0xd0);
  *(undefined2 *)(param_2 + 0x13) = uVar16;
  *(short *)((int)param_2 + 0x4e) = (short)*(undefined4 *)(param_1 + 0xd4);
  *(short *)(param_2 + 0x14) = (short)*(undefined4 *)(param_1 + 0xd8);
  *(short *)((int)param_2 + 0x52) = (short)*(undefined4 *)(param_1 + 0xe4);
  *(short *)(param_2 + 0x15) = (short)*(undefined4 *)(param_1 + 0xe8);
  *(short *)((int)param_2 + 0x56) = (short)*(undefined4 *)(param_1 + 0xac);
  *(short *)(param_2 + 0x16) = (short)*(undefined4 *)(param_1 + 0xb0);
  *(undefined2 *)((int)param_2 + 0x5a) = uVar3;
  *(undefined2 *)(param_2 + 0x17) = uVar16;
  param_2[0x123] = *(undefined4 *)(param_1 + 0x758);
  param_2[0x6b] = *(undefined4 *)(param_1 + 0x6ec);
  param_2[0x6c] = *(undefined4 *)(param_1 + 0x1d0);
  param_2[0x6d] = *(undefined4 *)(param_1 + 0x1d4);
  param_2[0x6e] = *(undefined4 *)(param_1 + 0x1d8);
  param_2[0x5e] = *(undefined4 *)(param_1 + 0xc10);
  do {
    iVar6 = 0;
    iVar12 = (int)uVar8 * 5;
    do {
      lVar18 = 4;
      uVar7 = 0;
      do {
        if (iVar6 == 0) {
          iVar4 = (int)uVar7;
          if ((uVar7 & 1) + uVar8 == 0) {
            *(undefined1 *)((int)param_2 + iVar12 + iVar4 + 0x108) = 1;
          }
          else if (((iVar4 == 0) || (iVar4 == 3)) || (((int)uVar8 == 2 && (iVar4 == 1)))) {
            *(undefined1 *)((int)param_2 + iVar12 + iVar4 + 0x108) = 0xff;
          }
          else {
            *(undefined1 *)((int)param_2 + iVar12 + iVar4 + 0x108) = 1;
          }
        }
        else {
          uVar5 = ((~uVar8 & 0xffffffff) >> 0x1f) + (ulonglong)(1 < uVar8) & 1;
          *(char *)((int)param_2 + iVar12 + 0x10c) = (char)uVar5 + (char)(uVar5 << 1) + -1;
        }
        uVar7 = uVar7 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 3);
  if (*(int *)(param_1 + 0x567c) == 0) {
    iVar12 = (uint)*(ushort *)(param_2 + 0xd) * 0x10000 + (uint)*(ushort *)((int)param_2 + 0x32);
    param_2[0x4b] = iVar12 * 0x20;
    param_2[0x4f] = iVar12 * 0x10;
    iVar12 = (((uint)*(ushort *)(param_2 + 0xd) * 0x20 + -4) * 0x800 +
             (uint)*(ushort *)((int)param_2 + 0x32)) * 0x20 + -4;
    param_2[0x47] = iVar12;
    param_2[0x49] = iVar12;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0xd);
    uVar2 = *(ushort *)((int)param_2 + 0x32);
    iVar12 = (uint)uVar1 * 0x10000 + (uint)uVar2;
    param_2[0x47] = iVar12 * 0x20 + 0x330033;
    param_2[0x49] = iVar12 * 0x10 + 0x1b001b;
    param_2[0x4b] =
         (int)((((ulonglong)uVar1 * 0x40 - 8 & 0x1fffff) * 0x800 + (ulonglong)uVar2 & 0xffffffff) <<
              5) + -0xc;
    param_2[0x4f] =
         (int)((((ulonglong)uVar1 * 0x10 - 8 & 0xfffff) * 0x1000 + (ulonglong)uVar2 & 0xffffffff) <<
              4) + -0xc;
  }
  param_2[0x9a] = *(undefined4 *)(param_1 + 0x6e8);
  lVar18 = 0xf;
  uVar9 = 1;
  uVar17 = *(undefined4 *)(param_1 + 0x3e20);
  param_2[0x9f] = fn_830EDBD0;
  param_2[0xa0] = fn_830EDD18;
  param_2[0xa1] = fn_830EDF70;
  param_2[0xa2] = fn_830EE0C0;
  param_2[0xf0] = uVar17;
  param_2[0xa3] = fn_830EE330;
  param_2[0xa4] = fn_830EE490;
  param_2[0xa5] = fn_830EE740;
  param_2[0xa6] = fn_830EEB30;
  do {
    uVar10 = 0;
    uVar13 = (uint)((uVar9 & 8) != 0);
    if ((uVar9 & 4) != 0) {
      uVar10 = 4;
      uVar13 = uVar13 + 1;
    }
    if ((uVar9 & 2) != 0) {
      uVar13 = uVar13 + 1;
      uVar10 = uVar10 << 2 | 8;
    }
    if ((uVar9 & 1) != 0) {
      uVar13 = uVar13 + 1;
      uVar10 = uVar10 << 2 | 0xc;
    }
    uVar10 = (uVar10 >> 2) << ((4 - uVar13) * 2 & 0x3e);
    *(byte *)((int)param_2 + uVar9 + 0x29c) =
         (byte)((((ulonglong)uVar10 & 0xfffffff) << 4 | (ulonglong)uVar10 & 0xffffffff0000000f) << 2
               ) & 0xf0 | (byte)(uVar10 >> 2) & 0xc | (byte)(uVar10 >> 6) & 3;
    uVar9 = uVar9 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  param_2[0x50] = lbl_820FC500;
  param_2[0x51] = lbl_820FC504;
  param_2[0x52] = lbl_820FC508;
  param_2[0x53] = lbl_820FC50C;
  param_2[0x1ae] = 0x200020;
  param_2[0x46] = 0x1c001c;
  param_2[0x48] = 0x3c003c;
  param_2[0x4a] = 0x400040;
  param_2[0x1af] = param_2[0x4f];
  param_2[0x4e] = 0x200020;
  param_2[0x1ad] = param_2[0x4b];
  param_2[0x1ac] = 0x400040;
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    param_2[0x1ac] = 0x400040;
    param_2[0x1ae] = 0x200020;
    iVar12 = (uint)*(ushort *)(param_2 + 0xd) * 0x10000 + (uint)*(ushort *)((int)param_2 + 0x32);
    param_2[0x1ad] = iVar12 * 0x20;
    param_2[0x1af] = iVar12 * 0x10;
  }
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined1 *)((int)param_2 + 0x135) = 0;
  *(undefined1 *)((int)param_2 + 0x2b7) = 3;
  *(undefined1 *)((int)param_2 + 0x2ba) = 3;
  *(undefined1 *)((int)param_2 + 0x136) = 0;
  *(undefined1 *)((int)param_2 + 0x137) = 1;
  *(undefined1 *)(param_2 + 0xab) = 0;
  puVar11 = param_2 + 0x2a;
  *(undefined1 *)((int)param_2 + 0x2af) = 1;
  *(undefined1 *)((int)param_2 + 0x2ae) = 1;
  lVar18 = 0x40;
  *(undefined1 *)((int)param_2 + 0x2ad) = 1;
  *(undefined1 *)((int)param_2 + 0x2b2) = 2;
  *(undefined1 *)((int)param_2 + 0x2b1) = 2;
  *(undefined1 *)(param_2 + 0xac) = 2;
  *(undefined1 *)((int)param_2 + 0x2b3) = 4;
  *(undefined1 *)(param_2 + 0xad) = 0;
  *(undefined1 *)((int)param_2 + 0x2b5) = 1;
  *(undefined1 *)((int)param_2 + 0x2b6) = 2;
  *(undefined1 *)(param_2 + 0xae) = 1;
  *(undefined1 *)((int)param_2 + 0x2b9) = 2;
  *(undefined1 *)((int)param_2 + 699) = 0;
  *(undefined1 *)(param_2 + 0x1b0) = 0;
  *(undefined1 *)((int)param_2 + 0x6c1) = 4;
  *(undefined1 *)((int)param_2 + 0x6c2) = 0x60;
  *(undefined1 *)((int)param_2 + 0x6c3) = 100;
  *(undefined1 *)(param_2 + 0x1b1) = 0;
  *(undefined1 *)((int)param_2 + 0x6c5) = 0;
  *(undefined1 *)((int)param_2 + 0x6c6) = 0;
  *(undefined1 *)((int)param_2 + 0x6c7) = 0;
  *(undefined1 *)(param_2 + 0x1b2) = 0;
  *(undefined1 *)((int)param_2 + 0x6c9) = 0;
  *(undefined1 *)((int)param_2 + 0x6ca) = 0;
  *(undefined1 *)((int)param_2 + 0x6cb) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0x40;
  *(undefined1 *)((int)param_2 + 0xa1) = 0x20;
  *(undefined1 *)((int)param_2 + 0xa2) = 0x20;
  uVar9 = 0;
  *(undefined1 *)((int)param_2 + 0xa3) = 0;
  *(undefined1 *)(param_2 + 0x29) = 0x10;
  do {
    if ((int)uVar9 < 8) {
      *(undefined1 *)((int)puVar11 + uVar9) = 0;
    }
    else {
      *(char *)((int)puVar11 + uVar9) = (char)(1 << (uVar9 & 7));
    }
    uVar9 = uVar9 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  uVar9 = 0;
  do {
    if (uVar9 == 0) {
      *(undefined1 *)puVar11 = 0;
    }
    else if ((int)uVar9 < 8) {
      *(undefined1 *)((int)puVar11 + uVar9) = 1;
    }
    else if ((uVar9 & 7) == 0) {
      *(undefined1 *)((int)puVar11 + uVar9) = 2;
    }
    else {
      *(undefined1 *)((int)puVar11 + uVar9) = 4;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40);
  uVar9 = 0;
  puVar11 = param_2 + 0x3a;
  do {
    if (uVar9 == 0) {
      *(undefined1 *)puVar11 = 0;
    }
    else if ((int)uVar9 < 4) {
      *(undefined1 *)((int)puVar11 + uVar9) = 1;
    }
    else if ((uVar9 & 3) == 0) {
      *(undefined1 *)((int)puVar11 + uVar9) = 2;
    }
    else {
      *(undefined1 *)((int)puVar11 + uVar9) = 4;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x20);
  iVar12 = 0;
  puVar14 = (undefined2 *)&lbl_821090E6;
  lVar18 = 0x10;
  do {
    puVar14 = puVar14 + 1;
    *(char *)((int)(param_2 + 0x70) + iVar12) = (char)*puVar14;
    iVar12 = iVar12 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  param_2[0x70] = 0x80008000;
  return;
}

