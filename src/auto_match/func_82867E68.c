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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822DD1B8();
extern int fn_822DD438();
extern int fn_82866260();
extern int fn_828667C0();
extern int fn_82866860();
extern int fn_82866978();
extern int fn_82866A88();
extern int fn_82866B38();
extern int fn_82867718();
extern int fn_82867780();
extern int fn_82868378();
extern int fn_82868E78();
extern int fn_82869708();
extern int fn_82869A00();
extern int fn_8286BB58();
extern int fn_8286DA00();
extern int fn_82FE65A0();
extern int fn_82FE65F8();
extern int fn_82FE8F98();
extern int fn_82FEBD38();
extern unsigned int lbl_82020F08;
extern unsigned int lbl_82020F10;
extern unsigned int lbl_8202134C;
extern unsigned int lbl_831577C8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82867E68(undefined4 *param_1)

{
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar1;
  int *piVar6;
  undefined **ppuVar7;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  *param_1 = &lbl_8202134C;
  uVar2 = lbl_82020F10;
  param_1[1] = &lbl_82020F08;
  param_1[2] = 0x14;
  param_1[4] = 0x10;
  param_1[5] = 0x80;
  param_1[10] = uVar2;
  param_1[3] = 0x280000;
  param_1[6] = 0x40000;
  param_1[7] = 0x280000;
  param_1[8] = 0x40000;
  param_1[9] = 0x30;
  param_1[0xb] = 2;
  param_1[0xc] = 0x20000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 1;
  param_1[0x18] = 0;
  fn_82869708(param_1 + 0x19);
  uVar2 = fn_82868E78();
  param_1[0x123] = uVar2;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined1 *)(param_1 + 299) = 0;
  param_1[300] = 0;
  fn_82869A00(param_1 + 0x12d,auStack_60,auStack_60);
  param_1[0x132] = 0;
  piVar6 = param_1 + 0x135;
  param_1[0x133] = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  param_1[0x131] = fn_82866260;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  iVar3 = fn_82868378();
  if (iVar3 != 0) {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020468,0xd6,0xffffffff82020418);
  }
  iVar3 = fn_828667C0(param_1);
  if (-1 < iVar3) {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff820204b8,0xdf,0xffffffff82020434);
  }
  iVar3 = fn_82866860(param_1);
  if (-1 < iVar3) {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020508,0xe8,0xffffffff8202044c);
  }
  iVar3 = fn_82866978(param_1);
  if (-1 < iVar3) {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020570,0xf1,0xffffffff82020558);
  }
  iVar3 = fn_82866A88(param_1);
  if (-1 < iVar3) {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff820205d8,0xfa,0xffffffff820205c0);
  }
  (**(code **)(*(int *)param_1[0x123] + 4))
            ((int *)param_1[0x123],0xffffffff820206a0,0x105,0xffffffff82020628);
  cVar4 = fn_82FE65A0();
  if (cVar4 != '\0') {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020718,0x10e,0xffffffff820206f0);
  }
  uVar5 = fn_82FE65A0();
  *(undefined1 *)(param_1 + 0x16) = uVar5;
  iVar3 = fn_82866B38(param_1);
  if (-1 < iVar3) {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020780,0x11b,0xffffffff82020768);
  }
  fn_82FE8F98((double)(float)param_1[10]);
  iVar3 = fn_82FE65F8();
  *(bool *)((int)param_1 + 0x5e) = iVar3 == 0x3f;
  iVar3 = fn_82867718(param_1);
  if (-1 < iVar3) {
    (**(code **)(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff820207d0,0x133,0xffffffff82020644);
  }
  uVar2 = fn_82FEBD38();
  param_1[300] = uVar2;
  fn_82867780(param_1);
  fn_822DD438(piVar6,0x22);
  ppuVar7 = &lbl_831577C8;
  do {
    uVar1 = fn_82230110(auStack_50,*ppuVar7);
    fn_822DD1B8(piVar6,uVar1);
    fn_82230300(auStack_50,1,0);
    ppuVar7 = ppuVar7 + 1;
  } while ((int)ppuVar7 < -0x7cea87b0);
  fn_8286BB58(*piVar6,param_1[0x136],(param_1[0x136] - *piVar6) / 0x1c);
  uVar1 = fn_82868378();
  fn_8286DA00(uVar1,1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((int)param_1 + 0x5d);
  return param_1;
}

