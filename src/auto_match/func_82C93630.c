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
extern unsigned int *auStack_4c;
extern int fn_82C83C40();
extern int fn_82CB9530();
extern unsigned int uStack_50;


bool fn_82C93630(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4,undefined8 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  short *psVar12;
  undefined4 uStack_50;
  uint auStack_4c [19];
  
  iVar2 = *(int *)(param_1 + 0x6f4);
  iVar3 = *(int *)(param_1 + 0x6f0);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff;
  iVar9 = (int)uVar5 * 2;
  uVar8 = (uint)param_3;
  lVar10 = (longlong)iVar9 * (longlong)(int)uVar8 + param_2;
  iVar6 = (int)lVar10 * 2;
  psVar12 = (short *)(iVar6 + iVar2);
  *(undefined2 *)(iVar6 + iVar2) = *(undefined2 *)(iVar6 + iVar2);
  if (((int)param_5 == 0) || (((param_2 | param_3) & 1) == 0)) {
    uVar4 = *param_4;
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 3) == 0) {
        uVar11 = 0;
        if (((param_3 & 1) == 0) &&
           ((uVar8 == 0 ||
            (uVar11 = 0, *(int *)(((int)uVar8 >> 1) * 4 + *(int *)(param_1 + 0x55d0)) != 0)))) {
          uVar11 = 1;
        }
        if (*(int *)(param_1 + 0x50cc) == 0) {
          fn_82CB9530(param_1);
        }
        else {
          uStack_50 = (undefined4)param_2;
          auStack_4c[0] = uVar8;
          fn_82C83C40(param_1,&uStack_50,auStack_4c,*(undefined4 *)(param_1 + 0x6f0),
                        *(undefined4 *)(param_1 + 0x6f4),param_5,uVar11);
        }
      }
      else {
        if ((uVar4 & 3) == 1) {
          uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFF) << 16))) | ((((U64)(*(short *)(iVar6 + iVar3 + -2))) & ((U64)0xFFFF)) << 16));
          sVar1 = psVar12[-1];
        }
        else {
          iVar9 = (int)((lVar10 + uVar5 * -2 & 0xffffffff) << 1);
          uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFF) << 16))) | ((((U64)(*(short *)(iVar9 + iVar3))) & ((U64)0xFFFF)) << 16));
          sVar1 = *(short *)(iVar9 + iVar2);
        }
        auStack_4c[0] = (uint)sVar1;
        if ((((U64)(uStack_50) >> 16) & 0xFFFF) == 0x4000) {
          uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFF) << 16))) | ((((U64)(0)) & ((U64)0xFFFF)) << 16));
          auStack_4c[0] = 0;
        }
      }
      if ((*(int *)(param_1 + 0xfb0) == 2) || (*(int *)(param_1 + 0xfb0) == 3)) {
        *(ushort *)param_4 = (ushort)((int)*param_4 >> 0xf) & 0xfffe;
        *param_4 = (*param_4 & 0x7ff0) << 1 | *param_4 & 0xffff000f;
      }
      sVar1 = (short)*(undefined4 *)(param_1 + 0x1a4);
      *(ushort *)(iVar6 + iVar3) =
           (*(short *)param_4 + sVar1 + (((U64)(uStack_50) >> 16) & 0xFFFF) & (ushort)*(undefined4 *)(param_1 + 0x1ac))
           - sVar1;
      sVar1 = (short)*(undefined4 *)(param_1 + 0x1a8);
      bVar7 = false;
      *psVar12 = (((short)*param_4 >> 4) + sVar1 + (short)auStack_4c[0] &
                 (ushort)*(undefined4 *)(param_1 + 0x1b0)) - sVar1;
    }
    else {
      *(undefined2 *)(iVar6 + iVar3) = 0x4000;
      bVar7 = true;
    }
  }
  else {
    iVar9 = (int)(((longlong)(int)(uVar8 & 0xfffe) * (longlong)iVar9 + (param_2 & 0xfffe) &
                  0xffffffff) << 1);
    *(undefined2 *)(iVar6 + iVar3) = *(undefined2 *)(iVar9 + iVar3);
    *psVar12 = *(short *)(iVar9 + iVar2);
    bVar7 = *(short *)(iVar6 + iVar3) == 0x4000;
  }
  return bVar7;
}

