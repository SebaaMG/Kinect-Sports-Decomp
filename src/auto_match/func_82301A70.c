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
extern int fn_822B83D0();
extern int fn_823021D0();
extern int fn_82302328();
extern int fn_8255FA88();
extern int fn_82560010();


void fn_82301A70(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar5;
  ulonglong uVar3;
  undefined4 *puVar6;
  undefined8 uVar4;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar6 = (undefined4 *)(param_1[0x15] + 0x210U & 0xfffffff0);
  uVar10 = *puVar6;
  uVar11 = puVar6[1];
  uVar12 = puVar6[2];
  uVar13 = puVar6[3];
  iVar1 = *(int *)(*(int *)(*(int *)(param_1[0x15] + 0x118) + 0xc) + 0x110);
  if ((iVar1 == 0) || (param_1[0x17] == 0)) {
LAB_82301ac8:
    iVar9 = 1;
  }
  else {
    iVar5 = fn_8255FA88(iVar1);
    iVar9 = 0;
    if (iVar5 != 0) goto LAB_82301ac8;
  }
  if ((param_1[0x17] == 0) || (param_1[0x18] != 0)) {
    bVar2 = false;
    if (iVar9 == 0) {
      return;
    }
  }
  else {
    bVar2 = true;
  }
  puVar6 = (undefined4 *)0x0;
  uVar3 = (**(code **)(*param_1 + 0x14))(param_1,iVar9);
  uVar8 = uVar3;
  if ((uVar3 & 0xffffffff) == 0) {
    if (iVar9 == 0) {
      return;
    }
LAB_82301b80:
    uVar3 = 0;
LAB_82301b84:
    puVar6 = (undefined4 *)fn_823021D0(param_1,uVar3);
  }
  else {
    if ((uVar3 & 0xffffffff) < 3) goto LAB_82301b84;
    if ((uVar3 & 0xffffffff) != 3) {
      return;
    }
    if (((iVar1 == 0) || (bVar2)) &&
       (puVar6 = (undefined4 *)fn_82302328(param_1,iVar9), puVar6 != (undefined4 *)0x0)) {
      puVar7 = (undefined4 *)((uint)(param_1 + 0x70) & 0xfffffff0);
      *puVar7 = uVar10;
      puVar7[1] = uVar11;
      puVar7[2] = uVar12;
      puVar7[3] = uVar13;
      goto LAB_82301b98;
    }
    if (iVar9 != 0) {
      uVar8 = 0;
      goto LAB_82301b80;
    }
  }
  if (puVar6 == (undefined4 *)0x0) {
    return;
  }
LAB_82301b98:
  iVar1 = *(int *)(param_1[0x15] + 0x118);
  puVar7 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar7 = (undefined4 *)*puVar6;
  }
  uVar4 = fn_82560010(*(undefined4 *)(iVar1 + 0x24),puVar7);
  fn_822B83D0(iVar1,uVar4);
  iVar1 = puVar6[7];
  param_1[0x18] = (int)uVar8;
  param_1[0x17] = iVar1;
  return;
}

