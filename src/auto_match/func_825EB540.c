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
extern int fn_825EB6C0();
extern int fn_825EB968();


void fn_825EB540(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  uVar1 = *(uint *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar5 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)((int)(((ulonglong)*(uint *)(param_1 + 0x10) + 3 & 0xffffffff) << 2) +
                      *(int *)(param_1 + 8));
      piVar3 = *(int **)(iVar2 + iVar6);
      if (((*(uint *)((int)(((ulonglong)*(uint *)(param_1 + 0x10) + 0x1e & 0xffffffff) << 2) +
                     (int)piVar3) & 0x4000) != 0) ||
         ((piVar3[*(int *)(param_1 + 0x10) + 0x1e] & 0x20000U) != 0)) {
        if ((piVar3[*(int *)(param_1 + 0x10) + 0x1e] & 0x400U) == 0) {
          iVar8 = *piVar3;
          piVar3 = *(int **)(iVar8 + 0x1a8);
          iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3);
          if (iVar4 != 0) {
            lVar7 = 0;
            iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3);
            if (0 < iVar4) {
              do {
                fn_825EB6C0(param_1,iVar8,lVar7);
                lVar7 = lVar7 + 1;
                iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3);
              } while ((int)lVar7 < iVar4);
            }
            *(uint *)(*(int *)(iVar2 + iVar6) + 0x78) =
                 *(uint *)(*(int *)(iVar2 + iVar6) + 0x78) | 0x10000;
            *(uint *)(*(int *)(iVar2 + iVar6) + 0x7c) =
                 *(uint *)(*(int *)(iVar2 + iVar6) + 0x7c) | 0x10000;
          }
          iVar8 = 0;
          iVar2 = **(int **)(iVar2 + iVar6);
          if (0 < *(int *)(iVar2 + 0xc0)) {
            iVar4 = 0;
            do {
              fn_825EB968(param_1,*(undefined4 *)(*(int *)(iVar2 + 0xbc) + iVar4));
              iVar8 = iVar8 + 1;
              iVar4 = iVar4 + 4;
            } while (iVar8 < *(int *)(iVar2 + 0xc0));
          }
        }
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + 0x18;
    } while (uVar5 != 0);
  }
  return;
}

