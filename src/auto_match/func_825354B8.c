extern int *piRam8327f850;
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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c8;
extern int fn_822A8928();
extern int fn_822A8D30();
extern int fn_825363B8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_828105C8();
extern int fn_828647F0();
extern int fn_82864848();
extern int fn_82864898();
extern unsigned int lbl_821C3FC4;
extern unsigned int lbl_821C4014;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F85C;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_8327F878;


int * fn_825354B8(undefined4 *param_1,float *param_2,float *param_3,undefined8 param_4,
                   int *param_5,int *param_6)

{
  float fVar1;
  int iVar3;
  int *piVar4;
  undefined8 uVar2;
  int **ppiVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int *piStack_d0;
  int *piStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [32];

  fn_82864848(auStack_a0);
  iVar3 = fn_822A8928(lbl_8327F878,1,*param_1,auStack_a0);
  if (iVar3 < 0) {
    piVar4 = (int *)fn_8265C9E0(8);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[1] = (int)param_4;
      *piVar4 = (int)&lbl_821C4014;
    }
    piStack_d0 = piVar4;
    uVar2 = fn_828647F0(auStack_70,param_4);
    iVar3 = fn_822A8D30(lbl_8327F874,uVar2);
    if (*(char *)(iVar3 + 0x5c) != '\0') goto LAB_8253556c;
    ppiVar5 = &piStack_d0;
  }
  else {
    dVar9 = (double)lbl_821CC160;
    dVar6 = dVar9;
    dVar7 = dVar9;
    dVar8 = dVar9;
    if (param_2 != (float *)0x0) {
      dVar6 = (double)*param_2;
      dVar7 = (double)param_2[1];
      dVar8 = (double)param_2[2];
    }
    fn_828105C8(dVar6,dVar7,dVar8,auStack_b8);
    dVar6 = dVar9;
    fVar1 = lbl_821CA460;
    if (param_3 != (float *)0x0) {
      dVar9 = (double)*param_3;
      dVar6 = (double)param_3[1];
      fVar1 = param_3[2];
    }
    fn_828105C8(dVar9,dVar6,(double)fVar1,auStack_c8);
    piStack_d0 = (int *)(**(code **)(*piRam8327f850 + 0x10))
                                  (piRam8327f850,auStack_a0,lbl_8327F85C,auStack_b8,auStack_c8);
    if (piStack_d0 == (int *)0x0) {
LAB_8253562c:
      piVar4 = (int *)fn_8265C9E0(8);
      if (piVar4 != (int *)0x0) {
        *piVar4 = (int)&lbl_821C4014;
        goto LAB_8253573c;
      }
LAB_82535748:
      piVar4 = (int *)0x0;
    }
    else {
      if (((*param_5 != param_5[1]) || (*param_6 != param_6[1])) &&
         (iVar3 = fn_825363B8(piStack_d0,param_5,param_6), iVar3 < 0)) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x330,0xffffffff821c3c40);
      }
      iVar3 = (**(code **)(*piStack_d0 + 0xc))(piStack_d0,auStack_a0);
      if (iVar3 < 0) {
        iVar3 = (**(code **)(*piRam8327f850 + 0x2c))(piRam8327f850,&piStack_d0);
        if (iVar3 < 0) {
          (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x340,0xffffffff821c3c64)
          ;
        }
        goto LAB_8253562c;
      }
      piVar4 = (int *)fn_8265C9E0(0xc);
      if (piVar4 == (int *)0x0) goto LAB_82535748;
      *piVar4 = (int)&lbl_821C3FC4;
      piVar4[2] = (int)piStack_d0;
LAB_8253573c:
      piVar4[1] = (int)param_4;
    }
    piStack_cc = piVar4;
    uVar2 = fn_828647F0(auStack_70,param_4);
    iVar3 = fn_822A8D30(lbl_8327F874,uVar2);
    if (*(char *)(iVar3 + 0x5c) != '\0') goto LAB_8253556c;
    ppiVar5 = &piStack_cc;
  }
  fn_82536690(iVar3 + 0x24,ppiVar5);
LAB_8253556c:
  fn_82864898(auStack_70);
  fn_82864898(auStack_a0);
  return piVar4;
}
