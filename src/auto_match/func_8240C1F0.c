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
extern int fn_8240BCE8();


void fn_8240C1F0(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar8;
  
  piVar5 = (int *)(**(code **)(*param_1 + 8))();
  piVar6 = (int *)(**(code **)(*param_1 + 8))(param_1);
  iVar7 = (**(code **)(*piVar6 + 8))();
  uVar1 = *(uint *)(iVar7 + 0x78c);
  iVar7 = (**(code **)(*piVar5 + 4))(piVar5);
  if (uVar1 < *(uint *)(iVar7 + 0x78c)) {
    uVar3 = (**(code **)(param_1[0x11] + 4))(param_1 + 0x11);
    pcVar2 = *(code **)(param_1[0x11] + 8);
  }
  else {
    piVar5 = (int *)(**(code **)(*param_1 + 8))(param_1);
    piVar6 = (int *)(**(code **)(*param_1 + 8))(param_1);
    iVar7 = (**(code **)(*piVar6 + 8))();
    uVar1 = *(uint *)(iVar7 + 0x78c);
    iVar7 = (**(code **)(*piVar5 + 4))(piVar5);
    if (uVar1 <= *(uint *)(iVar7 + 0x78c)) {
      uVar3 = 0;
      uVar4 = 0;
      uVar8 = 4;
      goto LAB_8240c334;
    }
    uVar3 = (**(code **)(param_1[0x11] + 8))(param_1 + 0x11);
    pcVar2 = *(code **)(param_1[0x11] + 4);
  }
  uVar4 = (*pcVar2)(param_1 + 0x11);
  uVar8 = 2;
LAB_8240c334:
  fn_8240BCE8(param_1,uVar8,uVar4,uVar3);
  return;
}

