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


void fn_82782CD0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  uVar5 = (ulonglong)*(uint *)(*param_1 + 8);
  piVar2 = *(int **)(iVar1 + 8);
  iVar3 = *(int *)(iVar1 + 4);
  uVar4 = (**(code **)(**(int **)(iVar1 + 8) + 0x18))
                    (*(int **)(iVar1 + 8),(longlong)*(int *)(iVar1 + 4) * (longlong)param_3 + uVar5)
  ;
  (**(code **)(*piVar2 + 0x10))(piVar2,(longlong)iVar3 * (longlong)param_2 + uVar5,uVar4);
  return;
}

