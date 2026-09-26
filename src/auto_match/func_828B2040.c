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


bool fn_828B2040(int param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int aiStack_10 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    aiStack_10[0] = 0x2a;
    iVar2 = (**(code **)(*piVar1 + 0x58))(piVar1,*param_3,param_2,aiStack_10);
    if (iVar2 == 0) {
      return aiStack_10[0] != 0;
    }
  }
  return true;
}

