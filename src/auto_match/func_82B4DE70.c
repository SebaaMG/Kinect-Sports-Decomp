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
extern int fn_82AA6648();


int fn_82B4DE70(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar2 = (uint *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0x1c) & 1) == 0) {
    iVar4 = (*puVar2 & 0xfffffffe) - 4;
  }
  else {
    iVar4 = 0;
  }
  piVar5 = (int *)(*(int *)(iVar4 + 8) * 0x18 + iVar4);
  *(int *)(param_1 + 0xc) = piVar5[1];
  *(int *)(param_1 + 8) = piVar5[2];
  *(int *)(param_1 + 0x10) = piVar5[3];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(piVar5 + -1);
  iVar4 = piVar5[-2];
  if (*piVar5 == 0) {
    if ((*(uint *)(param_1 + 0x1c) & 1) == 0) {
      puVar3 = (uint *)((*puVar2 & 0xfffffffe) - 4);
    }
    else {
      puVar3 = (uint *)0x0;
    }
    uVar1 = puVar3[2];
    puVar3[2] = (uint)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      *(uint *)(puVar3[1] & 0xfffffffe) = *puVar3;
      *(uint *)(*puVar3 & 0xfffffffe) = puVar3[1];
      fn_82AA6648(puVar2,puVar3,(ulonglong)puVar3[3] * 0x18 + 0x10);
    }
  }
  else {
    *piVar5 = *piVar5 + -1;
  }
  return iVar4;
}

