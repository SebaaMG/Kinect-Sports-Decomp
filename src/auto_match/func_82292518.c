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
extern int fn_82F63CA0();


undefined8 fn_82292518(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  for (puVar3 = *(undefined4 **)(param_1 + 0x24); puVar3 != *(undefined4 **)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    (*(code *)**(undefined4 **)*puVar3)();
  }
  for (puVar3 = *(undefined4 **)(param_1 + 0x34); puVar3 != *(undefined4 **)(param_1 + 0x38);
      puVar3 = puVar3 + 1) {
    (*(code *)**(undefined4 **)*puVar3)();
  }
  for (piVar4 = *(int **)(param_1 + 0x24); piVar4 != *(int **)(param_1 + 0x28); piVar4 = piVar4 + 1)
  {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,1);
    }
    *piVar4 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != *(int *)(param_1 + 0x28)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x28),0);
    *(int *)(param_1 + 0x28) = iVar1;
  }
  for (piVar4 = *(int **)(param_1 + 0x34); piVar4 != *(int **)(param_1 + 0x38); piVar4 = piVar4 + 1)
  {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,1);
    }
    *piVar4 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != *(int *)(param_1 + 0x38)) {
    fn_82F63CA0(iVar1,*(int *)(param_1 + 0x38),0);
    *(int *)(param_1 + 0x38) = iVar1;
  }
  return 0;
}

