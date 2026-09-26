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


undefined8
fn_8295FA70(int *param_1,undefined8 param_2,int *param_3,int *param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar7;
  ulonglong uVar6;
  int *piVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int aiStack_80 [4];
  int aiStack_70 [28];
  
  if (((param_6 < param_5) && (param_6 == 1)) && (**(int **)(param_1[0x41] + 8) == *param_4)) {
    uVar2 = fn_8295F950(param_1,param_2,0);
  }
  else {
    iVar9 = *param_3 * 4;
    iVar1 = *param_4 * 4;
    if (((*(int *)(*(int *)(param_1[5] + iVar9) + 4) == *(int *)(*(int *)(iVar1 + param_1[5]) + 4))
        && (*(int *)(*(int *)(param_1[5] + iVar9) + 8) == *(int *)(*(int *)(param_1[5] + iVar1) + 8)
           )) && (*(int *)(*(int *)(param_1[5] + iVar9) + 0xc) ==
                  *(int *)(*(int *)(param_1[5] + iVar1) + 0xc))) {
      uVar10 = 0;
      piVar5 = param_4;
      if (param_5 != 0) {
        do {
          uVar4 = 0;
          if (uVar10 != 0) {
            piVar7 = param_3;
            do {
              if (*(int *)(*(int *)(*piVar5 * 4 + param_1[5]) + 0x10) ==
                  *(int *)(*(int *)(*piVar7 * 4 + param_1[5]) + 0x10)) break;
              uVar4 = uVar4 + 1;
              piVar7 = piVar7 + 1;
            } while (uVar4 < uVar10);
            if (uVar4 < uVar10) break;
          }
          uVar10 = uVar10 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar10 < param_5);
      }
      bVar11 = uVar10 < param_5;
    }
    else {
      bVar11 = false;
    }
    piVar5 = param_3;
    piVar7 = (int *)0x0;
    if (bVar11) {
      uVar3 = 0;
      if (param_5 != 0) {
        uVar10 = param_5;
        do {
          uVar6 = (ulonglong)*(uint *)(*(int *)(*piVar5 * 4 + param_1[5]) + 0x10);
          if ((uVar3 & 0xffffffff) <= uVar6) {
            uVar3 = uVar6 + 1;
          }
          piVar5 = piVar5 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar2 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],aiStack_70,uVar3,0,0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (param_5 != 0) {
        iVar9 = param_1[5];
        piVar5 = aiStack_80;
        uVar10 = param_5;
        do {
          *piVar5 = aiStack_70
                    [*(int *)(*(int *)(*(int *)(((int)param_3 - (int)aiStack_80) + (int)piVar5) * 4
                                      + iVar9) + 0x10)];
          piVar5 = piVar5 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      piVar5 = aiStack_80;
      piVar7 = param_3;
    }
    uVar10 = 0;
    if (param_5 != 0) {
      do {
        uVar4 = uVar10 + 1;
        iVar9 = 1;
        if (uVar4 < param_5) {
          piVar8 = param_4 + uVar10;
          iVar1 = *piVar8;
          do {
            piVar8 = piVar8 + 1;
            if (*(int *)(*(int *)(*piVar8 * 4 + param_1[5]) + 0x10) !=
                *(int *)(*(int *)(iVar1 * 4 + param_1[5]) + 0x10)) break;
            uVar4 = uVar4 + 1;
            iVar9 = iVar9 + 1;
          } while (uVar4 < param_5);
        }
        uVar2 = fn_8295D318(param_1,param_2,piVar5 + uVar10,iVar9,param_4 + uVar10,0,0,iVar9);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar10 = iVar9 + uVar10;
      } while (uVar10 < param_5);
    }
    if ((!bVar11) ||
       (uVar2 = fn_8295D318(param_1,1,piVar7,param_5,piVar5,0,0,param_5), -1 < (int)uVar2)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

