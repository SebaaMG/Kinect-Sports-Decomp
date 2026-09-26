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
extern unsigned int *auStack_6c;
extern int fn_82AC9F80();
extern int fn_82AD12C8();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AF5EC0();
extern int fn_82AF77E0();
extern int fn_82AFA378();
extern int fn_82AFA410();
extern unsigned int uStack_70;


void fn_82AFEEB0(int param_1,int *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar14;
  uint uVar11;
  undefined8 uVar10;
  undefined2 uVar13;
  int iVar12;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uStack_70;
  uint auStack_6c [27];
  
  uVar1 = param_3[3];
  uVar2 = *param_3;
  uVar11 = 0;
  bVar8 = false;
  if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3700) {
LAB_82afef3c:
    bVar9 = true;
  }
  else {
    for (puVar19 = *(uint **)(uVar1 + 4); puVar19 != (uint *)0x0; puVar19 = (uint *)puVar19[2]) {
      uVar16 = puVar19[4];
      if (((uVar16 != 0) && ((*(uint *)(uVar16 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar19 & 0xe000000) != 0)) goto LAB_82afef30;
    }
    uVar16 = 0;
LAB_82afef30:
    bVar9 = false;
    if (uVar16 != 0) goto LAB_82afef3c;
  }
  puVar19 = (uint *)(param_2 + 1);
  while (puVar3 = (uint *)*puVar19, puVar3 != (uint *)0x0) {
    uVar16 = puVar3[4];
    if ((uVar16 != 0) && ((*puVar3 & 0xe000000) != 0)) {
      uVar4 = *(uint *)(uVar16 + 8) >> 7 & 0x7f;
      if ((uVar4 == 0) || (bVar7 = true, 0x66 < uVar4)) {
        bVar7 = false;
      }
      if (bVar7) {
LAB_82afeff8:
        cVar14 = fn_82AF5EC0(param_1,puVar3,param_3,&uStack_70,auStack_6c);
        if (cVar14 == '\0') goto LAB_82aff018;
        puVar17 = (uint *)(puVar3[3] + 4);
        for (puVar5 = (uint *)*puVar17; puVar5 != puVar3; puVar5 = (uint *)puVar5[2]) {
          puVar17 = puVar5 + 2;
        }
        *puVar17 = puVar3[2];
        puVar3[2] = *(uint *)(uVar1 + 4);
        *(uint **)(uVar1 + 4) = puVar3;
        puVar3[3] = uVar1;
        uVar4 = *puVar3 >> 5;
        uVar15 = uVar4 & 0xff;
        uVar18 = *param_3 >> 5 & 0xff;
        *puVar3 = ((((uVar18 >> (uVar15 >> 5 & 6) & 3) << 2 | uVar18 >> (uVar15 >> 3 & 6) & 3) << 2
                   | uVar18 >> (uVar15 >> 1 & 6) & 3) << 2 | uVar18 >> ((uVar4 & 3) << 1) & 3) << 5
                  | *puVar3 & 0xffffe000 | uStack_70 & 0x1f;
        if (uStack_70 != 0) {
          *(uint *)(uVar16 + 0x10) = *(uint *)(uVar16 + 0x10) & 0xfff7ffff;
        }
        if (((uVar2 & 8) != 0) && ((auStack_6c[0] & 8) == 0)) {
          uVar10 = fn_82AD12C8(param_2);
          uVar10 = fn_82AC9F80(param_1,uVar10,0);
          fn_82AD1978(uVar16,uVar10);
        }
        fn_82AFA410(param_1,uVar16);
        fn_82AFA378(param_1,uVar16);
      }
      else {
        if ((!bVar9) && (uVar4 == 0x6e)) {
          uVar4 = *(uint *)(uVar1 + 8);
          uVar15 = uVar4 >> 7 & 0x7f;
          if ((uVar15 == 0x7d) || (bVar7 = false, uVar15 == 0x7c)) {
            bVar7 = true;
          }
          if ((((!bVar7) && (((uint)param_2[2] >> 0x17 & 1) == 0)) && ((uVar4 >> 0x17 & 1) == 0)) &&
             (((uVar2 & 0x1e) == 0 && ((uVar4 & 0x1c000) <= (param_2[2] & 0x1c000U)))))
          goto LAB_82afeff8;
        }
LAB_82aff018:
        if (uVar11 == 0) {
          if (param_4 == '\0') goto LAB_82aff180;
          uVar11 = fn_82AF77E0(param_1,0,param_2,param_3,param_3);
        }
        puVar17 = (uint *)(puVar3[3] + 4);
        for (puVar5 = (uint *)*puVar17; puVar5 != puVar3; puVar5 = (uint *)puVar5[2]) {
          puVar17 = puVar5 + 2;
        }
        *puVar17 = puVar3[2];
        puVar3[2] = *(uint *)(uVar11 + 4);
        *(uint **)(uVar11 + 4) = puVar3;
        puVar3[3] = uVar11;
      }
      bVar8 = true;
    }
LAB_82aff180:
    if ((uint *)*puVar19 == puVar3) {
      puVar19 = puVar3 + 2;
    }
  }
  if (!bVar8) {
    return;
  }
  if (uVar11 == 0) goto LAB_82aff268;
  for (puVar19 = (uint *)*param_2; puVar19 != (uint *)0x0; puVar19 = (uint *)puVar19[1]) {
    if ((*puVar19 & 0xe000000) == 0) {
      fn_82AD1978(uVar11,puVar19);
    }
  }
  fn_82AD1B28(uVar11);
  uVar2 = *(uint *)(uVar11 + 8);
  *(uint *)(uVar11 + 8) = uVar2 | 0x1000000;
  if (((uint)param_2[2] >> 0x17 & 1) != 0) {
    *(uint *)(uVar11 + 8) = uVar2 | 0x1800000;
    uVar13 = fn_82ADD120(param_2);
    *(undefined2 *)(uVar11 + 0x12) = uVar13;
    puVar19 = *(uint **)(param_1 + 0x294);
    if ((puVar19[1] & 1) == 0) {
      uVar2 = *puVar19 & 0xfffffffe;
      iVar12 = uVar2 - 4;
      if ((iVar12 == 0) || (*(uint *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82aff238;
    }
    else {
LAB_82aff238:
      iVar12 = fn_82AD6090(puVar19,1);
    }
    iVar6 = *(int *)(iVar12 + 8);
    *(int *)(iVar12 + 8) = iVar6 + 1;
    *(uint *)((iVar6 + 4) * 4 + iVar12) = uVar11;
  }
  fn_82AFA378(param_1,uVar11);
LAB_82aff268:
  fn_82AFA378(param_1,param_2);
  fn_82AFA378(param_1,uVar1);
  return;
}

