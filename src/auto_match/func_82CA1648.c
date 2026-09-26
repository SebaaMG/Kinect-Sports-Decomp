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
extern int fn_82C9D3A0();
extern int fn_82C9D5A8();


void fn_82CA1648(int param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
                  ,int param_6,undefined8 param_7,longlong param_8)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar7;
  longlong lVar6;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  if (*(int *)(param_1 + 0x55b4) == 0) {
    if (param_6 == *(int *)(param_1 + 0xd40) + -1) {
      uVar3 = (ulonglong)in_stack_0000005c - 1;
    }
    else {
      uVar3 = (ulonglong)in_stack_0000005c;
    }
    iVar4 = (int)uVar3;
    bVar2 = iVar4 == 0;
    if (param_6 == 0) {
      fn_82C9D3A0(param_1,param_2,*(undefined4 *)(param_1 + 0xcc),in_stack_00000064,param_8,1,
                    bVar2);
    }
    uVar5 = (ulonglong)in_stack_00000054;
    param_2 = (longlong)(int)in_stack_00000054 * (longlong)*(int *)(param_1 + 0xe4) + param_2;
    if ((int)in_stack_00000054 < iVar4) {
      lVar12 = uVar3 - uVar5;
      do {
        fn_82C9D3A0(param_1,param_2,*(undefined4 *)(param_1 + 0xcc),in_stack_00000064,param_8,0,0)
        ;
        lVar12 = lVar12 + -1;
        param_2 = param_2 + (ulonglong)*(uint *)(param_1 + 0xe4);
      } while (lVar12 != 0);
    }
    if ((param_6 == *(int *)(param_1 + 0xd40) + -1) && (!bVar2)) {
      fn_82C9D3A0(param_1,param_2,*(undefined4 *)(param_1 + 0xcc),in_stack_00000064,param_8,0,1);
    }
    if (param_6 == 0) {
      fn_82C9D5A8(param_1,param_3,*(undefined4 *)(param_1 + 0xd0),in_stack_00000064,param_8,1,
                    bVar2);
    }
    param_3 = (longlong)(int)in_stack_00000054 * (longlong)*(int *)(param_1 + 0xe8) + param_3;
    if ((int)in_stack_00000054 < iVar4) {
      lVar12 = uVar3 - uVar5;
      do {
        uVar1 = *(uint *)(param_1 + 0xd0);
        lVar9 = ((ulonglong)uVar1 & 0x1fffffff) * 8 + param_3;
        (**(code **)(param_1 + 0x3e38))(lVar9,uVar1,in_stack_00000064,4);
        lVar9 = lVar9 + 4;
        lVar8 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + param_3 + 3;
        lVar6 = param_8 + -1;
        if (0 < (int)(param_8 + -1)) {
          do {
            (**(code **)(param_1 + 0x3e38))(lVar9,uVar1,in_stack_00000064,8);
            (**(code **)(param_1 + 0x3e3c))(lVar8,uVar1,in_stack_00000064,8);
            lVar6 = lVar6 + -1;
            lVar9 = lVar9 + 8;
            lVar8 = lVar8 + 8;
          } while (lVar6 != 0);
        }
        (**(code **)(param_1 + 0x3e38))(lVar9,uVar1,in_stack_00000064,4);
        lVar12 = lVar12 + -1;
        param_3 = param_3 + (ulonglong)*(uint *)(param_1 + 0xe8);
      } while (lVar12 != 0);
    }
    if ((param_6 == *(int *)(param_1 + 0xd40) + -1) && (!bVar2)) {
      uVar1 = *(uint *)(param_1 + 0xd0);
      lVar12 = param_8 + -1;
      lVar6 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + param_3 + 3;
      if (0 < lVar12) {
        do {
          (**(code **)(param_1 + 0x3e3c))(lVar6,uVar1,in_stack_00000064,4);
          lVar12 = lVar12 + -1;
          lVar6 = lVar6 + 8;
        } while (lVar12 != 0);
      }
    }
    if (param_6 == 0) {
      fn_82C9D5A8(param_1,param_4,*(undefined4 *)(param_1 + 0xd0),in_stack_00000064,param_8,1,
                    bVar2);
    }
    param_4 = (longlong)(int)in_stack_00000054 * (longlong)*(int *)(param_1 + 0xe8) + param_4;
    if ((int)in_stack_00000054 < iVar4) {
      lVar12 = uVar3 - uVar5;
      do {
        uVar1 = *(uint *)(param_1 + 0xd0);
        lVar9 = ((ulonglong)uVar1 & 0x1fffffff) * 8 + param_4;
        (**(code **)(param_1 + 0x3e38))(lVar9,uVar1,in_stack_00000064,4);
        lVar9 = lVar9 + 4;
        lVar8 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + param_4 + 3;
        lVar6 = param_8 + -1;
        if (0 < (int)(param_8 + -1)) {
          do {
            (**(code **)(param_1 + 0x3e38))(lVar9,uVar1,in_stack_00000064,8);
            (**(code **)(param_1 + 0x3e3c))(lVar8,uVar1,in_stack_00000064,8);
            lVar6 = lVar6 + -1;
            lVar9 = lVar9 + 8;
            lVar8 = lVar8 + 8;
          } while (lVar6 != 0);
        }
        (**(code **)(param_1 + 0x3e38))(lVar9,uVar1,in_stack_00000064,4);
        lVar12 = lVar12 + -1;
        param_4 = param_4 + (ulonglong)*(uint *)(param_1 + 0xe8);
      } while (lVar12 != 0);
    }
    if ((param_6 == *(int *)(param_1 + 0xd40) + -1) && (!bVar2)) {
      uVar1 = *(uint *)(param_1 + 0xd0);
      param_8 = param_8 + -1;
      lVar12 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + param_4 + 3;
      if (0 < param_8) {
        do {
          (**(code **)(param_1 + 0x3e3c))(lVar12,uVar1,in_stack_00000064,4);
          param_8 = param_8 + -1;
          lVar12 = lVar12 + 8;
        } while (param_8 != 0);
      }
    }
  }
  else {
    if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
       (*(int *)(param_1 + 0x54c8) != 1)) {
      *(undefined4 *)(param_1 + 0x55d0) = *(undefined4 *)(param_1 + 0x55d4);
    }
    else {
      *(int *)(param_1 + 0x55d0) = *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0x55d4);
    }
    iVar4 = in_stack_00000054 - 1;
    if (iVar4 < (int)in_stack_0000005c) {
      iVar7 = iVar4 * 4;
      do {
        if ((iVar4 == 0) || (uVar10 = 0, *(int *)(iVar7 + *(int *)(param_1 + 0x55d0)) != 0)) {
          uVar10 = 1;
        }
        if (((param_6 == *(int *)(param_1 + 0xd40) + -1) && (in_stack_00000054 == in_stack_0000005c)
            ) || (uVar11 = 0, *(int *)(iVar7 + *(int *)(param_1 + 0x55d0) + 4) != 0)) {
          uVar11 = 1;
        }
        fn_82C9D3A0(param_1,param_2,*(undefined4 *)(param_1 + 0xcc),in_stack_00000064,param_8,
                      uVar10,uVar11);
        fn_82C9D5A8(param_1,param_3,*(undefined4 *)(param_1 + 0xd0),in_stack_00000064,param_8,
                      uVar10,uVar11);
        fn_82C9D5A8(param_1,param_4,*(undefined4 *)(param_1 + 0xd0),in_stack_00000064,param_8,
                      uVar10,uVar11);
        iVar4 = iVar4 + 1;
        in_stack_00000054 = in_stack_00000054 + 1;
        iVar7 = iVar7 + 4;
        param_3 = (ulonglong)*(uint *)(param_1 + 0xe8) + param_3;
        param_2 = param_2 + (ulonglong)*(uint *)(param_1 + 0xe4);
        param_4 = (ulonglong)*(uint *)(param_1 + 0xe8) + param_4;
      } while (iVar4 < (int)in_stack_0000005c);
    }
  }
  return;
}

