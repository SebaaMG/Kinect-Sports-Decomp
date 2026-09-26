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
extern int fn_82FAF408();


void fn_830036C8(int param_1,ulonglong param_2,ulonglong param_3)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  short *psVar5;
  
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + -1;
  if (((param_2 & 0xffffffff) != 0) &&
     (((*(byte *)(param_1 + 0x3d) & 0x20) != 0 || (*(int *)(param_1 + 0x10) == 0)))) {
    for (puVar4 = *(uint **)(param_1 + 0x48);
        (puVar4 != *(uint **)(param_1 + 0x4c) && ((ulonglong)*puVar4 != (param_2 & 0xffffffff)));
        puVar4 = puVar4 + 2) {
    }
    uVar3 = (uint)(*(uint **)(param_1 + 0x4c) != puVar4);
    psVar5 = (short *)(-(uint)(uVar3 != 0) & (uint)(puVar4 + 1));
    if ((psVar5 != (short *)0x0) &&
       (sVar1 = *psVar5, *psVar5 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
      fn_82FAF408(param_1 + 0x48,param_2,-uVar3);
    }
    param_2 = 0;
  }
  if (((param_3 & 1) != 0) && (piVar2 = *(int **)(param_1 + 0x14), piVar2 != (int *)0x0)) {
    param_3 = param_3 & 0xfffe;
    (**(code **)(*piVar2 + 0x78))(piVar2,param_2,3,0);
  }
  if ((((param_3 & 2) != 0) && (*(int *)(param_1 + 0x44) != 0)) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 0x44) + 4), piVar2 != (int *)0x0)) {
    param_3 = (param_3 & 0xffff) << 0x20 | param_3 & 0xfffd;
    (**(code **)(*piVar2 + 0x78))(piVar2,param_2,3,0);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x78))(piVar2,param_2,param_3,0);
  }
  return;
}

