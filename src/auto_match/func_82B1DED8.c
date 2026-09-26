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
extern int fn_82ABDD90();
extern int fn_82AC68F0();
extern int fn_82AC9F80();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82AD2128();
extern int fn_82B1B1B8();
extern int fn_82B1B3F8();
extern int fn_82B44B88();
extern int fn_82B841E8();
extern int fn_82B84350();
extern int fn_82B860F0();
extern int fn_82B8F328();


void fn_82B1DED8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar4;
  undefined8 uVar2;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar3;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  iVar5 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar5 + 1;
  *(int *)(param_1 + 0x20) = iVar5;
  uVar4 = fn_82AC68F0(param_1);
  puVar8 = (uint *)((uint)param_3 & 0xfffffffe);
  puVar9 = (uint *)(uVar4 & 0xfffffffe);
  *puVar9 = *puVar8;
  *(uint **)(*puVar8 & 0xfffffffe) = puVar9;
  puVar9[1] = (uint)puVar8;
  *puVar8 = (uint)(puVar9 + 1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  fn_82B8F328(param_2,uVar4,param_1);
  fn_82B8F328(uVar4,param_3,param_1);
  uVar2 = fn_82AD17B0(param_1,param_4);
  uVar2 = fn_82B1B1B8(param_1,param_2,param_2 + 0x18,uVar2);
  uVar2 = fn_82AC9F80(param_1,uVar2,7);
  iVar5 = fn_82B1B3F8(param_1,param_2,param_2 + 0x20,uVar2);
  uVar1 = *(uint *)(iVar5 + 8);
  *(uint *)(iVar5 + 8) = uVar1 | 0x60000;
  iVar6 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  *(uint *)(iVar6 + iVar5 + -0x10) = (uint)param_3;
  piVar11 = (int *)(-(uint)((*(uint *)(param_2 + 0x24) & 1) == 0) & *(uint *)(param_2 + 0x24));
  uVar2 = fn_82ACA920(param_1,*piVar11,*(undefined4 *)(*piVar11 + 0xc));
  fn_82AD20C0(piVar11,*piVar11,param_1);
  uVar1 = (uint)piVar11 & 0xfffffffe;
  puVar9 = (uint *)(uVar1 + 0x24);
  *(uint *)((*(uint *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = *puVar9;
  iVar10 = uVar4 + 0x18;
  *(undefined4 *)(*puVar9 & 0xfffffffe) = *(undefined4 *)(uVar1 + 0x28);
  *puVar9 = *(uint *)(uVar4 + 0x20);
  *(uint *)(*(uint *)(uVar4 + 0x20) & 0xfffffffe) = uVar1;
  *(uint *)(uVar1 + 0x28) = uVar4 - 4 | 1;
  *(uint *)(uVar4 + 0x20) = uVar1 + 0x28;
  piVar11[7] = uVar4;
  iVar5 = fn_82B841E8(param_1,uVar4,iVar10,0x5e,0,0);
  iVar6 = fn_82ABDD90(param_1,0x5e,0,0);
  puVar9 = (uint *)(iVar6 + iVar5 + -0xc);
  *puVar9 = *puVar9 & 0xfffffff0 | 9;
  if (*(int *)(uVar4 + 100) != 0) {
    fn_82AD2128(iVar5,2,*(int *)(uVar4 + 100),param_1);
  }
  *(int *)(uVar4 + 100) = iVar5;
  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 0x2000000;
  iVar5 = fn_82B841E8(param_1,uVar4,iVar10,0x69,3,4);
  puVar9 = (uint *)fn_82AD17B0(param_1,param_5);
  *puVar9 = *puVar9 & 0xf1ffffff | 0x8000000;
  fn_82AD1270(puVar9,0);
  *puVar9 = *puVar9 & 0xffffe01f | 0x80;
  uVar7 = fn_82AD1978(iVar5,puVar9);
  *(undefined4 *)(iVar5 + 0x2c) = uVar7;
  puVar9 = (uint *)fn_82AD17B0(param_1,param_6);
  *puVar9 = *puVar9 & 0xf1ffffff | 0x8000000;
  fn_82AD1270(puVar9,0);
  *puVar9 = *puVar9 & 0xffffe01f;
  uVar7 = fn_82AD1978(iVar5,puVar9);
  *(undefined4 *)(iVar5 + 0x30) = uVar7;
  uVar3 = fn_82AD17B0(param_1,param_7);
  uVar7 = fn_82AD1978(iVar5,uVar3);
  *(undefined4 *)(iVar5 + 0x34) = uVar7;
  *(uint *)(param_1 + 0x234) = uVar4;
  uVar3 = fn_82AD17B0(param_1,iVar5);
  iVar5 = fn_82B860F0(param_1,uVar3,0x20f,piVar11,0);
  iVar5 = *(int *)(iVar5 + 0xc);
  if (*(int *)(uVar4 + 100) != 0) {
    fn_82AD2128(iVar5,2,*(int *)(uVar4 + 100),param_1);
  }
  *(int *)(uVar4 + 100) = iVar5;
  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 0x2000000;
  iVar5 = fn_82B84350(param_1,uVar4,iVar10,1);
  uVar7 = fn_82AD1978(iVar5,uVar2);
  *(undefined4 *)(iVar5 + 0x2c) = uVar7;
  uVar2 = fn_82AD17B0(param_1,iVar5);
  iVar5 = fn_82B860F0(param_1,uVar2,0x211,piVar11,1);
  iVar5 = *(int *)(iVar5 + 0xc);
  if (*(int *)(uVar4 + 100) != 0) {
    fn_82AD2128(iVar5,2,*(int *)(uVar4 + 100),param_1);
  }
  *(int *)(uVar4 + 100) = iVar5;
  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 0x2000000;
  fn_82B44B88(param_1);
  return;
}

