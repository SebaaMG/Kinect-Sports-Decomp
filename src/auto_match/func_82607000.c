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
extern int fn_82605AF8();
extern int fn_826072F0();
extern int fn_82607498();
extern int fn_82607760();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_821CE8A0;
extern unsigned int lbl_831BF6F0;
extern unsigned int lbl_831BF6F4;
extern unsigned int lbl_831BF6F8;
extern unsigned int lbl_831BF70C;
extern unsigned int lbl_831BF714;


void fn_82607000(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,undefined4 *param_8)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  int in_r0;
  bool bVar8;
  undefined2 *puVar10;
  longlong lVar9;
  byte *pbVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if (lbl_831BF6F0 == 0) {
LAB_82607050:
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if ((param_7 & 2) == 0) goto LAB_82607050;
  }
  if (lbl_831BF6F4 != 0) {
    bVar6 = true;
    if ((param_7 & 4) != 0) goto LAB_82607070;
  }
  bVar6 = false;
LAB_82607070:
  if ((lbl_831BF6F8 == 0) || (bVar8 = true, (param_7 & 1) == 0)) {
    bVar8 = false;
  }
  if ((bVar5) || (bVar5 = false, bVar6)) {
    bVar5 = true;
  }
  if (*(short *)(param_2 + 0xb0) == 0) {
    param_8[2] = 0;
    param_8[4] = 0;
    param_8[6] = 0;
    param_8[8] = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xa0);
    puVar13 = (uint *)(param_2 + 0xa0);
    if (uVar1 < *(uint *)(param_2 + 0xa4)) {
      puVar10 = (undefined2 *)(uVar1 - 0x518);
      iVar15 = ((*(uint *)(param_2 + 0xa4) - uVar1) - 1) / 0x560 + 1;
      do {
        puVar10[0x2af] = 0;
        puVar10 = puVar10 + 0x2b0;
        *puVar10 = 0;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    *(undefined2 *)(param_2 + 0x270) = 0;
    *(undefined4 *)(param_2 + 0x264) = *(undefined4 *)(param_2 + 0x260);
    fVar7 = lbl_821CC160;
    dVar16 = (double)lbl_821CC160;
    *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_2 + 0x274);
    puVar14 = (undefined4 *)((uint)(&lbl_821CE8A0 + in_r0) & 0xfffffff0);
    uVar12 = *puVar14;
    uVar17 = puVar14[1];
    uVar18 = puVar14[2];
    uVar19 = puVar14[3];
    *(undefined2 *)(param_2 + 0x284) = 0;
    *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(param_2 + 0x288);
    *(undefined2 *)(param_2 + 0x298) = 0;
    *(undefined4 *)(param_2 + 0x2a0) = *(undefined4 *)(param_2 + 0x29c);
    *(undefined2 *)(param_2 + 0x2ac) = 0;
    puVar14 = (undefined4 *)(param_2 + 0x100U & 0xfffffff0);
    *puVar14 = uVar12;
    puVar14[1] = uVar17;
    puVar14[2] = uVar18;
    puVar14[3] = uVar19;
    *(undefined4 *)(param_2 + 0x110) = 0;
    if (bVar8) {
      *(float *)(param_2 + 0x118) = fVar7;
      *(float *)(param_2 + 0x11c) = fVar7;
      fn_826072F0(param_2,param_4,puVar13,param_3);
      fn_82605AF8(puVar13,param_2 + 0x260,param_5);
    }
    if (bVar5) {
      fn_82607498(param_2,param_3,param_4);
    }
    uVar1 = *puVar13;
    *(float *)(param_2 + 0x124) = (float)dVar16;
    *(undefined4 *)(param_2 + 0x40) = 0;
    if (uVar1 < *(uint *)(param_2 + 0xa4)) {
      pbVar11 = (byte *)(uVar1 - 0x51b);
      lVar9 = (ulonglong)((*(uint *)(param_2 + 0xa4) - uVar1) - 1) / 0x560 + 1;
      do {
        pbVar2 = pbVar11 + 0x563;
        pbVar3 = pbVar11 + 0x560;
        *(short *)(pbVar11 + 0x565) = *(short *)pbVar2;
        pbVar11 = pbVar11 + 0x560;
        *pbVar11 = *pbVar3 & 0xfe;
        *(uint *)(param_2 + 0x40) = (int)*(short *)pbVar2 | *(uint *)(param_2 + 0x40);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
      fn_82607760(param_2,param_3);
    }
    if (lbl_831BF70C != 0) {
      iVar15 = 0;
      if (0 < *(int *)(param_2 + 0xb4)) {
        puVar14 = (undefined4 *)(param_2 + 0xb4);
        do {
          puVar14 = puVar14 + 1;
          (*(code *)**(undefined4 **)*puVar14)
                    (param_1,(undefined4 *)*puVar14,param_3,param_4,param_2);
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(param_2 + 0xb4));
      }
    }
    param_8[2] = (uint)*(ushort *)(param_2 + 0x270);
    param_8[4] = (uint)*(ushort *)(param_2 + 0x284);
    param_8[6] = (uint)*(ushort *)(param_2 + 0x298);
    param_8[8] = (uint)*(ushort *)(param_2 + 0x2ac);
  }
  param_8[1] = 0;
  *param_8 = 0;
  param_8[3] = *(undefined4 *)(param_2 + 0x260);
  param_8[5] = *(undefined4 *)(param_2 + 0x274);
  param_8[7] = *(undefined4 *)(param_2 + 0x288);
  param_8[9] = *(undefined4 *)(param_2 + 0x29c);
  if ((*(int *)(param_2 + 0x110) == 0) || (uVar12 = 1, lbl_831BF714 == 0)) {
    uVar12 = 0;
  }
  param_8[10] = uVar12;
  puVar14 = (undefined4 *)(param_2 + 0x100U & 0xfffffff0);
  uVar12 = puVar14[1];
  uVar17 = puVar14[2];
  uVar18 = puVar14[3];
  puVar4 = (undefined4 *)((uint)(param_8 + 0xc) & 0xfffffff0);
  *puVar4 = *puVar14;
  puVar4[1] = uVar12;
  puVar4[2] = uVar17;
  puVar4[3] = uVar18;
  return;
}

