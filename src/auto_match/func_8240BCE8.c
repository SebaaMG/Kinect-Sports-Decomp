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
extern unsigned int *auStack_1040;
extern unsigned int *auStack_1240;
extern unsigned int *auStack_12dc;
extern unsigned int *auStack_12e0;
extern unsigned int *auStack_1300;
extern unsigned int *auStack_840;
extern int fn_82294590();
extern int fn_82294750();
extern int fn_822950D8();
extern int fn_82296618();
extern int fn_822975D8();
extern int fn_82297DB0();
extern int fn_82358FD8();
extern int fn_824556F0();
extern int fn_82459000();
extern int fn_82528EE0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8254EDB0();
extern int fn_8288B760();
extern int fn_82F62F60();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821B8058;
extern unsigned int lbl_821B8084;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8240BCE8(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar7;
  int iVar8;
  double dVar9;
  longlong alStack_1310;
  undefined1 auStack_1300 [32];
  undefined1 auStack_12e0 [4];
  undefined1 auStack_12dc [76];
  undefined **appuStack_1290 [20];
  undefined1 auStack_1240 [512];
  undefined1 auStack_1040 [2048];
  undefined1 auStack_840 [2112];
  
  *(int *)(param_1 + 0x38) = param_3;
  *(int *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x3c) = param_4;
  alStack_1310 = CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x30) + 8),((uint)(alStack_1310)));
  uVar5 = fn_82535298(&alStack_1310,**(undefined4 **)(*(int *)(param_1 + 0x30) + 0xc),
                            0xffffffff83296bc0,0xffffffff83296bd0);
  alStack_1310 = CONCAT44(uVar5,((uint)(alStack_1310)));
  fn_82536288(&alStack_1310);
  iVar8 = *(int *)(param_1 + 0x100);
  alStack_1310 = (longlong)(*(int *)(*(int *)(iVar8 + 0x10) + 0xe0) + -1);
  *(float *)(param_1 + 0xf0) =
       (float)alStack_1310 * *(float *)(iVar8 + 0x1c) +
       (*(float *)(iVar8 + 0x1c) - *(float *)(iVar8 + 0x18));
  if (((param_2 != 4) && (param_2 != 5)) && (param_2 != 6)) {
    if (*(int *)(param_3 + 0x168) == 0) {
      uVar6 = *(uint *)(param_3 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    if ((uVar6 == 0) || (*(int *)(param_3 + 0x24) == 0)) {
      iVar8 = *(int *)(param_1 + 0x2c);
      fn_824556F0(iVar8,iVar8 + 0x1c);
      uVar5 = *(undefined4 *)(iVar8 + 0x40);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x2c);
      fn_824556F0(iVar8,iVar8 + 0x20);
      uVar5 = *(undefined4 *)(iVar8 + 0x44);
    }
    fn_8254EDB0((double)*(float *)(iVar8 + 0x60),(double)*(float *)(iVar8 + 100),
                      *(undefined4 *)(iVar8 + 0x7c),uVar5);
    uVar5 = lbl_82192734;
    iVar8 = *(int *)(iVar8 + 0x7c);
    if (*(int *)(iVar8 + 4) != 0) {
      *(undefined4 *)(iVar8 + 0x1e0) = lbl_821CA460;
      *(undefined4 *)(iVar8 + 0x1d0) = uVar5;
      *(undefined4 *)(iVar8 + 0x1cc) = 0;
      *(undefined4 *)(iVar8 + 0x1d4) = 0;
    }
    uVar5 = lbl_821CC160;
    if (*(int *)(param_1 + 0xec) == 0) {
      piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + *(int *)(param_3 + 0x2c) * 4);
      *(undefined4 *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) = lbl_82005748;
      piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + *(int *)(param_4 + 0x2c) * 4);
      *(undefined4 *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) = uVar5;
    }
  }
  if (*(int *)(param_1 + 0xec) != 0) goto LAB_8240c004;
  fn_82294590(auStack_12e0);
  if (param_2 == 5) {
    uVar3 = 0xffffffff821b8034;
LAB_8240bf9c:
    fn_82358FD8(*(undefined4 *)(param_1 + 4),auStack_1240,0x100,uVar3);
    puVar7 = auStack_1240;
  }
  else {
    if (param_2 == 6) {
      uVar3 = 0xffffffff821b8048;
      goto LAB_8240bf9c;
    }
    alStack_1310 = (longlong)(*(int *)(param_1 + 0xe0) + -1);
    puVar2 = (&lbl_821B8058)[param_2];
    dVar9 = -(double)((float)alStack_1310 * *(float *)(param_1 + 0xfc) -
                     *(float *)(param_1 + 0xf0));
    fn_82358FD8(*(undefined4 *)(param_1 + 4),auStack_1040,0x400,0xffffffff821b8074);
    fn_82358FD8(*(undefined4 *)(param_1 + 4),auStack_1240,0x100,puVar2);
    uVar6 = (uint)dVar9;
    alStack_1310 = (longlong)(int)uVar6;
    fn_82528EE0(auStack_840,0x400,auStack_1040,param_3 + 0x30,auStack_1240,(int)uVar6 / 0x3c,
                      (ulonglong)uVar6 + (longlong)((int)uVar6 / 0x3c) * -0x3c,
                      *(undefined4 *)(param_1 + 0xe0));
    puVar7 = auStack_840;
  }
  fn_82296618(auStack_12e0,puVar7);
  fn_822950D8(auStack_1300,auStack_12dc);
  fn_822975D8((ulonglong)*(uint *)(param_1 + 4) + 0xa74,auStack_1300,0,0xffffffffffffffff);
  fn_82297DB0(auStack_1300,1,0);
  fn_82294750(appuStack_1290);
  appuStack_1290[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_1290);
LAB_8240c004:
  uVar5 = *(undefined4 *)(param_1 + 0x108);
  puVar2 = (&lbl_821B8084)[param_2];
  uVar3 = (**(code **)(*(int *)(param_1 + 0x44) + 8))(param_1 + 0x44);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x44) + 4))(param_1 + 0x44);
  fn_82459000(uVar5,uVar4,uVar3,puVar2);
  return;
}

