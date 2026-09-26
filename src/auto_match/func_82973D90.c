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
extern int fn_8296CF68();


bool fn_82973D90(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *apiStack_60 [24];
  
  bVar3 = false;
  uVar10 = 0;
  uVar9 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    iVar12 = 0;
    do {
      iVar6 = *(int *)(iVar12 + *(int *)(param_1 + 0x14));
      if ((*(int *)(param_1 + 0x88) == *(int *)(iVar6 + 4)) &&
         (uVar11 = *(uint *)(iVar6 + 0xc), uVar10 <= uVar11)) {
        uVar10 = uVar11 + 1;
      }
      uVar9 = uVar9 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar9 < *(uint *)(param_1 + 8));
  }
  fn_8296CF68(param_1);
  uVar11 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar12 = 0;
    do {
      puVar2 = *(uint **)(iVar12 + *(int *)(param_1 + 0x18));
      if ((*puVar2 & 0xfff00000) != 0) {
        uVar14 = (ulonglong)*puVar2 & 0xfffff;
        uVar13 = puVar2[1] / uVar14;
        trapWord(6,uVar14,0);
        puVar2[9] = 0;
        uVar14 = 0;
        if ((int)uVar13 != 0) {
          do {
            uVar4 = fn_82963318(puVar2,uVar14,apiStack_60);
            iVar6 = *(int *)(*apiStack_60[0] * 4 + *(int *)(param_1 + 0x14));
            if (*(int *)(param_1 + 0x88) == *(int *)(iVar6 + 4)) {
              uVar5 = 1;
              piVar1 = apiStack_60[0];
              if (1 < (uVar4 & 0xffffffff)) {
                do {
                  iVar7 = *(int *)(piVar1[1] * 4 + *(int *)(param_1 + 0x14));
                  if ((*(int *)(param_1 + 0x88) == *(int *)(iVar7 + 4)) &&
                     (*(int *)(iVar7 + 0x48) != *(int *)(iVar6 + 0x48))) break;
                  uVar5 = uVar5 + 1;
                  piVar1 = piVar1 + 1;
                } while ((uVar5 & 0xffffffff) < (uVar4 & 0xffffffff));
              }
              if (((uVar5 & 0xffffffff) != (uVar4 & 0xffffffff)) && ((uVar4 & 0xffffffff) != 0)) {
                iVar6 = 0;
                do {
                  iVar7 = *(int *)(*(int *)(iVar6 + (int)apiStack_60[0]) * 4 +
                                  *(int *)(param_1 + 0x14));
                  if (*(int *)(param_1 + 0x88) == *(int *)(iVar7 + 4)) {
                    *(undefined4 *)
                     (*(int *)(*(int *)(iVar7 + 0x48) * 4 + *(int *)(param_1 + 0x18)) + 0x24) = 1;
                  }
                  iVar6 = iVar6 + 4;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
            }
            uVar14 = uVar14 + 1;
          } while ((uVar14 & 0xffffffff) < uVar13);
        }
      }
      uVar9 = *(uint *)(param_1 + 0xc);
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar11 < uVar9);
  }
  uVar11 = 0;
  if (uVar9 != 0) {
    iVar12 = 0;
    bVar3 = false;
    do {
      puVar2 = *(uint **)(iVar12 + *(int *)(param_1 + 0x18));
      if (((*puVar2 & 0xfff00000) != 0) && (puVar2[9] == 0)) {
        piVar1 = (int *)puVar2[4];
        iVar6 = *(int *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x88) == *(int *)(*(int *)(*piVar1 * 4 + iVar6) + 4)) {
          uVar9 = puVar2[3];
          if (param_2 == 0) {
            uVar8 = 0;
            if (uVar9 != 0) {
              iVar7 = 0;
              do {
                if (*(int *)(*(int *)(*(int *)(iVar7 + (int)piVar1) * 4 + iVar6) + 0x10) == 0)
                break;
                uVar8 = uVar8 + 1;
                iVar7 = iVar7 + 4;
              } while (uVar8 < uVar9);
            }
            if (uVar9 <= uVar8) {
              uVar8 = 0;
              if (uVar9 != 0) {
                iVar6 = 0;
                do {
                  uVar8 = uVar8 + 1;
                  piVar1 = (int *)(iVar6 + puVar2[4]);
                  iVar6 = iVar6 + 4;
                  *(uint *)(*(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14)) + 0xc) = uVar10;
                } while (uVar8 < puVar2[3]);
              }
              goto LAB_829740b4;
            }
          }
          else {
            uVar8 = 0;
            if (uVar9 != 0) {
              iVar7 = 0;
              do {
                if (uVar8 != *(uint *)(*(int *)(*(int *)(iVar7 + (int)piVar1) * 4 + iVar6) + 0x10))
                break;
                uVar8 = uVar8 + 1;
                iVar7 = iVar7 + 4;
              } while (uVar8 < uVar9);
            }
            if (uVar8 != uVar9) {
              uVar8 = 0;
              if (uVar9 != 0) {
                iVar6 = 0;
                do {
                  *(uint *)(*(int *)(*(int *)(iVar6 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14)) +
                           0xc) = uVar10;
                  piVar1 = (int *)(iVar6 + puVar2[4]);
                  iVar6 = iVar6 + 4;
                  *(uint *)(*(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14)) + 0x10) = uVar8;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < puVar2[3]);
              }
LAB_829740b4:
              uVar10 = uVar10 + 1;
              bVar3 = true;
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar11 < *(uint *)(param_1 + 0xc));
  }
  return !bVar3;
}

