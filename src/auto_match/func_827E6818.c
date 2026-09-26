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
extern int fn_82517978();
extern int fn_827D5070();
extern int fn_827DA588();
extern int fn_827E4020();
extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_827E6818(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar5;
  int *piVar6;
  longlong lVar4;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar3 = (**(code **)(**(int **)(param_1[1] * 0x28 + param_1[8] + 0x74) + 0x24))();
  iVar5 = (int)uVar3;
  if (iVar5 == 0x3e5) {
    return uVar3;
  }
  if (iVar5 == 0x3e4) {
    return uVar3;
  }
  if (iVar5 == 0) {
    iVar5 = fn_827DA588(param_1[8],param_1[0x15]);
    uVar1 = param_1[0x13];
    if (iVar5 == 0) {
      if (uVar1 == param_2[3] - param_1[0xe]) {
        lVar9 = ((ulonglong)(uint)param_1[0xe] - (ulonglong)(uint)param_1[0xc]) + (ulonglong)uVar1;
        uVar8 = (ulonglong)(uint)param_2[5];
        uVar7 = (ulonglong)(uint)param_2[4];
        if (uVar1 == 0) {
          lVar9 = 0;
          uVar8 = ((ulonglong)(uint)param_1[0xf] - (ulonglong)(uint)param_1[0xd]) + uVar8;
          uVar7 = ((ulonglong)(uint)param_1[0xd] - (ulonglong)(uint)param_1[0xf]) + uVar7;
        }
        lVar4 = fn_827D5070(param_1[5]);
        fn_82F68CC0(lVar4 + lVar9,uVar8,uVar7);
        uVar2 = param_2[5];
        uVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
        fn_827E4020(uVar3,uVar2);
        param_2[5] = 0;
        uVar3 = 0;
        param_1[0x13] = param_1[0x13] + param_2[4];
        iVar5 = param_2[6] + param_1[0x14];
        goto LAB_827e6884;
      }
    }
    else if (uVar1 == param_2[3] - param_1[0xe]) {
      uVar8 = (ulonglong)(uint)param_2[5];
      uVar7 = (ulonglong)(uint)param_2[4];
      if (uVar1 == 0) {
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        iVar5 = (**(code **)(*piVar6 + 0x1c))(piVar6,param_1[4]);
        param_1[0x16] = iVar5;
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        uStack_50 = 0;
        uStack_4c = 0;
        fn_82517978(&uStack_50,param_1[5],param_1[6],0);
        (**(code **)(*piVar6 + 4))
                  (piVar6,param_1[0x16],param_1[2],param_1[0xd],param_1[4],&uStack_50);
        uVar8 = ((ulonglong)(uint)param_1[0xf] - (ulonglong)(uint)param_1[0xd]) +
                (ulonglong)(uint)param_2[5];
        uVar7 = ((ulonglong)(uint)param_1[0xd] - (ulonglong)(uint)param_1[0xf]) +
                (ulonglong)(uint)param_2[4];
      }
      piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
      uStack_50 = 0;
      uStack_4c = 0;
      fn_82517978(&uStack_50,param_2[1],param_2[2],0);
      (**(code **)(*piVar6 + 8))(piVar6,param_1[0x16],uVar8,uVar7,*param_2,&uStack_50);
      uVar2 = param_2[5];
      uVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
      fn_827E4020(uVar3,uVar2);
      param_2[5] = 0;
      param_1[0x13] = param_1[0x13] + param_2[4];
      param_1[0x14] = param_2[6] + param_1[0x14];
      if (param_1[0xf] <= param_1[0x13]) {
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        uStack_50 = 0;
        uStack_4c = 0;
        fn_82517978(&uStack_50,param_2[1],param_2[2],0);
        uVar3 = (**(code **)(*piVar6 + 0xc))(piVar6,param_1[0x16],*param_2,&uStack_50);
        piVar6 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
        (**(code **)(*piVar6 + 0x20))(piVar6,param_1[0x16]);
        param_1[0x16] = 0;
        return uVar3;
      }
      return 0;
    }
    uVar3 = 0x3e5;
  }
  else {
    param_1[0x13] = param_2[4] + param_1[0x13];
    iVar5 = param_2[6] + param_1[0x14];
LAB_827e6884:
    param_1[0x14] = iVar5;
  }
  return uVar3;
}

