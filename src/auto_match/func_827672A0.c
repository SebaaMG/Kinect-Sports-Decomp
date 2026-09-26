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


void fn_827672A0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  piVar2 = (int *)*param_1;
  param_1[1] = param_2;
  bVar1 = *(byte *)(param_2 + *piVar2);
  uVar5 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
    uVar5 = (short)*(char *)(param_2 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  iVar3 = iVar3 + param_2;
  *(ushort *)(param_1 + 2) = uVar5;
  param_1[1] = iVar3;
  bVar1 = *(byte *)(iVar3 + *piVar2);
  uVar5 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
    uVar5 = (short)*(char *)(iVar3 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  iVar3 = iVar3 + iVar4;
  *(ushort *)((int)param_1 + 10) = uVar5;
  param_1[1] = iVar3;
  bVar1 = *(byte *)(iVar3 + *piVar2);
  uVar5 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
    uVar5 = (short)*(char *)(iVar3 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  iVar3 = iVar3 + iVar4;
  *(ushort *)(param_1 + 3) = uVar5;
  param_1[1] = iVar3;
  bVar1 = *(byte *)(iVar3 + *piVar2);
  uVar5 = (ushort)((int)(char)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
    uVar5 = (short)*(char *)(iVar3 + *piVar2 + 1) << 7 | uVar5 & 0x7f;
  }
  *(ushort *)((int)param_1 + 0xe) = uVar5;
  param_1[1] = iVar3 + iVar4;
  return;
}

