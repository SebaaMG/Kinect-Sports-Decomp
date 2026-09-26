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


undefined8 fn_82B6A5A8(int param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_40 [64];
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d965c,0xffffffff820d95d8,0x5aa);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9650,0xffffffff820d95d8,0x5ab);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9640,0xffffffff820d95d8,0x5ac);
  }
  if (param_3 == 0xffffffffffffff14) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9230,0xffffffff820d95d8,0x5af);
  }
  iVar4 = (int)param_3;
  puVar6 = (undefined4 *)(**(code **)(iVar4 + 0xf4))(*(undefined4 *)(iVar4 + 0xf0),0x10);
  *puVar6 = 0xc00b2500;
  piVar7 = (int *)(param_2 + 4);
  lVar9 = 5;
  puVar6[1] = *(uint *)(*(int *)(*(int *)(param_2 + 4) + 0x20) + 4) |
              *(uint *)(*(int *)(param_2 + 4) + 0x10);
  puVar6[2] = 0x10;
  puVar6[3] = 0x10;
  puVar5 = puVar6 + 4;
  do {
    puVar8 = puVar5;
    piVar7 = piVar7 + 1;
    *puVar8 = *(uint *)(*(int *)(*piVar7 + 0x20) + 4) | *(uint *)(*piVar7 + 0x10);
    lVar9 = lVar9 + -1;
    puVar5 = puVar8 + 1;
  } while (lVar9 != 0);
  puVar8[1] = 0x10;
  puVar8[2] = 0x10;
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x20);
  puVar8[3] = 0xc0012700;
  puVar8[4] = *(uint *)(iVar1 + 0x10) | 2;
  puVar8[5] = *(uint *)(iVar2 + 4);
  uVar3 = (int)(puVar8 + 5) + (4 - (int)puVar6) >> 2;
  if (0x10 < uVar3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d966c,0xffffffff820d95d8,0x5e0);
  }
  (**(code **)(iVar4 + 0x100))(*(undefined4 *)(iVar4 + 0xf0),uVar3,auStack_40);
  fn_82B6D908(param_2,auStack_40);
  return 0;
}

