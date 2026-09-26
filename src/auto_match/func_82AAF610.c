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
extern int fn_82AAD090();
extern unsigned int lbl_83160520;


void fn_82AAF610(int *param_1,uint param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  uint *apuStack_90 [36];
  
  if (*(int *)(param_4 + 4) == 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ulonglong)(*(int *)(param_4 + 4) == 2);
  }
  if (0xffff0103 < param_2) {
    fn_82A29A38();
  }
  iVar2 = *param_1;
  puVar3 = (undefined4 *)*param_5;
  sVar1 = *(short *)(iVar2 + 2);
  if ((sVar1 == 0x48) || (bVar7 = true, sVar1 == 0x54)) {
    bVar7 = false;
  }
  uVar4 = *(uint *)(iVar2 + 4);
  uVar15 = (ulonglong)uVar4;
  uVar5 = *(undefined4 *)(iVar2 + 8);
  *puVar3 = 0x22;
  puVar13 = (uint *)(iVar2 + 0xc);
  uVar10 = uVar4 & 0x7ff;
  uVar16 = ((ulonglong)(uVar4 >> 0x14) & 0x700 | uVar15 & 0x1800) >> 8;
  if (uVar16 != 3) {
    fn_82A29A38();
  }
  uVar8 = fn_82AAC8C0(uVar16,uVar10,param_4,apuStack_90);
  if (apuStack_90[0] != (uint *)0x4) {
    fn_82A29A38();
  }
  uVar8 = uVar8 & 0xffff;
  uVar6 = ZEXT48(apuStack_90[0]);
  uVar17 = ((uint)apuStack_90[0] & 0x3f) << 0x10 | 0x400000 | uVar8;
  puVar3[1] = uVar17;
  if (bVar7) {
    if ((sVar1 == 0x4c) || (sVar1 == 0x4d)) {
      uVar11 = 0x90;
    }
    else {
      uVar11 = 0xd0;
    }
  }
  else {
    uVar11 = 0xe4;
  }
  puVar3[2] = uVar11;
  apuStack_90[0] = puVar3 + 4;
  puVar3[3] = uVar10 | 0x110000;
  fn_82AAD090(uVar5,0,0,param_4,apuStack_90);
  if ((sVar1 == 0x48) || (sVar1 == 0x4a)) {
    *apuStack_90[0] = (uint)((uVar14 << 8 | (ulonglong)uVar4 & 0xff) << 0x10) | 0x5d;
    apuStack_90[0] = apuStack_90[0] + 1;
    fn_82AACF70(uVar15,param_4,apuStack_90);
    *apuStack_90[0] = (uint)((uVar6 & 0x3f) << 0x10) | uVar8;
    puVar12 = apuStack_90[0] + 1;
LAB_82aaf83c:
    if ((sVar1 != 0x4d) && (sVar1 != 0x4c)) goto LAB_82aaf9b8;
LAB_82aaf84c:
    *puVar12 = 0x10052;
    if (uVar16 != 3) {
      fn_82A29A38();
    }
    puVar12[1] = uVar17;
    puVar12[2] = 0x15;
    puVar18 = puVar12 + 3;
    if (sVar1 == 0x4d) {
      *puVar18 = 0x44000e;
      uVar9 = 0xba98;
LAB_82aaf970:
      puVar18 = puVar12 + 4;
      *puVar18 = uVar9;
    }
    else {
      uVar10 = *puVar13;
      puVar13 = (uint *)(iVar2 + 0x10);
      uVar16 = (ulonglong)uVar10 & 0xff0000;
      if (uVar16 == 0xe40000) {
        uVar17 = 0x3210;
      }
      else {
        uVar17 = *(int *)(&lbl_83160520 + ((uint)(uVar16 >> 0x14) & 0xc)) << 0xc |
                 *(int *)(&lbl_83160520 + ((uint)((uVar16 >> 0x14) << 2) & 0xc)) << 8 |
                 *(int *)(&lbl_83160520 + ((uint)((uVar16 >> 0x12) << 2) & 0xc)) << 4 |
                 *(uint *)(&lbl_83160520 + ((uint)uVar16 >> 0xe & 0xc));
      }
      uVar9 = fn_82AAC770(uVar10 & 0xf000000);
      if ((uVar9 & 0x8888) == 0x8888) {
        uVar9 = uVar9 & 0xffff7777;
      }
      else {
        uVar9 = uVar9 | 0x8888;
      }
      uVar10 = fn_82AACDF0(uVar10,param_4,apuStack_90);
      if ((uVar9 != 0) || (uVar17 != 0x3210)) {
        uVar9 = uVar9 | uVar17;
        *puVar18 = ((uint)apuStack_90[0] & 0x3f) << 0x10 | 0x400000 | uVar10 & 0xffff;
        goto LAB_82aaf970;
      }
      *puVar18 = ((uint)apuStack_90[0] & 0x3f) << 0x10 | uVar10 & 0xffff;
    }
    uVar8 = (uint)((uVar6 & 0x3f) << 0x10) | uVar8;
    puVar18[1] = uVar8;
    puVar18[2] = (uint)((uVar14 << 8 | (ulonglong)uVar4 & 0xff) << 0x10) | 0x5d;
    apuStack_90[0] = puVar18 + 3;
    fn_82AACF70(uVar15,param_4,apuStack_90);
    *apuStack_90[0] = uVar8;
  }
  else {
    if (sVar1 == 0x4d) {
      *apuStack_90[0] = 0x47;
      apuStack_90[0][1] = 0x44000e;
      apuStack_90[0][2] = 0x10;
      apuStack_90[0][3] = uVar10 | 0x510000;
      apuStack_90[0][4] = 0x3333;
      puVar12 = apuStack_90[0] + 5;
      goto LAB_82aaf84c;
    }
    puVar12 = apuStack_90[0];
    if (sVar1 != 0x54) goto LAB_82aaf83c;
    *(undefined4 *)(param_4 + 0x9c) = 1;
    *apuStack_90[0] = 0x47;
    apuStack_90[0][1] = 0x580000;
    apuStack_90[0][2] = 0x101;
    apuStack_90[0][3] = uVar17;
    apuStack_90[0] = apuStack_90[0] + 4;
    *apuStack_90[0] = 0x203210;
  }
  puVar12 = apuStack_90[0] + 1;
LAB_82aaf9b8:
  *param_5 = puVar12;
  *param_1 = (int)puVar13;
  return;
}

