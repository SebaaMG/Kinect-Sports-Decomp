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
extern int fn_82F21298();
extern int fn_82F214A0();


void fn_82F242D8(int param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
                  ,undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  if (*(int *)(param_1 + 0x8e0) == 0) {
    if (param_7 == *(int *)(param_1 + 0x658) + -1) {
      uVar5 = (ulonglong)in_stack_00000064 - 1;
    }
    else {
      uVar5 = (ulonglong)in_stack_00000064;
    }
    iVar6 = (int)uVar5;
    uVar4 = (ulonglong)in_stack_00000054;
    bVar3 = iVar6 == 0;
    if (param_7 == 0) {
      fn_82F21298(param_1,param_2,*(undefined4 *)(param_1 + 0x564),uVar1,uVar4,1,bVar3);
    }
    uVar7 = (ulonglong)in_stack_0000005c;
    param_2 = (longlong)*(int *)(param_1 + 0x57c) * (longlong)(int)in_stack_0000005c + param_2;
    if ((int)in_stack_0000005c < iVar6) {
      lVar14 = uVar5 - uVar7;
      do {
        fn_82F21298(param_1,param_2,*(undefined4 *)(param_1 + 0x564),uVar1,uVar4,0,0);
        lVar14 = lVar14 + -1;
        param_2 = (ulonglong)*(uint *)(param_1 + 0x57c) + param_2;
      } while (lVar14 != 0);
    }
    if ((param_7 == *(int *)(param_1 + 0x658) + -1) && (!bVar3)) {
      fn_82F21298(param_1,param_2,*(undefined4 *)(param_1 + 0x564),uVar1,uVar4,0,1);
    }
    if (param_7 == 0) {
      fn_82F214A0(param_1,param_3,*(undefined4 *)(param_1 + 0x568),uVar1,uVar4,1,bVar3);
    }
    param_3 = (longlong)*(int *)(param_1 + 0x580) * (longlong)(int)in_stack_0000005c + param_3;
    if ((int)in_stack_0000005c < iVar6) {
      lVar14 = uVar5 - uVar7;
      do {
        uVar2 = *(uint *)(param_1 + 0x568);
        lVar12 = ((ulonglong)uVar2 & 0x1fffffff) * 8 + param_3;
        (**(code **)(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar12 = lVar12 + 4;
        lVar11 = ((ulonglong)uVar2 & 0x3fffffff) * 4 + param_3 + 3;
        lVar9 = uVar4 - 1;
        if (0 < (int)(uVar4 - 1)) {
          do {
            (**(code **)(param_1 + 0x86c))(lVar12,uVar2,uVar1,8);
            (**(code **)(param_1 + 0x870))(lVar11,uVar2,uVar1,8);
            lVar9 = lVar9 + -1;
            lVar12 = lVar12 + 8;
            lVar11 = lVar11 + 8;
          } while (lVar9 != 0);
        }
        (**(code **)(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar14 = lVar14 + -1;
        param_3 = (ulonglong)*(uint *)(param_1 + 0x580) + param_3;
      } while (lVar14 != 0);
    }
    if ((param_7 == *(int *)(param_1 + 0x658) + -1) && (!bVar3)) {
      uVar2 = *(uint *)(param_1 + 0x568);
      lVar14 = uVar4 - 1;
      lVar9 = ((ulonglong)uVar2 & 0x3fffffff) * 4 + param_3 + 3;
      if (0 < lVar14) {
        do {
          (**(code **)(param_1 + 0x870))(lVar9,uVar2,uVar1,4);
          lVar14 = lVar14 + -1;
          lVar9 = lVar9 + 8;
        } while (lVar14 != 0);
      }
    }
    if (param_7 == 0) {
      fn_82F214A0(param_1,param_4,*(undefined4 *)(param_1 + 0x568),uVar1,uVar4,1,bVar3);
    }
    param_4 = (longlong)*(int *)(param_1 + 0x580) * (longlong)(int)in_stack_0000005c + param_4;
    if ((int)in_stack_0000005c < iVar6) {
      lVar14 = uVar5 - uVar7;
      do {
        uVar2 = *(uint *)(param_1 + 0x568);
        lVar12 = ((ulonglong)uVar2 & 0x1fffffff) * 8 + param_4;
        (**(code **)(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar12 = lVar12 + 4;
        lVar11 = ((ulonglong)uVar2 & 0x3fffffff) * 4 + param_4 + 3;
        lVar9 = uVar4 - 1;
        if (0 < (int)(uVar4 - 1)) {
          do {
            (**(code **)(param_1 + 0x86c))(lVar12,uVar2,uVar1,8);
            (**(code **)(param_1 + 0x870))(lVar11,uVar2,uVar1,8);
            lVar9 = lVar9 + -1;
            lVar12 = lVar12 + 8;
            lVar11 = lVar11 + 8;
          } while (lVar9 != 0);
        }
        (**(code **)(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar14 = lVar14 + -1;
        param_4 = (ulonglong)*(uint *)(param_1 + 0x580) + param_4;
      } while (lVar14 != 0);
    }
    if ((param_7 == *(int *)(param_1 + 0x658) + -1) && (!bVar3)) {
      uVar2 = *(uint *)(param_1 + 0x568);
      lVar14 = uVar4 - 1;
      lVar9 = ((ulonglong)uVar2 & 0x3fffffff) * 4 + param_4 + 3;
      if (0 < lVar14) {
        do {
          (**(code **)(param_1 + 0x870))(lVar9,uVar2,uVar1,4);
          lVar14 = lVar14 + -1;
          lVar9 = lVar9 + 8;
        } while (lVar14 != 0);
      }
    }
  }
  else {
    iVar6 = in_stack_0000005c - 1;
    if (iVar6 < (int)in_stack_00000064) {
      iVar8 = iVar6 * 4;
      do {
        if ((iVar6 == 0) || (uVar10 = 0, *(int *)(*(int *)(param_1 + 0x8d8) + iVar8) != 0)) {
          uVar10 = 1;
        }
        if (((param_7 == *(int *)(param_1 + 0x658) + -1) && (in_stack_0000005c == in_stack_00000064)
            ) || (uVar13 = 0, *(int *)(*(int *)(param_1 + 0x8d8) + iVar8 + 4) != 0)) {
          uVar13 = 1;
        }
        fn_82F21298(param_1,param_2,*(undefined4 *)(param_1 + 0x564),uVar1,in_stack_00000054,
                        uVar10,uVar13);
        fn_82F214A0(param_1,param_3,*(undefined4 *)(param_1 + 0x568),uVar1,in_stack_00000054,
                        uVar10,uVar13);
        fn_82F214A0(param_1,param_4,*(undefined4 *)(param_1 + 0x568),uVar1,in_stack_00000054,
                        uVar10,uVar13);
        iVar6 = iVar6 + 1;
        in_stack_0000005c = in_stack_0000005c + 1;
        iVar8 = iVar8 + 4;
        param_3 = (ulonglong)*(uint *)(param_1 + 0x580) + param_3;
        param_2 = (ulonglong)*(uint *)(param_1 + 0x57c) + param_2;
        param_4 = (ulonglong)*(uint *)(param_1 + 0x580) + param_4;
      } while (iVar6 < (int)in_stack_00000064);
    }
  }
  return;
}

