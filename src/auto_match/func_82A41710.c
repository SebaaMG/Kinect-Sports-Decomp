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
extern unsigned int *auStack_60;
extern int fn_82A3FF60();
extern int fn_82A40238();
extern int fn_82A403F0();
extern int fn_82A406A0();
extern int fn_82A40CF0();
extern int fn_82A484F8();
extern int fn_82A4A0A0();
extern int fn_82A4A728();
extern int fn_82A4F4E0();


undefined4
fn_82A41710(int param_1,int *param_2,ulonglong param_3,ulonglong param_4,undefined8 param_5,
             ulonglong param_6,undefined8 param_7)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 auStack_60 [24];
  
  piVar6 = (int *)(param_1 + 0x2c);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar6);
  piVar5 = (int *)(param_1 + 0x50);
  (**(code **)(*(int *)(param_1 + 0x50) + 8))(piVar5);
  lVar1 = fn_82A40CF0(param_1);
  auStack_60[0] = (undefined4)lVar1;
  if (lVar1 < 0) goto LAB_82a41948;
  if (*(uint *)(param_1 + 0x98) == 0) {
    lVar1 = -0x7769ffff;
    auStack_60[0] = 0x88960001;
  }
  if ((int)lVar1 < 0) goto LAB_82a41948;
  if ((ulonglong)*(uint *)(param_1 + 0x98) <= (param_6 & 0xffffffff)) {
    lVar1 = -0x7769ffff;
    auStack_60[0] = 0x88960001;
  }
  if ((int)lVar1 < 0) goto LAB_82a41948;
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = (ulonglong)*(ushort *)((int)param_6 * 0x42c + *(int *)(param_1 + 0x9c) + 0x406);
  }
  if ((param_4 & 0xffffffff) == 0) {
    param_4 = (ulonglong)*(uint *)((int)param_6 * 0x42c + *(int *)(param_1 + 0x9c) + 0x408);
  }
  lVar1 = param_4 + ((param_4 & 0xffffffff) / 0x177) * -0x177;
  if (lVar1 != 0) {
    uVar4 = param_4 - lVar1;
    if ((uVar4 & 0xffffffff) < 32000) {
      uVar4 = uVar4 + 0x177;
    }
    if ((uVar4 & 0xffffffff) != (param_4 & 0xffffffff)) {
      param_4 = uVar4;
    }
  }
  uVar4 = fn_82A3FF60(0xffffffff83219d50,0x98,0x20970002,0);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82A4A728(uVar4,param_1,param_3,param_4);
  }
  if (iVar2 == 0) {
    lVar1 = -0x7ff8fff2;
    auStack_60[0] = 0x8007000e;
    goto LAB_82a41948;
  }
  lVar1 = fn_82A4A0A0(iVar2,param_5,param_6 * 0x42c + (ulonglong)*(uint *)(param_1 + 0x9c),
                          param_7);
  auStack_60[0] = (undefined4)lVar1;
  if (-1 < lVar1) {
    if (*(int *)(param_1 + 0xa4) != 0) {
      lVar1 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))
                        (*(int **)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x214),param_1 + 0xac);
      auStack_60[0] = (undefined4)lVar1;
      if (lVar1 < 0) goto LAB_82a41908;
      *(undefined4 *)(param_1 + 0xa8) = 2;
    }
    iVar3 = fn_82A484F8(param_1 + 0x198,iVar2);
    if (iVar3 != 0) {
      lVar1 = 0;
      *param_2 = iVar2;
      *(int *)(param_1 + 0x244) = iVar2;
      auStack_60[0] = 0;
      goto LAB_82a41948;
    }
    lVar1 = -0x7ff8fff2;
    auStack_60[0] = 0x8007000e;
  }
LAB_82a41908:
  fn_82A406A0(param_1,1);
  (**(code **)(*(int *)(iVar2 + 4) + 0x50))(iVar2 + 4);
  (**(code **)(*(int *)(iVar2 + 4) + 0x4c))(iVar2 + 4,0);
  fn_82A4F4E0();
LAB_82a41948:
  (**(code **)(*piVar5 + 0x14))(piVar5);
  (**(code **)(*piVar6 + 0x14))(piVar6);
  if ((int)lVar1 < 0) {
    fn_82A403F0(param_1);
  }
  fn_82A40238(auStack_60);
  return auStack_60[0];
}

