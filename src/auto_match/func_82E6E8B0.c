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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;


undefined8 fn_82E6E8B0(int *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint auStack_30 [2];
  ulonglong auStack_28 [5];
  
  if (param_1[0xe] == 0) {
    return 0;
  }
  if (param_1[2] != 0) {
    auStack_28[0] = 0;
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,auStack_28);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar3 = (ulonglong)(uint)param_1[10];
    uVar2 = *(ulonglong *)(param_1 + 0xc);
    if (auStack_28[0] < uVar3 + uVar2) {
      uVar3 = (auStack_28[0] & 0xffffffff) - (uVar2 & 0xffffffff);
    }
    uVar1 = (**(code **)(*(int *)param_1[2] + 0x1c))
                      ((int *)param_1[2],*(longlong *)(param_1 + 4) + uVar2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    auStack_30[0] = 0;
    uVar1 = (**(code **)(*(int *)param_1[2] + 0x30))
                      ((int *)param_1[2],param_1[0xe],uVar3,auStack_30);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((ulonglong)auStack_30[0] == (uVar3 & 0xffffffff)) {
      param_1[0xf] = 1;
      return uVar1;
    }
  }
  return 0xffffffffc00d36bb;
}

