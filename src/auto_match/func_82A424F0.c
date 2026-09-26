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
extern int fn_82A3FF60();
extern int fn_82A40238();
extern int fn_82A403F0();
extern int fn_82A41E00();
extern int fn_82A484F8();
extern int fn_82A4A910();
extern int fn_82A4AA18();
extern int fn_82A4F4E0();
extern unsigned int uStack_70;


undefined4
fn_82A424F0(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined4 uStack_70;
  int aiStack_6c [27];
  
  piVar5 = (int *)(param_1 + 0x2c);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar5);
  lVar3 = param_4 + ((param_4 & 0xffffffff) / 0x177) * -0x177;
  if (lVar3 != 0) {
    uVar4 = param_4 - lVar3;
    if ((uVar4 & 0xffffffff) < 32000) {
      uVar4 = uVar4 + 0x177;
    }
    if ((uVar4 & 0xffffffff) != (param_4 & 0xffffffff)) {
      param_4 = uVar4;
    }
  }
  aiStack_6c[0] = 0;
  lVar3 = fn_82A41E00(param_1,param_6,aiStack_6c);
  uStack_70 = (undefined4)lVar3;
  if (-1 < lVar3) {
    uVar4 = fn_82A3FF60(0xffffffff83219d50,0x94,0x20970002,0);
    iVar2 = aiStack_6c[0];
    if ((uVar4 & 0xffffffff) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_82A4AA18(uVar4,param_1,param_6,*(undefined4 *)(aiStack_6c[0] + 0x2c),param_3,
                              param_4);
    }
    if (iVar1 == 0) {
      lVar3 = -0x7ff8fff2;
      uStack_70 = 0x8007000e;
    }
    else {
      lVar3 = fn_82A4A910(iVar1,param_5,param_7,param_8);
      uStack_70 = (undefined4)lVar3;
      if (-1 < lVar3) {
        iVar2 = fn_82A484F8(iVar2 + 4,iVar1);
        if (iVar2 != 0) {
          lVar3 = 0;
          *param_2 = iVar1;
          uStack_70 = 0;
          goto LAB_82a42670;
        }
        lVar3 = -0x7ff8fff2;
        uStack_70 = 0x8007000e;
      }
      (**(code **)(*(int *)(iVar1 + 4) + 0x50))(iVar1 + 4);
      (**(code **)(*(int *)(iVar1 + 4) + 0x4c))(iVar1 + 4,0);
      fn_82A4F4E0();
    }
  }
LAB_82a42670:
  (**(code **)(*piVar5 + 0x14))(piVar5);
  if ((int)lVar3 < 0) {
    fn_82A403F0(param_1);
  }
  fn_82A40238(&uStack_70);
  return uStack_70;
}

