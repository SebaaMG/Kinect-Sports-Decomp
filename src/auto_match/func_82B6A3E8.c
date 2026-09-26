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
extern unsigned int *auStack_40;
extern int fn_82AB15D0();
extern int fn_82B6D908();


undefined8 fn_82B6A3E8(int param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 auStack_40 [64];
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d965c,0xffffffff820d95d8,0x539);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9650,0xffffffff820d95d8,0x53a);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9640,0xffffffff820d95d8,0x53b);
  }
  if (param_3 == 0xffffffffffffff14) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9230,0xffffffff820d95d8,0x53e);
  }
  iVar3 = (int)param_3;
  puVar5 = (undefined4 *)(**(code **)(iVar3 + 0xf4))(*(undefined4 *)(iVar3 + 0xf0),0xd);
  *puVar5 = 0xc00b2500;
  piVar6 = (int *)(param_2 + 4);
  lVar8 = 5;
  puVar5[1] = *(uint *)(*(int *)(*(int *)(param_2 + 4) + 0x20) + 4) |
              *(uint *)(*(int *)(param_2 + 4) + 0x10);
  puVar5[2] = 0x10;
  puVar5[3] = 0x10;
  puVar4 = puVar5 + 4;
  do {
    puVar7 = puVar4;
    piVar6 = piVar6 + 1;
    *puVar7 = *(uint *)(*(int *)(*piVar6 + 0x20) + 4) | *(uint *)(*piVar6 + 0x10);
    lVar8 = lVar8 + -1;
    puVar4 = puVar7 + 1;
  } while (lVar8 != 0);
  iVar1 = *(int *)(*(int *)(param_2 + 0x20) + 0x20);
  puVar7[1] = *(uint *)(*(int *)(param_2 + 0x20) + 0x10);
  puVar7[2] = *(uint *)(iVar1 + 4);
  iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 0x20);
  puVar7[3] = *(uint *)(*(int *)(param_2 + 0x1c) + 0x10);
  puVar7[4] = *(uint *)(iVar1 + 4);
  uVar2 = (int)(puVar7 + 4) + (4 - (int)puVar5) >> 2;
  if (0xd < uVar2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d966c,0xffffffff820d95d8,0x572);
  }
  (**(code **)(iVar3 + 0x100))(*(undefined4 *)(iVar3 + 0xf0),uVar2,auStack_40);
  fn_82B6D908(param_2,auStack_40);
  return 0;
}

