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
extern int fn_82CFBE40();
extern int fn_82CFE180();
extern int fn_82CFE1F0();
extern int fn_82E182B0();
extern int fn_82E19C10();


undefined8
fn_82E18F88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar3;
  longlong lVar2;
  
  uVar1 = fn_82CFE1F0(param_3);
  fn_82E182B0(uVar1,2);
  piVar3 = (int *)fn_82CFE1F0(param_3);
  uVar1 = (**(code **)(*piVar3 + 0x20))();
  fn_82E19C10(param_4,param_2,uVar1);
  lVar2 = fn_82CFBE40(param_1);
  fn_82CFE180(param_3,param_1,lVar2 + 1);
  return 0;
}

