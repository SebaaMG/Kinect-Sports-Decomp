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
extern int fn_82CF7648();


int * fn_82CE6C08(int *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[0x25b] = *param_2;
  param_1[0x25c] = param_2[1];
  if ((param_3 & 1) != 0) {
    (**(code **)(*param_1 + 0xc))(param_1,param_1 + 0x25e,0xffffffff821bbc7c,param_3);
  }
  if (((param_3 & 2) != 0) && (iVar1 = param_2[1], iVar1 != 0)) {
    uVar2 = (**(code **)(*(int *)param_1[1] + 4))((int *)param_1[1],iVar1);
    fn_82CF7648(param_1 + 0x267,uVar2,iVar1);
  }
  return param_1 + 0x25e;
}

