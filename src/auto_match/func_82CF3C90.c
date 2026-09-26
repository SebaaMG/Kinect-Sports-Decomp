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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF33D0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AA630;
extern unsigned int lbl_821AAD20;


int fn_82CF3C90(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x58);
  iVar9 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0x80000000;
    lVar10 = 8;
    *(undefined **)(iVar1 + 0x4c) = &lbl_821AA630;
    puVar4 = (undefined4 *)(iVar1 + -4);
    *(undefined4 *)(iVar1 + 0x48) = 0;
    puVar5 = (undefined2 *)(iVar1 + 0x1e);
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 1;
    uVar3 = lbl_821AAD20;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = uVar3;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *(undefined8 *)(iVar1 + 0x40) = lbl_82005710;
  }
  param_2 = param_2 * 0xc;
  iVar8 = *(int *)(param_2 + *param_1 + 4);
  iVar2 = fn_82CE5410();
  if ((int)(*(uint *)(iVar1 + 0x38) & 0x3fffffff) < iVar8) {
    iVar6 = (*(uint *)(iVar1 + 0x38) & 0x3fffffff) << 1;
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),(int *)(iVar1 + 0x30),iVar6,4);
  }
  *(int *)(iVar1 + 0x34) = iVar8;
  piVar7 = (int *)(param_2 + *param_1);
  if (0 < piVar7[1]) {
    iVar8 = 0;
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)(*piVar7 + iVar2);
      iVar6 = *(int *)(iVar1 + 0x30);
      uVar3 = fn_82CF33D0((ulonglong)(uint)puVar4[7] + (ulonglong)(uint)param_1[3],
                            (ulonglong)(uint)puVar4[8] + (ulonglong)(uint)param_1[3],puVar4,*puVar4,
                            param_3);
      *(undefined4 *)(iVar6 + iVar8) = uVar3;
      piVar7 = (int *)(param_2 + *param_1);
      iVar9 = iVar9 + 1;
      iVar2 = iVar2 + 0x24;
      iVar8 = iVar8 + 4;
    } while (iVar9 < piVar7[1]);
  }
  return iVar1;
}

