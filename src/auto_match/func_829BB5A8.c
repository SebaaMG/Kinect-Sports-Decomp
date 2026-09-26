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
extern int fn_829B7828();


undefined8 fn_829BB5A8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar8;
  undefined8 uVar7;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar18;
  longlong lVar17;
  int iVar19;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  uVar18 = *(int *)(param_1 + 0x160) - 1;
  iVar2 = *(int *)(param_1 + 0x144);
  iVar11 = *(int *)(iVar1 + 0x18);
  if (iVar11 < *(int *)(iVar1 + 0x1c)) {
    do {
      for (uVar12 = *(uint *)(iVar1 + 0x14); uVar12 <= uVar18; uVar12 = uVar12 + 1) {
        fn_829B7828(*(undefined4 *)(iVar1 + 0x20),*(int *)(param_1 + 0x168) << 7);
        iVar8 = (**(code **)(*(int *)(param_1 + 0x1c0) + 4))(param_1,iVar1 + 0x20);
        if (iVar8 == 0) {
          *(int *)(iVar1 + 0x18) = iVar11;
          *(uint *)(iVar1 + 0x14) = uVar12;
          return 0;
        }
        iVar13 = 0;
        iVar8 = 0;
        if (0 < *(int *)(param_1 + 0x14c)) {
          piVar10 = (int *)(param_1 + 0x150);
          do {
            iVar3 = *piVar10;
            if (*(int *)(iVar3 + 0x30) == 0) {
              iVar13 = *(int *)(iVar3 + 0x3c) + iVar13;
            }
            else {
              iVar19 = *(int *)(iVar3 + 4) * 4;
              pcVar4 = *(code **)(*(int *)(param_1 + 0x1c4) + iVar19 + 4);
              if (uVar12 < uVar18) {
                iVar15 = *(int *)(iVar3 + 0x34);
              }
              else {
                iVar15 = *(int *)(iVar3 + 0x44);
              }
              iVar14 = 0;
              uVar9 = (ulonglong)*(uint *)(iVar3 + 0x24);
              iVar5 = *(int *)(iVar3 + 0x40);
              lVar16 = ((longlong)(int)*(uint *)(iVar3 + 0x24) * (longlong)iVar11 & 0x3fffffffU) * 4
                       + (ulonglong)*(uint *)(iVar19 + param_2);
              if (0 < *(int *)(iVar3 + 0x38)) {
                do {
                  if (((*(uint *)(param_1 + 0x98) < iVar2 - 1U) ||
                      (iVar14 + iVar11 < *(int *)(iVar3 + 0x48))) && (iVar19 = 0, 0 < iVar15)) {
                    lVar17 = (longlong)iVar5 * (longlong)(int)uVar12;
                    do {
                      (*pcVar4)(param_1,iVar3,*(undefined4 *)((iVar13 + 8 + iVar19) * 4 + iVar1),
                                lVar16,lVar17);
                      uVar9 = (ulonglong)*(uint *)(iVar3 + 0x24);
                      iVar19 = iVar19 + 1;
                      lVar17 = uVar9 + lVar17;
                    } while (iVar19 < iVar15);
                  }
                  iVar14 = iVar14 + 1;
                  iVar13 = *(int *)(iVar3 + 0x34) + iVar13;
                  lVar16 = (uVar9 & 0x3fffffff) * 4 + lVar16;
                } while (iVar14 < *(int *)(iVar3 + 0x38));
              }
            }
            iVar8 = iVar8 + 1;
            piVar10 = piVar10 + 1;
          } while (iVar8 < *(int *)(param_1 + 0x14c));
        }
      }
      iVar11 = iVar11 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
    } while (iVar11 < *(int *)(iVar1 + 0x1c));
  }
  uVar18 = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(uint *)(param_1 + 0x98) = uVar18;
  if (uVar18 < *(uint *)(param_1 + 0x144)) {
    iVar1 = *(int *)(param_1 + 0x1b0);
    if (*(int *)(param_1 + 0x14c) < 2) {
      if (uVar18 < *(uint *)(param_1 + 0x144) - 1) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x150) + 0xc);
        uVar7 = 3;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = uVar6;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x150) + 0x48);
        uVar7 = 3;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = uVar6;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      uVar7 = 3;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 1;
    }
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x1b8) + 0xc))(param_1);
    uVar7 = 4;
  }
  return uVar7;
}

