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
extern int fn_8248FEA8();
extern int fn_82490210();
extern int fn_82F63CA0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8248FCC8(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  int *piVar11;
  uint uStack_40;
  uint uStack_3c;
  
  lVar6 = param_2 - param_1;
  uVar4 = (int)lVar6 >> 2;
  uVar8 = param_2;
  if (0x20 < (int)uVar4) {
    do {
      iVar9 = (int)param_3;
      param_2 = uVar8;
      if (iVar9 < 1) break;
      fn_8248FEA8(&uStack_40,param_1,uVar8);
      param_3 = (longlong)(iVar9 >> 1) + (ulonglong)(iVar9 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar10 = (ulonglong)uStack_3c;
      param_2 = (ulonglong)uStack_40;
      if ((int)(uStack_40 - (int)param_1 & 0xfffffffc) < (int)((int)uVar8 - uStack_3c & 0xfffffffc))
      {
        fn_8248FCC8(param_1,param_2,param_3);
        param_2 = uVar8;
        param_1 = uVar10;
      }
      else {
        fn_8248FCC8(uVar10,uVar8,param_3);
      }
      lVar6 = param_2 - param_1;
      uVar4 = (int)lVar6 >> 2;
      uVar8 = param_2;
    } while (0x20 < (int)uVar4);
    if (0x20 < (int)uVar4) {
      if ((int)uVar4 < 2) {
        return;
      }
      uVar8 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      if (0 < (longlong)uVar8) {
        lVar7 = (uVar8 & 0x3fffffff) * 4 + param_1;
        do {
          lVar7 = lVar7 + -4;
          uStack_40 = *(uint *)lVar7;
          uVar8 = uVar8 - 1;
          fn_82490210(param_1,uVar8,uVar4,&uStack_40);
        } while (0 < (int)uVar8);
      }
      if ((int)uVar4 < 2) {
        return;
      }
      puVar2 = (undefined4 *)param_1;
      do {
        iVar9 = (int)lVar6;
        uStack_40 = *(uint *)((int)puVar2 + iVar9 + -4);
        lVar6 = lVar6 + -4;
        *(undefined4 *)((int)puVar2 + iVar9 + -4) = *puVar2;
        fn_82490210(param_1,0,(int)(uint)lVar6 >> 2,&uStack_40);
      } while (4 < (int)((uint)lVar6 & 0xfffffffc));
      return;
    }
  }
  if (((1 < (int)uVar4) && ((param_1 & 0xffffffff) != (param_2 & 0xffffffff))) &&
     (uVar8 = param_1 + 4, (uVar8 & 0xffffffff) != (param_2 & 0xffffffff))) {
    piVar1 = (int *)param_1;
    do {
      piVar11 = (int *)uVar8;
      iVar9 = *piVar11;
      if (iVar9 < *piVar1) {
        fn_82F63CA0(uVar8 + ((ulonglong)(uint)((int)piVar11 - (int)piVar1 >> 2) & 0x3fffffff) * -4
                     + 4,param_1);
        *piVar1 = iVar9;
      }
      else {
        iVar5 = piVar11[-1];
        uVar10 = uVar8;
        uVar3 = uVar8 - 4;
        while (iVar9 < iVar5) {
          *(int *)uVar10 = iVar5;
          iVar5 = *(int *)(uVar3 - 4);
          uVar10 = uVar3;
          uVar3 = uVar3 - 4;
        }
        *(int *)uVar10 = iVar9;
      }
      uVar8 = uVar8 + 4;
    } while ((uVar8 & 0xffffffff) != (param_2 & 0xffffffff));
  }
  return;
}

