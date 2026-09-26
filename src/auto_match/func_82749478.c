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
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_826972E0();


void fn_82749478(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  double dVar4;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar3 == 0x12)) {
    iVar3 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
    }
    fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar3);
    if (7 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x30) = (float)dVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,1);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x38) = (float)dVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,2);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x40) = (float)dVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,3);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x48) = (float)dVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,4);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x34) = (float)dVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,5);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x3c) = (float)dVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,6);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x44) = (float)dVar4;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,7);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x4c) = (float)dVar4;
    }
    if (iVar3 != 0) {
      fn_826824B0(iVar3);
    }
  }
  return;
}

