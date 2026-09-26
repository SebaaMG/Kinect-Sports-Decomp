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
extern unsigned int *auStack_40;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D81240();
extern int fn_82DF0B48();
extern unsigned int lbl_82145644;


void fn_82DEF408(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_40 [64];
  
  *param_1 = &lbl_82145644;
  iVar5 = *(int *)(param_1[0x14] + 0x10);
  while (iVar5 != 0) {
    piVar1 = (int *)param_1[0x14];
    iVar4 = piVar1[2] + 1;
    iVar5 = *(int *)(piVar1[2] * 4 + *piVar1);
    piVar1[2] = iVar4;
    if (iVar4 == piVar1[1]) {
      piVar1[2] = 0;
    }
    piVar1[4] = piVar1[4] + -1;
    uVar7 = (ulonglong)(uint)param_1[6] - 1;
    if (-1 < (longlong)uVar7) {
      lVar6 = (uVar7 & 0x3fffffff) << 2;
      do {
        piVar1 = *(int **)((int)lVar6 + param_1[5]);
        (**(code **)(*piVar1 + 0x10))(piVar1,iVar5);
        uVar7 = uVar7 - 1;
        lVar6 = lVar6 + -4;
      } while (-1 < (longlong)uVar7);
    }
    if (*(int *)(iVar5 + 8) != 0) {
      fn_82D81240(auStack_40,*(int *)(iVar5 + 8),iVar5);
    }
    fn_82CE4118(iVar5);
    iVar5 = *(int *)(param_1[0x14] + 0x10);
  }
  puVar2 = (undefined4 *)param_1[0x14];
  if (puVar2 != (undefined4 *)0x0) {
    iVar5 = puVar2[1];
    if (iVar5 != 0) {
      uVar3 = *puVar2;
      iVar4 = fn_82CE5410();
      (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),uVar3,iVar5 << 2);
    }
    iVar5 = fn_82CE5410();
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),puVar2,0x14);
  }
  fn_82DF0B48(param_1);
  return;
}

