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
extern int fn_82C02288();
extern int fn_82C088D8();


void fn_82C026B8(int *param_1,int *param_2)

{
  longlong lVar1;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*param_1 + 0x4c))(param_1);
  param_1[0xd] = (int)param_2;
  lVar1 = fn_82C088D8(param_1);
  param_1[0x82] = (int)lVar1;
  if (-1 < (int)-(uint)(lVar1 == 0)) {
    fn_82C02288(param_1);
  }
  return;
}

