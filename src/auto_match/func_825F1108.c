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
extern int fn_825B51E8();


void fn_825F1108(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_r0;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xbc) + 0x200);
  puVar2 = (undefined4 *)(param_1 + 0x80U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  iVar8 = (uVar1 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0) & 0x3fffffff) *
                   -4) * 0xe0 + param_1;
  puVar3 = (undefined4 *)(in_r0 + iVar8 + 0xd0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar2 = (undefined4 *)(param_1 + 0x90U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (undefined4 *)(iVar8 + 0xe0U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar2 = (undefined4 *)(param_1 + 0xa0U & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  *(uint *)(iVar8 + 0x108) = uVar1;
  puVar2 = (undefined4 *)(iVar8 + 0xf0U & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  iVar5 = *(int *)(param_1 + 0xbc);
  uVar1 = *(uint *)(iVar5 + 0x200);
  lVar7 = (ulonglong)uVar1 +
          ((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0) &
          0x7fffffff) * -2;
  iVar4 = (int)((lVar7 + 0xdaU & 0x3fffffff) << 2);
  *(int *)((int)((((ulonglong)*(uint *)(iVar4 + iVar5) + 0x6e & 0x7fffffff) * 2 + lVar7 & 0xffffffff
                 ) << 2) + iVar5) = iVar8 + 0xd0;
  *(int *)(iVar4 + iVar5) = *(int *)(iVar4 + iVar5) + 1;
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x48) - 1;
    *(int *)(param_1 + 0x48) = (int)lVar7;
    if (lVar7 == 0) {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
      uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x48);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 0x3c))(*(int **)(param_1 + 0x40));
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x44) + 4) * 4 + *(int *)(*piVar6 + 0x98)) != 0) {
        fn_825B51E8(uVar9,*(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x50));
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x44) + 4) * 0x20 + *(int *)(*(int *)(iVar5 + 0x10) + 0x50) +
         0x14) = 0;
      }
    }
  }
  return;
}

