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
extern int fn_829639F0();
extern int fn_82BA02A8();


undefined8 fn_82950978(int *param_1,int param_2,int *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,0);
  if (iVar2 == 0) {
    uVar11 = 0;
    uVar12 = 0xffffffff;
    uVar8 = 0;
    if (*(uint *)(param_2 + 0xc) != 0) {
      iVar2 = 0;
      do {
        iVar4 = *(int *)(*(int *)(iVar2 + *(int *)(param_2 + 0x10)) * 4 + param_1[5]);
        uVar9 = *(uint *)(iVar4 + 0x4c);
        if ((uVar9 != 0xffffffff) && (uVar11 < uVar9)) {
          uVar11 = uVar9;
        }
        uVar9 = *(uint *)(iVar4 + 0x48);
        if (uVar9 < uVar12) {
          uVar12 = uVar9;
        }
        uVar8 = uVar8 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar8 < *(uint *)(param_2 + 0xc));
    }
    uVar7 = (ulonglong)*(uint *)(param_2 + 4);
    if (uVar7 != 0) {
      iVar2 = param_1[5];
      piVar3 = *(int **)(param_2 + 8);
      do {
        iVar4 = *(int *)(*piVar3 * 4 + iVar2);
        if (((*(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + param_1[4]) + 4) & 2) != 0) &&
           (*(int *)(iVar4 + 0x48) != -1)) {
          uVar8 = *(int *)(iVar4 + 0x48) + 1;
          if (uVar11 < uVar8) {
            uVar11 = uVar8;
          }
          while (uVar8 = *(uint *)(iVar4 + 0x50), uVar8 <= uVar12) {
            if ((uVar8 == 0xffffffff) || (uVar9 = 0, (param_4 & 0xffffffff) == 0)) {
LAB_82950b38:
              uVar12 = uVar8 - 1;
              break;
            }
            piVar5 = param_3;
            do {
              if (*piVar5 == *(int *)(uVar8 * 4 + param_1[6])) break;
              uVar9 = uVar9 + 1;
              piVar5 = piVar5 + 1;
            } while ((ulonglong)uVar9 < (param_4 & 0xffffffff));
            if ((param_4 & 0xffffffff) <= (ulonglong)uVar9) goto LAB_82950b38;
            uVar10 = 0;
            iVar1 = param_3[uVar9];
            uVar9 = *(uint *)(iVar1 + 0xc);
            if (uVar9 != 0) {
              iVar6 = 0;
              do {
                if (*(int *)(iVar4 + 0x10) ==
                    *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + iVar6) * 4 + iVar2) + 0x10))
                break;
                uVar10 = uVar10 + 1;
                iVar6 = iVar6 + 4;
              } while (uVar10 < uVar9);
            }
            if (uVar9 <= uVar10) goto LAB_82950b38;
            iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + uVar10 * 4) * 4 + iVar2);
          }
        }
        piVar3 = piVar3 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar8 = 0;
    uVar7 = 0;
    if ((param_4 & 0xffffffff) != 0) {
      piVar3 = param_3;
      do {
        uVar8 = *(uint *)(*(int *)(**(int **)(*piVar3 + 0x10) * 4 + param_1[5]) + 0x48);
        if ((uVar11 <= uVar8) && (uVar8 <= uVar12)) break;
        uVar7 = uVar7 + 1;
        piVar3 = piVar3 + 1;
      } while ((uVar7 & 0xffffffff) < (param_4 & 0xffffffff));
    }
    if (((uVar7 & 0xffffffff) != (param_4 & 0xffffffff)) &&
       (iVar2 = (**(code **)(*param_1 + 0x34))(param_1,param_2,uVar8), iVar2 == 0)) {
      if ((param_4 & 0xffffffff) != 0) {
        param_3 = param_3 + -1;
        do {
          param_3 = param_3 + 1;
          *(undefined4 *)*param_3 = 0;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
      }
      iVar2 = *(int *)(uVar8 * 4 + param_1[6]);
      if (iVar2 != 0) {
        fn_82BA02A8(iVar2);
        fn_829639F0(iVar2);
      }
      uVar11 = 0;
      *(int *)(uVar8 * 4 + param_1[6]) = param_2;
      if (*(int *)(param_2 + 0xc) != 0) {
        iVar2 = 0;
        do {
          uVar11 = uVar11 + 1;
          piVar3 = (int *)(iVar2 + *(int *)(param_2 + 0x10));
          iVar2 = iVar2 + 4;
          *(uint *)(*(int *)(*piVar3 * 4 + param_1[5]) + 0x48) = uVar8;
        } while (uVar11 < *(uint *)(param_2 + 0xc));
      }
      return 0;
    }
  }
  if (param_2 != 0) {
    fn_82BA02A8(param_2);
    fn_829639F0(param_2);
  }
  return 1;
}

