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
extern int fn_829301D0();
extern int fn_82937A60();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82938A58(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar12;
  undefined8 uVar11;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  ulonglong uVar16;
  char *pcVar17;
  uint uVar18;
  int *piVar19;
  undefined4 *puVar20;
  longlong lVar21;
  
  if (*(int *)(param_2 + 0x38) == 0) {
    return 1;
  }
  uVar12 = 0;
  uVar8 = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
    puVar20 = (undefined4 *)(param_2 + 0x3c);
    do {
      iVar7 = fn_82938A58(param_1,*puVar20);
      if (iVar7 == -1) {
        return 0xffffffffffffffff;
      }
      uVar8 = uVar8 + 1;
      puVar20 = puVar20 + 1;
    } while (uVar8 < *(uint *)(param_2 + 0x38));
  }
  piVar19 = (int *)(param_2 + 0x3c);
  iVar7 = *(int *)(*(int *)(param_2 + 0x3c) + 0x30);
  if (iVar7 != 2) {
    if (iVar7 != 1) {
      return 1;
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      piVar13 = piVar19;
      uVar8 = 1;
      do {
        piVar14 = piVar13;
        uVar10 = uVar8;
        if (uVar8 < *(uint *)(param_2 + 0x38)) {
          do {
            piVar14 = piVar14 + 1;
            iVar7 = *piVar14;
            if (*(uint *)(iVar7 + 8) < *(uint *)(*piVar13 + 8)) {
              *piVar14 = *piVar13;
              *piVar13 = iVar7;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_2 + 0x38));
        }
        piVar13 = piVar13 + 1;
        bVar1 = uVar8 < *(uint *)(param_2 + 0x38);
        uVar8 = uVar8 + 1;
      } while (bVar1);
    }
    *(undefined4 *)(param_2 + 0x14) = 0;
    uVar8 = 0;
    *(undefined4 *)(param_2 + 0x10) = 5;
    iVar7 = *piVar19;
    *(undefined4 *)(param_2 + 0x20) = 1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar7 + 8);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x18) = 1;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    if (*(int *)(param_2 + 0x38) != 0) {
      do {
        if (*(int *)(*piVar19 + 0xc) != -1) {
          *(int *)(param_2 + 0xc) = *(int *)(*piVar19 + 0xc) + *(int *)(param_2 + 0xc);
        }
        iVar6 = *piVar19;
        *(int *)(param_2 + 0x1c) =
             *(int *)(iVar6 + 0x20) * *(int *)(iVar6 + 0x1c) * *(int *)(iVar6 + 0x18) +
             *(int *)(param_2 + 0x1c);
        *(int *)(param_2 + 0x28) =
             *(int *)(*piVar19 + 0x28) * *(int *)(*piVar19 + 0x20) + *(int *)(param_2 + 0x28);
        if (*(int *)(iVar7 + 0x2c) == 0) {
          if (*(int *)(*piVar19 + 0x2c) != 0) goto LAB_82939098;
        }
        else if (*(int *)(*piVar19 + 0x2c) == 0) goto LAB_82939098;
        uVar8 = uVar8 + 1;
        piVar19 = piVar19 + 1;
      } while (uVar8 < *(uint *)(param_2 + 0x38));
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
    }
    if (*(int *)(iVar7 + 0x2c) != 0) {
      uVar9 = fn_829301D0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x28),4);
      lVar21 = 0;
      *(undefined4 *)(param_2 + 0x2c) = uVar9;
      if (*(int *)(param_2 + 0x38) != 0) {
        piVar19 = (int *)(param_2 + 0x38);
        do {
          iVar7 = piVar19[1];
          fn_82F68CC0((ulonglong)*(uint *)(param_2 + 0x2c) + lVar21,*(undefined4 *)(iVar7 + 0x2c),
                       (longlong)*(int *)(iVar7 + 0x28) * (longlong)*(int *)(iVar7 + 0x20));
          piVar19 = piVar19 + 1;
          uVar12 = uVar12 + 1;
          lVar21 = (longlong)*(int *)(*piVar19 + 0x28) * (longlong)*(int *)(*piVar19 + 0x20) +
                   lVar21;
        } while (uVar12 < *(uint *)(param_2 + 0x38));
        return 1;
      }
      return 1;
    }
    return 1;
  }
  uVar8 = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
    uVar12 = 1;
    piVar13 = piVar19;
    do {
      piVar14 = piVar13;
      uVar10 = uVar12;
      if (uVar12 < *(uint *)(param_2 + 0x38)) {
        do {
          piVar14 = piVar14 + 1;
          iVar7 = *piVar14;
          uVar4 = *(uint *)(iVar7 + 0x34);
          uVar18 = *(uint *)(*piVar13 + 0x34);
          if (uVar18 == uVar4) {
            uVar11 = 0xffffffff82031e44;
            goto LAB_829390a0;
          }
          if (uVar4 < uVar18) {
            *piVar14 = *piVar13;
            *piVar13 = iVar7;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_2 + 0x38));
      }
      if (*(int *)(*piVar13 + 0x34) == 0) {
        puVar20 = *(undefined4 **)((uVar8 + 0xf) * 4 + param_2);
        if (puVar20 != (undefined4 *)0x0) {
          iVar7 = puVar20[1];
          uVar16 = (longlong)(int)puVar20[6] * (longlong)(int)puVar20[7];
          if ((iVar7 == 2) || (iVar7 == 1)) {
            if ((uVar16 & 3) == 0) {
              uVar16 = (uVar16 & 0xffffffff) >> 2;
            }
            else {
              uVar16 = ((uVar16 & 0xffffffff) >> 2) + 1;
            }
          }
          uVar8 = *(uint *)(param_2 + 0x38);
          bVar1 = false;
          uVar12 = 1;
          if (uVar8 < 2) goto LAB_82938dc8;
          piVar13 = (int *)(param_2 + 0x40);
          goto LAB_82938be4;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      piVar13 = piVar13 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar8 < *(uint *)(param_2 + 0x38));
  }
  uVar11 = 0xffffffff82031e1c;
  goto LAB_829390a0;
LAB_82939098:
  uVar11 = 0xffffffff82031c10;
  goto LAB_829390a0;
LAB_82938be4:
  do {
    puVar5 = (undefined4 *)*piVar13;
    pcVar17 = (char *)*puVar5;
    pcVar15 = (char *)*puVar20;
    do {
      cVar2 = *pcVar17;
      cVar3 = *pcVar15;
      if (cVar2 == '\0') break;
      pcVar17 = pcVar17 + 1;
      pcVar15 = pcVar15 + 1;
    } while (cVar2 == cVar3);
    if (cVar2 != cVar3) {
      uVar11 = 0xffffffff82031d68;
      goto LAB_829390a0;
    }
    if ((((puVar5[0xc] != puVar20[0xc]) || (puVar5[0xe] != puVar20[0xe])) ||
        (puVar5[4] != puVar20[4])) ||
       (((puVar5[7] != puVar20[7] || (puVar5[6] != puVar20[6])) ||
        ((puVar5[1] != iVar7 || (puVar5[5] != puVar20[5])))))) {
LAB_82938ec0:
      uVar11 = 0xffffffff82031d38;
      goto LAB_829390a0;
    }
    iVar6 = puVar5[10];
    if (bVar1) {
      if (iVar6 != 0) {
        uVar11 = 0xffffffff82031dc8;
        goto LAB_829390a0;
      }
    }
    else if (iVar6 != puVar20[10]) {
      if (iVar6 != 0) goto LAB_82938ec0;
      bVar1 = true;
    }
    if ((bVar1) && (puVar5[0xb] != 0)) {
      uVar11 = 0xffffffff82031cf8;
      goto LAB_829390a0;
    }
    if (((puVar5[0xb] != 0) && (puVar20[0xb] == 0)) ||
       ((!bVar1 && ((puVar5[0xb] == 0 && (puVar20[0xb] != 0)))))) goto LAB_82939098;
    if ((puVar20[0xb] != 0) && (puVar5[0xd] != uVar12)) goto LAB_82938ed8;
    uVar10 = puVar20[3];
    if ((uVar10 == 0xffffffff) || ((ulonglong)uVar10 != (uVar16 & 0xffffffff))) {
      if (puVar5[3] != -1) {
LAB_82938ee4:
        uVar11 = 0xffffffff82031c58;
        goto LAB_829390a0;
      }
    }
    else {
      uVar4 = puVar5[3];
      if (((uVar4 == 0xffffffff) || (uVar4 < uVar10)) &&
         (uVar18 = uVar12 + 1, piVar14 = piVar13, uVar18 < uVar8)) {
        do {
          if (*(int *)(piVar14[1] + 0xc) != -1) goto LAB_82938ee4;
          uVar18 = uVar18 + 1;
          piVar14 = piVar14 + 1;
        } while (uVar18 < *(uint *)(param_2 + 0x38));
      }
      if (uVar4 != 0xffffffff) {
        if (uVar10 < uVar4) goto LAB_82938ee4;
        if (puVar5[2] != uVar10 * uVar12 + puVar20[2]) {
          uVar11 = 0xffffffff82031d94;
          goto LAB_829390a0;
        }
      }
    }
    uVar12 = uVar12 + 1;
    piVar13 = piVar13 + 1;
  } while (uVar12 < *(uint *)(param_2 + 0x38));
LAB_82938dc8:
  iVar7 = *(int *)((uVar8 + 0xe) * 4 + param_2);
  if ((puVar20[0xb] == 0) || (*(int *)(iVar7 + 0x34) + 1U == uVar8)) {
    *(undefined4 *)(param_2 + 0x14) = puVar20[5];
    *(undefined4 *)(param_2 + 0x10) = puVar20[4];
    iVar7 = *(int *)(iVar7 + 0x34);
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(int *)(param_2 + 0x20) = iVar7 + 1;
    *(undefined4 *)(param_2 + 0x18) = puVar20[6];
    *(undefined4 *)(param_2 + 0x1c) = puVar20[7];
    *(undefined4 *)(param_2 + 0x28) = puVar20[10];
    if (puVar20[0xb] != 0) {
      lVar21 = (longlong)*(int *)(param_2 + 0x20) * (longlong)(int)puVar20[10];
      uVar11 = fn_829301D0(*(undefined4 *)(param_1 + 4),lVar21,4);
      *(int *)(param_2 + 0x2c) = (int)uVar11;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar11,0,lVar21);
    }
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 8) = puVar20[2];
    if (puVar20[3] != -1) {
      uVar8 = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      if (*(int *)(param_2 + 0x38) == 0) {
        return 1;
      }
      do {
        iVar7 = *piVar19;
        if (*(int *)(iVar7 + 0xc) == -1) {
          return 1;
        }
        uVar8 = uVar8 + 1;
        piVar19 = piVar19 + 1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + *(int *)(iVar7 + 0xc);
      } while (uVar8 < *(uint *)(param_2 + 0x38));
      return 1;
    }
    *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
    return 1;
  }
LAB_82938ed8:
  uVar11 = 0xffffffff82031c98;
LAB_829390a0:
  fn_82937A60(param_1,0xffffffff82031bfc,uVar11);
  return 0xffffffffffffffff;
}

