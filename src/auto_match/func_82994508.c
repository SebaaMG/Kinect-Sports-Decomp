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
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_82963A30();
extern unsigned int uStack_54;


undefined8 fn_82994508(int *param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar4;
  int iVar6;
  uint *puVar7;
  uint uVar9;
  int *piVar10;
  longlong lVar8;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uStack_54;
  int aiStack_50 [20];
  
  uVar9 = 0;
  if (param_4 != 0) {
    iVar6 = 0;
    do {
      if ((*(int *)(*(int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]) + 4) ==
           *(int *)(*(int *)(*(int *)(*(int *)(param_1[0x41] + 8) + iVar6) * 4 + param_1[5]) + 4))
         && (*(int *)(*(int *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]) + 0xc) ==
             *(int *)(*(int *)(*(int *)(*(int *)(param_1[0x41] + 8) + iVar6) * 4 + param_1[5]) + 0xc
                     ))) break;
      uVar9 = uVar9 + 1;
      iVar6 = param_3 * 4 + iVar6;
    } while (uVar9 < param_4);
  }
  if (uVar9 != param_4) {
    uVar12 = 0;
    aiStack_50[2] = -1;
    aiStack_50[3] = -1;
    iVar6 = uVar9 * param_3 * 4 + *(int *)(param_1[0x41] + 8);
    if (param_3 != 0) {
      iVar5 = param_1[5];
      piVar10 = (int *)(iVar6 + -4);
      iVar11 = param_3;
      do {
        piVar10 = piVar10 + 1;
        aiStack_50[*(int *)(*(int *)(*piVar10 * 4 + iVar5) + 0x10)] = *piVar10;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    puVar7 = &uStack_54;
    lVar13 = 4;
    do {
      puVar7 = puVar7 + 1;
      lVar8 = (ulonglong)*puVar7 + 1;
      uVar12 = (lVar8 - ((ulonglong)*puVar7 + (ulonglong)(lVar8 == 0))) + uVar12;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    uVar3 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],aiStack_50 + 4,4,0,0);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    iVar5 = fn_82963998(0x74);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_829632A0();
    }
    *param_2 = (int)uVar4;
    if ((uVar4 & 0xffffffff) == 0) {
      return 0xffffffff8007000e;
    }
    uVar3 = fn_82963A30(uVar4,uVar12 & 0xffffffff000fffff | 0x10000000,uVar12,uVar12,0);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_829632F0(*param_2,param_1[0x41]);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    iVar11 = 0;
    iVar5 = 0;
    lVar13 = 4;
    do {
      iVar1 = *(int *)((int)aiStack_50 + iVar5);
      if (iVar1 != -1) {
        *(undefined4 *)(*(int *)(*param_2 + 0x10) + iVar11) =
             *(undefined4 *)((int)aiStack_50 + iVar5 + 0x10);
        *(int *)(*(int *)(*param_2 + 8) + iVar11) = iVar1;
        iVar11 = iVar11 + 4;
      }
      iVar5 = iVar5 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if (param_3 != 0) {
      piVar10 = (int *)(iVar6 + -4);
      do {
        piVar2 = piVar10 + 1;
        piVar10 = piVar10 + 1;
        *piVar10 = aiStack_50[*(int *)(*(int *)(*piVar2 * 4 + param_1[5]) + 0x10) + 4];
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return 0;
}

