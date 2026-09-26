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
extern int fn_82E260A8();
extern int fn_82E26258();


void fn_82E26360(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = fn_82E260A8(param_1,0,param_3,param_4,param_2,param_1);
  if ((iVar1 != 0) || (uVar2 = 1, (int)param_3 < 0)) {
    uVar2 = 0;
  }
  uVar3 = (ulonglong)((int)param_3 >> 0x1f);
  fn_82E26258(param_1,param_2,(param_3 ^ uVar3) - uVar3,uVar2);
  return;
}

