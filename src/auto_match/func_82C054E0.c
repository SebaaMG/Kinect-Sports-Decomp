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
extern int fn_82A2A108();


undefined8 fn_82C054E0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  piVar1 = (int *)param_1[0x21];
  uVar6 = 0;
  uVar5 = *(ulonglong *)(param_1 + 0x16) & 0xfffffffffffff800;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x20] = (int)piVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  *(ulonglong *)(param_1 + 0x12) = uVar5;
  if (param_1[0x1b] != 0) {
    do {
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1);
      uVar7 = ((longlong)param_1[0x1a] * (longlong)(int)uVar6 & 0xffffffffU) + uVar5;
      if (((param_1[0x1e] & 8U) != 0) &&
         (*(longlong *)(param_1 + 0x10) + *(ulonglong *)(param_1 + 0xe) <= uVar7)) {
        uVar5 = *(ulonglong *)(param_1 + 0xe) & 0xfffffffffffff800;
        uVar7 = uVar5;
      }
      (**(code **)(*piVar1 + 0x34))(piVar1,0);
      (**(code **)(*piVar1 + 0x3c))(piVar1,uVar7);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
      (**(code **)(*piVar1 + 0x44))(piVar1);
      *(int *)(iVar4 + 8) = (int)uVar7;
      *(int *)(iVar4 + 0xc) = (int)(uVar7 >> 0x20);
      iVar2 = param_1[0x1a];
      uVar3 = (**(code **)(*piVar1 + 0x28))(piVar1);
      iVar4 = fn_82A2A108(param_1[0xb],uVar3,iVar2,0,iVar4);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_82a2b798();
        if (iVar4 == 0x26) {
          (**(code **)(*piVar1 + 0x34))(piVar1,1);
          if (uVar6 == 0) {
            param_1[0xc] = 1;
          }
          if ((param_1[0x1e] & 8U) == 0) {
            return 0;
          }
        }
        else if (iVar4 != 0x3e5) {
          (**(code **)(*piVar1 + 0x34))(piVar1,1);
          uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
          if (uVar6 != 0) {
            return uVar3;
          }
          param_1[0xc] = 1;
          return uVar3;
        }
      }
      uVar6 = uVar6 + 1;
      piVar1 = (int *)piVar1[2];
      *(ulonglong *)(param_1 + 0x14) =
           (ulonglong)(uint)param_1[0x1a] + *(longlong *)(param_1 + 0x14);
    } while (uVar6 < (uint)param_1[0x1b]);
  }
  return 0;
}

