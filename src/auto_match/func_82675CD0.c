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
extern int fn_8267A0E0();


bool fn_82675CD0(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1[7] == 0) || (*(int *)(param_1[7] + 0xd8) == 0)) {
LAB_82675d78:
    bVar2 = false;
  }
  else {
    (**(code **)(*param_1 + 0x44))();
    if ((param_4 == 1) || (param_4 == 2)) {
      iVar1 = 0x18280186;
    }
    else {
      if (param_4 != 9) goto LAB_82675d78;
      iVar1 = 0x4900102;
    }
    param_1[0xd] = iVar1;
    param_1[8] = (int)param_2;
    param_1[9] = (int)param_3;
    iVar1 = fn_8267A0E0(param_2,param_3,param_5 + 1,0,iVar1,param_1 + 10);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

