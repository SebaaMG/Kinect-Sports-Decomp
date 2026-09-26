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


undefined8 fn_82960C48(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar8 = 0xffffffff;
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    uVar10 = 0xffffffff;
    do {
      iVar7 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
      uVar11 = uVar10;
      if (((*(uint *)(*(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x10) != 0
          ) && (((iVar7 = *(int *)(iVar7 + 0x6c), iVar7 == 0x11 || (iVar7 == 0x12)) &&
                (puVar2 = *(uint **)(iVar5 + *(int *)(param_1 + 0x14)), uVar9 = *puVar2,
                *puVar2 = uVar9 & 0x40000000, (uVar9 & 0x40000000) == 0)))) {
        iVar3 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
        iVar7 = *(int *)(iVar3 + 0x6c);
        uVar9 = uVar8;
        if ((iVar7 != 0x11) || (uVar9 = uVar4, uVar8 == 0xffffffff)) {
          uVar8 = uVar9;
          if ((iVar7 == 0x12) && (uVar11 = uVar4, uVar10 != 0xffffffff)) {
            *(undefined4 *)(*(int *)(iVar5 + *(int *)(param_1 + 0x14)) + 0xc) =
                 *(undefined4 *)(*(int *)(uVar10 * 4 + *(int *)(param_1 + 0x14)) + 0xc);
            uVar11 = uVar10;
          }
          else {
            uVar9 = 0xffffffff;
            uVar10 = *(uint *)(iVar3 + 0xc);
            uVar6 = 0;
            if (*(int *)(param_1 + 8) != 0) {
              iVar7 = 0;
              do {
                if (((*(int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x14)) + 4) ==
                      *(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x14)) + 4)) &&
                    (iVar3 = *(int *)(iVar7 + *(int *)(param_1 + 0x14)),
                    (*(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                    0x10) != 0)) && (uVar1 = *(uint *)(iVar3 + 0xc), uVar10 < uVar1)) {
                  if ((int)uVar9 <= (int)uVar1) {
                    uVar9 = uVar1;
                  }
                  iVar3 = *(int *)(iVar7 + *(int *)(param_1 + 0x14));
                  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
                }
                uVar6 = uVar6 + 1;
                iVar7 = iVar7 + 4;
              } while (uVar6 < *(uint *)(param_1 + 8));
              if (uVar9 != 0xffffffff) {
                *(uint *)(*(int *)(iVar5 + *(int *)(param_1 + 0x14)) + 0xc) = uVar9;
              }
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
      uVar10 = uVar11;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  return 0;
}

