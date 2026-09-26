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
extern int fn_825089A0();


void fn_828C0290(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar3 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar3;
      piVar2 = (int *)fn_825089A0();
      (**(code **)(*piVar2 + 0x28))(piVar2,piVar3);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}

