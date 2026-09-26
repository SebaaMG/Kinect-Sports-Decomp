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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82E15528();


int * fn_82E15968(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x1c);
  *(undefined2 *)(iVar1 + 4) = 0x1c;
  piVar2 = (int *)fn_82E15528();
  (**(code **)(*piVar2 + 0x14))(piVar2,param_2);
  (**(code **)(*piVar2 + 0x20))(piVar2,param_3,param_4);
  fn_82CE4040(piVar2);
  iVar1 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(param_1 + 0x10),4);
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x10));
  if (puVar3 != (undefined4 *)0x0) {
    fn_82CE4040(piVar2);
    *puVar3 = piVar2;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  fn_82CE4118(piVar2);
  fn_82CE4118(piVar2);
  return piVar2;
}

