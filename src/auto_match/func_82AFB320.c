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
extern int fn_82ABE2E0();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AEFBB8();
extern int fn_82AFA378();
extern int fn_82B16698();
extern int fn_82B255B0();
extern int fn_82B8AC10();
extern unsigned int uStack_54;


int fn_82AFB320(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  char cVar10;
  int iVar7;
  undefined2 uVar9;
  int iVar8;
  uint uVar12;
  ulonglong uVar11;
  uint uVar14;
  ulonglong uVar13;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 uStack_54;
  undefined4 auStack_50 [20];
  
  puVar17 = (uint *)(param_2 + 4);
  while (puVar2 = (uint *)*puVar17, puVar2 != (uint *)0x0) {
    if (puVar2[4] != 0) {
      uVar18 = *puVar2;
      uVar12 = uVar18 >> 0x19 & 7;
      if (uVar12 != 0) {
        uVar14 = 0;
        uVar19 = 0;
        if (uVar12 != 0) {
          uVar12 = 0;
          do {
            uVar19 = uVar19 + 1;
            uVar14 = 1 << ((uVar18 >> 5 & 0xff) >> (uVar12 & 0x3f) & 3) | uVar14;
            uVar12 = uVar12 + 2;
          } while (uVar19 < (uVar18 >> 0x19 & 7));
        }
        uVar12 = 0;
        uVar11 = 0;
        uVar18 = 0;
        for (; uVar14 != 0; uVar14 = uVar14 - (uVar14 & ~(uVar14 - 1))) {
          lVar5 = -LZCOUNT(uVar14 & ~(uVar14 - 1));
          puVar4 = *(uint **)((int)((lVar5 + 0x2aU & 0xffffffff) << 2) + param_2);
          uVar19 = puVar4[3];
          if ((uVar18 != 0) && (bVar1 = uVar18 != uVar19, uVar19 = uVar18, bVar1))
          goto LAB_82afb558;
          uVar18 = *puVar4;
          uVar6 = (uint)((lVar5 + 0x1fU & 0xffffffff) << 1);
          uVar12 = (uVar18 >> 5 & 3) << (uVar6 & 0x3e) | uVar12 & ~(3 << (uVar6 & 0x3e));
          uVar11 = (ulonglong)uVar18 & 0x1f;
          uVar18 = uVar19;
        }
        uVar19 = *puVar2;
        uVar13 = (ulonglong)uVar19 & 0x1f;
        if ((((uVar11 & 0x18) == 0) || ((uVar19 & 0x18) == 0)) &&
           (((uVar11 & 2) == 0 || ((uVar19 & 1) == 0)))) {
          if (((uVar11 & 4) == 0) || (bVar1 = false, (uVar19 & 1) == 0)) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          if (((uVar11 & 4) != 0) && ((uVar19 & 2) != 0)) {
            uVar11 = uVar11 - 4;
          }
          if ((uVar11 & uVar13 & 4) != 0) {
            uVar11 = uVar11 - 4;
            uVar13 = uVar13 - 4;
          }
          if (((uVar11 & 1) != 0) && ((uVar13 & 2) != 0)) {
            uVar13 = uVar13 - 2;
          }
          cVar10 = fn_82AEFBB8(puVar2[4],uVar11 | uVar13);
          if (cVar10 != '\0') {
            puVar15 = (uint *)(puVar2[3] + 4);
            for (puVar4 = (uint *)*puVar15; puVar4 != puVar2; puVar4 = (uint *)puVar4[2]) {
              puVar15 = puVar4 + 2;
            }
            *puVar15 = puVar2[2];
            puVar2[2] = *(uint *)(uVar18 + 4);
            *(uint **)(uVar18 + 4) = puVar2;
            uVar19 = *puVar2 >> 5;
            uVar14 = uVar19 & 0xff;
            puVar2[3] = uVar18;
            *puVar2 = ((((uVar12 >> (uVar14 >> 5 & 6) & 3) << 2 | uVar12 >> (uVar14 >> 3 & 6) & 3)
                        << 2 | uVar12 >> (uVar14 >> 1 & 6) & 3) << 2 |
                      uVar12 >> ((uVar19 & 3) << 1) & 3) << 5 | *puVar2 & 0xffffe000 |
                      (uint)(uVar11 | uVar13) & 0x1f;
            fn_82AFA378(param_1,uVar18);
          }
        }
      }
    }
LAB_82afb558:
    if ((uint *)*puVar17 == puVar2) {
      puVar17 = puVar2 + 2;
    }
  }
  cVar10 = fn_82ABE2E0(param_2);
  if (cVar10 != '\0') {
    fn_82B8AC10();
    return param_2;
  }
  iVar7 = fn_82B255B0(param_1,param_2,*(undefined4 *)(param_1 + 0x28c));
  if (iVar7 == 0) {
    return 0;
  }
  if ((*(uint *)(param_2 + 8) >> 0x17 & 1) == 0) goto LAB_82afb620;
  *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 0x800000;
  uVar9 = fn_82ADD120(param_2);
  *(undefined2 *)(iVar7 + 0x12) = uVar9;
  puVar17 = *(uint **)(param_1 + 0x294);
  if ((puVar17[1] & 1) == 0) {
    uVar18 = *puVar17 & 0xfffffffe;
    iVar8 = uVar18 - 4;
    if ((iVar8 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U)) goto LAB_82afb5fc;
  }
  else {
LAB_82afb5fc:
    iVar8 = fn_82AD6090(puVar17,1);
  }
  iVar3 = *(int *)(iVar8 + 8);
  *(int *)(iVar8 + 8) = iVar3 + 1;
  *(int *)((iVar3 + 4) * 4 + iVar8) = iVar7;
LAB_82afb620:
  uVar18 = *(uint *)(param_2 + 8) >> 0x13;
  uVar11 = (ulonglong)uVar18 & 7;
  if ((uVar18 & 7) != 0) {
    puVar20 = &uStack_54;
    piVar16 = (int *)(param_2 + 0x28);
    uVar13 = uVar11;
    do {
      piVar16 = piVar16 + 1;
      puVar20 = puVar20 + 1;
      *puVar20 = *(undefined4 *)(*piVar16 + 0xc);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  fn_82B8AC10(param_1,param_2,*(undefined4 *)(param_1 + 0x28c),1);
  if ((uVar18 & 7) != 0) {
    puVar20 = &uStack_54;
    do {
      puVar20 = puVar20 + 1;
      fn_82B16698(param_1,*puVar20,*(undefined4 *)(param_1 + 0x294));
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return iVar7;
}

