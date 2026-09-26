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


undefined8 fn_823AA5E0(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  int iVar3;
  ulonglong uVar2;
  undefined8 uVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x84))(param_1,param_3);
  if (iVar3 == 0) {
    return 1;
  }
  if (param_1[1] != 1) {
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x7c))(param_1,param_3);
  if (param_4 == iVar3) {
    if (param_1[8] == 0) {
      if (param_1[0xd] == 0) {
        param_1[0xd] = 1;
        return 0;
      }
      iVar3 = (**(code **)(*param_1 + 0x7c))(param_1,param_3);
      uVar4 = 2;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x7c))(param_1,param_3);
      uVar4 = 5;
    }
LAB_823aa680:
    uVar2 = (ulonglong)(iVar3 == 0);
    pcVar1 = *(code **)(*param_1 + 0x9c);
  }
  else {
    if (param_1[8] == 0) {
      if (param_1[0xd] == 0) {
        iVar3 = (**(code **)(*param_1 + 0x7c))(param_1,param_3);
        uVar4 = 4;
        goto LAB_823aa680;
      }
      if (param_1[0xe] != 0) {
        param_1[1] = 2;
        return 0;
      }
    }
    if (param_1[0xc] == 0) {
      param_1[0xc] = 1;
      return 0;
    }
    iVar3 = *param_1;
    uVar2 = (**(code **)(iVar3 + 0x7c))(param_1,param_3);
    pcVar1 = *(code **)(iVar3 + 0x9c);
    uVar4 = 3;
  }
  (*pcVar1)(param_1,param_2,uVar2,uVar4);
  return 1;
}

