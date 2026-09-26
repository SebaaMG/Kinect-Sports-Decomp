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
extern int fn_82A43118();
extern int fn_82A4FCF0();
extern int fn_82A4FDC8();
extern int fn_82A507C0();
extern int fn_82A51730();
extern int fn_82A51990();
extern unsigned int lbl_82002AE0;


longlong fn_82A51C60(int *param_1,uint param_2,int *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *apiStack_40 [16];
  
  param_1[0xe] = param_2;
  lVar2 = fn_82A51730();
  if (lVar2 < 0) {
    return lVar2;
  }
  if ((param_2 & 8) != 0) {
    apiStack_40[0] = (int *)0x0;
    lVar2 = fn_82A43118(apiStack_40);
    if (lVar2 < 0) {
      return lVar2;
    }
    uVar1 = *(undefined4 *)(param_1[0x1e] + 4);
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    lVar2 = fn_82A507C0(param_1,apiStack_40[0],uVar3,uVar1,uVar1,param_1 + 0x21);
    (**(code **)(*apiStack_40[0] + 8))(apiStack_40[0]);
  }
  if ((int)lVar2 < 0) {
    return lVar2;
  }
  if ((param_4 & 0xffffffff) != 0) {
    uVar4 = fn_82A3FF60(0xffffffff83219d50,0x3c,0x20970004,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82A4FCF0(uVar4,param_1);
    }
    param_1[0xd] = (int)uVar4;
    if ((uVar4 & 0xffffffff) == 0) {
      return -0x7ff8fff2;
    }
    lVar2 = fn_82A4FDC8(uVar4,param_4);
  }
  if ((int)lVar2 < 0) {
    return lVar2;
  }
  if ((uint *)param_1[0xd] == (uint *)0x0) {
    uVar6 = param_1[0xf];
  }
  else {
    uVar6 = *(uint *)param_1[0xd];
  }
  lVar2 = ((ulonglong)uVar6 & 0x3fffffff) << 2;
  if (0x3fffffff < uVar6) {
    lVar2 = -1;
  }
  iVar5 = fn_82A3FF60(0xffffffff83219d50,lVar2,0x20970002,0);
  param_1[0x13] = iVar5;
  uVar1 = lbl_82002AE0;
  if (iVar5 == 0) {
    return -0x7ff8fff2;
  }
  uVar6 = 0;
  iVar5 = 0;
  while( true ) {
    if ((uint *)param_1[0xd] == (uint *)0x0) {
      uVar7 = param_1[0xf];
    }
    else {
      uVar7 = *(uint *)param_1[0xd];
    }
    if (uVar7 <= uVar6) break;
    uVar6 = uVar6 + 1;
    *(undefined4 *)(iVar5 + param_1[0x13]) = uVar1;
    iVar5 = iVar5 + 4;
  }
  if (param_3 != (int *)0x0) {
    if (*param_3 == 0) {
      iVar5 = param_1[0x10];
    }
    else {
      iVar5 = *(int *)(*(int *)(param_3[1] + 4) + 0x44);
    }
    lVar2 = (**(code **)(*param_1 + 100))(param_1,iVar5);
    if (-1 < lVar2) {
      lVar2 = fn_82A51990(param_1,param_3);
      return lVar2;
    }
    return lVar2;
  }
  return 0;
}

