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


void fn_82A6E1C0(int param_1,int param_2,short param_3,short param_4,short *param_5,short *param_6
                  )

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 < param_4) {
    uVar3 = (int)param_4 - (int)param_3;
    uVar2 = (int)param_4 + (int)param_3;
    *param_5 = (short)((int)uVar3 >> 1) + (ushort)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    *param_6 = (short)((int)uVar2 >> 1) + (ushort)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  }
  else {
    *param_5 = 0;
    *param_6 = param_4;
  }
  if (param_2 != 1) {
    if (*(int *)(param_1 + 0x8c) != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x9c) != 0) {
      return;
    }
    uVar2 = (int)*param_5 + (int)*param_6;
    sVar1 = (short)((int)uVar2 >> 1) + (ushort)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    *param_5 = sVar1;
    *param_6 = sVar1;
    return;
  }
  if (*(int *)(param_1 + 0x8c) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    return;
  }
  uVar2 = (int)*param_5 + (int)*param_6;
  sVar1 = (short)((int)uVar2 >> 1) + (ushort)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  *param_5 = sVar1;
  *param_6 = sVar1;
  return;
}

