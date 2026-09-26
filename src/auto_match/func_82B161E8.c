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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82AD1B28();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AEFCD8();
extern int fn_82B0FC78();
extern int fn_82B103B8();
extern int fn_82B1E978();
extern int fn_82B8AC10();


uint fn_82B161E8(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint auStack_80 [4];
  uint auStack_70 [4];
  uint auStack_60 [4];
  uint auStack_50 [20];
  
  uVar6 = *(uint *)(param_2 + 8);
  uVar12 = uVar6 >> 7 & 0x7f;
  if (uVar12 == 0x6e) {
    fn_82B0FC78(param_1,param_2);
LAB_82b162d8:
    if ((*(uint *)(param_2 + 8) & 0x1c000) <= (*(uint *)(param_2 + 8) >> 5 & 0x1c000)) {
      uVar6 = *(uint *)(param_2 + 8);
      uVar8 = 0;
      iVar5 = 0;
      do {
        if (((ulonglong)(uVar6 >> 0x13) & 7) <= (uVar8 & 0xffffffff)) {
          return param_2;
        }
        puVar14 = *(uint **)(param_2 + 0x2c + iVar5);
        uVar10 = 0;
        uVar12 = *puVar14;
        uVar1 = puVar14[3];
        uVar4 = uVar12 & 0x1f;
        uVar12 = uVar12 >> 5 & 3;
        *(uint *)((int)auStack_60 + iVar5) = uVar4;
        *(uint *)((int)auStack_50 + iVar5) = uVar12;
        *(uint *)((int)auStack_70 + iVar5) = uVar1;
        if ((uVar8 & 0xffffffff) != 0) {
          iVar11 = 0;
          do {
            if (((*(uint *)((int)auStack_70 + iVar11) == uVar1) &&
                (*(uint *)((int)auStack_60 + iVar11) == uVar4)) &&
               (*(uint *)((int)auStack_50 + iVar11) == uVar12)) break;
            uVar10 = uVar10 + 1;
            iVar11 = iVar11 + 4;
          } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
          if ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff)) goto LAB_82b16524;
        }
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 4;
      } while( true );
    }
    uVar6 = fn_82B103B8(param_1,param_2);
    goto LAB_82b162fc;
  }
  if (uVar12 == 0x71) {
    return param_2;
  }
  if (uVar12 == 0x7c) {
    return param_2;
  }
  if (uVar12 == 0x7d) {
    fn_82AEFCD8(param_2);
    return param_2;
  }
  fn_82AD1B28();
  uVar12 = *(uint *)(param_2 + 8);
  if ((uVar6 >> 1 & 0xf) == (uVar12 >> 1 & 0xf)) {
    return param_2;
  }
  if (*(int *)(param_1 + 0x28c) == 0) {
    return param_2;
  }
  if ((uVar12 >> 0x1a & 1) != 0) {
    return param_2;
  }
  *(uint *)(param_2 + 8) = uVar12 | 0x4000000;
  puVar14 = *(uint **)(param_1 + 0x28c);
  if ((puVar14[1] & 1) == 0) {
    uVar6 = *puVar14 & 0xfffffffe;
    iVar5 = uVar6 - 4;
    if ((iVar5 != 0) && (*(int *)(uVar6 + 4) + 1U <= *(uint *)(uVar6 + 8))) goto LAB_82b162a0;
  }
  iVar5 = fn_82AD6090(puVar14,1);
LAB_82b162a0:
  iVar11 = *(int *)(iVar5 + 8);
  *(int *)(iVar5 + 8) = iVar11 + 1;
  *(uint *)((iVar11 + 4) * 4 + iVar5) = param_2;
  return param_2;
LAB_82b16524:
  uVar9 = uVar8;
  if (*(int *)(*(int *)((int)((uVar10 + 0xb & 0xffffffff) << 2) + param_2) + 0xc) !=
      *(int *)((int)auStack_70 + (int)((uVar10 & 0xffffffff) << 2))) {
    uVar9 = uVar10;
    uVar10 = uVar8;
  }
  uVar6 = fn_82B1E978(param_1,param_2,uVar9,uVar10,auStack_80);
  puVar14 = (uint *)(param_2 + 4);
  while (puVar2 = (uint *)*puVar14, puVar2 != (uint *)0x0) {
    uVar12 = puVar2[4];
    if (uVar12 != 0) {
      uVar1 = *puVar2;
      if ((((uVar1 & 0xe000000) != 0) &&
          (*puVar2 = ((((auStack_80[0] >> (uVar1 >> 10 & 6) & 3) << 2 |
                       auStack_80[0] >> (uVar1 >> 8 & 6) & 3) << 2 |
                      auStack_80[0] >> (uVar1 >> 6 & 6) & 3) << 2 |
                     auStack_80[0] >> (uVar1 >> 4 & 6) & 3) << 5 | uVar1 & 0xffffe01f,
          *(int *)(param_1 + 0x28c) != 0)) && ((*(uint *)(uVar12 + 8) >> 0x1a & 1) == 0)) {
        *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 0x4000000;
        puVar3 = *(uint **)(param_1 + 0x28c);
        if ((puVar3[1] & 1) == 0) {
          uVar1 = *puVar3 & 0xfffffffe;
          iVar5 = uVar1 - 4;
          if ((iVar5 == 0) || (*(uint *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U)) goto LAB_82b16628;
        }
        else {
LAB_82b16628:
          iVar5 = fn_82AD6090(puVar3,1);
        }
        iVar11 = *(int *)(iVar5 + 8);
        *(int *)(iVar5 + 8) = iVar11 + 1;
        *(uint *)((iVar11 + 4) * 4 + iVar5) = uVar12;
      }
      puVar13 = (uint *)(puVar2[3] + 4);
      for (puVar3 = (uint *)*puVar13; puVar3 != puVar2; puVar3 = (uint *)puVar3[2]) {
        puVar13 = puVar3 + 2;
      }
      *puVar13 = puVar2[2];
      puVar2[2] = *(uint *)(uVar6 + 4);
      *(uint **)(uVar6 + 4) = puVar2;
      puVar2[3] = uVar6;
    }
    if ((uint *)*puVar14 == puVar2) {
      puVar14 = puVar2 + 2;
    }
  }
LAB_82b162fc:
  fn_82B0FC78(param_1,uVar6);
  uVar12 = *(uint *)(uVar6 + 8);
  *(uint *)(uVar6 + 8) = uVar12 | 0x1000000;
  if ((*(uint *)(param_2 + 8) >> 0x17 & 1) != 0) {
    *(uint *)(uVar6 + 8) = uVar12 | 0x1800000;
    *(uint *)(uVar6 + 0x10) =
         (*(ushort *)(param_2 + 0x10) & 7) << 0x10 | *(uint *)(uVar6 + 0x10) & 0xfff8ffff;
    uVar7 = fn_82ADD120(param_2);
    *(undefined2 *)(uVar6 + 0x12) = uVar7;
    if ((param_3[1] & 1) == 0) {
      uVar12 = *param_3 & 0xfffffffe;
      iVar5 = uVar12 - 4;
      if ((iVar5 == 0) || (*(uint *)(uVar12 + 8) < *(int *)(uVar12 + 4) + 1U)) goto LAB_82b16374;
    }
    else {
LAB_82b16374:
      iVar5 = fn_82AD6090(param_3,1);
    }
    iVar11 = *(int *)(iVar5 + 8);
    *(int *)(iVar5 + 8) = iVar11 + 1;
    *(uint *)((iVar11 + 4) * 4 + iVar5) = uVar6;
    if ((*(int *)(param_1 + 0x2c4) != 0) &&
       (uVar12 = *(uint *)(param_2 + 0x10), (uVar12 & 0x70000) != 0)) {
      iVar5 = (uVar12 & 0xffff) * 4;
      *(uint *)(*(int *)(param_1 + 0x2c4) + iVar5) = uVar6;
      *(uint *)(*(int *)(param_1 + 0x2c4) + iVar5 + 4) = uVar6;
      *(uint *)(((uVar12 & 0xffff) + 2) * 4 + *(int *)(param_1 + 0x2c4)) = uVar6;
      *(uint *)(((uVar12 & 0xffff) + 3) * 4 + *(int *)(param_1 + 0x2c4)) = uVar6;
    }
  }
  fn_82B8AC10(param_1,param_2,0,1);
  param_2 = uVar6;
  if (*(int *)(param_1 + 0x28c) == 0) goto LAB_82b162d8;
  *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) | 0x4000000;
  puVar14 = *(uint **)(param_1 + 0x28c);
  if ((puVar14[1] & 1) == 0) {
    uVar12 = *puVar14 & 0xfffffffe;
    iVar5 = uVar12 - 4;
    if ((iVar5 != 0) && (*(int *)(uVar12 + 4) + 1U <= *(uint *)(uVar12 + 8))) goto LAB_82b16458;
  }
  iVar5 = fn_82AD6090(puVar14,1);
LAB_82b16458:
  iVar11 = *(int *)(iVar5 + 8);
  *(int *)(iVar5 + 8) = iVar11 + 1;
  *(uint *)((iVar11 + 4) * 4 + iVar5) = uVar6;
  goto LAB_82b162d8;
}

