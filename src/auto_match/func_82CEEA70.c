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


void fn_82CEEA70(undefined4 *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  int iVar3;
  undefined8 uVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    lVar1 = fn_82CFBE40(param_2);
    iVar3 = fn_82CE5410();
    uVar2 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),param_2,lVar1 + 1);
    (**(code **)(*param_3 + 0x14))(param_3,1,*param_1,param_2,lVar1 + 1,uVar2);
  }
  return;
}

