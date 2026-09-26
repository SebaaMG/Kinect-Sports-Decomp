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
extern unsigned int *auStack_50;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A3F8D0();
extern int fn_82A3F9B8();
extern int fn_82A3FA30();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


undefined4 * fn_82A3FC78(uint *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar10;
  longlong lVar9;
  undefined4 auStack_50 [20];
  
  puVar2 = (undefined4 *)0x0;
  auStack_50[0] = 0;
  uVar7 = param_3 + 8;
  lVar8 = (ulonglong)param_1[2] - 1;
  uVar6 = 0;
  if (-1 < lVar8) {
    do {
      iVar10 = (int)lVar8;
      iVar1 = iVar10 + (int)uVar6 >> 1;
      puVar5 = (undefined4 *)(iVar1 * 8 + *param_1);
      uVar4 = (ulonglong)(uint)puVar5[1];
      if (uVar4 == (uVar7 & 0xffffffff)) {
        puVar2 = (undefined4 *)fn_82A3FA30(*puVar5,param_2,uVar7,auStack_50);
        break;
      }
      if ((uVar7 & 0xffffffff) < uVar4) {
        lVar8 = (longlong)iVar1 + -1;
      }
      else {
        uVar6 = (longlong)iVar1 + 1;
      }
      iVar10 = (int)lVar8;
    } while ((int)uVar6 <= iVar10);
    if ((int)uVar6 <= iVar10) goto LAB_82a3fe24;
  }
  lVar8 = fn_8265C940(0xc,0x24970000);
  if (lVar8 == 0) goto LAB_82a3fe24;
  iVar1 = fn_82A3F8D0(lVar8,param_2,uVar7);
  if (iVar1 < 0) {
LAB_82a3fe18:
    fn_8265C990(lVar8,0x24970000);
  }
  else {
    if ((ulonglong)param_1[2] < (ulonglong)param_1[1]) {
      lVar9 = (uVar6 & 0x1fffffff) * 8;
      lVar3 = lVar9 + (ulonglong)*param_1;
      fn_82F63CA0(lVar3 + 8,lVar3,(param_1[2] - uVar6 & 0x1fffffff) << 3);
      iVar1 = (int)lVar9;
      *(int *)(iVar1 + *param_1) = (int)lVar8;
      *(int *)(iVar1 + *param_1 + 4) = (int)uVar7;
    }
    else {
      lVar3 = fn_8265C940((param_1[1] + 0x10) * 8,0x24970000);
      if (lVar3 == 0) {
        fn_82A3F9B8(lVar8,param_2);
        goto LAB_82a3fe18;
      }
      lVar9 = (uVar6 & 0x1fffffff) * 8;
      param_1[1] = param_1[1] + 0x10;
      fn_82F68CC0(lVar3,*param_1,lVar9);
      fn_82F68CC0(lVar9 + lVar3 + 8,lVar9 + (ulonglong)*param_1,
                   (param_1[2] - uVar6 & 0x1fffffff) << 3);
      fn_8265C990(*param_1,0x24970000);
      *param_1 = (uint)lVar3;
      *(int *)((int)lVar9 + (uint)lVar3) = (int)lVar8;
      *(int *)((int)(lVar9 + lVar3) + 4) = (int)uVar7;
    }
    puVar2 = (undefined4 *)fn_82A3FA30(lVar8,param_2,uVar7,auStack_50);
    param_1[2] = param_1[2] + 1;
  }
LAB_82a3fe24:
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = auStack_50[0];
    puVar2 = puVar2 + 2;
  }
  return puVar2;
}

