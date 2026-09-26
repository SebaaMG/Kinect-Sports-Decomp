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
extern int fn_82FAB9C0();
extern int fn_82FF5D28();
extern int fn_83035CC0();
extern unsigned int lbl_832642E0;


undefined8 fn_83031E90(int param_1)

{
  int *piVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0xcbc);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0xf;
  }
  else {
    for (piVar4 = *(int **)(param_1 + 0xa8);
        (piVar4 != *(int **)(param_1 + 0xac) && ((int *)*piVar4 != piVar2)); piVar4 = piVar4 + 1) {
    }
    if (piVar4 == *(int **)(param_1 + 0xac)) {
      puVar3 = (undefined4 *)fn_82FF5D28(param_1 + 0xa8);
      if (puVar3 == (undefined4 *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        return 2;
      }
      *puVar3 = piVar2;
      fn_83035CC0(piVar2,param_1);
    }
    else {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

