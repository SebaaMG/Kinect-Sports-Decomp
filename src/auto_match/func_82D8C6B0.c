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
extern unsigned int *auStack_e0;
extern int fn_82CE5410();
extern int fn_82CED628();
extern int fn_82D8B168();
extern int fn_82D8C258();
extern int fn_82D8C548();
extern int fn_82D8C858();
extern unsigned int lbl_8213B63C;


void fn_82D8C6B0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_e0 [200];
  
  fn_82D8B168(auStack_e0);
  fn_82D8C548(param_1,auStack_e0);
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x220);
  *(undefined2 *)(iVar1 + 4) = 0x220;
  piVar2 = (int *)fn_82D8C258(iVar1,auStack_e0);
  piVar6 = piVar2 + 0x3a;
  lVar7 = 0x12;
  piVar4 = (int *)(param_1 + 0xdc);
  do {
    piVar6[-2] = piVar4[1];
    piVar6[-1] = piVar4[2];
    *piVar6 = *(int *)((param_1 - (int)piVar2) + (int)piVar6);
    piVar4 = piVar4 + 4;
    piVar6[1] = *piVar4;
    piVar6 = piVar6 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (*(int *)(param_1 + 0x1f8) != 0) {
    iVar1 = fn_82CE5410();
    puVar3 = (undefined4 *)
             (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x120);
    *puVar3 = &lbl_8213B63C;
    *(undefined2 *)(puVar3 + 1) = 0x120;
    puVar5 = puVar3 + -1;
    puVar3[0x46] = 0;
    lVar7 = 0x12;
    piVar2[0x7e] = (int)puVar3;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1f8) + -4);
    do {
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
      *puVar5 = *puVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2);
  piVar2[6] = iVar1;
  fn_82D8C858(piVar2,param_1);
                    /* WARNING: Subroutine does not return */
  fn_82CED628(piVar2 + 0x1d,*(uint *)(param_1 + 0x74) & 0xfffffffe);
}

