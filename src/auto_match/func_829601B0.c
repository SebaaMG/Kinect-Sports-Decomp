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
extern int fn_8295D318();
extern int fn_8295F950();


undefined8 fn_829601B0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar9;
  ulonglong uVar8;
  int *piVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int aiStack_80 [4];
  int aiStack_70 [28];
  
  iVar11 = param_1[0x41];
  uVar2 = *(uint *)(iVar11 + 0xc);
  piVar3 = *(int **)(iVar11 + 8);
  piVar10 = *(int **)(iVar11 + 0x10);
  if (((*(uint *)(iVar11 + 4) < uVar2) && (*(uint *)(iVar11 + 4) == 1)) &&
     (**(int **)(param_1[0x41] + 8) == *piVar3)) {
    uVar4 = fn_8295F950(param_1,0xf,0);
  }
  else {
    iVar11 = *piVar10 * 4;
    iVar1 = *piVar3 * 4;
    if (((*(int *)(*(int *)(param_1[5] + iVar11) + 4) == *(int *)(*(int *)(iVar1 + param_1[5]) + 4))
        && (*(int *)(*(int *)(param_1[5] + iVar11) + 8) ==
            *(int *)(*(int *)(param_1[5] + iVar1) + 8))) &&
       (*(int *)(*(int *)(param_1[5] + iVar11) + 0xc) ==
        *(int *)(*(int *)(param_1[5] + iVar1) + 0xc))) {
      uVar12 = 0;
      piVar7 = piVar3;
      if (uVar2 != 0) {
        do {
          uVar6 = 0;
          if (uVar12 != 0) {
            piVar9 = piVar10;
            do {
              if (*(int *)(*(int *)(*piVar7 * 4 + param_1[5]) + 0x10) ==
                  *(int *)(*(int *)(*piVar9 * 4 + param_1[5]) + 0x10)) break;
              uVar6 = uVar6 + 1;
              piVar9 = piVar9 + 1;
            } while (uVar6 < uVar12);
            if (uVar6 < uVar12) break;
          }
          uVar12 = uVar12 + 1;
          piVar7 = piVar7 + 1;
        } while (uVar12 < uVar2);
      }
      bVar13 = uVar12 < uVar2;
    }
    else {
      bVar13 = false;
    }
    piVar7 = piVar10;
    piVar9 = (int *)0x0;
    if (bVar13) {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar12 = uVar2;
        do {
          uVar8 = (ulonglong)*(uint *)(*(int *)(*piVar7 * 4 + param_1[5]) + 0x10);
          if ((uVar5 & 0xffffffff) <= uVar8) {
            uVar5 = uVar8 + 1;
          }
          piVar7 = piVar7 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar4 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],aiStack_70,uVar5,0,0);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      if (uVar2 != 0) {
        iVar11 = param_1[5];
        piVar7 = aiStack_80;
        uVar12 = uVar2;
        do {
          *piVar7 = aiStack_70
                    [*(int *)(*(int *)(*(int *)(((int)piVar10 - (int)aiStack_80) + (int)piVar7) * 4
                                      + iVar11) + 0x10)];
          piVar7 = piVar7 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      piVar7 = aiStack_80;
      piVar9 = piVar10;
    }
    uVar12 = 0;
    if (uVar2 != 0) {
      do {
        uVar6 = uVar12 + 1;
        iVar11 = 1;
        if (uVar6 < uVar2) {
          piVar10 = piVar3 + uVar12;
          iVar1 = *piVar10;
          do {
            piVar10 = piVar10 + 1;
            if (*(int *)(*(int *)(*piVar10 * 4 + param_1[5]) + 0x10) !=
                *(int *)(*(int *)(iVar1 * 4 + param_1[5]) + 0x10)) break;
            uVar6 = uVar6 + 1;
            iVar11 = iVar11 + 1;
          } while (uVar6 < uVar2);
        }
        uVar4 = fn_8295D318(param_1,0xf,piVar7 + uVar12,iVar11,piVar3 + uVar12,0,0,iVar11);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        uVar12 = iVar11 + uVar12;
      } while (uVar12 < uVar2);
    }
    if ((!bVar13) ||
       (uVar4 = fn_8295D318(param_1,1,piVar9,uVar2,piVar7,0,0,uVar2), -1 < (int)uVar4)) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

