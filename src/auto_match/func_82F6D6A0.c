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
extern int fn_82F6D750();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;


void fn_82F6D6A0(longlong param_1,longlong param_2,int param_3,code *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000034;
  
  uStack0000001c = (undefined4)param_2;
  uStack00000014 = (undefined4)param_1;
  uStack00000034 = param_5;
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(param_1);
    param_1 = param_1 + param_2;
    uStack00000014 = (undefined4)param_1;
  }
  fn_82F6D750();
  return;
}

