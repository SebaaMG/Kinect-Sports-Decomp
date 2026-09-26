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


void fn_82685698(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)param_2[5];
  *(int *)(param_2[2] + 0xc) = param_2[3];
  *(int *)(param_2[3] + 8) = param_2[2];
  uVar2 = piVar1[3];
  piVar1[3] = (int)((ulonglong)uVar2 - 1);
  if (((ulonglong)uVar2 - 1 == 0) && (piVar1 != *(int **)(param_1 + 0x88))) {
    RtlEnterCriticalSection(param_1 + 0x5c);
    iVar3 = piVar1[2];
    if (iVar3 == 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
    }
    else {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    *piVar1 = *(int *)(param_1 + 0x4c);
    *(int **)(param_1 + 0x4c) = piVar1;
    RtlLeaveCriticalSection(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  puVar4 = (undefined4 *)param_2[4];
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  *param_2 = *(int *)(param_1 + 0x28);
  *(int **)(param_1 + 0x28) = param_2;
  return;
}

