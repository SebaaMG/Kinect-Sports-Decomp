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
extern int fn_82963318();


bool fn_8296C668(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int *apiStack_40 [16];
  
  bVar5 = false;
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = 0;
    do {
      uVar10 = uVar10 + 1;
      piVar4 = (int *)(iVar9 + *(int *)(param_1 + 0x14));
      iVar9 = iVar9 + 4;
      *(undefined4 *)(*piVar4 + 0x30) = 0xffffffff;
    } while (uVar10 < *(uint *)(param_1 + 8));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar9 = 0;
    bVar5 = false;
    do {
      puVar1 = *(uint **)(iVar9 + *(int *)(param_1 + 0x18));
      if ((*puVar1 & 0xfff00000) != 0) {
        lVar12 = 0;
        while (uVar6 = fn_82963318(puVar1,lVar12,apiStack_40), (uVar6 & 0xffffffff) != 0) {
          if (*(int *)(*(int *)(*apiStack_40[0] * 4 + *(int *)(param_1 + 0x14)) + 0x30) != -1) {
            uVar8 = 1;
            piVar4 = apiStack_40[0];
            if (1 < (uVar6 & 0xffffffff)) {
              do {
                iVar11 = piVar4[1] * 4;
                if ((*(int *)(*(int *)(iVar11 + *(int *)(param_1 + 0x14)) + 0x30) == -1) ||
                   (iVar2 = *(int *)(param_1 + 0x14),
                   *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + *apiStack_40[0] * 4) + 0x30) * 4 +
                                    iVar2) + 0xc) !=
                   *(int *)(*(int *)(*(int *)(*(int *)(iVar11 + iVar2) + 0x30) * 4 + iVar2) + 0xc)))
                break;
                uVar8 = uVar8 + 1;
                piVar4 = piVar4 + 1;
              } while ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff));
              if ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff)) goto LAB_8296c7b8;
            }
            if ((uVar6 & 0xffffffff) != 0) {
              iVar11 = 0;
              do {
                *(undefined4 *)(iVar11 + (int)apiStack_40[0]) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(iVar11 + (int)apiStack_40[0]) * 4 +
                               *(int *)(param_1 + 0x14)) + 0x30);
                iVar11 = iVar11 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            bVar5 = true;
          }
LAB_8296c7b8:
          lVar12 = lVar12 + 1;
        }
        if (((*puVar1 & 0xfff00000) == 0x10000000) && (uVar7 = 0, puVar1[3] != 0)) {
          iVar11 = 0;
          do {
            iVar2 = *(int *)(*(int *)(iVar11 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
            iVar3 = *(int *)(*(int *)(iVar11 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
            if (((((*(int *)(iVar2 + 4) == *(int *)(iVar3 + 4)) &&
                  (*(int *)(iVar2 + 8) == *(int *)(iVar3 + 8))) &&
                 (*(int *)(iVar2 + 0x10) == *(int *)(iVar3 + 0x10))) &&
                ((*(int *)(iVar2 + 0x14) == *(int *)(iVar3 + 0x14) &&
                 (*(int *)(iVar2 + 0x18) == *(int *)(iVar3 + 0x18))))) &&
               ((*(int *)(iVar3 + 0x38) == -1 && (*(int *)(iVar2 + 0x3c) == 0)))) {
              *(int *)(iVar3 + 0x30) = *(int *)(iVar11 + puVar1[4]);
            }
            uVar7 = uVar7 + 1;
            iVar11 = iVar11 + 4;
          } while (uVar7 < puVar1[3]);
        }
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar10 < *(uint *)(param_1 + 0xc));
  }
  return !bVar5;
}

