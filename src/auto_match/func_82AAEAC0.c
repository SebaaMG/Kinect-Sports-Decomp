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
extern int fn_82A29A38();
extern int fn_82AAC770();
extern int fn_82AAC8C0();
extern int fn_82AACDF0();
extern int fn_82AACF70();
extern unsigned int lbl_83160500;
extern unsigned int lbl_83160510;
extern unsigned int lbl_83160520;


void fn_82AAEAC0(int *param_1,uint param_2,undefined8 param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int *piStack00000034;
  uint *apuStack_a0 [40];
  
  if (*(int *)(param_4 + 4) == 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)(*(int *)(param_4 + 4) == 2);
  }
  piStack00000034 = param_5;
  if (0xffff0103 < param_2) {
    fn_82A29A38();
  }
  piVar1 = (int *)*param_1;
  puVar9 = (uint *)*param_5;
  iVar2 = *piVar1;
  if ((piVar1[1] & 0x80000000U) == 0) {
    fn_82A29A38();
  }
  uVar3 = piVar1[1];
  uVar7 = piVar1[2];
  uVar10 = uVar3 & 0x7ff;
  uVar14 = ((ulonglong)(uVar3 >> 0x14) & 0x700 | (ulonglong)uVar3 & 0x1800) >> 8;
  if (uVar14 != 3) {
    fn_82A29A38();
  }
  uVar5 = fn_82AAC8C0(uVar14,uVar10,param_4,apuStack_a0);
  puVar4 = apuStack_a0[0];
  uVar12 = ((uint)apuStack_a0[0] & 0x3f) << 0x10 | uVar5 & 0xffff;
  *puVar9 = (uVar3 & 0xff) << 0x10 | 0x50;
  puVar9[1] = uVar12;
  uVar5 = ((uint)apuStack_a0[0] & 0x3f) << 0x10 | 0x400000 | uVar5 & 0xffff;
  puVar9[2] = uVar5;
  uVar14 = (ulonglong)uVar7 & 0xff0000;
  puVar9[3] = 0x803210;
  puVar9[4] = 0x21;
  puVar9[5] = uVar5;
  puVar9[6] = 1;
  puVar15 = puVar9 + 7;
  if (uVar14 == 0xe40000) {
    uVar13 = 0x3210;
  }
  else {
    uVar13 = *(int *)(&lbl_83160520 + ((uint)(uVar14 >> 0x14) & 0xc)) << 0xc |
             *(int *)(&lbl_83160520 + ((uint)((uVar14 >> 0x14) << 2) & 0xc)) << 8 |
             *(int *)(&lbl_83160520 + ((uint)((uVar14 >> 0x12) << 2) & 0xc)) << 4 |
             *(uint *)(&lbl_83160520 + ((uint)uVar14 >> 0xe & 0xc));
  }
  uVar6 = fn_82AAC770(uVar7 & 0xf000000);
  uVar7 = fn_82AACDF0(uVar7,param_4,apuStack_a0);
  if ((uVar6 == 0) && (uVar13 == 0x3210)) {
    *puVar15 = ((uint)apuStack_a0[0] & 0x3f) << 0x10 | uVar7 & 0xffff;
  }
  else {
    *puVar15 = ((uint)apuStack_a0[0] & 0x3f) << 0x10 | 0x400000 | uVar7 & 0xffff;
    puVar15 = puVar9 + 8;
    *puVar15 = uVar6 | uVar13;
  }
  uVar7 = uVar7 & 0xffff;
  uVar14 = ZEXT48(apuStack_a0[0]) & 0x3f;
  puVar15[1] = uVar10 + 8 | 0x10000;
  puVar15[2] = uVar10 | 0x510000;
  puVar15[3] = 0;
  puVar15[4] = 0x21;
  puVar15[5] = uVar5;
  puVar15[6] = 4;
  puVar9 = puVar15 + 7;
  if ((uVar6 == 0) && (uVar13 == 0x3210)) {
    *puVar9 = (uint)(uVar14 << 0x10) | uVar7;
  }
  else {
    *puVar9 = (uint)(uVar14 << 0x10) | 0x400000 | uVar7;
    puVar9 = puVar15 + 8;
    *puVar9 = uVar6 | uVar13;
  }
  puVar9[1] = uVar10 + 8 | 0x410000;
  puVar9[2] = 0x32;
  puVar9[3] = uVar10 | 0x510000;
  puVar9[4] = 0x1111;
  puVar9[5] = (uVar11 << 8 | uVar3 & 0xff) << 0x10 | 0x5d;
  puVar15 = puVar9 + 6;
  apuStack_a0[0] = puVar15;
  if (puVar4 != (uint *)0x4) {
    fn_82A29A38();
  }
  if (iVar2 == 0x43) {
    fn_82AACF70((ulonglong)uVar3,param_4,apuStack_a0);
    *apuStack_a0[0] = uVar12;
  }
  else {
    if (iVar2 != 0x44) goto LAB_82aaeea4;
    *puVar15 = uVar12;
    puVar9[7] = uVar12;
    puVar9[8] = 0x40;
    puVar9[9] = 0x44000f;
    uVar10 = uVar10 + 0x10 | 0x410000;
    puVar9[10] = 0x110;
    uVar11 = 0;
    puVar9[0xb] = (uint)(uVar14 << 0x10) | 0x400000 | uVar7;
    puVar9[0xc] = uVar6 | uVar13;
    puVar9[0xd] = uVar10;
    puVar9[0xe] = 0;
    puVar9[0xf] = uVar10;
    puVar9[0x10] = 0x1111;
    puVar9[0x11] = 0x49;
    if ((uVar3 & 0xf00000) != 0) {
      uVar11 = 0x100;
    }
    uVar7 = uVar3 >> 0x18;
    uVar13 = uVar7 & 0xf;
    uVar10 = 0;
    if ((uVar7 & 0xf) != 0) {
      if ((uVar7 & 8) == 0) {
        puVar8 = &lbl_83160500;
      }
      else {
        uVar13 = ~uVar13 + 1;
        puVar8 = &lbl_83160510;
      }
      uVar10 = *(int *)(puVar8 + (uVar13 & 3) * 4) << 9;
    }
    if (((uVar10 | uVar11) == 0) && ((uVar3 & 0xf0000) == 0xf0000)) {
      puVar9[0x12] = uVar12;
      apuStack_a0[0] = puVar9 + 0x13;
    }
    else {
      puVar9[0x12] = uVar5;
      uVar7 = (uint)((uVar3 & 0x10000) != 0);
      if ((uVar3 & 0x20000) != 0) {
        uVar7 = uVar7 | 4;
      }
      if ((uVar3 & 0x40000) != 0) {
        uVar7 = uVar7 | 0x10;
      }
      if ((uVar3 & 0x80000) != 0) {
        uVar7 = uVar7 | 0x40;
      }
      apuStack_a0[0] = puVar9 + 0x14;
      puVar9[0x13] = uVar7 | uVar10 | uVar11;
    }
    *apuStack_a0[0] = uVar12;
    apuStack_a0[0][1] = 0x44000f;
    apuStack_a0[0] = apuStack_a0[0] + 2;
    *apuStack_a0[0] = 0x2222;
  }
  puVar15 = apuStack_a0[0] + 1;
LAB_82aaeea4:
  *piStack00000034 = (int)puVar15;
  *param_1 = (int)(piVar1 + 3);
  return;
}

