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
extern int fn_82756360();


void fn_82756E30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  fn_82756360(param_1,param_1,(ulonglong)(uint)param_1[1] + 1);
  iVar2 = param_1[1] * 8 + *param_1;
  piVar3 = (int *)(iVar2 + -8);
  if (piVar3 != (int *)0x0) {
    iVar1 = *param_2;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    *piVar3 = *param_2;
    *(int *)(iVar2 + -4) = param_2[1];
  }
  return;
}

