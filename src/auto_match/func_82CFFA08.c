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
extern int fn_82CE5410();
extern int fn_82CFBE40();


void fn_82CFFA08(int *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  
  uVar1 = *param_3 & 0xfffffffe;
  if ((*param_3 & 0xfffffffe) != 0) {
    uVar2 = fn_82CFBE40(uVar1);
    iVar4 = fn_82CE5410();
    uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))(*(int **)(iVar4 + 0x10),uVar1,uVar2);
    (**(code **)(*param_1 + 0x14))(param_1,3,param_2,uVar1,uVar2,uVar3);
  }
  return;
}

