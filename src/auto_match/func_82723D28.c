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
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82697700();
extern int fn_827A2950();


void fn_82723D28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar6;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar7;
  ulonglong uVar8;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar6 == 4)) {
    piVar7 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar7 = (int *)0x0;
    }
    iVar6 = *(int *)(piVar7[0x28] + 0x114);
    if (iVar6 != 0) {
      iVar1 = *(int *)(iVar6 + 8);
      uVar8 = (ulonglong)(*(ushort *)(iVar6 + 0x68) >> 2) & 1;
      uVar4 = (ulonglong)*(uint *)(iVar1 + 0x1c);
      if ((ulonglong)*(uint *)(iVar1 + 0x20) <= (ulonglong)*(uint *)(iVar1 + 0x1c)) {
        uVar4 = (ulonglong)*(uint *)(iVar1 + 0x20);
      }
      uVar5 = (ulonglong)*(uint *)(iVar1 + 0x1c);
      if ((ulonglong)*(uint *)(iVar1 + 0x1c) <= (ulonglong)*(uint *)(iVar1 + 0x20)) {
        uVar5 = (ulonglong)*(uint *)(iVar1 + 0x20);
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        uVar8 = fn_82695608(uVar3,uVar2);
      }
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        uVar4 = fn_82697700(uVar3,uVar2);
      }
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,2);
        uVar5 = fn_82697700(uVar3,uVar2);
      }
      fn_827A2950(iVar6,uVar4,uVar5,uVar8);
      iVar6 = (**(code **)(*piVar7 + 0x40))(piVar7);
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 0xb00) = *(uint *)(iVar6 + 0xb00) | 0x400;
      }
    }
  }
  return;
}

