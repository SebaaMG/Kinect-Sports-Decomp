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


undefined4 fn_828B2148(int param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    lVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_2);
    lVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x5c))(*(int **)(param_1 + 4),param_2);
    if ((lVar2 != 0) || (uVar4 = 0, lVar3 != 0)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

