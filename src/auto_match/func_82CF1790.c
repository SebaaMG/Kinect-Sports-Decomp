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
extern int fn_82CE5410();
extern int fn_82CF60E0();


void fn_82CF1790(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x30));
      if (iVar2 != 0) {
        fn_82CF60E0(iVar2,1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((*(uint *)(param_1 + 0x38) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(param_1 + 0x30),*(uint *)(param_1 + 0x38) & 0x3fffffff,4);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x80000000;
  return;
}

