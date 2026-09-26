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
extern int fn_8268EA40();
extern int fn_8270AD88();
extern int fn_8270AFD8();


undefined8 fn_8270B4A0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  piVar1 = *(int **)(param_2 + 0xc);
  uVar6 = 1;
  if (param_1[2] + (int)piVar1 != *(int *)(param_2 + 0x10)) {
    fn_8270AFD8(param_1 + 0x11);
    uVar2 = param_1[0xb];
    *(undefined4 **)(param_2 + 4) = param_1 + 9;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(int *)(param_1[0xb] + 4) = param_2;
    param_1[0xb] = param_2;
    piVar1[2] = piVar1[2] + -1;
    uVar6 = fn_8270AD88(param_1,param_2);
    fn_8268EA40(param_1 + 0x13,param_2);
    param_1[0x12] = param_1[0x12] - (int)uVar6;
    uVar6 = (**(code **)(*(int *)*param_1 + 8))
                      ((int *)*param_1,
                       ((ulonglong)*(uint *)(param_2 + 0x10) -
                       (ulonglong)*(ushort *)(param_2 + 0x1e)) -
                       (-(ulonglong)
                         ((ulonglong)*(uint *)(param_2 + 0x10) ==
                         (ulonglong)(uint)param_1[2] + (ulonglong)*(uint *)(param_2 + 0xc)) &
                       (ulonglong)(uint)param_1[2]),uVar6,1 << (*(ushort *)(param_2 + 0x1c) & 0x3f))
    ;
  }
  if (piVar1[2] == 1) {
    iVar8 = param_1[2] + (int)piVar1;
    for (iVar3 = param_1[0x11]; (iVar3 != 0 && (*(int *)(iVar3 + 0x10) != param_1[2] + (int)piVar1))
        ; iVar3 = *(int *)((1 - iVar5) * 4 + iVar3)) {
      iVar5 = iVar8 >> 0x1f;
      iVar8 = iVar8 << 1;
    }
    if (*(int *)(iVar3 + 0x18) == 0) {
      fn_8270AFD8(param_1 + 0x11,iVar3);
      uVar2 = param_1[0xb];
      uVar7 = 0;
      *(undefined4 **)(iVar3 + 4) = param_1 + 9;
      *(undefined4 *)(iVar3 + 8) = uVar2;
      *(int *)(param_1[0xb] + 4) = iVar3;
      param_1[0xb] = iVar3;
      if (param_1[3] != 0) {
        piVar9 = piVar1 + 2;
        do {
          uVar7 = uVar7 + 1;
          *(int *)(piVar9[7] + 8) = piVar9[8];
          piVar4 = piVar9 + 7;
          piVar9 = piVar9 + 8;
          *(int *)(*piVar9 + 4) = *piVar4;
        } while (uVar7 < (uint)param_1[3]);
      }
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      uVar6 = fn_8270AD88(param_1,iVar3);
      fn_8268EA40(param_1 + 0x13,iVar3);
      param_1[0x12] = param_1[0x12] - (int)uVar6;
      uVar6 = (**(code **)(*(int *)*param_1 + 8))
                        ((int *)*param_1,
                         ((ulonglong)*(uint *)(iVar3 + 0x10) - (ulonglong)*(ushort *)(iVar3 + 0x1e))
                         - (-(ulonglong)
                             ((ulonglong)*(uint *)(iVar3 + 0x10) ==
                             (ulonglong)*(uint *)(iVar3 + 0xc) + (ulonglong)(uint)param_1[2]) &
                           (ulonglong)(uint)param_1[2]),uVar6,
                         1 << (*(ushort *)(iVar3 + 0x1c) & 0x3f));
    }
  }
  return uVar6;
}

