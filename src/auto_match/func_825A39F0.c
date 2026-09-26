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
extern int fn_825A44F0();
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82CEA4B8();


void fn_825A39F0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar3;
  int iVar8;
  ulonglong uVar7;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  char acStack_60 [96];
  
  iVar9 = param_1 + 0x10;
  fn_825A44F0(acStack_60,iVar9,param_2);
  if (acStack_60[0] != '\0') {
    iVar4 = fn_82CEA280(iVar9,param_2,0xffffffffffffffff);
    iVar4 = iVar4 * 0x28;
    iVar6 = iVar4 + *(int *)(param_1 + 4);
    iVar5 = fn_82CE5410();
    fn_82CEA4B8(iVar6,*(undefined4 *)(iVar5 + 0x10));
    fn_82BA02A8(iVar6);
    iVar5 = iVar4 + *(int *)(param_1 + 4);
    iVar6 = 0;
    if (0 < *(int *)(iVar5 + 0x20)) {
      iVar10 = 0;
      do {
        iVar8 = *(int *)(iVar5 + 0x1c) + iVar10;
        iVar5 = fn_82CE5410();
        piVar1 = *(int **)(iVar5 + 0x10);
        *(undefined4 *)(iVar8 + 0x44) = 0;
        if ((*(uint *)(iVar8 + 0x48) & 0x80000000) == 0) {
          (**(code **)(*piVar1 + 0x10))
                    (piVar1,*(undefined4 *)(iVar8 + 0x40),*(uint *)(iVar8 + 0x48) & 0x3fffffff,4);
        }
        *(undefined4 *)(iVar8 + 0x40) = 0;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar8 + 0x48) = 0x80000000;
        iVar10 = iVar10 + 0x60;
        iVar5 = iVar4 + *(int *)(param_1 + 4);
      } while (iVar6 < *(int *)(iVar5 + 0x20));
    }
    piVar11 = (int *)(iVar5 + 0x1c);
    iVar6 = fn_82CE5410();
    uVar7 = (ulonglong)*(uint *)(iVar5 + 0x20);
    piVar1 = *(int **)(iVar6 + 0x10);
    if (0 < (int)*(uint *)(iVar5 + 0x20)) {
      puVar12 = (undefined4 *)(*piVar11 + -0x18);
      do {
        iVar6 = fn_82CE5410();
        piVar2 = *(int **)(iVar6 + 0x10);
        puVar12[0x17] = 0;
        if ((puVar12[0x18] & 0x80000000) == 0) {
          (**(code **)(*piVar2 + 0x10))(piVar2,puVar12[0x16],puVar12[0x18] & 0x3fffffff,4);
        }
        puVar12[0x16] = 0;
        uVar7 = uVar7 - 1;
        puVar12 = puVar12 + 0x18;
        *puVar12 = 0x80000000;
      } while (uVar7 != 0);
    }
    *(undefined4 *)(iVar5 + 0x20) = 0;
    if ((*(uint *)(iVar5 + 0x24) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*piVar11,*(uint *)(iVar5 + 0x24) & 0x3fffffff,0x60);
    }
    *(undefined4 *)(iVar5 + 0x24) = 0x80000000;
    *piVar11 = 0;
    *(undefined4 *)(iVar4 + *(int *)(param_1 + 4) + 0xc) = 0;
    uVar3 = fn_82CEA220(iVar9,param_2);
    fn_82CEA358(iVar9,uVar3);
  }
  return;
}

