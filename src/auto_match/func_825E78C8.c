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
extern int fn_82522ED8();


undefined8 fn_825E78C8(uint *param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int aiStack_a8 [36];
  
  uVar8 = *param_1;
  uVar4 = (ulonglong)uVar8;
  puVar3 = param_1 + 2;
  puVar5 = puVar3;
  if (-1 < (int)uVar8) {
    lVar9 = (uVar4 + 0x12 & 0x3fffffff) << 2;
    do {
      iVar6 = (int)lVar9;
      puVar7 = *(uint **)(iVar6 + (int)puVar5);
      while ((puVar1 = puVar7, puVar1 != puVar3 && ((int)*puVar1 < (int)param_2))) {
        puVar5 = puVar1;
        puVar7 = *(uint **)(iVar6 + (int)puVar1);
      }
      *(uint **)((int)aiStack_a8 + iVar6) = puVar5;
      uVar4 = uVar4 - 1;
      lVar9 = lVar9 + -4;
    } while (-1 < (longlong)uVar4);
  }
  puVar5 = (uint *)puVar5[0x12];
  if ((puVar5 == puVar3) || (*puVar5 != param_2)) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0;
    if (-1 < (int)uVar8) {
      iVar10 = 0x48;
      do {
        puVar7 = (uint *)(*(int *)((int)aiStack_a8 + iVar10) + iVar10);
        if ((uint *)*puVar7 != puVar5) break;
        puVar1 = (uint *)(iVar10 + (int)puVar5);
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 4;
        *puVar7 = *puVar1;
      } while (iVar6 <= (int)*param_1);
    }
    while ((0 < (int)*param_1 && ((uint *)param_1[*param_1 + 0x14] == puVar3))) {
      *param_1 = *param_1 - 1;
    }
    param_1[1] = param_1[1] - 1;
    if (puVar5[0xd] != 0) {
      uVar8 = 0;
      if (puVar5[0x11] != 0) {
        do {
          uVar8 = uVar8 + 1;
        } while (uVar8 < puVar5[0x11]);
      }
      puVar5[0xe] = puVar5[0xd];
      puVar5[0x11] = 0;
      fn_82522ED8();
    }
    uVar8 = param_1[0x25];
    uVar2 = 1;
    *(uint **)(*(int *)(uVar8 + 0xc) * 4 + *(int *)(uVar8 + 0x10)) = puVar5;
    *(int *)(uVar8 + 0xc) = *(int *)(uVar8 + 0xc) + 1;
  }
  return uVar2;
}

