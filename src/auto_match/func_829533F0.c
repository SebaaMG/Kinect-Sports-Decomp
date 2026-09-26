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
extern unsigned int *auStack_60;
extern int fn_82F68CC0();


uint * fn_829533F0(int param_1,uint param_2,int param_3,uint *param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 auStack_60 [24];
  
  iVar10 = *(int *)(**(int **)(param_3 + 0x10) * 4 + *(int *)(param_1 + 0x14));
  uVar1 = *(uint *)(iVar10 + 0x54);
  uVar8 = *(uint *)(iVar10 + 0x48);
  if (uVar1 != 0xffffffff) {
    uVar13 = 0;
    if (*(uint *)(param_3 + 4) != 0) {
      iVar10 = 0;
      do {
        iVar11 = *(int *)(*(int *)(iVar10 + *(int *)(param_3 + 8)) * 4 + *(int *)(param_1 + 0x14));
        if (((*(int *)(param_1 + 0x88) == *(int *)(iVar11 + 4)) &&
            (uVar2 = *(uint *)(iVar11 + 0x50), uVar8 < uVar2)) && (uVar2 < uVar1)) {
          return (uint *)0x0;
        }
        uVar13 = uVar13 + 1;
        iVar10 = iVar10 + 4;
      } while (uVar13 < *(uint *)(param_3 + 4));
    }
    puVar3 = *(uint **)(uVar1 * 4 + *(int *)(param_1 + 0x18));
    uVar13 = *puVar3;
    if (param_2 == uVar13) {
      uVar2 = *(uint *)(param_3 + 0xc);
      uVar6 = 0;
      if (uVar2 != 0) {
        iVar10 = 0;
        do {
          iVar11 = *(int *)(*(int *)(iVar10 + *(int *)(param_3 + 0x10)) * 4 +
                           *(int *)(param_1 + 0x14));
          if (*(uint *)(iVar11 + 0x54) != uVar1) {
            return (uint *)0x0;
          }
          if (*(uint *)(iVar11 + 0x58) != uVar1) {
            return (uint *)0x0;
          }
          iVar5 = param_6;
          if (uVar2 == 1) {
            iVar5 = (param_2 & 0xfffff) * param_6;
          }
          if (*(int *)(iVar11 + 0x5c) != iVar5) {
            return (uint *)0x0;
          }
          uVar6 = uVar6 + 1;
          iVar10 = iVar10 + 4;
        } while (uVar6 < uVar2);
      }
      uVar2 = uVar13 & 0xfffff;
      if ((puVar3[3] == uVar2) && (uVar6 = puVar3[1], uVar6 <= uVar2 * param_5)) {
        uVar9 = 0;
        if (uVar6 != 0) {
          iVar10 = 0;
          do {
            iVar11 = *(int *)(*(int *)(iVar10 + puVar3[2]) * 4 + *(int *)(param_1 + 0x14));
            if ((*(int *)(param_1 + 0x88) == *(int *)(iVar11 + 4)) &&
               (uVar8 < *(uint *)(iVar11 + 0x48))) {
              return (uint *)0x0;
            }
            uVar9 = uVar9 + 1;
            iVar10 = iVar10 + 4;
          } while (uVar9 < uVar6);
        }
        uVar8 = 0;
        if (uVar6 != 0) {
          iVar10 = 0;
          do {
            if (*(int *)(iVar10 + puVar3[2]) == **(int **)(param_3 + 0x10)) break;
            uVar8 = uVar8 + 1;
            iVar10 = iVar10 + 4;
          } while (uVar8 < uVar6);
        }
        if (uVar8 != uVar6) {
          if ((uVar2 <= uVar8) && ((uVar13 & 0xfffff) != 0)) {
            iVar11 = 0;
            iVar10 = (uVar13 & 0xfffff) << 2;
            uVar8 = uVar2;
            do {
              uVar6 = puVar3[2];
              uVar4 = *(undefined4 *)(iVar11 + uVar6);
              *(undefined4 *)(iVar11 + uVar6) = *(undefined4 *)(iVar10 + uVar6);
              iVar11 = iVar11 + 4;
              *(undefined4 *)(iVar10 + puVar3[2]) = uVar4;
              iVar10 = iVar10 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (1 < *(uint *)(param_3 + 0xc)) {
            puVar14 = *(undefined4 **)(param_3 + 8);
            puVar12 = puVar14 + *(int *)(param_3 + 4);
            if (puVar14 < puVar12) {
              do {
                if ((uVar13 & 0xfffff) != 0) {
                  uVar8 = puVar3[2];
                  iVar10 = *(int *)(param_3 + 0x10);
                  puVar7 = puVar14;
                  uVar6 = uVar2;
                  do {
                    uVar9 = 0;
                    iVar11 = 0;
                    do {
                      if (*(int *)(iVar11 + iVar10) ==
                          *(int *)((uVar8 - (int)puVar14) + (int)puVar7)) {
                        auStack_60[uVar9] = *puVar7;
                        break;
                      }
                      uVar9 = uVar9 + 1;
                      iVar11 = iVar11 + 4;
                    } while (uVar9 < uVar2);
                    puVar7 = puVar7 + 1;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                fn_82F68CC0(puVar14,auStack_60,(uVar13 & 0xfffff) * 4);
                puVar14 = puVar14 + (uVar13 & 0xfffff);
              } while (puVar14 < puVar12);
            }
          }
          if (param_4 != (uint *)0x0) {
            *param_4 = uVar1;
            return puVar3;
          }
          return puVar3;
        }
      }
    }
  }
  return (uint *)0x0;
}

