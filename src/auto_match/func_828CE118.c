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
extern int fn_828CDF30();


void fn_828CE118(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar7 = fn_828CDF30(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x19);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x19);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x19);
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)(param_1 + 4) + 8) = iVar2;
  }
  else {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  return;
}

