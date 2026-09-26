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
extern int fn_8265C940();
extern int fn_82F65390();


undefined8 fn_82AABB18(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar11;
  longlong lVar10;
  int *piVar12;
  
  piVar12 = *(int **)(param_1 + 0xe0);
  iVar2 = fn_82F65390(param_1,0xffffffff820d5c7c,8);
  if ((iVar2 != 0) || (0x19a < *(ushort *)(param_1 + 8))) {
    return 0xfffffffffffffff0;
  }
  *(uint *)(param_1 + 0xd4) = *(int *)(param_1 + 0x4c) + 0x1fU & 0xffffffe0;
  *(uint *)(param_1 + 0xd0) = *(int *)(param_1 + 0x48) + 0x1fU & 0xffffffe0;
  piVar12[9] = 0;
  piVar12[8] = 0;
  uVar7 = *(uint *)(param_1 + 0xd4);
  uVar1 = *(ushort *)(param_1 + 0x5e);
  uVar9 = (ulonglong)uVar1;
  trapWord(6,uVar9,0);
  piVar12[6] = 0;
  piVar12[7] = 0;
  uVar5 = (uVar9 + uVar7) - 1;
  piVar12[5] = (int)uVar5 / (int)(uint)uVar1;
  trapWord(5,uVar9 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if (*piVar12 != 0) {
    iVar2 = piVar12[2];
    if ((((iVar2 < 0) || (piVar12[4] < 0)) ||
        (iVar3 = piVar12[4] + iVar2, *(int *)(param_1 + 0x4c) < iVar3)) ||
       (((iVar8 = piVar12[1], iVar8 < 0 || (piVar12[3] < 0)) ||
        (iVar6 = piVar12[3] + iVar8, *(int *)(param_1 + 0x48) < iVar6)))) {
      return 0xffffffffffffffbd;
    }
    uVar11 = iVar8 - 10;
    uVar7 = *(int *)(param_1 + 0xd0) + 0xf;
    iVar8 = ((int)uVar7 >> 4) + (uint)((int)uVar7 < 0 && (uVar7 & 0xf) != 0);
    lVar10 = (longlong)((int)uVar11 >> 4) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 0xf) != 0);
    piVar12[6] = (int)lVar10;
    if (lVar10 < 0) {
      piVar12[6] = 0;
    }
    uVar7 = iVar6 + 9;
    iVar6 = ((int)uVar7 >> 4) + (uint)((int)uVar7 < 0 && (uVar7 & 0xf) != 0);
    if (iVar8 <= iVar6) {
      iVar6 = iVar8 + -1;
    }
    uVar7 = iVar2 - 10;
    uVar1 = *(ushort *)(param_1 + 0x5e);
    piVar12[7] = (int)uVar7 / (int)(uint)uVar1;
    trapWord(6,(ulonglong)uVar1,0);
    trapWord(5,(ulonglong)uVar1 &
               ~((((ulonglong)uVar7 & 0x7fffffff) << 1 | (ulonglong)(uVar7 >> 0x1f)) - 1),0xffff);
    if ((int)uVar7 / (int)(uint)uVar1 < 0) {
      piVar12[7] = 0;
    }
    uVar7 = iVar3 + 10;
    uVar1 = *(ushort *)(param_1 + 0x5e);
    trapWord(6,(ulonglong)uVar1,0);
    iVar2 = (int)uVar7 / (int)(uint)uVar1;
    trapWord(5,(ulonglong)uVar1 &
               ~((((ulonglong)uVar7 & 0x7fffffff) << 1 | (ulonglong)(uVar7 >> 0x1f)) - 1),0xffff);
    if (piVar12[5] <= iVar2) {
      iVar2 = piVar12[5] + -1;
    }
    *(int *)(param_1 + 0xd0) = ((iVar6 - piVar12[6]) * 0x10 + 0x2f >> 5) << 5;
    iVar3 = (uint)*(ushort *)(param_1 + 0x5e) * piVar12[7];
    iVar2 = ((iVar2 - piVar12[7]) + 1) * (uint)*(ushort *)(param_1 + 0x5e);
    if (*(int *)(param_1 + 0xd4) < iVar3 + iVar2) {
      iVar2 = *(int *)(param_1 + 0xd4) - iVar3;
    }
    *(int *)(param_1 + 0xd4) = iVar2;
    *(int *)(param_1 + 0x48) = piVar12[3];
    *(int *)(param_1 + 0x4c) = piVar12[4];
    piVar12[9] = piVar12[2] - (uint)*(ushort *)(param_1 + 0x5e) * piVar12[7];
    piVar12[8] = piVar12[1] + piVar12[6] * -0x10;
  }
  if (*(int *)(*(int *)(param_1 + 0xe0) + 0x30) != 0) {
    if (*(short *)(param_1 + 0x58) == 1) {
      return 0xffffffffffffffb9;
    }
    if ((*(ushort *)(param_1 + 0x3e) & 0x800) != 0) {
      return 0xffffffffffffffb8;
    }
    if ((*(ushort *)(param_1 + 0x3e) & 0xf0) == 0x40) {
      return 0xffffffffffffffba;
    }
  }
  if ((*(ushort *)(param_1 + 0x3e) & 0xf0) == 0x40) {
    if (*(short *)(param_1 + 0x5c) != 1) {
      return 0xffffffffffffffbe;
    }
    uVar5 = ((ulonglong)*(uint *)(param_1 + 0xd4) & 0x7fffffff) << 1;
  }
  else {
    uVar5 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x5c) * (longlong)*(int *)(param_1 + 0xd4);
  }
  lVar10 = (uVar5 & 0x1ffffff) << 7;
  iVar2 = fn_8265C940(lVar10,0x24870000);
  *(int *)(param_1 + 0xc0) = iVar2;
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(param_1 + 0xe0) + 0x38) != 0) {
      iVar2 = fn_8265C940(lVar10,0x24870000);
      *(int *)(param_1 + 0xc4) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffffffffffbf;
      }
    }
    iVar2 = fn_8265C940(*(int *)(param_1 + 0x30) << 2,0x24870000);
    *(int *)(param_1 + 0x70) = iVar2;
    if (iVar2 != 0) {
      iVar2 = fn_8265C940(*(int *)(param_1 + 0x30) << 2,0x24870000);
      *(int *)(param_1 + 0x74) = iVar2;
      if (iVar2 != 0) {
        iVar2 = 0;
        if (*(short *)(param_1 + 0x5c) != 0) {
          piVar12 = (int *)(param_1 + 0x7c);
          do {
            iVar3 = fn_8265C940(*(int *)(param_1 + 0xd4) << 1,0x24870000);
            *piVar12 = iVar3;
            if (iVar3 == 0) {
              return 0xffffffffffffffbf;
            }
            iVar2 = iVar2 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x5c));
        }
        uVar1 = *(ushort *)(param_1 + 0x5e);
        if ((*(ushort *)(param_1 + 0x3e) & 0xf0) == 0x40) {
          uVar5 = (ulonglong)uVar1 << 2;
        }
        else {
          uVar5 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x5c) * (longlong)(int)(uint)uVar1;
        }
        iVar2 = fn_8265C940((ulonglong)uVar1 << 6,0x24870000);
        *(int *)(param_1 + 200) = iVar2;
        if (iVar2 != 0) {
          iVar2 = fn_8265C940((uVar5 & 0x3ffffff) << 6,0x24870000);
          *(int *)(param_1 + 0xcc) = iVar2;
          if (iVar2 != 0) {
            *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x2c);
            iVar2 = fn_8265C940((ulonglong)*(uint *)(param_1 + 0x2c) + 1,0x24870000);
            *(int *)(param_1 + 0x6c) = iVar2;
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 0xe0);
              *(undefined4 *)(iVar2 + 0x5c) = 0;
              *(undefined4 *)(iVar2 + 0x60) = 0;
              *(undefined4 *)(iVar2 + 100) = 0;
              iVar2 = *(int *)(param_1 + 0xe0);
              if (*(int *)(iVar2 + 0x30) != 0) {
                iVar3 = 2;
                do {
                  if (iVar3 == 2) {
                    iVar8 = 0x3c;
                    do {
                      if (*(int *)(iVar2 + iVar8) != 0) goto LAB_82aabf6c;
                      iVar8 = iVar8 + 4;
                    } while (iVar8 < 0x45);
                  }
                  else if (*(int *)((iVar3 + 0xd) * 4 + iVar2) != 0) {
LAB_82aabf6c:
                    uVar4 = fn_8265C940(((longlong)
                                               (int)((uint)*(ushort *)(param_1 + 0x5c) *
                                                    (*(int *)(param_1 + 0xd4) >> 2)) *
                                               (longlong)(*(int *)(param_1 + 0xd0) >> 2) &
                                              0x3fffffffU) << 2,0x24870000);
                    iVar8 = (iVar3 + 0x15) * 4;
                    *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xe0)) = uVar4;
                    iVar2 = *(int *)(param_1 + 0xe0);
                    if (*(int *)(iVar8 + iVar2) == 0) {
                      return 0xffffffffffffffbf;
                    }
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < 5);
              }
              if (*(int *)(iVar2 + 0x30) != 0) {
                *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar2 + 0x5c);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 0xffffffffffffffbf;
}

