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
extern int fn_82517A50();
extern int fn_827D50C0();
extern int fn_827D9DC0();
extern int fn_827D9DD8();
extern int fn_827E3808();
extern int fn_827E4218();


ulonglong fn_827E7008(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_1[0xe] == 0) {
    uVar4 = fn_827D9DC0(param_1[2]);
    if ((uVar4 & 1) != 0) {
      return 0x3e4;
    }
    uVar4 = fn_827D9DC0(param_1[2]);
    if ((uVar4 & 2) == 0) {
      fn_827D50C0(param_1[5],6);
      uVar4 = 6;
      goto LAB_827e7154;
    }
    fn_827D50C0(param_1[5],0x3e5);
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  lVar5 = fn_827E3808();
  uVar1 = param_1[0xe];
  lVar9 = (ulonglong)(uint)param_1[0xd] - (ulonglong)uVar1;
  if ((int)lVar5 < (int)((ulonglong)(uint)param_1[0xd] - (ulonglong)uVar1)) {
    lVar9 = lVar5;
  }
  iVar7 = param_1[0x10];
  iVar2 = param_1[0xc];
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  fn_827E4218(uVar6,param_2);
  *(int **)(*param_2 + 0x24) = param_1;
  *(int *)(*param_2 + 0x10) = (int)lVar9;
  *(int *)*param_2 = param_1[2];
  fn_82517A50((ulonglong)*param_2 + 4,param_1 + 5);
  *(uint *)(*param_2 + 0xc) = iVar2 + uVar1;
  *(uint *)(*param_2 + 0x14) = iVar7 + uVar1;
  piVar3 = *(int **)(param_1[1] * 0x28 + param_1[8] + 0x74);
  uVar4 = (**(code **)(*piVar3 + 0x28))(piVar3,*param_2);
  iVar7 = (int)uVar4;
  uVar8 = lVar9 + (ulonglong)(uint)param_1[0xe];
  param_1[0xe] = (int)uVar8;
  if (((iVar7 == 0x3e5) || (iVar7 == 0x3e4)) || (iVar7 == 0)) {
    return (ulonglong)((uint)param_1[0xd] >> 0x1f) -
           (((uVar8 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar8 < (uint)param_1[0xd])) & 0x3e5;
  }
LAB_827e7154:
  fn_827D9DD8(param_1[2]);
  return uVar4;
}

