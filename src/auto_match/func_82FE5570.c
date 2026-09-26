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


undefined8 fn_82FE5570(double param_1,undefined4 *param_2,int *param_3,ulonglong param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  if ((param_4 & 0xffffffff) == 0) {
    param_4 = 1;
  }
  *param_2 = (int)param_4;
  iVar2 = (**(code **)(*param_3 + 4))(param_3,(param_4 & 0x1fffffff) << 3);
  param_2[1] = iVar2;
  if (iVar2 == 0) {
    uVar1 = 0x34;
  }
  else {
    param_2[3] = (float)param_1;
    uVar1 = 1;
    param_2[2] = 0;
  }
  return uVar1;
}

