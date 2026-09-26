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
extern unsigned int *auStack_f0;
extern int fn_82273C88();
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82682D30();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_8274C458();
extern unsigned int stack0x00000000;


void fn_8274C4D0(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined4 *apuStack_100 [4];
  undefined4 auStack_f0 [60];
  
  iVar5 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  if (*(int *)(iVar5 + 0x114) == 0) {
    fn_8274C458(param_1,0xffffffff82013444);
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 0;
    return;
  }
  uVar11 = 0;
  puVar10 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
  puVar10[2] = puVar10[2] + 1;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(&stack0x00000000 + -0x100,uVar4,uVar7,0xffffffffffffffff,0);
    apuStack_100[0][2] = apuStack_100[0][2] + 1;
    uVar1 = puVar10[2];
    puVar10[2] = (int)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_826944C8(puVar10);
    }
    uVar1 = apuStack_100[0][2];
    apuStack_100[0][2] = (int)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_826944C8(apuStack_100[0]);
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x1c) - 1;
    puVar10 = apuStack_100[0];
    if (10 < (uVar11 & 0xffffffff)) {
      puVar6 = (undefined4 *)
               fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                 (uVar11 & 0xfffffff) << 4,0);
      goto LAB_8274c5cc;
    }
  }
  puVar6 = (undefined4 *)(&stack0x00000000 + -0xf0);
LAB_8274c5cc:
  uVar9 = 0;
  puVar12 = puVar6;
  if ((uVar11 & 0xffffffff) != 0) {
    do {
      uVar9 = uVar9 + 1;
      uVar4 = fn_826957D0(param_1,uVar9);
      if (puVar12 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar8 = puVar12;
      }
      fn_82682D30(iVar5,*(undefined4 *)(param_1 + 0x18),uVar4,puVar8);
      puVar12 = puVar12 + 4;
    } while ((uVar9 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  fn_826959C8(iVar5 + 0x9f0);
  *(undefined1 *)(iVar5 + 0x9f0) = 0;
  uVar7 = 0;
  if (puVar10[4] != 0) {
    uVar7 = *puVar10;
  }
  (**(code **)(**(int **)(iVar5 + 0x114) + 4))(*(int **)(iVar5 + 0x114),iVar5,uVar7,puVar6,uVar11);
  fn_82695FA0(*(undefined4 *)(param_1 + 4),iVar5 + 0x9f0);
  uVar9 = uVar11;
  puVar12 = puVar6;
  uVar3 = uVar11 & 0xffffffff;
  while (uVar3 != 0) {
    fn_82273C88(puVar12);
    puVar12 = puVar12 + 4;
    uVar9 = uVar9 - 1;
    uVar3 = uVar9;
  }
  if (0x28 < (uVar11 & 0xffffffff)) {
    fn_8267BE38(puVar6);
  }
  uVar1 = puVar10[2];
  puVar10[2] = (int)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    fn_826944C8(puVar10);
  }
  return;
}

