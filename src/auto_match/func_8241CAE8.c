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
extern int fn_822BC900();
extern int fn_8240F170();
extern int fn_8240F910();
extern int fn_82417F58();
extern int fn_824199A8();
extern int fn_8241A610();


void fn_8241CAE8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  int iVar6;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  iVar6 = *(int *)(*param_1 + 0x8c);
  puVar1 = (undefined4 *)(*(undefined4 **)(iVar6 + 0x60))[1];
  puStack_40 = *(undefined4 **)(iVar6 + 0x60);
  while (puVar4 = puVar1, *(char *)((int)puVar4 + 0x35) == '\0') {
    if ((uint)puVar4[3] < *(uint *)(param_2 + 0xc)) {
      puVar1 = (undefined4 *)puVar4[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar4;
      puStack_40 = puVar4;
    }
  }
  if ((puStack_40 == *(undefined4 **)(iVar6 + 0x60)) ||
     (*(uint *)(param_2 + 0xc) < (uint)puStack_40[3])) {
    apuStack_3c[0] = *(undefined4 **)(iVar6 + 0x60);
    ppuVar5 = apuStack_3c;
  }
  else {
    ppuVar5 = &puStack_40;
  }
  if (*ppuVar5 == *(undefined4 **)(iVar6 + 0x60)) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*ppuVar5)[4];
  }
  if (*(int *)(param_2 + 8) == 0) {
    uVar2 = fn_82417F58(param_1,param_2,iVar6,*(int *)(iVar6 + 0x30) != 0);
    fn_824199A8(param_1,uVar2);
  }
  if (*(int *)(param_2 + 8) == 1) {
    iVar3 = fn_82417F58(param_1);
    fn_822BC900(iVar3,*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x40));
    fn_8240F170(iVar6,param_2 + 0x10);
    if (*(int *)(iVar3 + 0x24) != 0) {
      (**(code **)(*(int *)param_1[1] + 0x54))
                ((int *)param_1[1],(ulonglong)(uint)param_1[6] * 0x1ac + (ulonglong)(uint)param_1[2]
                 ,*(undefined4 *)(iVar6 + 0x40),*(undefined4 *)(param_2 + 0x34));
    }
    uVar2 = fn_82417F58(param_1);
    fn_8241A610(param_1,uVar2);
  }
  if (*(int *)(param_2 + 8) == 2) {
    fn_8240F910(iVar6,param_2 + 0x50,1);
  }
  return;
}

