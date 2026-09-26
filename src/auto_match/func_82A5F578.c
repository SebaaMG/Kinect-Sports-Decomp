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


undefined8 fn_82A5F578(int param_1,short *param_2,short *param_3,int param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffff88970001;
  uVar2 = 0;
  if ((((*(uint *)(*(int *)(param_1 + 4) + 0x418) & 1) != 0) && (param_3[1] != param_2[1])) &&
     (uVar2 = uVar3, param_4 != 0)) {
    param_3[1] = param_2[1];
    uVar2 = 0xffffffff88970001;
  }
  if ((((*(uint *)(*(int *)(param_1 + 4) + 0x418) & 2) != 0) &&
      (*(int *)(param_3 + 2) != *(int *)(param_2 + 2))) && (uVar2 = uVar3, param_4 != 0)) {
    *(int *)(param_3 + 2) = *(int *)(param_2 + 2);
    uVar2 = 0xffffffff88970001;
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x418) & 4) == 0) {
    return uVar2;
  }
  if ((param_3[7] != param_2[7]) && (uVar2 = uVar3, param_4 != 0)) {
    param_3[7] = param_2[7];
    uVar2 = 0xffffffff88970001;
  }
  if (*param_2 == -2) {
    if (*param_3 != -2) {
      if (param_3[7] == param_2[9]) {
        return uVar2;
      }
      return 0xffffffff88970001;
    }
    sVar1 = param_2[9];
  }
  else {
    if (*param_3 != -2) {
      return uVar2;
    }
    sVar1 = param_2[7];
  }
  if (param_3[9] == sVar1) {
    return uVar2;
  }
  if (param_4 == 0) {
    return 0xffffffff88970001;
  }
  param_3[9] = sVar1;
  return 0xffffffff88970001;
}

