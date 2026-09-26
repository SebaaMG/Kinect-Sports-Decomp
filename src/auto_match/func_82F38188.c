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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F377E8();
extern int fn_82F48E20();


undefined8 fn_82F38188(int param_1,ulonglong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 *apuStack_40 [16];
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x70);
    lVar3 = ((ulonglong)uVar1 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar1) {
      lVar3 = -1;
    }
    iVar4 = fn_82E50BE8(lVar3,0,0,0,0);
    if ((iVar4 == 0) || (uVar1 == 0)) {
      iVar9 = 0;
      iVar7 = 0;
    }
    else {
      uVar8 = 0;
      puVar6 = (undefined4 *)(iVar4 + -4);
      do {
        fn_82F377E8(param_1 + 8,uVar8,apuStack_40);
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *apuStack_40[0];
      } while ((uVar8 & 0xffffffff) < (ulonglong)uVar1);
      iVar7 = uVar1 * 4 + iVar4;
      iVar9 = iVar4;
    }
    uVar8 = fn_82E50BE8(0x14,0,0,0,0);
    if ((uVar8 & 0xffffffff) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_82F48E20(uVar8,iVar9,iVar7);
    }
    if (piVar5 == (int *)0x0) {
      if (iVar4 != 0) {
        fn_82E4FE40(iVar4);
      }
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = (**(code **)*piVar5)(piVar5,0xffffffff82154c28,param_2);
      (**(code **)(*piVar5 + 8))(piVar5);
      if (iVar4 != 0) {
        fn_82E4FE40(iVar4);
      }
    }
  }
  return uVar2;
}

