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
extern int fn_822B17A8();
extern int fn_8240BCE8();
extern int fn_8240C498();
extern int fn_824569A8();
extern int fn_8288B760();
extern int fn_828AB870();
extern int fn_828B00A0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8240C980(int param_1,int param_2)

{
  int *piVar1;
  int iVar4;
  undefined8 uVar2;
  char cVar5;
  longlong lVar3;
  int *piVar6;
  int *piVar7;
  double dVar8;
  
  piVar7 = (int *)(param_1 + 0x44);
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  piVar6 = (int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x48) != param_2) {
    piVar6 = (int *)(param_1 + 0x4c);
  }
  *piVar6 = *(int *)(param_1 + 0x1c) + *piVar6;
  piVar6 = *(int **)(param_2 + 0x168);
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar4 = (**(code **)(*piVar7 + 0xc))(piVar7,param_2);
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + *(int *)(iVar4 + 0x2c) * 4);
    iVar4 = *(int *)(piVar1[4] * 4 + *piVar1);
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + lbl_821CA460;
  }
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  if (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0xe8)) {
    if (piVar6 == (int *)0x0) {
      uVar2 = (**(code **)(*piVar7 + 0xc))(piVar7,param_2);
      fn_8240C498(param_1,uVar2);
    }
    else {
      cVar5 = fn_8288B760(piVar6);
      if (cVar5 != '\0') {
        uVar2 = fn_828B00A0((ulonglong)(uint)piVar6[4] + 0x278);
        lVar3 = (**(code **)(*piVar6 + 8))(piVar6);
        fn_828AB870(lVar3 + 0x49c,uVar2);
      }
    }
  }
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  dVar8 = (double)lbl_821CC160;
  *(float *)(iVar4 + 8) = lbl_821CC160;
  iVar4 = (**(code **)(*piVar7 + 0xc))(piVar7,param_2);
  if (*(int *)(iVar4 + 0x7a0) == 0) {
    if (piVar6 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar6 + 4))(piVar6);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x49c) + 0x3c))();
      if (iVar4 != 0) goto LAB_8240cbdc;
    }
    iVar4 = param_1 + 0x4c;
    if (*(int *)(param_1 + 0x48) != param_2) {
      iVar4 = param_1 + 100;
    }
    *(undefined4 *)(iVar4 + 0xc) = 1;
    iVar4 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(float *)(iVar4 + 0x2c) = (float)dVar8;
    *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
  }
  else if (piVar6 == (int *)0x0) {
    iVar4 = param_1 + 100;
    if (*(int *)(param_1 + 0x48) != param_2) {
      iVar4 = param_1 + 0x4c;
    }
    *(undefined4 *)(iVar4 + 0xc) = 0;
    fn_824569A8(*(undefined4 *)(param_1 + 0xf4));
    if (*(int *)(param_1 + 0x40) == 0) {
      fn_8240BCE8(param_1,6,0,0);
    }
  }
LAB_8240cbdc:
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  if (*(int *)(iVar4 + 0x10) == 3) {
    iVar4 = (**(code **)(*piVar7 + 0xc))(piVar7,param_2);
    if ((*(int *)(iVar4 + 0x24) != 0) &&
       (iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0x34), iVar4 != 0)) {
      fn_822B17A8(iVar4,0x15,0);
    }
  }
  return;
}

