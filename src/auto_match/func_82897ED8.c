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


void fn_82897ED8(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = piVar1[1];
    piVar1[1] = (int)((ulonglong)uVar2 - 1);
    if ((ulonglong)uVar2 - 1 == 0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,1);
    }
  }
  iVar3 = *param_2;
  if (iVar3 == 0) {
    *param_1 = *param_2;
  }
  else {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    *param_1 = *param_2;
  }
  return;
}

