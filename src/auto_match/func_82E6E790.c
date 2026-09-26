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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82E50BE8();


undefined8 fn_82E6E790(int *param_1,ulonglong param_2)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  uint auStack_40 [2];
  ulonglong auStack_38 [7];
  
  if (param_1[2] != 0) {
    if (param_1[0xe] == 0) {
      iVar2 = fn_82E50BE8(param_1[10],0,0,0,0);
      param_1[0xe] = iVar2;
      if (iVar2 == 0) {
        return 0xffffffff8007000e;
      }
    }
    if ((param_1[0xf] == 0) && (uVar1 = (**(code **)(*param_1 + 0x54))(param_1), (int)uVar1 < 0)) {
      return uVar1;
    }
    auStack_38[0] = 0;
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,auStack_38);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar3 = (ulonglong)(uint)param_1[10];
    if (auStack_38[0] < uVar3 + param_2) {
      uVar3 = (auStack_38[0] & 0xffffffff) - (param_2 & 0xffffffff);
    }
    auStack_40[0] = 0;
    uVar1 = (**(code **)(*param_1 + 0x60))
                      (param_1,*(longlong *)(param_1 + 4) + param_2,param_1[0xe],uVar3,auStack_40);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    *(ulonglong *)(param_1 + 0xc) = param_2;
    if ((ulonglong)auStack_40[0] == (uVar3 & 0xffffffff)) {
      return uVar1;
    }
  }
  return 0xffffffffc00d36bb;
}

