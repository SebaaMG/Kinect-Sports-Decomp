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
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_8296CF68();
extern unsigned int lbl_82005710;


undefined8 fn_8296DE50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  uVar9 = 0;
  uVar8 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    iVar11 = 0;
    do {
      uVar13 = *(uint *)(*(int *)(iVar11 + *(int *)(param_1 + 0x14)) + 0xc);
      if ((uVar9 < uVar13) && (uVar13 != 0xffffffff)) {
        uVar9 = (ulonglong)uVar13;
      }
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar8 < *(uint *)(param_1 + 8));
  }
  lVar12 = uVar9 + 1;
  uVar8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar11 = 0;
    uVar4 = lbl_82005710;
    do {
      uVar7 = 0;
      iVar1 = *(int *)(iVar11 + *(int *)(param_1 + 0x18));
      uVar10 = (ulonglong)*(uint *)(iVar1 + 0xc);
      uVar9 = uVar10;
      if (uVar10 != 0) {
        iVar5 = 0;
        do {
          iVar14 = *(int *)(*(int *)(iVar5 + *(int *)(iVar1 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
          ;
          if ((*(int *)(iVar14 + 0x44) == -1) &&
             ((*(uint *)(*(int *)(*(int *)(iVar14 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x20)
              != 0)) {
            uVar9 = uVar9 - 1;
          }
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 4;
        } while ((uVar7 & 0xffffffff) < uVar10);
      }
      if ((uVar9 & 0xffffffff) != uVar10) {
        iVar5 = 0;
        if ((uVar9 & 0xffffffff) != 0) {
          iVar5 = fn_829646C8(param_1,uVar9 & 0xffffffff000fffff | 0x10000000,uVar9);
          if (iVar5 == -1) {
            return 0xffffffff8007000e;
          }
          iVar5 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x18));
          fn_829632F0(iVar5,iVar1);
        }
        uVar13 = 0;
        if (*(int *)(iVar1 + 0xc) != 0) {
          iVar15 = 0;
          iVar14 = 0;
          do {
            iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + iVar15) * 4 +
                            *(int *)(param_1 + 0x14));
            iVar3 = *(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10));
            uVar6 = fn_82964628(uVar4,param_1,*(undefined4 *)(param_1 + 0x88),lVar12,
                                  *(undefined4 *)(iVar2 + 0x10));
            if ((*(int *)(iVar2 + 0x44) != -1) || ((*(uint *)(iVar3 + 4) & 0x20) == 0)) {
              *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar14) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar15);
              *(undefined4 *)(*(int *)(iVar5 + 8) + iVar14) = uVar6;
              iVar14 = iVar14 + 4;
            }
            uVar13 = uVar13 + 1;
            *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar15) = uVar6;
            iVar15 = iVar15 + 4;
          } while (uVar13 < *(uint *)(iVar1 + 0xc));
        }
        lVar12 = lVar12 + 1;
      }
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar8 < *(uint *)(param_1 + 0xc));
  }
  uVar4 = fn_8296CF68(param_1);
  if (-1 < (int)uVar4) {
    uVar8 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar11 = 0;
      do {
        iVar1 = *(int *)(iVar11 + *(int *)(param_1 + 0x14));
        if ((*(int *)(iVar1 + 0x48) == -1) && (*(int *)(iVar1 + 0x54) == -1)) {
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x74);
        }
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar8 < *(uint *)(param_1 + 8));
    }
    uVar4 = 0;
  }
  return uVar4;
}

