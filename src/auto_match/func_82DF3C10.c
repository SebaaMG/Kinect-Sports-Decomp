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
extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82D94630();


void fn_82DF3C10(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 auStack_30 [12];
  
  fn_82D94630();
  piVar6 = (int *)(param_1 + 0x44);
  iVar3 = fn_82CE5410();
  uVar2 = *(uint *)(param_1 + 0x4c) & 0x3fffffff;
  piVar1 = *(int **)(iVar3 + 0x10);
  if ((int)uVar2 < *(int *)(param_2 + 0x48)) {
    if ((*(uint *)(param_1 + 0x4c) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*piVar6,uVar2,4);
    }
    auStack_30[0] = *(undefined4 *)(param_2 + 0x48);
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_30,4);
    *piVar6 = iVar3;
    *(undefined4 *)(param_1 + 0x4c) = auStack_30[0];
  }
  uVar2 = *(uint *)(param_2 + 0x48);
  uVar4 = (ulonglong)uVar2;
  puVar5 = (undefined4 *)*piVar6;
  *(uint *)(param_1 + 0x48) = uVar2;
  if (0 < (int)uVar2) {
    iVar3 = *(int *)(param_2 + 0x44) - (int)puVar5;
    do {
      *puVar5 = *(undefined4 *)(iVar3 + (int)puVar5);
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

