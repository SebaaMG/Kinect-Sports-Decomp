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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82D00450();
extern int fn_82E0AD10();
extern int fn_82E162A8();
extern int fn_82E16300();
extern int fn_82E16378();
extern int fn_82E17CD8();
extern int fn_82E17DD0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_58;
extern unsigned int uStack_68;


undefined8 fn_82E0C310(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  
  iVar7 = param_2 * 4;
  uVar8 = (ulonglong)*(uint *)(iVar7 + *(int *)(param_1 + 0x24));
  iStack_70 = 0;
  iStack_6c = 0;
  uStack_68 = 0x80000000;
  iVar9 = param_2 * 0x30 + *(int *)(param_1 + 0x20);
  fn_82E17DD0(iVar9,uVar8,&iStack_70);
  iVar2 = 0;
  if (0 < iStack_6c) {
    iVar11 = 0;
    iVar3 = iStack_70;
    do {
      fn_82E16378(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 4));
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 8;
      iVar3 = iVar11 + iStack_70;
    } while (iVar2 < iStack_6c);
  }
  iVar2 = fn_82CE5410();
  iStack_6c = 0;
  if ((uStack_68 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),iStack_70,uStack_68 & 0x3fffffff,8);
  }
  iStack_70 = 0;
  uStack_68 = 0x80000000;
  iStack_60 = 0;
  iStack_5c = 0;
  uStack_58 = 0x80000000;
  fn_82E17CD8(iVar9,uVar8,&iStack_60);
  iVar2 = 0;
  if (0 < iStack_5c) {
    iVar11 = 0;
    iVar3 = iStack_60;
    do {
      fn_82E16300(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 4));
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 8;
      iVar3 = iVar11 + iStack_60;
    } while (iVar2 < iStack_5c);
  }
  iVar2 = fn_82CE5410();
  iStack_5c = 0;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),iStack_60,uStack_58 & 0x3fffffff,8);
  }
  iStack_60 = 0;
  uStack_58 = 0x80000000;
  lVar4 = *(uint *)(iVar9 + 0x20) + uVar8;
  uVar5 = (ulonglong)*(uint *)(iVar9 + 0x24) - (ulonglong)*(uint *)(iVar9 + 0x20);
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)(int)(((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0));
    uVar5 = lVar6 / 3 + (lVar6 >> 0x3f);
    uVar5 = (uVar5 & 0xffffffff) + ((uVar5 & 0xffffffff) >> 0x1f);
    uVar5 = uVar5 + (uVar5 & 0x7fffffff) * 2;
    lVar6 = (uVar5 & 0x3fffffff) * 4 + lVar4;
    iVar9 = *(int *)lVar6;
    while (iVar9 < 0) {
      lVar6 = lVar6 + -0xc;
      uVar5 = uVar5 - 3;
      iVar9 = *(int *)lVar6;
    }
    lVar6 = uVar5 + 3;
  }
  if (0 < (int)lVar6) {
    lVar6 = (lVar6 - 1U & 0xffffffff) / 3 + 1;
    do {
      iVar9 = *(int *)(param_1 + 0x18);
      uVar10 = *(uint *)lVar4 + uVar8;
      iVar2 = iVar9 + 0x10;
      uVar5 = fn_82CEA280(iVar2,uVar10,0);
      if ((uVar5 & 0xffffffff) != 0) {
        iVar3 = fn_82D00450(iVar9 + 0x1c,uVar5,0);
        if (*(code **)(iVar3 + 8) != (code *)0x0) {
          (**(code **)(iVar3 + 8))(uVar10);
        }
        if ((ulonglong)*(uint *)(iVar9 + 8) == (uVar10 & 0xffffffff)) {
          *(undefined4 *)(iVar9 + 8) = 0;
        }
        uVar1 = fn_82CEA220(iVar2,uVar10);
        fn_82CEA358(iVar2,uVar1);
      }
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + 0xc;
    } while (lVar6 != 0);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    fn_82CE4118();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  fn_82E162A8(*(undefined4 *)(param_1 + 0x18),0);
  fn_82E0AD10(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x24)));
  *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x24)) = 0;
  return 0;
}

