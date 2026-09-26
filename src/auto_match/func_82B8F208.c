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


void fn_82B8F208(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  param_1[1] = param_2;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  if (param_2 == 0) {
    return;
  }
  if ((*(uint *)(*param_1 + 0x30) >> 0x13 & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar4;
    if ((*(uint *)(iVar2 + 0x30) >> 0x13 & 1) != 0) break;
    piVar4 = (int *)piVar4[2];
  }
  piVar4 = (int *)(*(int *)(iVar2 + 0x74) + 0x10);
  if (*piVar4 == 0) {
    return;
  }
  param_1[4] = iVar2;
  param_1[5] = iVar1;
  param_1[2] = (int)piVar4;
  while (piVar4 != (int *)0x0) {
    uVar3 = *(uint *)(*(int *)param_1[2] + 0x30);
    if (((uVar3 >> 0x16 & 1) == 0) && ((uVar3 >> 0x14 & 1) != 0)) break;
    piVar4 = (int *)((int *)param_1[2])[1];
    param_1[2] = (int)piVar4;
  }
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_1 + 6);
  return;
}

