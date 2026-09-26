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
extern int fn_82645740();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829C9180();
extern int fn_829CB790();
extern int fn_82A1F228();
extern int fn_82A93C88();
extern int fn_82A93E40();
extern int fn_82A93F70();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215054;
extern unsigned int lbl_83217128;
extern unsigned int lbl_83217138;


void fn_829D0440(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      ObDereferenceObject();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    fn_82645740(lbl_83215054);
    if (((param_1 == lbl_83217128) && (lbl_83215008 == 1)) && (param_2 == 0)) {
      *(undefined4 *)(param_1 + 0x18) = 2;
      uVar1 = fn_8265C940(0x60000,0xffffffff8c9c0000);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_829C9180(param_1 + 0x40,0x400);
        fn_8265C990(*(undefined4 *)(param_1 + 0x3c),0xffffffff8c9c0000);
        *(int *)(param_1 + 0x3c) = (int)uVar1;
        fn_82A1F228(uVar1,((ulonglong)*(uint *)(param_1 + 0x18) +
                            ((ulonglong)*(uint *)(param_1 + 0x18) & 0x7fffffff) * 2 & 0xffff) <<
                           0x10,4);
        fn_82A93E40(0x140,0xf0,*(undefined4 *)(param_1 + 0x18),1,4,0x1a220058,0,1);
        fn_82A93F70(param_1 + 0x40,uVar1);
      }
      iVar2 = fn_8265C940((ulonglong)*(uint *)(param_1 + 0x18) * 0x78,0x209c0000);
      if (iVar2 != 0) {
        fn_8265C990(*(undefined4 *)(param_1 + 0x1c),0x209c0000);
        *(int *)(param_1 + 0x1c) = iVar2;
      }
      piVar6 = (int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x30) = param_1 + 0x30;
      uVar5 = 0;
      *(int *)(param_1 + 0x34) = param_1 + 0x30;
      *(int **)(param_1 + 0x24) = piVar6;
      *(int **)(param_1 + 0x28) = piVar6;
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar2 = 0;
        uVar7 = 0;
        do {
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x1c) + 0x14) = 0;
          *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x1c) + 0x18) = 1;
          *(uint *)(iVar2 + *(int *)(param_1 + 0x1c) + 100) = uVar7 + *(int *)(param_1 + 0x3c);
          *(uint *)(iVar2 + *(int *)(param_1 + 0x1c) + 0x68) = uVar7 >> 1;
          fn_82A93C88(0x140,0xf0,1,4,0x1a220058,0,1,0);
          iVar4 = iVar2 + *(int *)(param_1 + 0x1c);
          fn_82A93F70(iVar4 + 0x30,*(undefined4 *)(iVar4 + 100));
          iVar4 = iVar2 + *(int *)(param_1 + 0x1c);
          *(int *)(iVar4 + 0x1c) = iVar4 + 0x30;
          iVar4 = iVar2 + *(int *)(param_1 + 0x1c);
          *(undefined4 *)(iVar4 + 0x6c) = 0;
          fn_829CB790(iVar4 + 0x30);
          iVar4 = *piVar6;
          uVar5 = uVar5 + 1;
          uVar7 = uVar7 + 0x30000;
          *(int *)(iVar2 + *(int *)(param_1 + 0x1c)) = iVar4;
          *(int **)(iVar2 + *(int *)(param_1 + 0x1c) + 4) = piVar6;
          *(int *)(iVar4 + 4) = iVar2 + *(int *)(param_1 + 0x1c);
          *piVar6 = iVar2 + *(int *)(param_1 + 0x1c);
          iVar2 = iVar2 + 0x78;
        } while (uVar5 < *(uint *)(param_1 + 0x18));
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      sync(0);
    }
    else {
      if (((param_1 != lbl_83217138) || ((lbl_83215000 & 0x80000000) != 0)) || (param_2 != 0)) {
        iVar2 = *(int *)(param_1 + 0x3c);
        if (iVar2 != 0) {
          if (param_1 == lbl_83217138) {
            uVar3 = 0xffffffffac9c0000;
          }
          else {
            fn_829C9180(param_1 + 0x40,0x400);
            iVar2 = *(int *)(param_1 + 0x3c);
            uVar3 = 0xffffffff8c9c0000;
          }
          fn_8265C990(iVar2,uVar3);
        }
        *(undefined4 *)(param_1 + 0x74) = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          fn_8265C990(*(int *)(param_1 + 0x1c),0x209c0000);
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_1,0,0x7c);
      }
      uVar1 = fn_8265C940(0xc000,0xffffffffac9c0000);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_8265C990(*(undefined4 *)(param_1 + 0x3c),0xffffffffac9c0000);
        *(int *)(param_1 + 0x3c) = (int)uVar1;
        fn_82A93E40(0x50,0x3c,3,1,4,0x1a220058,0,1);
        fn_82A93F70(param_1 + 0x40,uVar1);
      }
      uVar1 = fn_8265C940(0x168,0x209c0000);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar1,*(undefined4 *)(param_1 + 0x1c),0x168);
        fn_8265C990(*(undefined4 *)(param_1 + 0x1c),0x209c0000);
        *(int *)(param_1 + 0x1c) = (int)uVar1;
      }
      piVar6 = (int *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x18) = 3;
      *(int *)(param_1 + 0x30) = param_1 + 0x30;
      uVar5 = 0;
      *(int *)(param_1 + 0x34) = param_1 + 0x30;
      uVar7 = 0;
      *(int **)(param_1 + 0x24) = piVar6;
      *(int **)(param_1 + 0x28) = piVar6;
      do {
        piVar9 = (int *)(uVar7 + *(int *)(param_1 + 0x1c));
        piVar8 = piVar9 + 0xc;
        piVar9[0x1a] = uVar5 >> 1;
        piVar9[0x19] = uVar5 + *(int *)(param_1 + 0x3c);
        fn_82A93C88(0x50,0x3c,1,4,0x1a220058,0,1,0);
        fn_82A93F70(piVar8,piVar9[0x19]);
        piVar9[7] = (int)piVar8;
        piVar9[0x1b] = 0;
        fn_829CB790(piVar8);
        iVar2 = *piVar6;
        uVar7 = uVar7 + 0x78;
        piVar9[1] = (int)piVar6;
        uVar5 = uVar5 + 0x4000;
        *piVar9 = iVar2;
        *(int **)(iVar2 + 4) = piVar9;
        *piVar6 = (int)piVar9;
      } while (uVar7 < 0x168);
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      sync(0);
    }
  }
  return;
}

