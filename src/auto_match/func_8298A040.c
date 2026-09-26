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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82932B38();
extern int fn_82980440();
extern int fn_82980C18();
extern int fn_82981668();
extern int fn_829846B0();
extern int fn_829885C0();


ulonglong fn_8298A040(int param_1,int *param_2,int param_3,int param_4,ulonglong param_5,
                       int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (param_4 != 0) {
    if ((*(int *)(param_4 + 0x18) * *(int *)(param_4 + 0x14) != 1) ||
       (iVar1 = fn_82981668(param_1,*(undefined4 *)(param_4 + 0x10)), iVar1 == 0)) {
      fn_82980C18(param_1,param_4 + 0x30,0xbcb,0xffffffff8204ea70);
      return 0;
    }
    uVar4 = fn_82930318(0x28);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82931D88(uVar4,2,0,0,1,1,0x200);
    }
    if ((uVar4 & 0xffffffff) == 0) {
      return 0;
    }
    iVar1 = fn_829846B0(param_1,uVar4,*(undefined4 *)(param_4 + 0x10),0);
    if (iVar1 == 0) {
      fn_82980C18(param_1,param_4 + 0x30,0xbcc,0xffffffff8204ea4c);
    }
  }
  iVar1 = fn_82930318(0x34);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_82932B38();
  }
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x10) = 3;
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if ((param_5 & 0xffffffff) == 0) {
    if (param_3 == 0) {
      uVar3 = 4;
    }
    else {
      if (param_3 != param_6) goto LAB_8298a194;
      uVar3 = 5;
      param_3 = 0;
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
  }
LAB_8298a194:
  *(int *)(iVar1 + 0x14) = param_3;
  if (param_4 != 0) {
    if ((uVar4 & 0xffffffff) == 0) {
      return 0;
    }
    iVar2 = fn_829885C0(param_1,uVar4,param_4,0,0);
    *(int *)(iVar1 + 0x18) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  *(int *)(iVar1 + 0x1c) = param_6;
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 4))(param_2);
    *(int *)(iVar1 + 0x2c) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((param_5 & 0xffffffff) != 0) {
    iVar2 = fn_82980440(param_1,param_5);
    *(int *)(iVar1 + 0x28) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar4 = fn_82930318(0x14);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_829304E0(uVar4,iVar1,0,0xffffffff8202df2c);
  }
  if ((uVar4 & 0xffffffff) == 0) {
    return 0;
  }
  return uVar4;
}

