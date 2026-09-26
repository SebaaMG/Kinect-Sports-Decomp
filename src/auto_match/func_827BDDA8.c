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


ulonglong fn_827BDDA8(int *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_1[5] != 0xce) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x1e] < (uint)param_1[0x18]) {
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 4) = param_1[0x1e];
      *(int *)(param_1[2] + 8) = param_1[0x18];
      (**(code **)param_1[2])(param_1);
    }
    uVar2 = (longlong)param_1[0x46] * (longlong)param_1[0x45];
    if ((param_3 & 0xffffffff) < (uVar2 & 0xffffffff)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x17;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = (**(code **)(param_1[0x62] + 0xc))(param_1,param_2);
    if (iVar1 != 0) {
      param_1[0x1e] = (int)uVar2 + param_1[0x1e];
      return uVar2;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
  }
  return 0;
}

