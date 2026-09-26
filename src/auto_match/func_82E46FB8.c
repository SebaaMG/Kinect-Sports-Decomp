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


undefined8 fn_82E46FB8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x74);
      piVar2 = *(int **)(iVar4 + iVar1);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
        *(undefined4 *)(iVar4 + iVar1) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(uint *)(param_1 + 100));
  }
  *(undefined4 *)(param_1 + 100) = 0;
  return 0;
}

