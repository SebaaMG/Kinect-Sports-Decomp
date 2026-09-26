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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82E0BA38();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_78;


void fn_82E0C5E0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar4;
  int *piVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  
  iVar6 = param_1[0x1e];
  piVar4 = (int *)(**(code **)(*param_1 + 0x24))();
  piVar5 = (int *)fn_82E0BA38(param_1);
  if (piVar5 != (int *)0x0) {
    fn_82CE4040();
  }
  iStack_80 = 0;
  iStack_7c = 0;
  uStack_78 = 0x80000000;
  (**(code **)(*piVar5 + 0x14))(piVar5,&iStack_80);
  iVar7 = 0;
  if (0 < iStack_7c) {
    iVar8 = 0;
    do {
      iVar1 = *param_2;
      uVar9 = (ulonglong)*(uint *)(iVar8 + iStack_80);
      uVar2 = fn_82CEAC20(uVar9);
      uVar3 = (**(code **)(iVar1 + 0x10))(param_2,uVar2);
      if (((uVar3 & 0xffffffff) != 0) && ((uVar3 & 0xffffffff) != uVar9)) {
        (**(code **)(*piVar5 + 0x1c))(piVar5,uVar3,0);
        (**(code **)(*piVar4 + 0x18))(piVar4,uVar9,uVar3,0xffffffff8323ae68);
        (**(code **)(*piVar4 + 0x20))(piVar4,uVar3);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < iStack_7c);
  }
  if (iVar6 == 0) {
    fn_82CE4118(param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  fn_82CE4040(piVar5);
  if (param_1[0x1f] != 0) {
    fn_82CE4118();
  }
  param_1[0x1f] = (int)piVar5;
  iVar6 = fn_82CE5410();
  iStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
              (*(int **)(iVar6 + 0x10),iStack_80,uStack_78 & 0x3fffffff,4);
  }
  iStack_80 = 0;
  uStack_78 = 0x80000000;
  fn_82CE4118(piVar5);
  return;
}

