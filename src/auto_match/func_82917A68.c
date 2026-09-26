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


undefined8 fn_82917A68(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 8) + param_1[1];
  }
  *param_2 = iVar1;
  param_2[1] = (uint)*(ushort *)(param_1 + 2);
  param_2[2] = (uint)*(ushort *)((int)param_1 + 10);
  param_2[3] = (uint)*(ushort *)(param_1 + 3);
  param_2[4] = (uint)*(ushort *)param_1[6];
  param_2[5] = (uint)*(ushort *)(param_1[6] + 2);
  param_2[6] = (uint)*(ushort *)(param_1[6] + 4);
  param_2[7] = (uint)*(ushort *)(param_1[6] + 6);
  param_2[8] = (uint)*(ushort *)(param_1[6] + 8);
  param_2[9] = (uint)*(ushort *)(param_1[6] + 10);
  param_2[10] = param_2[8] * param_2[6] * param_2[7] * 4;
  if (param_1[5] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 8) + param_1[5];
  }
  param_2[0xb] = iVar1;
  return 0;
}

