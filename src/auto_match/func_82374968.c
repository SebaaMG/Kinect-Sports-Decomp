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
extern unsigned int *auStack_210;
extern int fn_8229F5A8();
extern int fn_8229F618();
extern int fn_8229F688();
extern int fn_82358FD8();
extern int fn_82372ED8();
extern int fn_82372F88();
extern int fn_82528EE0();
extern int fn_82F64988();


void fn_82374968(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_210 [512];
  
  if (param_1[0x81] != 0) {
    if ((uint)param_1[0x81] < 3) {
      fn_82F64988(param_1 + 0xd3,0x100,param_1 + 0x182);
    }
    goto LAB_82374ac0;
  }
  lVar6 = fn_82372F88(param_1);
  if (lVar6 + 1 != lVar6 + (ulonglong)(lVar6 == -1)) {
    fn_82358FD8(param_1,param_1 + 0xd3,0x100,0xffffffff821b3614);
    goto LAB_82374ac0;
  }
  iVar7 = *(int *)(param_1[0x98] + 0x150) + -1;
  piVar2 = (int *)**(int **)param_1[2];
  piVar3 = (int *)(*(int **)param_1[2])[1];
  if ((int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) == iVar7) {
    if ((int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20) != iVar7) goto LAB_82374a50;
    uVar8 = 0xffffffff821b362c;
LAB_82374a98:
    fn_82358FD8(param_1,auStack_210,0x100,uVar8);
    uVar4 = *(undefined4 *)(param_1[0x98] + 0x14c);
  }
  else {
LAB_82374a50:
    iVar7 = fn_82372ED8(param_1);
    if ((iVar7 != 0) || (param_1[0x27d] != 0)) {
      uVar8 = 0xffffffff821b3644;
      goto LAB_82374a98;
    }
    fn_82358FD8(param_1,auStack_210,0x100,0xffffffff821b3658);
    uVar4 = *(undefined4 *)(param_1[0x98] + 0x148);
  }
  fn_82528EE0(param_1 + 0xd3,0x100,auStack_210,uVar4);
LAB_82374ac0:
  iVar7 = (**(code **)(*param_1 + 0x98))(param_1,1);
  if (iVar7 != 0) {
    param_1[0xd0] = 1;
    (**(code **)(*param_1 + 0x90))(param_1,0);
  }
  if ((((param_1[0xd1] == 0) || (*(int *)(*(int *)(param_1[0x35] + 0x14) + 0x14) != 0)) ||
      (*(int *)(*(int *)(param_1[0x35] + 0x18) + 0xc) != 0)) ||
     ((param_1[0x276] != 0 || (bVar5 = true, param_1[0x15] == 0xb)))) {
    bVar5 = false;
  }
  bVar1 = *(int *)(*(int *)(param_1[0x35] + 0xc) + 0x58) != 0;
  if (bVar5) {
    if (!bVar1) {
      fn_8229F5A8();
    }
  }
  else if (bVar1) {
    fn_8229F618();
  }
  if (*(int *)(param_1[0x35] + 0x2c) == 0) {
    fn_8229F688(*(undefined4 *)(param_1[0x35] + 0xc),param_1 + 0xd3,0);
  }
  return;
}

