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


ulonglong fn_82DFA278(ulonglong param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_r0;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  lVar9 = 0;
  iVar2 = *(int *)(param_3 * 4 + *(int *)((int)param_1 + 0x10));
  uVar8 = (ulonglong)*(uint *)(iVar2 + 0xc);
  if (0 < (int)*(uint *)(iVar2 + 0xc)) {
    do {
      uVar1 = *(uint *)(iVar2 + 0xc);
      uVar7 = (ulonglong)*(uint *)(iVar2 + 8) + lVar9;
      trapWord(6,(ulonglong)uVar1,0);
      uVar6 = ((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1;
      iVar4 = (int)((uVar7 - (longlong)((int)uVar7 / (int)uVar1) * (longlong)(int)uVar1 & 0xffffffff
                    ) << 5) + *(int *)(iVar2 + 0x10);
      lVar9 = lVar9 + 1;
      trapWord(5,(ulonglong)uVar1 & ~uVar6,0xffff);
      puVar3 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar5 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
      *puVar5 = *puVar3;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar3 = (undefined4 *)(iVar4 + 0x10U & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar5 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
      *puVar5 = *puVar3;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      param_4 = param_4 + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    return uVar6;
  }
  return param_1;
}

