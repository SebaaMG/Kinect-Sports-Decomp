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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_108;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82C00380();
extern int fn_82C006A0();
extern int fn_82C00DA8();
extern int fn_82C00E28();
extern int fn_82C011E0();
extern int fn_82C01348();
extern int fn_82C01BC0();
extern int fn_82C02770();
extern int fn_82C02880();
extern int fn_82C03AB8();
extern int fn_82C03BB8();
extern int fn_82C042E8();
extern int fn_82C048D0();
extern int fn_82C048E0();
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


undefined8
fn_82BFEE60(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,ulonglong param_5,
             undefined4 *param_6)

{
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar1;
  undefined8 uVar9;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [8];
  undefined4 uStack_100;
  undefined1 auStack_f0 [8];
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [8];
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  
  iVar2 = fn_82C048D0(0x128);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_82C048E0();
  }
  iVar2 = fn_82C03BB8(0x158);
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_82C042E8();
  }
  uStack_10c = 0;
  uStack_110 = 0;
  piVar5 = (int *)0x0;
  uVar9 = 0xffffffff8007000e;
  piVar7 = (int *)0x0;
  piVar6 = (int *)0x0;
  piVar8 = (int *)0x0;
  if ((piVar4 == (int *)0x0) || (uVar1 = 0, piVar3 == (int *)0x0)) {
    uVar1 = uVar9;
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    iVar2 = fn_82C02880(0x2a8);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_82C03AB8();
    }
    iVar2 = fn_82C006A0(0x298);
    if (iVar2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_82C00DA8();
    }
    if ((piVar5 == (int *)0x0) || (piVar6 == (int *)0x0)) {
      uVar1 = uVar9;
    }
  }
  if (((param_5 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    iVar2 = fn_82C01BC0(0x228);
    if (iVar2 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)fn_82C02770();
    }
    iVar2 = fn_82C011E0(0x178);
    if (iVar2 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)fn_82C01348();
    }
    if ((piVar7 == (int *)0x0) || (piVar8 == (int *)0x0)) {
      uVar1 = uVar9;
    }
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uStack_d8 = *(undefined4 *)(param_3 + 0x18);
    uStack_e0 = 8;
    lStack_e8 = (ulonglong)((int)param_5 == (int)param_4) << 0x20;
    uVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,auStack_f0);
  }
  if (((param_5 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uStack_b8 = *(undefined4 *)(param_3 + 0x1c);
    uStack_c0 = 8;
    lStack_c8 = (ulonglong)((int)param_5 == (int)param_4) << 0x20;
    uVar1 = (**(code **)(*piVar7 + 0x2c))(piVar7,auStack_d0);
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uStack_100 = 3;
    uVar1 = fn_82C00E28(piVar6,auStack_108,param_2);
  }
  if ((param_5 & 0xffffffff) == 0) {
LAB_82bff0e8:
    if ((-1 < (int)uVar1) &&
       (uVar1 = (**(code **)(*piVar4 + 0x24))(piVar4,piVar5,piVar6,piVar7,piVar8,0,0),
       -1 < (int)uVar1)) {
      uStack_a0 = *(undefined8 *)(param_3 + 0xc);
      uStack_90 = 0;
      uStack_a8 = CONCAT44(*(uint *)(param_3 + 4) >> 1,*(undefined4 *)(param_3 + 8)) & 0x1ffffffff;
      lStack_98 = (ulonglong)*(uint *)(param_3 + 0x14) << 0x20;
      uVar1 = (**(code **)(*piVar3 + 0x24))(piVar3,auStack_b0);
    }
  }
  else if (-1 < (int)uVar1) {
    uVar1 = fn_82C00380(piVar8,param_1);
    goto LAB_82bff0e8;
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uVar1 = (**(code **)(*piVar5 + 0x44))(piVar5,param_4);
  }
  if (((param_5 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uVar1 = (**(code **)(*piVar7 + 0x44))(piVar7,param_5);
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar1)) {
    uVar1 = (**(code **)(*piVar5 + 0x60))(piVar5,&uStack_10c);
  }
  if ((param_5 & 0xffffffff) != 0) {
    if ((int)uVar1 < 0) goto LAB_82bff26c;
    uVar1 = (**(code **)(*piVar7 + 0x5c))(piVar7,&uStack_110);
  }
  if (-1 < (int)uVar1) {
    uVar1 = (**(code **)(*piVar4 + 0x38))(piVar4,uStack_10c,uStack_110,0);
  }
LAB_82bff26c:
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if ((int)uVar1 < 0) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  else {
    *param_6 = piVar3;
  }
  return uVar1;
}

