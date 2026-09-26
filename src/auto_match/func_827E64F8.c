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
extern int fn_82517A50();
extern int fn_827D5070();
extern int fn_827D5078();
extern int fn_827D50C0();
extern int fn_827D50F8();
extern int fn_827D9DC0();
extern int fn_827D9DD8();
extern int fn_827DA588();
extern int fn_827E3808();
extern int fn_827E3830();
extern int fn_827E3AA8();
extern int fn_827E4020();
extern int fn_827E4210();
extern int fn_827E4218();
extern int fn_827E60D8();
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


ulonglong fn_827E64F8(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar6;
  ulonglong uVar2;
  int *piVar7;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar8;
  int *piVar9;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  piVar9 = param_1 + 5;
  iVar6 = fn_827D50F8(param_1[5]);
  if (iVar6 != 0) {
    fn_827E60D8(param_1);
    return 0x4c7;
  }
  if (param_1[0x12] == 0) {
    (**(code **)(*param_1 + 0x1c))(param_1);
    iVar6 = fn_827E3830();
    uVar2 = fn_827D9DC0(param_1[2]);
    if ((uVar2 & 1) != 0) {
      return 0x3e4;
    }
    uVar2 = fn_827D9DC0(param_1[2]);
    if ((uVar2 & 2) == 0) {
      fn_827D50C0(*piVar9,6);
      uVar2 = 6;
      goto LAB_827e67e0;
    }
    if (param_1[0xd] == 0) {
      piVar7 = (int *)(**(code **)(*param_1 + 0x20))(param_1);
      (**(code **)(*piVar7 + 4))(piVar7,param_1[2],param_1 + 0xd);
    }
    iVar6 = (param_1[0xc] / iVar6) * iVar6;
    param_1[0xe] = iVar6;
    param_1[0xf] = (param_1[0xc] - iVar6) + param_1[0xd];
    iVar6 = fn_827D5070(*piVar9);
    if ((iVar6 == 0) && (iVar6 = fn_827DA588(param_1[8],param_1[0x15]), iVar6 == 0)) {
      (**(code **)(*param_1 + 0x20))(param_1);
      lVar3 = fn_827E4210();
      uVar1 = param_1[0xf];
      (**(code **)(*param_1 + 0x20))(param_1);
      lVar4 = fn_827E4210();
      auStack_60[0] = 0;
      fn_82811438(auStack_50,auStack_60,0x10);
      iVar6 = *piVar9;
      uVar5 = (**(code **)(*(int *)lbl_83156AA0 + 4))
                        (lbl_83156AA0,lVar3 + ((ulonglong)uVar1 - 1) & ~(lVar4 - 1U),auStack_50,
                         param_1[4]);
      fn_827D5078(iVar6,uVar5);
      param_1[0x17] = 1;
    }
    fn_827D50C0(*piVar9,0x3e5);
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  lVar4 = fn_827E3808();
  lVar3 = (ulonglong)(uint)param_1[0xf] - (ulonglong)(uint)param_1[0x12];
  if ((int)lVar4 < (int)((ulonglong)(uint)param_1[0xf] - (ulonglong)(uint)param_1[0x12])) {
    lVar3 = lVar4;
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  lVar4 = fn_827E3AA8();
  if (lVar4 == 0) {
    return 0x3e4;
  }
  uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  fn_827E4218(uVar5,param_2);
  *(int **)(*param_2 + 0x24) = param_1;
  *(int *)(*param_2 + 0x10) = (int)lVar3;
  *(int *)*param_2 = param_1[2];
  fn_82517A50((ulonglong)*param_2 + 4,piVar9);
  *(int *)(*param_2 + 0xc) = param_1[0xe] + param_1[0x12];
  *(int *)(*param_2 + 0x14) = (int)lVar4;
  *(undefined4 *)(*param_2 + 0x18) = 0;
  piVar9 = *(int **)(param_1[1] * 0x28 + param_1[8] + 0x74);
  uVar2 = (**(code **)(*piVar9 + 0x20))(piVar9,*param_2);
  iVar6 = (int)uVar2;
  uVar8 = lVar3 + (ulonglong)(uint)param_1[0x12];
  param_1[0x12] = (int)uVar8;
  if (((iVar6 == 0x3e5) || (iVar6 == 0x3e4)) || (iVar6 == 0)) {
    return (ulonglong)((uint)param_1[0xf] >> 0x1f) -
           (((uVar8 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar8 < (uint)param_1[0xf])) & 0x3e5;
  }
  uVar5 = (**(code **)(*param_1 + 0x1c))(param_1);
  fn_827E4020(uVar5,lVar4);
LAB_827e67e0:
  fn_827D9DD8(param_1[2]);
  return uVar2;
}

