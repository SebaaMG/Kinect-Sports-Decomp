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
extern unsigned int *auStack_50;
extern int fn_8225F160();
extern int fn_82264520();
extern int fn_8229ACA0();
extern int fn_8229AD30();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82359698();
extern int fn_8254EDB0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83276584;
extern unsigned int uStack_54;


void fn_8240BAF0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  longlong lVar11;
  undefined4 uStack_54;
  undefined4 auStack_50 [20];
  
  fn_82359698(*(undefined4 *)(param_1 + 4),4);
  auStack_50[4] = 4;
  piVar10 = (int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  auStack_50[2] = lbl_821CC160;
  lVar11 = 5;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[3] = 0;
  puVar8 = (undefined4 *)(param_1 + 0x48);
  puVar9 = &uStack_54;
  do {
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar9;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[3] = 0;
  auStack_50[4] = 4;
  puVar9 = &uStack_54;
  lVar11 = 5;
  puVar8 = (undefined4 *)(param_1 + 0x60);
  do {
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar9;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xd4);
  (**(code **)(*piVar10 + 4))(piVar10);
  fn_822B67F8();
  uVar5 = fn_822B98A8();
  fn_8229AD30(uVar3,0,uVar5);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xd4);
  (**(code **)(*piVar10 + 8))(piVar10);
  fn_822B67F8();
  uVar5 = fn_822B98A8();
  fn_8229AD30(uVar3,1,uVar5);
  iVar4 = *(int *)(param_1 + 0x2c);
  fn_8254EDB0((double)*(float *)(iVar4 + 0x68),(double)*(float *)(iVar4 + 0x6c),
                    *(undefined4 *)(iVar4 + 0x7c),*(undefined4 *)(iVar4 + 0x24));
  iVar6 = *(int *)(iVar4 + 0x7c);
  uVar3 = *(undefined4 *)(iVar4 + 0x6c);
  uVar1 = *(undefined4 *)(iVar4 + 0x5c);
  uVar2 = *(undefined4 *)(iVar4 + 0x58);
  if (*(int *)(iVar6 + 4) != 0) {
    *(undefined4 *)(iVar6 + 0x1cc) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(iVar6 + 0x1dc) = uVar3;
    *(undefined4 *)(iVar6 + 0x1d4) = 1;
    *(undefined4 *)(iVar6 + 0x1d0) = uVar2;
    *(undefined4 *)(iVar6 + 0x1d8) = uVar1;
    *(undefined4 *)(iVar6 + 0x1e0) = lbl_821CA460;
  }
  iVar6 = fn_8225F160();
  iVar4 = *(int *)(param_1 + 0x108);
  uVar3 = *(undefined4 *)(iVar6 + 0x14);
  iVar6 = (**(code **)(*piVar10 + 8))(piVar10);
  iVar7 = (**(code **)(*piVar10 + 4))(piVar10);
  uVar1 = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(iVar4 + 0x58) = 1;
  lbl_83276584 = lbl_83276584 + 1;
  fn_82264520(uVar1,uVar3,*(int *)(iVar7 + 0x24) != 0,*(int *)(iVar6 + 0x24) != 0);
  *(undefined4 *)(iVar4 + 0x5c) = 1;
  fn_8229ACA0(*(undefined4 *)(*(int *)(param_1 + 4) + 0xd4),
                    *(undefined4 *)(*(int *)(param_1 + 4) + 0xd0));
  return;
}

