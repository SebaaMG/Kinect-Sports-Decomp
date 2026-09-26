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
extern int fn_82275128();
extern int fn_82275180();
extern unsigned int stack0x00000014;


void fn_822746B8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x10))();
  }
  iVar2 = fn_82275128();
  iVar3 = iVar2 + 0x44;
  if (param_2 == 0) {
    iVar3 = iVar2 + 0x5c;
  }
  fn_82275180(iVar3,&stack0x00000014);
  if (param_1[2] != 0) {
    lVar4 = (ulonglong)*(uint *)(iVar2 + 0x14) - 1;
    *(int *)(iVar2 + 0x14) = (int)lVar4;
    if (lVar4 == 0) {
      for (piVar5 = *(int **)(iVar2 + 0x34); piVar5 != *(int **)(iVar2 + 0x38); piVar5 = piVar5 + 2)
      {
        piVar1 = (int *)*piVar5;
        piVar1[0xc] = 1;
        (**(code **)(*piVar1 + 8))(piVar1,iVar2,2);
      }
    }
  }
  return;
}

