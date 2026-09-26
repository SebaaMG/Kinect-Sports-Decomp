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
extern int fn_8223C478();
extern int fn_8288A398();
extern int fn_828E9DB8();


void fn_82897988(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_4 + 8);
  fn_8288A398();
  uVar3 = (**(code **)(*piVar1 + 8))(piVar1);
  iVar4 = fn_8288A398();
  uVar2 = *(undefined4 *)(iVar4 + 0x3c);
  fn_8223C478(param_3,uVar2,0);
  fn_828E9DB8(param_3,uVar3,uVar2);
  (**(code **)*piVar1)(piVar1,param_2,param_3);
  return;
}

