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
extern int fn_82CE4118();
extern int fn_82CE5410();


void fn_82D43000(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  piVar3 = (int *)(param_1 + 0x14);
  iVar2 = fn_82CE5410();
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x18);
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar5 = (undefined4 *)(*piVar3 + -4);
    do {
      if (puVar5[1] != 0) {
        fn_82CE4118();
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(uint *)(param_1 + 0x1c) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,*piVar3,*(uint *)(param_1 + 0x1c) & 0x3fffffff,4);
  }
  *piVar3 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}

