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
extern int fn_82AC65F0();
extern int fn_82AC68F0();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AD2128();
extern int fn_82B44B88();
extern int fn_82B841E8();
extern int fn_82B8A3A0();
extern int fn_82B8F170();
extern int fn_82B8F328();
extern int fn_82B8F3D8();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_821AAD20;


uint fn_82AD5050(undefined8 param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar11;
  int *piVar12;
  
  iVar8 = fn_82AC65F0(param_3);
  uVar9 = param_2;
  if ((*(uint *)(*(int *)(iVar8 + 0xc) + 8) & 0x3f80) != 0x3c00) {
    uVar9 = fn_82AC68F0(param_1);
    uVar1 = param_2 & 0xfffffffe;
    piVar12 = (int *)(uVar9 & 0xfffffffe);
    uVar11 = 0;
    piVar12[1] = *(int *)(uVar1 + 4);
    *(int **)(*(uint *)(uVar1 + 4) & 0xfffffffe) = piVar12 + 1;
    *piVar12 = uVar1 + 4;
    *(int **)(uVar1 + 4) = piVar12;
    uVar1 = *(uint *)(uVar9 + 0x4c);
    *(uint *)(uVar9 + 0x30) =
         *(uint *)(param_2 + 0x30) & 0x800000 | *(uint *)(uVar9 + 0x30) & 0xff7fffff;
    uVar3 = *(uint *)(param_2 + 0x4c) & 0x400000;
    *(uint *)(uVar9 + 0x4c) = uVar3 | uVar1 & 0xffbfffff;
    uVar4 = *(uint *)(param_2 + 0x4c) & 0x800000;
    *(uint *)(uVar9 + 0x4c) = uVar4 | uVar3 | uVar1 & 0xff3fffff;
    *(undefined4 *)(uVar9 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    uVar5 = *(uint *)(param_2 + 0x4c) & 0x1000000;
    *(uint *)(uVar9 + 0x4c) = uVar5 | uVar4 | uVar3 | uVar1 & 0xfe3fffff;
    *(uint *)(uVar9 + 0x4c) =
         *(uint *)(param_2 + 0x4c) & 0x2000000 | uVar5 | uVar4 | uVar3 | uVar1 & 0xfc3fffff;
    *(undefined4 *)(uVar9 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(uVar9 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    if (*(undefined4 **)(param_2 + 0xc) != (undefined4 *)0x0) {
      uVar11 = **(undefined4 **)(param_2 + 0xc);
    }
    fn_82B8F328(uVar9,uVar11,param_1);
    *(uint *)(uVar9 + 0x30) =
         *(uint *)(param_2 + 0x30) & 0x8000000 | *(uint *)(uVar9 + 0x30) & 0xf7ffffff;
    fn_82B8F170(param_2,*(undefined4 *)(param_2 + 0xc),uVar9);
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x8000000;
    iVar10 = fn_82B841E8(param_1,uVar9,uVar9 + 0x18,0x78,0,0);
    uVar1 = param_3 & 0xfffffffe;
    *(uint *)(iVar10 + 8) = *(uint *)(iVar10 + 8) | 0x40;
    *(undefined4 *)((*(uint *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = *(undefined4 *)(uVar1 + 0x24);
    *(undefined4 *)(*(uint *)(uVar1 + 0x24) & 0xfffffffe) = *(undefined4 *)(uVar1 + 0x28);
    fn_82B8F3D8(param_2,1,param_3,param_1);
    *(undefined4 *)(uVar1 + 0x24) = *(undefined4 *)(uVar9 + 0x20);
    *(uint *)(*(uint *)(uVar9 + 0x20) & 0xfffffffe) = uVar1;
    *(uint *)(uVar1 + 0x28) = uVar9 - 4 | 1;
    *(uint *)(uVar9 + 0x20) = uVar1 + 0x28;
    if (*(int *)(uVar9 + 0x60) != 0) {
      fn_82AD2128(param_3,1,*(int *)(uVar9 + 0x60),param_1);
    }
    *(uint *)(uVar9 + 0x60) = param_3;
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x2000000;
    *(uint *)(param_3 + 0x1c) = uVar9;
    piVar12 = (int *)(*(int *)(iVar8 + 0xc) + 4);
    for (iVar2 = *piVar12; iVar2 != iVar8; iVar2 = *(int *)(iVar2 + 8)) {
      piVar12 = (int *)(iVar2 + 8);
    }
    *piVar12 = *(int *)(iVar8 + 8);
    *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar10 + 4);
    *(int *)(iVar10 + 4) = iVar8;
    *(int *)(iVar8 + 0xc) = iVar10;
    fn_82B44B88(param_1);
  }
  iVar10 = fn_82B841E8(param_1,uVar9,uVar9 + 0x18,0x6c,2,1);
  uVar6 = fn_82B8A3A0((double)lbl_82005C88,(double)lbl_821AAD20,(double)lbl_821AAD20,param_1,1
                           );
  uVar7 = fn_82AD18C0(param_1,param_4,0);
  uVar11 = fn_82AD1978(iVar10,uVar7);
  *(undefined4 *)(iVar10 + 0x2c) = uVar11;
  uVar6 = fn_82AD18C0(param_1,uVar6,0);
  uVar11 = fn_82AD1978(iVar10,uVar6);
  uVar1 = *(uint *)(iVar10 + 8);
  *(undefined4 *)(iVar10 + 0x30) = uVar11;
  *(uint *)(iVar10 + 8) = uVar1 | 0x20000;
  *(uint *)(iVar10 + 8) = uVar1 & 0xfffbffff | 0x20000 | *(uint *)(param_3 + 8) & 0x40000;
  fn_82AD1978(iVar10,iVar8);
  fn_82AD1A40(param_3,iVar10,param_1);
  iVar8 = fn_82B841E8(param_1,uVar9,uVar9 + 0x18,0x75,0,0);
  *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x2000000;
  uVar6 = fn_82AD17B0(param_1,iVar10);
  fn_82AD1978(iVar8,uVar6);
  return uVar9;
}

