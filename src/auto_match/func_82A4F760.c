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
extern int fn_82A68BE8();
extern int fn_82F68CC0();


void fn_82A4F760(int param_1,undefined8 param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int aiStack_50 [20];
  
  if (param_3[1] == 1) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x34);
    uVar7 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x28) * (longlong)(int)param_5[2];
    uVar5 = (ulonglong)*param_3;
    uVar9 = (ulonglong)*param_5;
    lVar2 = (*(uint *)(param_1 + 0x30) - uVar3) + (ulonglong)*(uint *)(param_1 + 0x2c);
    if (uVar3 < (uVar7 & 0xffffffff)) {
      uVar7 = 0;
      if (uVar3 != 0) {
        fn_82F68CC0(uVar9,lVar2);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x34);
        uVar9 = uVar7 + uVar9;
      }
      trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x28),0);
      lVar2 = (ulonglong)param_5[2] - uVar7 / *(ushort *)(param_1 + 0x28);
      iVar4 = fn_82A68BE8(*(undefined2 *)(param_1 + 0x26),*(undefined2 *)(param_1 + 0x24),lVar2,
                           aiStack_50);
      uVar1 = *(ushort *)(param_1 + 0x26);
      lVar2 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x28) * (longlong)(int)lVar2;
      if (aiStack_50[0] == 0) {
        (**(code **)(param_1 + 0x38))
                  (uVar5,(longlong)(int)(uint)uVar1 * (longlong)iVar4,uVar9,lVar2);
        iVar4 = 0;
      }
      else {
        lVar8 = (longlong)*(int *)(param_1 + 0x30) * (longlong)(iVar4 + -1);
        lVar6 = (longlong)(int)(uint)uVar1 * (longlong)(iVar4 + -1);
        (**(code **)(param_1 + 0x38))
                  (uVar5,lVar6,uVar9,lVar8,uVar1,*(code **)(param_1 + 0x38),uVar1);
        lVar2 = lVar2 - lVar8;
        (**(code **)(param_1 + 0x38))
                  (lVar6 + uVar5,*(undefined2 *)(param_1 + 0x26),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x26));
        fn_82F68CC0(lVar8 + uVar9,*(undefined4 *)(param_1 + 0x2c),lVar2);
        iVar4 = *(int *)(param_1 + 0x30) - (int)lVar2;
      }
    }
    else {
      fn_82F68CC0(uVar9,lVar2,uVar7);
      iVar4 = *(int *)(param_1 + 0x34) - (int)uVar7;
    }
    *(int *)(param_1 + 0x34) = iVar4;
  }
  param_5[1] = param_3[1];
  return;
}

