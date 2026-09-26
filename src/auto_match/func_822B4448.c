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
extern int fn_822B45E8();


void fn_822B4448(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar8 = fn_822B45E8(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 4),iVar1);
  *(undefined4 *)(iVar1 + 4) = uVar8;
  piVar2 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  puVar3 = (undefined4 *)piVar2[1];
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    puVar6 = (undefined4 *)*puVar3;
    while (puVar4 = puVar6, *(char *)((int)puVar4 + 0x11) == '\0') {
      puVar3 = puVar4;
      puVar6 = (undefined4 *)*puVar4;
    }
    *piVar2 = (int)puVar3;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    iVar7 = *(int *)(iVar1 + 8);
    while (iVar5 = iVar7, *(char *)(iVar5 + 0x11) == '\0') {
      iVar1 = iVar5;
      iVar7 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)(param_1 + 4) + 8) = iVar1;
  }
  else {
    *piVar2 = (int)piVar2;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  return;
}

