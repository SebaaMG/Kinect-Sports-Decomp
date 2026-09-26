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
extern int fn_8268E408();
extern int fn_8268E490();
extern int fn_8268E7C0();


int * fn_8268F070(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = fn_8268E7C0();
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = *(int **)(iVar3 + 4);
    piVar1 = (int *)*piVar4;
    if (piVar1 == piVar4) {
      fn_8268E490(param_1,piVar4);
    }
    else {
      piVar2 = (int *)piVar4[1];
      *piVar2 = (int)piVar1;
      piVar1[1] = (int)piVar2;
      fn_8268E408(param_1,piVar4);
    }
  }
  return piVar4;
}

