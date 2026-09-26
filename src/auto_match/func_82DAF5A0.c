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
extern int fn_82D02610();
extern int fn_82D839C0();


void fn_82DAF5A0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = fn_82D839C0();
  if (iVar2 != 0) {
    iVar4 = 10;
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x28);
    while ((iVar2 != 0 && (bVar1 = 0 < iVar4, iVar4 = iVar4 + -1, bVar1))) {
      piVar3 = (int *)fn_82D839C0(param_1);
      (**(code **)(*piVar3 + 0x10))(piVar3,param_1);
      fn_82D02610(0);
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x28);
      if ((iVar2 == 0) || (iVar2 == 2)) {
        (**(code **)(**(int **)(param_1 + 8) + 0x14))();
      }
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x28);
      if ((iVar2 == 0) || (iVar2 == 3)) {
        (**(code **)(**(int **)(param_1 + 8) + 0x18))();
      }
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x28);
    }
  }
  return;
}

