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
extern unsigned int uStack_74;


undefined8 fn_829BB848(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar3;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  undefined4 uStack_74;
  int aiStack_70 [28];
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  iVar18 = 0;
  if (0 < *(int *)(param_1 + 0x14c)) {
    piVar17 = (int *)(param_1 + 0x14c);
    puVar15 = &uStack_74;
    do {
      piVar17 = piVar17 + 1;
      iVar13 = *(int *)(*piVar17 + 0xc);
      uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)((*(int *)(*piVar17 + 4) + 0x12) * 4 + iVar1),
                         (longlong)*(int *)(param_1 + 0x98) * (longlong)iVar13,iVar13,1);
      iVar13 = *(int *)(param_1 + 0x14c);
      puVar15 = puVar15 + 1;
      *puVar15 = uVar4;
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar13);
  }
  iVar18 = *(int *)(iVar1 + 0x18);
  if (iVar18 < *(int *)(iVar1 + 0x1c)) {
    iVar13 = iVar18 << 2;
    do {
      uVar14 = *(uint *)(iVar1 + 0x14);
      if (uVar14 < *(uint *)(param_1 + 0x160)) {
        do {
          iVar6 = 0;
          iVar16 = 0;
          if (0 < *(int *)(param_1 + 0x14c)) {
            piVar17 = aiStack_70;
            piVar19 = (int *)(param_1 + 0x150);
            do {
              iVar2 = *piVar19;
              iVar5 = 0;
              iVar9 = *(int *)(iVar2 + 0x34);
              iVar11 = iVar9 * uVar14;
              if (0 < *(int *)(iVar2 + 0x38)) {
                piVar7 = (int *)(*piVar17 + iVar13);
                do {
                  iVar12 = 0;
                  iVar10 = *piVar7 + iVar11 * 0x80;
                  if (0 < iVar9) {
                    piVar8 = (int *)((iVar6 + 7) * 4 + iVar1);
                    do {
                      iVar12 = iVar12 + 1;
                      piVar8 = piVar8 + 1;
                      *piVar8 = iVar10;
                      iVar9 = *(int *)(iVar2 + 0x34);
                      iVar6 = iVar6 + 1;
                      iVar10 = iVar10 + 0x80;
                    } while (iVar12 < iVar9);
                  }
                  iVar5 = iVar5 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar5 < *(int *)(iVar2 + 0x38));
              }
              iVar16 = iVar16 + 1;
              piVar19 = piVar19 + 1;
              piVar17 = piVar17 + 1;
            } while (iVar16 < *(int *)(param_1 + 0x14c));
          }
          iVar6 = (**(code **)(*(int *)(param_1 + 0x1c0) + 4))(param_1,iVar1 + 0x20);
          if (iVar6 == 0) {
            *(int *)(iVar1 + 0x18) = iVar18;
            *(uint *)(iVar1 + 0x14) = uVar14;
            return 0;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)(param_1 + 0x160));
      }
      iVar18 = iVar18 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      iVar13 = iVar13 + 4;
    } while (iVar18 < *(int *)(iVar1 + 0x1c));
  }
  uVar14 = *(int *)(param_1 + 0x98) + 1;
  *(uint *)(param_1 + 0x98) = uVar14;
  if (uVar14 < *(uint *)(param_1 + 0x144)) {
    iVar1 = *(int *)(param_1 + 0x1b0);
    if (*(int *)(param_1 + 0x14c) < 2) {
      if (uVar14 < *(uint *)(param_1 + 0x144) - 1) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x150) + 0xc);
        uVar3 = 3;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = uVar4;
      }
      else {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x150) + 0x48);
        uVar3 = 3;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = uVar4;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      uVar3 = 3;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 1;
    }
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x1b8) + 0xc))(param_1);
    uVar3 = 4;
  }
  return uVar3;
}

