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


void fn_823E1F00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0xa5) == '\0') {
    iVar1 = *piVar4;
    if (*(char *)(iVar1 + 0xa5) == '\0') {
      iVar3 = *(int *)(iVar1 + 8);
      while (iVar2 = iVar3, *(char *)(iVar2 + 0xa5) == '\0') {
        iVar1 = iVar2;
        iVar3 = *(int *)(iVar2 + 8);
      }
      *param_1 = iVar1;
      return;
    }
    while ((piVar4 = (int *)piVar4[1], *(char *)((int)piVar4 + 0xa5) == '\0' &&
           (*param_1 == *piVar4))) {
      *param_1 = (int)piVar4;
    }
    if (*(char *)(*param_1 + 0xa5) != '\0') {
      return;
    }
  }
  else {
    piVar4 = (int *)piVar4[2];
  }
  *param_1 = (int)piVar4;
  return;
}

