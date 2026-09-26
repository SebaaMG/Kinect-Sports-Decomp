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
extern unsigned int *auStack_30;
extern unsigned int lbl_82154D18;


undefined4 * fn_82E58F80(undefined4 *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint auStack_30 [12];
  
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[2] = 0;
  *param_1 = &lbl_82154D18;
  param_1[1] = 1;
  param_1[3] = 0;
  (**(code **)(*param_2 + 4))(param_2);
  auStack_30[0] = 0;
  iVar1 = (**(code **)(*(int *)param_1[4] + 0x14))((int *)param_1[4],0,auStack_30);
  if ((iVar1 < 0) || (auStack_30[0] < (uint)param_1[5])) {
    param_1[3] = 0;
    param_1[2] = 0;
    if (auStack_30[0] < (uint)param_1[5]) {
      iVar1 = -0x7ff8ffa9;
    }
  }
  else {
    iVar2 = auStack_30[0] - param_1[5];
    param_1[3] = iVar2;
    param_1[2] = iVar2;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar1;
  }
  return param_1;
}

