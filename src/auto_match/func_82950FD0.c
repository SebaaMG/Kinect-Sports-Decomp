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
extern unsigned int lbl_82005758;


undefined8 fn_82950FD0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  iVar4 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  if ((*(int *)(iVar4 + 0x58) == *(int *)(iVar4 + 0x54)) && (*(int *)(iVar4 + 0x48) != -1)) {
    puVar1 = *(uint **)(*(int *)(iVar4 + 0x48) * 4 + *(int *)(param_1 + 0x18));
    if ((*puVar1 & 0xfff00000) == 0x20400000) {
      uVar2 = 0xffffffff;
      uVar5 = 0;
      if (puVar1[3] != 0) {
        iVar4 = 0;
        do {
          if (*(int *)(iVar4 + puVar1[4]) == param_2) {
            uVar2 = uVar5;
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (uVar5 < puVar1[3]);
        if (uVar2 != 0xffffffff) {
          piVar3 = (int *)(uVar2 * 4 + puVar1[2]);
          piVar6 = (int *)((uVar2 + (*puVar1 & 0xfffff)) * 4 + puVar1[2]);
          piVar7 = piVar6;
          if (((((*(uint *)(*(int *)(*(int *)(*(int *)(*piVar6 * 4 + *(int *)(param_1 + 0x14)) + 4)
                                     * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0) ||
               (iVar4 = *piVar3, piVar7 = piVar3, piVar3 = piVar6,
               (*(uint *)(*(int *)(*(int *)(*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14)) + 4) * 4
                                  + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0)) &&
              (*(double *)(*(int *)(*piVar7 * 4 + *(int *)(param_1 + 0x14)) + 0x20) == lbl_82005758)
              ) && ((*(uint *)(*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x3c) & 0x1f0000)
                    == 0x80000)) {
            *param_4 = *piVar3;
            *param_3 = puVar1;
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

