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
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_64;
extern int fn_8251F720();
extern int fn_825200A8();
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8265CA60();
extern int fn_82837D98();
extern int fn_8284C850();
extern int fn_8284C860();
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


void fn_825787A8(int param_1,longlong param_2,int param_3)

{
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar1;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [92];
  
  uVar2 = fn_8251F720(param_2 + 0x104,0);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = fn_8251F720(param_2 + 0x11c,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = fn_8251F720(param_2 + 0x114,0);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = fn_8251F720(param_2 + 0x118,0);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  lVar8 = 0;
  if (param_3 != 0) {
    lVar4 = param_2 + 0x120;
    iVar3 = fn_825200A8(lVar4,0xffffffff82196288);
    if (iVar3 == 0) {
      uVar2 = fn_8251F720(lVar4,0);
      *(undefined4 *)(param_1 + 0x80) = uVar2;
      goto LAB_82578840;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
LAB_82578840:
  lVar4 = 0;
  piVar5 = (int *)(param_1 + 0xd0);
  do {
    fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 100) + 0x14),0,&iStack_70);
    iVar3 = iStack_70;
    fn_8263BDD8(iStack_70,lVar4,0,0x10,&iStack_6c,auStack_60,auStack_64,&iStack_68);
    piVar5 = piVar5 + 1;
    *piVar5 = iStack_6c;
    fn_8262FBD8(iVar3,*(uint *)(iVar3 + 0x20) & 0xfffff000,
                      *(uint *)(iVar3 + 0x30) & 0xfffff000);
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < 0xc);
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x14),0,&iStack_6c);
  fn_8263BDD8(iStack_6c,0,0,0x10,&iStack_70,&iStack_68,auStack_64,auStack_60);
  *(int *)(param_1 + 0x104) = iStack_70;
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x14),0,&iStack_6c);
  fn_8262FBD8(iStack_6c,*(uint *)(iStack_6c + 0x20) & 0xfffff000,
                    *(uint *)(iStack_6c + 0x30) & 0xfffff000);
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14),0,&iStack_6c);
  fn_8263BDD8(iStack_6c,0,0,0x10,&iStack_70,&iStack_68,auStack_64,auStack_60);
  *(int *)(param_1 + 0x10c) = iStack_70;
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14),0,&iStack_6c);
  fn_8262FBD8(iStack_6c,*(uint *)(iStack_6c + 0x20) & 0xfffff000,
                    *(uint *)(iStack_6c + 0x30) & 0xfffff000);
  uVar1 = fn_8284C860(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14));
  *(undefined4 *)(param_1 + 0x108) = 0;
  lVar4 = (uVar1 & 0xff) << 2;
  if (0x3fffffff < (uVar1 & 0xff)) {
    lVar4 = -1;
  }
  uVar2 = fn_8265CA60(lVar4);
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  uVar6 = (uint)(uVar1 & 0xff);
  if (uVar6 < 2) {
    fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14),0,&iStack_68);
    fn_8263BDD8(iStack_68,0,0,0x10,&iStack_6c,auStack_64,auStack_60,auStack_5c);
    **(int **)(param_1 + 0x108) = iStack_6c;
    fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14),0,&iStack_68);
    fn_8262FBD8(iStack_68,*(uint *)(iStack_68 + 0x20) & 0xfffff000,
                      *(uint *)(iStack_68 + 0x30) & 0xfffff000);
  }
  else {
    lVar4 = 0;
    if (uVar6 != 0) {
      iVar3 = 0;
      do {
        fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14),0,&iStack_6c);
        fn_8263BDD8(iStack_6c,lVar4,0,0x10,&iStack_70,auStack_5c,auStack_64,auStack_60);
        *(int *)(iVar3 + *(int *)(param_1 + 0x108)) = iStack_70;
        fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14),0,&iStack_68);
        fn_8262FBD8(iStack_68,*(uint *)(iStack_68 + 0x20) & 0xfffff000,
                          *(uint *)(iStack_68 + 0x30) & 0xfffff000);
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + 4;
      } while ((int)lVar4 < (int)uVar6);
    }
  }
  if ((param_3 == 0) || (*(int *)(param_1 + 0x80) == 0)) {
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  else {
    uVar1 = fn_8284C860(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x14));
    lVar4 = (uVar1 & 0xff) << 2;
    if (0x3fffffff < (uVar1 & 0xff)) {
      lVar4 = -1;
    }
    uVar2 = fn_8265CA60(lVar4);
    *(undefined4 *)(param_1 + 0x114) = uVar2;
    iVar3 = (int)(uVar1 & 0xff);
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x14),0,&iStack_68);
        fn_8263BDD8(iStack_68,lVar8,0,0x10,&iStack_6c,auStack_64,auStack_60,auStack_5c);
        *(int *)(*(int *)(param_1 + 0x114) + iVar7) = iStack_6c;
        fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x14),0,&iStack_70);
        fn_8262FBD8(iStack_70,*(uint *)(iStack_70 + 0x20) & 0xfffff000,
                          *(uint *)(iStack_70 + 0x30) & 0xfffff000);
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 4;
      } while ((int)lVar8 < iVar3);
    }
  }
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14),0,&iStack_68);
  fn_8263BDD8(iStack_68,0,0,0x10,&iStack_6c,auStack_64,auStack_60,auStack_5c);
  *(int *)(param_1 + 0x110) = iStack_6c;
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14),0,&iStack_68);
  fn_8262FBD8(iStack_68,*(uint *)(iStack_68 + 0x20) & 0xfffff000,
                    *(uint *)(iStack_68 + 0x30) & 0xfffff000);
  uVar2 = fn_8284C850(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x14));
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = fn_8284C850(*(undefined4 *)(*(int *)(param_1 + 100) + 0x14));
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  uVar2 = fn_8284C850(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14));
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  uVar2 = fn_8251F720(param_2 + 0x108,0);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = fn_8251F720(param_2 + 0x10c,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = fn_8251F720(param_2 + 0x110,0);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  return;
}

