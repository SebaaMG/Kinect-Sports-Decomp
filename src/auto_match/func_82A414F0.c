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
extern int fn_82A442F0();
extern int fn_82A44520();
extern int fn_82A46ED8();
extern int fn_82A484F8();
extern int fn_82A49038();
extern int fn_82A49AC8();
extern int fn_82A4F4E0();


undefined4
fn_82A414F0(undefined8 param_1,int param_2,undefined4 *param_3,undefined8 param_4,
             ulonglong param_5,undefined8 param_6,undefined8 param_7)

{
  short sVar6;
  ulonglong uVar1;
  int *piVar3;
  longlong lVar2;
  int iVar4;
  int iVar5;
  int *piVar7;
  undefined4 auStack_60 [24];
  
  piVar7 = (int *)(param_2 + 0x2c);
  (**(code **)(*(int *)(param_2 + 0x2c) + 8))(piVar7);
  sVar6 = fn_82A49AC8(param_4);
  if (sVar6 == 0x166) {
    uVar1 = fn_82A3FF60(0xffffffff83219d50,0x244,0x20970002,0);
    if ((uVar1 & 0xffffffff) == 0) goto LAB_82a415fc;
    piVar3 = (int *)fn_82A49038(uVar1,param_2,param_7);
  }
  else if ((sVar6 == 0x161) || (sVar6 == 0x162)) {
    uVar1 = fn_82A3FF60(0xffffffff83219d50,0x2c0,0x20970002,0);
    if ((uVar1 & 0xffffffff) == 0) goto LAB_82a415fc;
    piVar3 = (int *)fn_82A46ED8(uVar1,param_2,param_7);
  }
  else {
    uVar1 = fn_82A3FF60(0xffffffff83219d50,0x1c0,0x20970002,0);
    if ((uVar1 & 0xffffffff) == 0) {
LAB_82a415fc:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82A44520(uVar1,param_2,param_7);
    }
  }
  if (piVar3 == (int *)0x0) {
    iVar4 = -0x7ff8fff2;
    auStack_60[0] = 0x8007000e;
  }
  else {
    lVar2 = (**(code **)(*piVar3 + 0x74))(param_1,piVar3,param_5);
    auStack_60[0] = (undefined4)lVar2;
    if (-1 < lVar2) {
      iVar4 = fn_82A442F0(param_2 + 0xbc,piVar3);
      if (iVar4 != 0) {
        iVar4 = 0;
        auStack_60[0] = 0;
        if (((param_5 & 0x10) == 0) || (iVar5 = fn_82A484F8(param_2 + 0x1e8,piVar3), iVar5 != 0)
           ) {
          auStack_60[0] = 0;
          *param_3 = piVar3;
          goto LAB_82a416d0;
        }
      }
      lVar2 = -0x7ff8fff2;
      auStack_60[0] = 0x8007000e;
    }
    iVar4 = (int)lVar2;
    (**(code **)(piVar3[1] + 0x50))(piVar3 + 1);
    (**(code **)(piVar3[1] + 0x4c))(piVar3 + 1,0);
    fn_82A4F4E0();
  }
LAB_82a416d0:
  (**(code **)(*piVar7 + 0x14))(piVar7);
  if (iVar4 < 0) {
    fn_82A403F0(param_2);
  }
  fn_82A40238(auStack_60);
  return auStack_60[0];
}

