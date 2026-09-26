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
extern unsigned int *auStack_88;
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82AF7710();
extern int fn_82B25248();
extern int fn_82B28530();
extern int fn_82B82D28();
extern int fn_82B84350();
extern int fn_82B8A3A0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82B2B690(int param_1,uint param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  double dVar15;
  uint uStack_90;
  uint uStack_8c;
  undefined1 auStack_88 [136];
  
  uStack_8c = (uint)param_3;
  puVar1 = *(uint **)(param_2 + 0x30);
  uStack_90 = param_2;
  while( true ) {
    if ((ulonglong)puVar1[3] == (param_4 & 0xffffffff)) break;
    fn_82B82D28(*(undefined4 *)(uStack_90 + 0x2c),uStack_8c,&uStack_90,&uStack_8c,auStack_88,0
                      ,param_2,0);
    puVar1 = *(uint **)(uStack_90 + 0x30);
  }
  dVar15 = (double)lbl_821AAD20;
  uVar5 = fn_82B8A3A0(dVar15,dVar15,dVar15,param_1,1);
  uVar4 = uStack_90;
  uVar3 = *puVar1 >> 0x19 & 7;
  uVar7 = fn_82B84350(param_1,*(undefined4 *)(uStack_90 + 0x1c),0,uVar3);
  uVar13 = uVar7 & 0xfffffffe;
  puVar11 = (uint *)((uVar4 & 0xfffffffe) + 0x24);
  uVar12 = 0;
  *(uint *)(uVar13 + 0x24) = *puVar11;
  *(uint *)(*puVar11 & 0xfffffffe) = uVar13;
  *(uint *)(uVar13 + 0x28) = uVar4 & 0xfffffffe;
  *puVar11 = uVar13 + 0x28;
  if (uVar3 != 0) {
    uVar13 = 0;
    puVar14 = (undefined4 *)(uVar7 + 0x2c);
    do {
      if (uVar12 == uStack_8c) {
        uVar6 = fn_82AD18C0(param_1,uVar5,0);
      }
      else {
        uVar6 = fn_82AD1918(param_1,param_4,(*puVar1 >> 5 & 0xff) >> (uVar13 & 0x3f) & 3,
                                  param_6);
      }
      uVar8 = fn_82AD1978(uVar7,uVar6);
      uVar12 = uVar12 + 1;
      *puVar14 = uVar8;
      puVar14 = puVar14 + 1;
      uVar13 = uVar13 + 2;
    } while (uVar12 < uVar3);
  }
  uVar5 = fn_82AD17B0(param_1,uVar7);
  uVar13 = uStack_90;
  puVar14 = (undefined4 *)(uStack_90 + 0x30);
  fn_82AD20C0(uStack_90,*(undefined4 *)(uStack_90 + 0x30),param_1);
  uVar8 = fn_82AD1978(uVar13,uVar5);
  *puVar14 = uVar8;
  uVar5 = fn_82AD1918(param_1,param_4,param_5,param_6);
  uVar6 = fn_82AD18C0(param_1,uStack_90,param_3);
  iVar9 = fn_82AF7710(param_1,1,param_2,uVar6,uVar5);
  fn_82B28530(param_1,param_2,param_3,iVar9,0,0,*(undefined4 *)(param_1 + 0x28c),param_7);
  iVar9 = *(int *)(iVar9 + 0x2c);
  piVar10 = (int *)(*(int *)(iVar9 + 0xc) + 4);
  for (iVar2 = *piVar10; iVar2 != iVar9; iVar2 = *(int *)(iVar2 + 8)) {
    piVar10 = (int *)(iVar2 + 8);
  }
  *piVar10 = *(int *)(iVar9 + 8);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(param_2 + 4);
  *(int *)(param_2 + 4) = iVar9;
  *(uint *)(iVar9 + 0xc) = param_2;
  fn_82B25248(param_1,uVar7,*(undefined4 *)(param_1 + 0x28c));
  fn_82B25248(param_1,uStack_90,*(undefined4 *)(param_1 + 0x28c));
  return;
}

