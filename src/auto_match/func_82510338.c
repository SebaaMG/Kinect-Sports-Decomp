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
extern unsigned int *auStack_30;
extern int fn_82563230();
extern int fn_82F63108();


void fn_82510338(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_30 [24];
  
  iVar1 = *param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 4))
                      (*(int **)(param_1 + 0x18),*(int *)(iVar1 + 0x10) != 0);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x20);
    uVar9 = (ulonglong)((int)(*(uint *)(param_1 + 0x24) - *(uint *)(param_1 + 0x20)) >> 4);
    if (0 < (longlong)uVar9) {
      do {
        uVar7 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
        lVar6 = (uVar7 & 0xfffffff) * 0x10 + uVar8;
        if (*(uint *)lVar6 < uVar5) {
          uVar8 = lVar6 + 0x10;
          uVar7 = (uVar9 - uVar7) - 1;
        }
        uVar9 = uVar7;
      } while (0 < (int)uVar7);
    }
    if (((uVar8 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x24)) && (*(uint *)uVar8 == uVar5))
    {
      iVar2 = *(int *)(param_1 + 4);
      uVar5 = *(uint *)(iVar1 + 0x18);
      puVar3 = (undefined4 *)(iVar2 + 0x50U & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar4 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      fn_82563230(iVar2,3,((ulonglong)uVar5 + 1 & 0x3fffffff) * 4 + uVar8,auStack_30,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

