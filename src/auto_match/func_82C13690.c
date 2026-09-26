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
extern int fn_82C038C8();
extern unsigned int iStack_70;
extern unsigned int iStack_80;
extern unsigned int lbl_820ED038;
extern unsigned int lbl_820ED048;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;


undefined8 fn_82C13690(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint *apuStack_90 [4];
  int iStack_80;
  short sStack_7c;
  short sStack_7a;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  int iStack_70;
  short sStack_6c;
  short sStack_6a;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  
  apuStack_90[0] = (uint *)0x0;
  if (param_1 == (longlong *)0x0) {
    return 2;
  }
  uVar20 = param_2 - 0x18;
  if (uVar20 < 0x36) {
    return 3;
  }
  iVar8 = fn_82C038C8(param_1,*param_1,0x36,apuStack_90);
  if (iVar8 != 0x36) {
    return 3;
  }
  uVar9 = 0x36;
  iStack_70 = (((uint)(byte)*apuStack_90[0] * 0x100 + (uint)*(byte *)((int)apuStack_90[0] + 2)) *
               0x100 + (uint)*(byte *)((int)apuStack_90[0] + 1)) * 0x100 +
              (uint)*(byte *)apuStack_90[0];
  sStack_6c = (ushort)*(byte *)((int)apuStack_90[0] + 5) * 0x100 +
              (ushort)*(byte *)(apuStack_90[0] + 1);
  bStack_68 = *(byte *)(apuStack_90[0] + 2);
  sStack_6a = (ushort)*(byte *)((int)apuStack_90[0] + 7) * 0x100 +
              (ushort)*(byte *)((int)apuStack_90[0] + 6);
  bStack_67 = *(byte *)((int)apuStack_90[0] + 9);
  bStack_66 = *(byte *)((int)apuStack_90[0] + 10);
  bStack_65 = *(byte *)((int)apuStack_90[0] + 0xb);
  bStack_64 = *(byte *)(apuStack_90[0] + 3);
  bStack_63 = *(byte *)((int)apuStack_90[0] + 0xd);
  bStack_62 = *(byte *)((int)apuStack_90[0] + 0xe);
  bStack_61 = *(byte *)((int)apuStack_90[0] + 0xf);
  iStack_80 = (((uint)*(byte *)((int)apuStack_90[0] + 0x13) * 0x100 +
               (uint)*(byte *)((int)apuStack_90[0] + 0x12)) * 0x100 +
              (uint)*(byte *)((int)apuStack_90[0] + 0x11)) * 0x100 +
              (uint)*(byte *)(apuStack_90[0] + 4);
  sStack_7c = (ushort)*(byte *)((int)apuStack_90[0] + 0x15) * 0x100 +
              (ushort)*(byte *)(apuStack_90[0] + 5);
  bStack_78 = *(byte *)(apuStack_90[0] + 6);
  sStack_7a = (ushort)*(byte *)((int)apuStack_90[0] + 0x17) * 0x100 +
              (ushort)*(byte *)((int)apuStack_90[0] + 0x16);
  bStack_77 = *(byte *)((int)apuStack_90[0] + 0x19);
  pbVar13 = &lbl_820ED058;
  bStack_76 = *(byte *)((int)apuStack_90[0] + 0x1a);
  pbVar14 = (byte *)&iStack_70;
  bStack_75 = *(byte *)((int)apuStack_90[0] + 0x1b);
  bStack_74 = *(byte *)(apuStack_90[0] + 7);
  bStack_73 = *(byte *)((int)apuStack_90[0] + 0x1d);
  bStack_72 = *(byte *)((int)apuStack_90[0] + 0x1e);
  bStack_71 = *(byte *)((int)apuStack_90[0] + 0x1f);
  puVar15 = apuStack_90[0] + 10;
  pbVar18 = (byte *)((int)apuStack_90[0] + 0x29);
  pbVar19 = (byte *)((int)apuStack_90[0] + 0x2a);
  pbVar22 = (byte *)((int)apuStack_90[0] + 0x2b);
  bVar1 = *(byte *)((int)apuStack_90[0] + 0x2f);
  bVar2 = *(byte *)((int)apuStack_90[0] + 0x2e);
  bVar3 = *(byte *)((int)apuStack_90[0] + 0x2d);
  bVar4 = *(byte *)(apuStack_90[0] + 0xb);
  puVar16 = apuStack_90[0] + 0xc;
  apuStack_90[0] = (uint *)((int)apuStack_90[0] + 0x36);
  uVar21 = (((uint)*pbVar22 * 0x100 + (uint)*pbVar19) * 0x100 + (uint)*pbVar18) * 0x100 +
           (uint)*(byte *)puVar15;
  bVar5 = *(byte *)puVar16;
  do {
    bVar6 = *pbVar13;
    bVar7 = *pbVar14;
    if ((ulonglong)bVar6 - (ulonglong)bVar7 != 0) break;
    pbVar13 = pbVar13 + 1;
    pbVar14 = pbVar14 + 1;
  } while (pbVar13 != &lbl_820ED068);
  if (((int)((ulonglong)bVar6 - (ulonglong)bVar7) != 0) ||
     (sVar11 = *(short *)((int)param_1 + 0xee) + 1, *(short *)((int)param_1 + 0xee) = sVar11,
     sVar11 != *(short *)((int)param_1 + 0xec))) goto LAB_82c13ef4;
  *(ushort *)((int)param_1 + 0xe4) = bVar5 & 0x7f;
  if (uVar21 != 0) {
    if (uVar20 < uVar21 + 0x36) {
      return 3;
    }
    uVar9 = fn_82C038C8(param_1,*param_1 + 0x36,uVar21,apuStack_90);
    if (uVar9 != uVar21) {
      return 3;
    }
    uVar9 = uVar9 + 0x36;
    iVar8 = (uint)*(byte *)((int)apuStack_90[0] + 1) * 0x100 + (uint)*(byte *)apuStack_90[0];
    *(short *)((int)param_1 + 0x3e) = (short)iVar8;
    if (3 < iVar8 - 0x160U) {
      return 1;
    }
    if (iVar8 == 0x160) {
      if (uVar21 < 0x16) {
        return 1;
      }
      *(undefined2 *)((int)param_1 + 0x3c) = 1;
      *(uint *)(param_1 + 8) =
           (((uint)*(byte *)((int)apuStack_90[0] + 7) * 0x100 +
            (uint)*(byte *)((int)apuStack_90[0] + 6)) * 0x100 +
           (uint)*(byte *)((int)apuStack_90[0] + 5)) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 1);
      *(uint *)((int)param_1 + 0x44) =
           (((uint)*(byte *)((int)apuStack_90[0] + 0xb) * 0x100 +
            (uint)*(byte *)((int)apuStack_90[0] + 10)) * 0x100 +
           (uint)*(byte *)((int)apuStack_90[0] + 9)) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 2);
      *(uint *)(param_1 + 9) =
           (uint)*(byte *)((int)apuStack_90[0] + 0xd) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 3);
      *(ushort *)((int)param_1 + 0x4c) =
           (ushort)(byte)*apuStack_90[0] * 0x100 + (ushort)*(byte *)((int)apuStack_90[0] + 2);
      *(ushort *)((int)param_1 + 0x54) =
           (ushort)*(byte *)((int)apuStack_90[0] + 0x15) * 0x100 +
           (ushort)*(byte *)(apuStack_90[0] + 5);
      bVar5 = *(byte *)((int)apuStack_90[0] + 0x13);
      bVar6 = *(byte *)((int)apuStack_90[0] + 0x12);
      *(undefined2 *)(param_1 + 0xb) = 1;
      *(uint *)(param_1 + 10) = (uint)bVar5 * 0x100 + (uint)bVar6;
      sVar11 = (ushort)*(byte *)((int)apuStack_90[0] + 0xf) * 0x100 +
               (ushort)*(byte *)((int)apuStack_90[0] + 0xe);
      *(short *)((int)param_1 + 0x5a) = sVar11;
      *(short *)((int)param_1 + 0x5c) = sVar11;
      *(short *)((int)param_1 + 0x74) = sVar11;
      if (*(short *)((int)param_1 + 0x4c) == 1) {
LAB_82c13cb8:
        uVar17 = 4;
      }
      else {
        if (*(short *)((int)param_1 + 0x4c) != 2) {
          return 1;
        }
LAB_82c13cb0:
        uVar17 = 3;
      }
    }
    else {
      if (iVar8 != 0x161) {
        if (uVar21 < 0x24) {
          return 1;
        }
        *(undefined2 *)((int)param_1 + 0x3c) = 3;
        *(uint *)(param_1 + 8) =
             (((uint)*(byte *)((int)apuStack_90[0] + 7) * 0x100 +
              (uint)*(byte *)((int)apuStack_90[0] + 6)) * 0x100 +
             (uint)*(byte *)((int)apuStack_90[0] + 5)) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 1)
        ;
        *(uint *)((int)param_1 + 0x44) =
             (((uint)*(byte *)((int)apuStack_90[0] + 0xb) * 0x100 +
              (uint)*(byte *)((int)apuStack_90[0] + 10)) * 0x100 +
             (uint)*(byte *)((int)apuStack_90[0] + 9)) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 2)
        ;
        *(uint *)(param_1 + 9) =
             (uint)*(byte *)((int)apuStack_90[0] + 0xd) * 0x100 +
             (uint)*(byte *)(apuStack_90[0] + 3);
        bVar5 = *(byte *)((int)apuStack_90[0] + 2);
        uVar21 = *apuStack_90[0];
        *(undefined2 *)(param_1 + 0xb) = 0xfffe;
        *(ushort *)((int)param_1 + 0x4c) = (ushort)(byte)uVar21 * 0x100 + (ushort)bVar5;
        iVar8 = (uint)*(byte *)((int)apuStack_90[0] + 0xf) * 0x100 +
                (uint)*(byte *)((int)apuStack_90[0] + 0xe);
        *(short *)((int)param_1 + 0x5c) = (short)iVar8;
        *(short *)((int)param_1 + 0x5a) = (short)(iVar8 + 7 >> 3) << 3;
        *(uint *)(param_1 + 0xc) =
             (((uint)*(byte *)((int)apuStack_90[0] + 0x17) * 0x100 +
              (uint)*(byte *)((int)apuStack_90[0] + 0x16)) * 0x100 +
             (uint)*(byte *)((int)apuStack_90[0] + 0x15)) * 0x100 +
             (uint)*(byte *)(apuStack_90[0] + 5);
        *(ushort *)((int)param_1 + 0x54) =
             (ushort)*(byte *)((int)apuStack_90[0] + 0x21) * 0x100 +
             (ushort)*(byte *)(apuStack_90[0] + 8);
        bVar5 = *(byte *)((int)apuStack_90[0] + 0x23);
        bVar6 = *(byte *)((int)apuStack_90[0] + 0x22);
        *(undefined4 *)((int)param_1 + 100) = 1;
        *(undefined2 *)(param_1 + 0xd) = 0;
        *(ushort *)((int)param_1 + 0x56) = (ushort)bVar5 * 0x100 + (ushort)bVar6;
        *(undefined2 *)((int)param_1 + 0x6a) = 0x10;
        *(undefined1 *)((int)param_1 + 0x6c) = 0x80;
        *(undefined1 *)((int)param_1 + 0x6d) = 0;
        *(undefined1 *)((int)param_1 + 0x6e) = 0;
        *(undefined1 *)((int)param_1 + 0x6f) = 0xaa;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)((int)param_1 + 0x71) = 0x38;
        *(undefined1 *)((int)param_1 + 0x72) = 0x9b;
        *(undefined1 *)((int)param_1 + 0x73) = 0x71;
        goto LAB_82c13c5c;
      }
      if (uVar21 < 0x1c) {
        return 1;
      }
      *(undefined2 *)((int)param_1 + 0x3c) = 2;
      *(uint *)(param_1 + 8) =
           (((uint)*(byte *)((int)apuStack_90[0] + 7) * 0x100 +
            (uint)*(byte *)((int)apuStack_90[0] + 6)) * 0x100 +
           (uint)*(byte *)((int)apuStack_90[0] + 5)) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 1);
      *(uint *)((int)param_1 + 0x44) =
           (((uint)*(byte *)((int)apuStack_90[0] + 0xb) * 0x100 +
            (uint)*(byte *)((int)apuStack_90[0] + 10)) * 0x100 +
           (uint)*(byte *)((int)apuStack_90[0] + 9)) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 2);
      *(uint *)(param_1 + 9) =
           (uint)*(byte *)((int)apuStack_90[0] + 0xd) * 0x100 + (uint)*(byte *)(apuStack_90[0] + 3);
      sVar11 = (ushort)(byte)*apuStack_90[0] * 0x100 + (ushort)*(byte *)((int)apuStack_90[0] + 2);
      *(undefined2 *)(param_1 + 0xb) = 1;
      *(short *)((int)param_1 + 0x4c) = sVar11;
      sVar12 = (ushort)*(byte *)((int)apuStack_90[0] + 0xf) * 0x100 +
               (ushort)*(byte *)((int)apuStack_90[0] + 0xe);
      *(short *)((int)param_1 + 0x5a) = sVar12;
      *(short *)((int)param_1 + 0x5c) = sVar12;
      *(short *)((int)param_1 + 0x74) = sVar12;
      *(uint *)(param_1 + 10) =
           (((uint)*(byte *)((int)apuStack_90[0] + 0x15) * 0x100 +
            (uint)*(byte *)(apuStack_90[0] + 5)) * 0x100 +
           (uint)*(byte *)((int)apuStack_90[0] + 0x13)) * 0x100 +
           (uint)*(byte *)((int)apuStack_90[0] + 0x12);
      *(ushort *)((int)param_1 + 0x54) =
           (ushort)*(byte *)((int)apuStack_90[0] + 0x17) * 0x100 +
           (ushort)*(byte *)((int)apuStack_90[0] + 0x16);
      if (sVar11 == 1) goto LAB_82c13cb8;
      if (sVar11 == 2) goto LAB_82c13cb0;
      if (sVar11 != 6) {
        return 1;
      }
      uVar17 = 0x3f;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar17;
  }
LAB_82c13c5c:
  if ((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
      (ulonglong)bVar4 != 0) {
    pbVar19 = (byte *)&iStack_80;
    pbVar22 = &lbl_820ED048;
    pbVar18 = pbVar22;
    do {
      bVar1 = *pbVar18;
      bVar2 = *pbVar19;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar18 = pbVar18 + 1;
      pbVar19 = pbVar19 + 1;
    } while (pbVar18 != &lbl_820ED058);
    pbVar18 = &lbl_820ED038;
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      iVar8 = 9;
    }
    else {
      pbVar14 = (byte *)&iStack_80;
      pbVar19 = pbVar18;
      do {
        bVar1 = *pbVar19;
        bVar2 = *pbVar14;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar19 = pbVar19 + 1;
        pbVar14 = pbVar14 + 1;
      } while (pbVar19 != &lbl_820ED048);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        return 1;
      }
      iVar8 = 8;
    }
    if ((uVar20 < uVar9 + iVar8) ||
       (iVar10 = fn_82C038C8(param_1,(ulonglong)uVar9 + *param_1,iVar8,apuStack_90),
       iVar10 != iVar8)) {
      return 3;
    }
    pbVar19 = (byte *)&iStack_80;
    do {
      bVar1 = *pbVar22;
      bVar2 = *pbVar19;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar22 = pbVar22 + 1;
      pbVar19 = pbVar19 + 1;
    } while (pbVar22 != &lbl_820ED058);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uVar9 = *apuStack_90[0];
      *(uint *)(param_1 + 3) = uVar9;
      *(uint *)(param_1 + 3) =
           ((uVar9 << 0x10 | uVar9 & 0xffff) & 0xffff00) << 8 | uVar9 >> 8 & 0xff00 |
           (uint)*(byte *)(param_1 + 3);
    }
    else {
      pbVar19 = (byte *)&iStack_80;
      do {
        bVar1 = *pbVar18;
        bVar2 = *pbVar19;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar18 = pbVar18 + 1;
        pbVar19 = pbVar19 + 1;
      } while (pbVar18 != &lbl_820ED048);
      if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) ||
         (*(uint *)(param_1 + 3) =
               ((uint)*(byte *)((int)apuStack_90[0] + 2) * 0x100 +
               (uint)*(byte *)((int)apuStack_90[0] + 1)) * (uint)*(byte *)apuStack_90[0],
         1 < *(byte *)apuStack_90[0])) {
        return 1;
      }
    }
  }
LAB_82c13ef4:
  *param_1 = (ulonglong)uVar20 + *param_1;
  return 0;
}

