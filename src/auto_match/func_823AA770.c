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


undefined8
fn_823AA770(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,int param_5,
             int param_6)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x84))(param_1,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x7c))(param_1,param_3);
    iVar4 = (int)param_4;
    if ((iVar4 == iVar1) && (param_6 != 0)) {
      uVar2 = 7;
      param_4 = (ulonglong)(iVar4 == 0);
    }
    else {
      iVar1 = param_1[8];
      if ((iVar1 != 0) || ((param_1[0xd] != 0 || (param_6 == 0)))) {
        if ((param_1[0xc] == 0) && (param_6 != 0)) {
          (**(code **)(*param_1 + 0x9c))(param_1,param_2,iVar4 == 0,0);
          param_1[0x11] = iVar4;
          param_1[0x12] = param_5;
          return 1;
        }
        param_1[3] = iVar4;
        param_1[5] = param_5;
        param_1[8] = iVar1 + 1;
        param_1[0xc] = 0;
        piVar3 = param_1 + 8;
        if (iVar1 + 1U < (uint)param_1[9]) {
          piVar3 = param_1 + 9;
        }
        param_1[9] = *piVar3;
        return 0;
      }
      uVar2 = 4;
    }
    (**(code **)(*param_1 + 0x9c))(param_1,param_2,param_4,uVar2);
  }
  return 1;
}

