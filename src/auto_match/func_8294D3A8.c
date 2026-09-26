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
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82975B00();
extern int fn_82BA02A8();
extern int fn_82F68CC0();


longlong fn_8294D3A8(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar8;
  longlong lVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  puVar1 = *(uint **)(param_1 + 0x104);
  uVar12 = *puVar1 & 0xfff00000;
  if (((((uVar12 == 0x50000000) || (uVar12 == 0x10500000)) || (uVar12 == 0x10600000)) ||
      ((uVar12 == 0x10300000 || (uVar12 == 0x10700000)))) && (puVar1[3] == 1)) {
    bVar6 = false;
    iVar8 = *(int *)(param_1 + 0x14);
    iVar15 = *(int *)(*(int *)puVar1[4] * 4 + iVar8);
    iVar14 = *(int *)(iVar15 + 0x54);
    if (iVar14 != -1) {
      uVar12 = 0;
      uVar11 = 0;
      puVar3 = *(uint **)(iVar14 * 4 + *(int *)(param_1 + 0x18));
      if (puVar3[3] != 0) {
        iVar13 = 0;
        do {
          uVar9 = *(uint *)(*(int *)(*(int *)(iVar13 + puVar3[4]) * 4 + iVar8) + 0x4c);
          if (uVar12 < uVar9) {
            uVar12 = uVar9;
          }
          uVar11 = uVar11 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar11 < puVar3[3]);
      }
      iVar13 = *(int *)(*(int *)puVar3[4] * 4 + iVar8);
      if (((*(int *)(iVar13 + 4) == *(int *)(iVar15 + 4)) &&
          (*(int *)(iVar13 + 0xc) == *(int *)(iVar15 + 0xc))) &&
         ((*(int *)(iVar13 + 8) == *(int *)(iVar15 + 8) && (iVar14 != *(int *)(iVar15 + 0x58))))) {
        bVar6 = true;
      }
      if ((((uVar12 <= *(uint *)(param_1 + 0x100)) &&
           ((bVar6 || (iVar14 == *(int *)(iVar15 + 0x58))))) &&
          (((*(uint *)(param_1 + 0x6c) & 0x40000000) == 0 ||
           ((puVar3[3] != 0 &&
            (*(int *)(*(int *)(*(int *)puVar3[4] * 4 + iVar8) + 4) != *(int *)(param_1 + 0x84)))))))
         && (((*puVar3 & 0xfff00000) == 0x10000000 &&
             ((*(uint *)(*(int *)(*(int *)(iVar13 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 4) ==
              0)))) {
        uVar12 = 0;
        if (puVar3[1] != 0) {
          iVar14 = 0;
          do {
            if (*(int *)(iVar14 + puVar3[2]) != *(int *)puVar1[4]) {
              return 1;
            }
            uVar12 = uVar12 + 1;
            iVar14 = iVar14 + 4;
          } while (uVar12 < puVar3[1]);
        }
        if (*(int *)(*(int *)(*(int *)puVar3[2] * 4 + iVar8) + 0x3c) == 0) {
          iVar8 = fn_82963998(0x74);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = fn_829632A0();
          }
          if (iVar8 != 0) {
            lVar7 = fn_82963A30(iVar8,**(undefined4 **)(param_1 + 0x104),
                                      (*(undefined4 **)(param_1 + 0x104))[1],
                                      (ulonglong)bVar6 + (ulonglong)puVar3[3],1);
            if (lVar7 < 0) {
              fn_82BA02A8(iVar8);
              fn_829639F0(iVar8);
              return lVar7;
            }
            fn_82F68CC0(*(undefined4 *)(iVar8 + 0x10),puVar3[4],puVar3[3] << 2);
            if (bVar6) {
              *(undefined4 *)(puVar3[3] * 4 + *(int *)(iVar8 + 0x10)) =
                   **(undefined4 **)(*(int *)(param_1 + 0x104) + 0x10);
            }
            uVar12 = *(uint *)(iVar8 + 0xc);
            uVar11 = 0;
            if (uVar12 != 0) {
              iVar14 = 0;
              uVar9 = 1;
              do {
                uVar10 = uVar9;
                iVar15 = iVar14;
                if (uVar9 < uVar12) {
                  do {
                    iVar15 = iVar15 + 4;
                    iVar13 = *(int *)(*(int *)(iVar14 + *(int *)(iVar8 + 0x10)) * 4 +
                                     *(int *)(param_1 + 0x14));
                    iVar4 = *(int *)(*(int *)(iVar15 + *(int *)(iVar8 + 0x10)) * 4 +
                                    *(int *)(param_1 + 0x14));
                    if (*(uint *)(iVar4 + 0x10) < *(uint *)(iVar13 + 0x10)) {
                      iVar2 = *(int *)(iVar8 + 0x10);
                      uVar5 = *(undefined4 *)(iVar15 + iVar2);
                      *(undefined4 *)(iVar15 + iVar2) = *(undefined4 *)(iVar14 + iVar2);
                      *(undefined4 *)(iVar14 + *(int *)(iVar8 + 0x10)) = uVar5;
                    }
                    if (*(int *)(iVar13 + 0x10) == *(int *)(iVar4 + 0x10)) {
                      fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),
                                        0x12d6,0xffffffff82037830);
                      fn_82BA02A8(puVar3);
                      fn_829639F0(puVar3);
                      return -0x7fffbffb;
                    }
                    uVar12 = *(uint *)(iVar8 + 0xc);
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar12);
                }
                uVar11 = uVar11 + 1;
                uVar9 = uVar9 + 1;
                iVar14 = iVar14 + 4;
              } while (uVar11 < uVar12);
            }
            fn_82F68CC0(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(*(int *)(param_1 + 0x104) + 8),
                         *(int *)(*(int *)(param_1 + 0x104) + 4) << 2);
            iVar14 = *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18));
            if (iVar14 != 0) {
              fn_82BA02A8(iVar14);
              fn_829639F0(iVar14);
            }
            *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18)) = iVar8;
            *puVar3 = 0;
            return 0;
          }
          return -0x7ff8fff2;
        }
      }
    }
  }
  return 1;
}

