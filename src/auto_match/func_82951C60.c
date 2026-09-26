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
extern int fn_829632F0();
extern int fn_829640A0();
extern int fn_82964588();
extern int fn_82964628();
extern int fn_829646C8();


undefined8 fn_82951C60(int param_1,ulonglong param_2,ulonglong param_3,int param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  if (*(int *)(param_4 + 0x30) == -1) {
    puVar3 = *(uint **)(*(int *)(param_1 + 0x10) + *(int *)(param_4 + 4) * 4);
    if ((puVar3[1] & 0x800) != 0) {
      param_2 = (ulonglong)*puVar3;
    }
    uVar6 = fn_82964588(param_1,param_2,puVar3[1] | param_3 | 0x40,0xffffffffffffffff,4);
    if ((int)uVar6 == -1) {
      return 0xffffffff8007000e;
    }
    if ((puVar3[1] & 0x100) != 0) {
      iVar7 = 1;
      if ((*(uint *)(param_4 + 0x3c) & 0x80000) != 0) {
        iVar7 = -1;
      }
      iVar7 = fn_82964628(*(double *)(param_4 + 0x20) * (double)(longlong)iVar7,param_1,uVar6,
                                *(undefined4 *)(param_4 + 100),0);
      *(int *)(param_4 + 0x30) = iVar7;
      if (iVar7 != -1) {
        *param_5 = iVar7;
        fn_829640A0(*(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_4 + 0x30) * 4),
                     param_4);
        return 0;
      }
      return 0xffffffff8007000e;
    }
    uVar1 = *(uint *)(param_1 + 8);
    bVar5 = false;
    uVar14 = 0;
    if (uVar1 != 0) {
      iVar7 = 0;
      bVar5 = false;
      do {
        iVar13 = *(int *)(iVar7 + *(int *)(param_1 + 0x14));
        if (((((*(int *)(iVar13 + 4) == *(int *)(param_4 + 4)) &&
              (*(int *)(iVar13 + 0x60) == *(int *)(param_4 + 0x60))) &&
             (*(int *)(iVar13 + 0x60) != 0)) && (*(int *)(iVar13 + 8) == -1)) || (param_4 == iVar13)
           ) {
          iVar8 = fn_82964628(*(undefined8 *)(iVar13 + 0x20),param_1,uVar6,
                                    *(undefined4 *)(iVar13 + 100),0);
          *(int *)(iVar13 + 0x30) = iVar8;
          if (iVar8 == -1) {
            return 0xffffffff8007000e;
          }
          iVar8 = *(int *)(iVar8 * 4 + *(int *)(param_1 + 0x14));
          fn_829640A0(iVar8,iVar13);
          *(int *)(iVar8 + 0x70) = *(int *)(iVar8 + 100) << 2;
          if (*(int *)(iVar13 + 0x44) != -1) {
            bVar5 = true;
          }
        }
        uVar14 = uVar14 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar14 < uVar1);
    }
    iVar7 = *(int *)(param_1 + 0xe4);
    if ((iVar7 != 0) && (bVar5)) {
      if ((param_3 & 0x2000) == 0) {
        iVar7 = *(int *)(iVar7 + 0xb8);
      }
      else {
        iVar7 = *(int *)(iVar7 + 0xb4);
      }
      if (iVar7 == -1) {
        return 0xffffffff8007000e;
      }
      uVar14 = 0;
      if (uVar1 != 0) {
        iVar13 = 0;
        do {
          iVar8 = *(int *)(iVar13 + *(int *)(param_1 + 0x14));
          if ((((*(int *)(iVar8 + 4) == *(int *)(param_4 + 4)) &&
               (*(int *)(iVar8 + 0x60) == *(int *)(param_4 + 0x60))) &&
              ((*(int *)(iVar8 + 0x60) != 0 && (*(int *)(iVar8 + 8) == -1)))) || (param_4 == iVar8))
          {
            iVar9 = fn_82964628(*(undefined8 *)(iVar8 + 0x20),*(undefined4 *)(param_1 + 0xe4),
                                      iVar7,*(undefined4 *)(iVar8 + 100),0);
            if (iVar9 == -1) {
              return 0xffffffff8007000e;
            }
            iVar10 = *(int *)(iVar8 + 0x44);
            if (iVar10 != -1) {
              iVar2 = *(int *)(param_1 + 0xe4);
              iVar12 = *(int *)(*(int *)(iVar10 * 4 + *(int *)(iVar2 + 0x14)) + 0x48);
              if ((iVar12 != -1) &&
                 (puVar3 = *(uint **)(*(int *)(iVar2 + 0x18) + iVar12 * 4),
                 (*puVar3 & 0xfff00000) == 0x10000000)) {
                uVar11 = 0;
                if (puVar3[3] != 0) {
                  iVar12 = 0;
                  do {
                    if (*(int *)(iVar12 + puVar3[4]) == iVar10) break;
                    uVar11 = uVar11 + 1;
                    iVar12 = iVar12 + 4;
                  } while (uVar11 < puVar3[3]);
                }
                uVar4 = *(undefined4 *)(uVar11 * 4 + puVar3[2]);
                iVar10 = fn_829646C8(iVar2,0x10000001,1,1);
                if (iVar10 == -1) {
                  return 0xffffffff8007000e;
                }
                iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0xe4) + 0x18) + iVar10 * 4);
                fn_829632F0(iVar10,puVar3);
                **(int **)(iVar10 + 0x10) = iVar9;
                **(undefined4 **)(iVar10 + 8) = uVar4;
                *(int *)(*(int *)(*(int *)(iVar8 + 0x30) * 4 + *(int *)(param_1 + 0x14)) + 0x44) =
                     iVar9;
              }
            }
          }
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar14 < uVar1);
      }
    }
  }
  *param_5 = *(int *)(param_4 + 0x30);
  return 0;
}

