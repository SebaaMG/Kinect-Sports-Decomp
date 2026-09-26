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


void fn_828C8D20(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0x49) != '\0') {
    *param_1 = piVar2[2];
    return;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0x49) != '\0') {
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x49);
    while ((cVar1 == '\0' && (*param_1 == *piVar2))) {
      *param_1 = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x49);
    }
    if (*(char *)(*param_1 + 0x49) == '\0') {
      *param_1 = (int)piVar2;
      return;
    }
    return;
  }
  cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x49);
  iVar4 = *(int *)(iVar3 + 8);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x49);
    iVar3 = iVar4;
    iVar4 = *(int *)(iVar4 + 8);
  }
  *param_1 = iVar3;
  return;
}

