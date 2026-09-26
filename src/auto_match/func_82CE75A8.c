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
extern int fn_82CE5410();
extern int fn_82CE7340();
extern int fn_82CEDE90();
extern int fn_82CF6EE0();
extern unsigned int iStack_7c;
extern unsigned int lbl_82005748;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_82CE75A8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  uint uStack_80;
  int iStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar8 = 0;
  uStack_80 = 0;
  iStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  (**(code **)(*(int *)*param_3 + 0x28))((int *)*param_3,&uStack_80);
  iVar2 = iStack_7c;
  fn_82CE7340(0xffffffff82132b78,param_2,&uStack_80,param_3[8]);
  fn_82CEDE90(param_2,0xffffffff82132b54);
  lVar5 = 0;
  lVar6 = 0;
  if (0 < (int)param_3[2]) {
    iVar4 = 0;
    do {
      uVar3 = fn_82CF6EE0(*(undefined4 *)(param_3[1] + iVar4));
      if ((uVar3 & 0xffffffff) != 0) {
        fn_82CEDE90(param_2,0xffffffff82132b30,lVar6,uVar3);
        lVar5 = uVar3 + lVar5;
      }
      lVar6 = lVar6 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)lVar6 < (int)param_3[2]);
  }
  fn_82CEDE90(param_2,0xffffffff82132b14,lVar5);
  fn_82CEDE90(param_2,0xffffffff82132b04);
  iVar4 = param_3[5];
  uVar3 = 0;
  dVar9 = (double)lbl_82005748;
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      puVar1 = *(uint **)(param_3[4] + iVar7);
      lVar5 = (ulonglong)puVar1[2] - (ulonglong)puVar1[1];
      lVar6 = ((ulonglong)*puVar1 - (ulonglong)puVar1[2]) + lVar5;
      uVar3 = lVar5 + uVar3;
      fn_82CEDE90(param_2,0xffffffff82132ac4,lVar8,lVar5,lVar6,
                        (double)((float)((double)(longlong)(int)lVar6 * dVar9) /
                                (float)(longlong)(int)lVar5));
      iVar4 = param_3[5];
      lVar8 = lVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((int)lVar8 < iVar4);
  }
  if (iVar4 == 0) {
    uVar3 = (ulonglong)(uint)param_3[7];
  }
  fn_82CEDE90(param_2,0xffffffff82132b14,uVar3);
  iVar4 = fn_82CE5410();
  (**(code **)(**(int **)(iVar4 + 0x18) + 0x28))(*(int **)(iVar4 + 0x18),&uStack_80);
  fn_82CEDE90(param_2,0xffffffff82132a90,0xffffffff82132abc);
  fn_82CEDE90(param_2,0xffffffff82132a70,uStack_80);
  fn_82CEDE90(param_2,0xffffffff82132954,uStack_78,
                    (double)((float)((double)uStack_78 * dVar9) / (float)uStack_80));
  iVar4 = fn_82CE5410();
  (**(code **)(**(int **)(iVar4 + 0x14) + 0x28))(*(int **)(iVar4 + 0x14),&uStack_80);
  if (iVar2 == iStack_7c) {
    fn_82CEDE90(param_2,0xffffffff82132aa4);
  }
  else {
    fn_82CE7340(0xffffffff82132a98,param_2,&uStack_80,0x7fffffff);
  }
  return;
}

