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
extern int fn_82699740();


void fn_82699AD0(int *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(uint)param_1[1];
  param_1[3] = 0;
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(iVar2 + *param_1);
      (**(code **)(**(int **)(iVar2 + *param_1) + 0x74))();
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 4;
      *(undefined4 *)(*piVar1 + 0x20) = 0;
    } while (uVar3 != 0);
  }
  fn_82699740(param_1,0);
  return;
}

