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
extern int fn_82260458();
extern int fn_82397FE0();
extern int fn_82398048();
extern unsigned int uRam831c996c;


void fn_82399990(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return;
  }
  bVar2 = *(int *)(param_1 + 0x178) != 0;
  if ((bVar2) ||
     ((iVar4 = fn_82397FE0(param_1,1), iVar4 == 0 &&
      (iVar4 = fn_82398048(param_1,1), iVar4 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  iVar4 = fn_82397FE0(param_1,0);
  if (iVar4 == 0) {
    iVar4 = fn_82398048(param_1,0);
    uVar6 = 0;
    if (iVar4 == 0) goto LAB_82399a20;
  }
  uVar6 = 1;
LAB_82399a20:
  uVar3 = uRam831c996c;
  if (bVar2) {
    iVar4 = 0;
  }
  else {
    piVar1 = *(int **)(**(int **)(param_1 + 8) + 4);
    iVar4 = (int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20);
  }
  dVar7 = (double)*(float *)(*(int *)((*(int **)**(undefined4 **)(param_1 + 8))[4] * 4 +
                                     **(int **)**(undefined4 **)(param_1 + 8)) + 0x20);
  (**(code **)(**(int **)(param_1 + 0x2e0) + 0x44))();
  fn_82260458(uVar3,(int)dVar7,iVar4,param_4,uVar6,uVar5);
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  return;
}

