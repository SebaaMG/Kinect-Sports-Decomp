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
extern int fn_82C0BDF8();
extern U64 storeWordConditionalIndexed();


void fn_82C0F3F0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  char in_RESERVE;
  byte in_cr0;
  int *apiStack_30 [12];
  
  piVar4 = (int *)param_1;
  (**(code **)(*(int *)piVar4[0xb] + 0x44))((int *)piVar4[0xb],apiStack_30,0,0);
  uVar1 = apiStack_30[0][0xd];
  piVar5 = (int *)fn_82C0BDF8(apiStack_30[0],piVar4[0x40]);
  (**(code **)(*piVar5 + 0x38))(piVar5,1);
  puVar6 = (undefined8 *)(**(code **)(*piVar5 + 0x50))(piVar5);
  uVar8 = *puVar6;
  (**(code **)(*piVar5 + 8))(piVar5);
  if (apiStack_30[0] != (int *)0x0) {
    (**(code **)(*apiStack_30[0] + 8))();
    apiStack_30[0] = (int *)0x0;
  }
  do {
    puVar7 = (uint *)(param_1 + 0xf4);
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((ulonglong)*puVar7 - 1,0,param_1 + 0xf4);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  iVar2 = piVar4[0x40];
  piVar4[0x40] = iVar2 + 1U;
  if (uVar1 <= iVar2 + 1U) {
    piVar4[0x40] = 0;
  }
  (**(code **)(*(int *)piVar4[0xb] + 0x5c))((int *)piVar4[0xb],uVar8);
  (**(code **)(*piVar4 + 0xc4))(param_1);
  (**(code **)(*piVar4 + 0xcc))(param_1);
  return;
}

