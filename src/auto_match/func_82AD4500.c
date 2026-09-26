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
extern int fn_82ABDA10();
extern int fn_82AC6740();
extern int fn_82AC68F0();
extern int fn_82AD34E8();
extern int fn_82B44B88();
extern int fn_82B8F130();
extern int fn_82B8F328();
extern int fn_82B8F618();


/* WARNING: Type propagation algorithm not settling */

uint fn_82AD4500(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar9;
  uint uVar8;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  
  uVar1 = *(uint *)((param_2 & 0xfffffffe) + 4);
  do {
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    piVar13 = (int *)(uVar1 + 0xc);
    for (puVar12 = *(uint **)(uVar1 + 0xc); puVar12 != (uint *)0x0; puVar12 = (uint *)puVar12[2]) {
      uVar11 = *puVar12;
      uVar4 = (ulonglong)*(uint *)(uVar11 + 0x30) & 0x7ffff;
      if ((*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
          1 << ((uint)uVar4 & 0x1f)) != 0) {
        if ((param_2 == uVar11) ||
           (uVar4 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, bVar7 = true,
           (*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar11 + 0x28)) &
           1 << ((uint)uVar4 & 0x1f)) == 0)) {
          bVar7 = false;
        }
        if (!bVar7) {
          if ((*(uint *)(uVar1 + 0x1c) & 1) == 0) {
            uVar11 = *(uint *)(uVar1 + 0x1c);
            iVar15 = uVar1 + 0x18;
          }
          else {
            uVar11 = *(uint *)(uVar1 + 0x24);
            iVar15 = uVar1 + 0x20;
          }
          uVar11 = -(uint)((uVar11 & 1) == 0) & uVar11;
          goto joined_r0x82ad4630;
        }
      }
    }
    cVar9 = fn_82B8F618(uVar1,param_2);
    if (cVar9 == '\0') {
      return uVar1;
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
LAB_82ad466c:
  if (iVar15 == uVar1 + 0x20) {
    return uVar1;
  }
  uVar11 = *(uint *)(uVar1 + 0x24);
  iVar15 = uVar1 + 0x20;
  if ((uVar11 & 1) != 0) {
    return uVar1;
  }
joined_r0x82ad4630:
  if (uVar11 == 0) {
    return uVar1;
  }
  while ((cVar9 = fn_82AC6740(uVar11), cVar9 == '\0' ||
         (cVar9 = fn_82ABDA10(uVar11), cVar9 != '\0'))) {
    uVar11 = *(uint *)((uVar11 & 0xfffffffe) + 0x28);
    if (((uVar11 & 1) != 0) || (uVar11 == 0)) goto LAB_82ad466c;
  }
  if (uVar11 == 0) {
    return uVar1;
  }
  uVar8 = fn_82AC68F0(param_1);
  uVar11 = uVar1 & 0xfffffffe;
  piVar3 = (int *)(uVar8 & 0xfffffffe);
  piVar3[1] = *(int *)(uVar11 + 4);
  *(int **)(*(uint *)(uVar11 + 4) & 0xfffffffe) = piVar3 + 1;
  *piVar3 = uVar11 + 4;
  *(int **)(uVar11 + 4) = piVar3;
  while (puVar2 = (undefined4 *)*piVar13, puVar2 != (undefined4 *)0x0) {
    fn_82B8F130(*puVar2,puVar2,uVar8);
    if ((undefined4 *)*piVar13 == puVar2) {
      piVar13 = puVar2 + 2;
    }
  }
  fn_82B8F328(uVar1,uVar8,param_1);
  fn_82AD34E8(uVar8 + 0x20,uVar1 + 0x20);
  for (uVar11 = *(uint *)(uVar8 + 0x24); ((uVar11 & 1) == 0 && (uVar11 != 0));
      uVar11 = *(uint *)((uVar11 & 0xfffffffe) + 0x28)) {
    *(uint *)(uVar11 + 0x1c) = uVar8;
  }
  uVar14 = 0;
  uVar11 = *(uint *)(uVar1 + 0x1c);
joined_r0x82ad4760:
  uVar5 = uVar11;
  if ((uVar5 & 1) == 0) {
    do {
      if (uVar5 == 0) break;
      cVar9 = fn_82ABDA10(uVar5);
      if (cVar9 != '\0') {
        uVar11 = uVar5 & 0xfffffffe;
        puVar12 = (uint *)(uVar11 + 0x24);
        *(uint *)((*(uint *)(uVar11 + 0x28) & 0xfffffffe) + 0x24) = *puVar12;
        *(undefined4 *)(*puVar12 & 0xfffffffe) = *(undefined4 *)(uVar11 + 0x28);
        *puVar12 = *(uint *)(uVar8 + 0x18);
        *(uint *)(*(uint *)(uVar8 + 0x18) & 0xfffffffe) = uVar11;
        *(uint *)(uVar11 + 0x28) = uVar8 - 0xc | 1;
        *(uint *)(uVar8 + 0x18) = uVar11 + 0x28;
        *(uint *)(uVar5 + 0x1c) = uVar8;
      }
      if (uVar14 == 0) {
        uVar11 = *(uint *)(uVar1 + 0x1c);
        if (uVar5 != (-(uint)((uVar11 & 1) == 0) & uVar11)) goto joined_r0x82ad4760;
LAB_82ad4828:
        uVar11 = *(uint *)((uVar5 & 0xfffffffe) + 0x28);
        uVar14 = uVar5;
      }
      else {
        uVar11 = *(uint *)((uVar14 & 0xfffffffe) + 0x28);
        if (uVar5 == (-(uint)((uVar11 & 1) == 0) & uVar11)) goto LAB_82ad4828;
      }
      uVar5 = uVar11;
      if ((uVar5 & 1) != 0) break;
    } while( true );
  }
  *(undefined4 *)(uVar8 + 0x54) = *(undefined4 *)(uVar1 + 0x54);
  uVar11 = *(uint *)(param_1 + 0x268);
  if (uVar11 < *(int *)(param_1 + 0x26c) * 0x44 + uVar11) {
    puVar12 = (uint *)(uVar11 + 0x10);
    do {
      uVar11 = puVar12[-2];
      if ((uVar11 != 0) && ((*(uint *)(uVar11 + 0x30) >> 0x16 & 1) != 0)) {
        do {
          uVar11 = *(uint *)(uVar11 + 0x50);
          if (uVar11 == 0) break;
        } while ((*(uint *)(uVar11 + 0x30) & 0x400000) != 0);
        puVar12[-2] = uVar11;
      }
      if (puVar12[-2] == uVar1) {
        puVar12[-2] = uVar8;
      }
      uVar11 = *puVar12;
      if ((uVar11 != 0) && ((*(uint *)(uVar11 + 0x30) >> 0x16 & 1) != 0)) {
        do {
          uVar11 = *(uint *)(uVar11 + 0x50);
          if (uVar11 == 0) break;
        } while ((*(uint *)(uVar11 + 0x30) & 0x400000) != 0);
        *puVar12 = uVar11;
      }
      if (*puVar12 == uVar1) {
        *puVar12 = uVar8;
      }
      uVar11 = puVar12[-1];
      if ((uVar11 != 0) && ((*(uint *)(uVar11 + 0x30) >> 0x16 & 1) != 0)) {
        do {
          uVar11 = *(uint *)(uVar11 + 0x50);
          if (uVar11 == 0) break;
        } while ((*(uint *)(uVar11 + 0x30) & 0x400000) != 0);
        puVar12[-1] = uVar11;
      }
      if (puVar12[-1] == uVar1) {
        puVar12[-1] = uVar8;
      }
      puVar10 = puVar12 + 0xd;
      puVar12 = puVar12 + 0x11;
    } while (puVar10 < (uint *)(*(int *)(param_1 + 0x26c) * 0x44 + *(int *)(param_1 + 0x268)));
  }
  uVar11 = *(uint *)(uVar8 + 0x4c);
  *(uint *)(uVar8 + 0x30) =
       *(uint *)(uVar8 + 0x30) & 0xff7fffff | *(uint *)(uVar1 + 0x30) & 0x800000;
  uVar14 = *(uint *)(uVar1 + 0x4c) & 0x400000;
  *(uint *)(uVar8 + 0x4c) = uVar14 | uVar11 & 0xffbfffff;
  uVar5 = *(uint *)(uVar1 + 0x4c) & 0x800000;
  *(uint *)(uVar8 + 0x4c) = uVar5 | uVar14 | uVar11 & 0xff3fffff;
  *(undefined4 *)(uVar8 + 0x70) = *(undefined4 *)(uVar1 + 0x70);
  uVar6 = *(uint *)(uVar1 + 0x4c) & 0x1000000;
  *(uint *)(uVar8 + 0x4c) = uVar6 | uVar5 | uVar14 | uVar11 & 0xfe3fffff;
  *(uint *)(uVar8 + 0x4c) =
       *(uint *)(uVar1 + 0x4c) & 0x2000000 | uVar6 | uVar5 | uVar14 | uVar11 & 0xfc3fffff;
  *(undefined4 *)(uVar8 + 0x6c) = *(undefined4 *)(uVar1 + 0x6c);
  *(undefined4 *)(uVar8 + 0x48) = *(undefined4 *)(uVar1 + 0x48);
  fn_82B44B88(param_1);
  return uVar8;
}

