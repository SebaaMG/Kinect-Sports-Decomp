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
extern int fn_82F68B74();
extern int fn_82F69348();
extern int fn_82F69390();
extern int fn_82F69420();
extern int fn_82F69860();
extern int fn_82F698B8();
extern int fn_82F6FA38();
extern int fn_82F80D88();
extern int fn_82F812C0();


undefined8 fn_82F694D8(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(uint *)(**(int **)((int)param_4 + 4) + -4);
  uVar7 = (ulonglong)uVar1;
  if ((*(int *)(uVar1 + 0xc) != 0) && (iVar6 = *(int *)((int)param_2 + 4), iVar6 != 0)) {
    param_2 = (ulonglong)*(uint *)(iVar6 + 4);
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  piVar4 = (int *)fn_82F68B74(param_1,param_2);
  iVar6 = (int)uVar7;
  if ((piVar4[1] & 0x66U) == 0) {
    if (*(int *)(iVar6 + 0xc) != 0) {
      if ((((*piVar4 == -0x1f928c9d) && (2 < (uint)piVar4[4])) && (0x19930522 < (uint)piVar4[5])) &&
         (*(code **)(piVar4[7] + 8) != (code *)0x0)) {
        uVar8 = (**(code **)(piVar4[7] + 8))(piVar4,param_2,param_3,param_4,uVar7);
        return uVar8;
      }
      fn_82F80D88(piVar4,param_2,param_3,param_4,uVar7,uVar10,uVar8,uVar9);
    }
  }
  else if ((*(int *)(iVar6 + 4) != 0) && ((int)uVar8 == 0)) {
    puVar3 = (uint *)param_4;
    if (((piVar4[1] & 0x20U) == 0) || (iVar5 = fn_82F69348(), iVar5 == 0)) {
      fn_82F69420(param_2,param_4,uVar7);
      if (((*(int *)(iVar6 + 0xc) != 0) && (iVar6 = *(int *)(puVar3[2] + 4), iVar6 != 0)) &&
         (puVar2 = *(undefined4 **)(iVar6 + 8), puVar2 != (undefined4 *)0x0)) {
        fn_82F698B8(puVar2);
        iVar5 = fn_82F69860(*puVar2);
        if ((iVar5 != 0) && ((code *)puVar2[1] != (code *)0x0)) {
          (*(code *)puVar2[1])(*puVar2);
          *puVar2 = 0;
        }
        *(undefined4 *)(iVar6 + 8) = 0;
      }
    }
    else {
      iVar6 = fn_82F6FA38();
      if (*(int *)(iVar6 + 0x8c) == 0) {
        fn_82F812C0();
      }
      iVar6 = fn_82F6FA38();
      fn_82F69390(*(undefined4 *)(iVar6 + 0x8c),param_3);
      uVar1 = *puVar3;
      iVar6 = fn_82F6FA38();
      *(ulonglong *)(*(int *)(iVar6 + 0x8c) + 0x30) = (ulonglong)uVar1;
      uVar1 = puVar3[1];
      iVar6 = fn_82F6FA38();
      *(ulonglong *)(*(int *)(iVar6 + 0x8c) + 0x38) = (ulonglong)uVar1;
      uVar1 = puVar3[2];
      iVar6 = fn_82F6FA38();
      *(ulonglong *)(*(int *)(iVar6 + 0x8c) + 0x40) = (ulonglong)uVar1;
      uVar8 = fn_82F69348();
      fn_82F69390(param_3,uVar8);
    }
  }
  return 1;
}

