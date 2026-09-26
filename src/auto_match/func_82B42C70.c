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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC68F0();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82AD6090();
extern int fn_82B41D68();
extern int fn_82B44B88();
extern int fn_82B84290();
extern int fn_82B8F170();
extern int fn_82B8F328();


uint fn_82B42C70(int param_1,uint param_2,uint param_3,int param_4,uint param_5,char param_6)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar7;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  
  if (param_6 == '\0') {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff;
    if ((*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(param_3 + 0x28)) &
        1 << ((uint)uVar6 & 0x1f)) != 0) {
      return param_3;
    }
    puVar18 = *(uint **)(param_2 + 0xc);
    if ((puVar18 == (uint *)0x0) || (bVar1 = true, puVar18[2] == 0)) {
      bVar1 = false;
    }
    if (!bVar1) {
      uVar8 = 0;
      if (puVar18 != (uint *)0x0) {
        uVar8 = *puVar18;
      }
      if (uVar8 == param_3) {
        return param_2;
      }
    }
    uVar8 = 0;
    for (iVar12 = *(int *)(param_3 + 8); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0xc)) {
      if (((*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(*(uint *)(iVar12 + 4) + 0x28)) &
           1 << ((uint)uVar6 & 0x1f)) != 0) &&
         (bVar1 = uVar8 != 0, uVar8 = *(uint *)(iVar12 + 4), bVar1)) {
        uVar8 = 0;
        break;
      }
    }
    if (uVar8 != 0) {
      return uVar8;
    }
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  uVar8 = fn_82AC68F0(param_1);
  if (param_4 == 0) {
    puVar3 = (uint *)(param_5 & 0xfffffffe);
    puVar18 = (uint *)(uVar8 & 0xfffffffe);
    *puVar18 = *puVar3;
    *(uint **)(*puVar3 & 0xfffffffe) = puVar18;
    puVar18[1] = (uint)puVar3;
    *puVar3 = (uint)(puVar18 + 1);
  }
  else {
    param_5 = param_5 & 0xfffffffe;
    piVar15 = (int *)(uVar8 & 0xfffffffe);
    piVar15[1] = *(int *)(param_5 + 4);
    *(int **)(*(uint *)(param_5 + 4) & 0xfffffffe) = piVar15 + 1;
    *piVar15 = param_5 + 4;
    *(int **)(param_5 + 4) = piVar15;
  }
  for (piVar15 = *(int **)(param_3 + 0x14); (((uint)piVar15 & 1) == 0 && (piVar15 != (int *)0x0));
      piVar15 = *(int **)(((uint)piVar15 & 0xfffffffe) + 0x28)) {
    if ((piVar15[2] & 0x3f80U) == 0x3800) {
      piVar9 = (int *)0x0;
      piVar17 = piVar15;
      while (iVar12 = *piVar17, iVar12 != 0) {
        uVar16 = *(uint *)(*(int *)(iVar12 + 0xc) + 0x1c);
        if (((uVar16 != uVar8) &&
            (iVar10 = *(int *)(uVar16 + 0x28),
            uVar6 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff,
            (1 << ((uint)uVar6 & 0x1f) & *(uint *)(((int)(uVar6 >> 5) + 1) * 4 + iVar10)) != 0)) &&
           (uVar6 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff,
           (1 << ((uint)uVar6 & 0x1f) & *(uint *)(((int)(uVar6 >> 5) + 1) * 4 + iVar10)) == 0)) {
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)fn_82B84290(param_1,uVar8);
            if (*(int *)(param_1 + 0x294) != 0) {
              *(short *)((int)piVar9 + 0x12) = (short)piVar15[4];
              piVar9[4] = piVar9[4] & 0xfff8ffffU | 0x10000;
              puVar18 = *(uint **)(param_1 + 0x294);
              if ((puVar18[1] & 1) == 0) {
                uVar16 = *puVar18 & 0xfffffffe;
                iVar10 = uVar16 - 4;
                if ((iVar10 == 0) || (*(uint *)(uVar16 + 8) < *(int *)(uVar16 + 4) + 1U))
                goto LAB_82b42ef8;
              }
              else {
LAB_82b42ef8:
                iVar10 = fn_82AD6090(puVar18,1);
              }
              iVar11 = *(int *)(iVar10 + 8);
              *(int *)(iVar10 + 8) = iVar11 + 1;
              *(int **)((iVar11 + 4) * 4 + iVar10) = piVar9;
            }
            if ((*(uint *)(param_1 + 0x28) & 0x4000) != 0) {
              piVar9[2] = piVar9[2] & 0xfeffffe1U | 0x1000002;
            }
          }
          piVar14 = *(int **)(iVar12 + 0x10);
          for (iVar10 = *piVar14; iVar10 != iVar12; iVar10 = *(int *)(iVar10 + 4)) {
            piVar14 = (int *)(iVar10 + 4);
          }
          *piVar14 = *(int *)(iVar12 + 4);
          *(int *)(iVar12 + 4) = *piVar9;
          *piVar9 = iVar12;
          *(int **)(iVar12 + 0x10) = piVar9;
        }
        if (*piVar17 == iVar12) {
          piVar17 = (int *)(iVar12 + 4);
        }
      }
      if (piVar9 != (int *)0x0) {
        uVar7 = fn_82AD17B0(param_1,piVar9);
        fn_82AD1978(piVar15,uVar7);
      }
    }
  }
  uVar16 = 0;
  iVar12 = *(int *)(param_3 + 8);
  piVar15 = (int *)(param_3 + 8);
  while (iVar12 != 0) {
    iVar10 = *(int *)(iVar12 + 4);
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff;
    if (((1 << ((uint)uVar6 & 0x1f) &
         *(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(iVar10 + 0x28))) != 0) &&
       (uVar6 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff,
       (1 << ((uint)uVar6 & 0x1f) & *(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(iVar10 + 0x28))
       ) == 0)) {
      if (uVar16 < *(uint *)(iVar12 + 0x10)) {
        uVar16 = *(uint *)(iVar12 + 0x10);
      }
      fn_82B8F170(iVar10,iVar12,uVar8);
      if (((*(uint *)(iVar10 + 0x24) & 1) == 0) &&
         (uVar4 = *(uint *)(iVar10 + 0x20) & 0xfffffffe, uVar4 != 0x28)) {
        uVar2 = *(uint *)(uVar4 - 0x20) >> 7 & 0x7f;
        if ((uVar2 == 0x56) ||
           ((((uVar2 == 0x57 || (uVar2 == 0x59)) || (uVar2 == 0x5a)) ||
            ((uVar2 == 0x54 || (bVar1 = false, uVar2 == 0x55)))))) {
          bVar1 = true;
        }
        if (bVar1) {
          uVar2 = *(uint *)(uVar4 - 0x20);
          iVar11 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
          puVar18 = (uint *)(iVar11 + (uVar4 - 0x38));
          if (*puVar18 == param_3) {
            *puVar18 = uVar8;
          }
          if ((*(uint *)(uVar4 - 0x20) & 0x3f80) == 0x2a80) {
            for (puVar3 = *(uint **)(iVar10 + 0xc); puVar3 != (uint *)0x0;
                puVar3 = (uint *)puVar3[2]) {
              if (*puVar18 == *puVar3) {
                bVar1 = true;
                goto LAB_82b43124;
              }
            }
            bVar1 = false;
LAB_82b43124:
            if (bVar1) {
              iVar10 = fn_82ABDD90(param_1,0x54,0,0);
              *(uint *)(iVar10 + (puVar18[-1] - 0x10)) = uVar8;
            }
          }
        }
      }
    }
    if (*piVar15 == iVar12) {
      piVar15 = (int *)(iVar12 + 0xc);
    }
    iVar12 = *piVar15;
  }
  iVar12 = fn_82B8F328(uVar8,param_3,param_1);
  *(uint *)(iVar12 + 0x10) = uVar16;
  *(uint *)(uVar8 + 0x4c) =
       *(uint *)(uVar8 + 0x4c) & 0xfff80000 | *(uint *)(param_3 + 0x4c) & 0x7ffff;
  fn_82B44B88(param_1);
  if ((*(uint *)(param_2 + 0x30) >> 0x17 & 1) != 0) {
    uVar16 = *(uint *)(uVar8 + 0x4c);
    *(uint *)(uVar8 + 0x30) =
         *(uint *)(uVar8 + 0x30) & 0xff7fffff | *(uint *)(param_2 + 0x30) & 0x800000;
    uVar4 = *(uint *)(param_2 + 0x4c) & 0x400000;
    *(uint *)(uVar8 + 0x4c) = uVar16 & 0xffbfffff | uVar4;
    uVar2 = *(uint *)(param_2 + 0x4c) & 0x800000;
    *(uint *)(uVar8 + 0x4c) = uVar16 & 0xff3fffff | uVar4 | uVar2;
    *(undefined4 *)(uVar8 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    uVar5 = *(uint *)(param_2 + 0x4c) & 0x1000000;
    *(uint *)(uVar8 + 0x4c) = uVar16 & 0xfe3fffff | uVar4 | uVar2 | uVar5;
    *(uint *)(uVar8 + 0x4c) =
         uVar16 & 0xfc3fffff | uVar4 | uVar2 | uVar5 | *(uint *)(param_2 + 0x4c) & 0x2000000;
    *(undefined4 *)(uVar8 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(uVar8 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(uint *)(uVar8 + 0x30) = *(uint *)(uVar8 + 0x30) | 0x8000000;
  }
  uVar16 = *(uint *)(uVar8 + 0x14);
  if (((uVar16 & 1) != 0) || (uVar16 == 0)) {
    return uVar8;
  }
  do {
    iVar12 = *(int *)(uVar8 + 8);
    while( true ) {
      if (iVar12 == 0) goto LAB_82b43348;
      iVar10 = fn_82B41D68(param_1,uVar16,*(undefined4 *)(iVar12 + 4),0,1);
      if (iVar10 == 0) break;
      iVar12 = *(int *)(iVar12 + 0xc);
    }
    iVar11 = 0;
    iVar10 = 0;
    piVar15 = *(int **)(*(int *)(uVar16 + 4) + 0x10);
    for (iVar12 = *piVar15; iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
      iVar13 = *(int *)(*(int *)(iVar12 + 0xc) + 0x1c);
      uVar6 = (ulonglong)*(uint *)(iVar13 + 0x30) & 0x7ffff;
      if (((*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(param_2 + 0x28)) &
           1 << ((uint)uVar6 & 0x1f)) != 0) &&
         ((iVar10 == 0 ||
          (uVar6 = (ulonglong)*(uint *)(iVar10 + 0x30) & 0x7ffff,
          (*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(iVar13 + 0x28)) &
          1 << ((uint)uVar6 & 0x1f)) != 0)))) {
        iVar10 = iVar13;
        iVar11 = iVar12;
      }
    }
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    fn_82AD1978(uVar16,iVar11);
    for (iVar12 = *(int *)(param_3 + 8); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0xc)) {
      iVar10 = *(int *)(iVar12 + 4);
      iVar13 = fn_82B41D68(param_1,piVar15,iVar10,0,1);
      if (iVar11 == iVar13) {
        if (iVar10 == 0) break;
        goto LAB_82b43348;
      }
    }
    fn_82AD20C0(piVar15,iVar11,param_1);
LAB_82b43348:
    uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 0x28);
    if ((uVar16 & 1) != 0) {
      return uVar8;
    }
    if (uVar16 == 0) {
      return uVar8;
    }
  } while( true );
}

