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
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_83096048();
extern unsigned int lbl_8218799C;


void fn_83093D98(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  longlong lVar6;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  *param_1 = &lbl_8218799C;
  iVar4 = 0;
  if (0 < (int)param_1[0x34]) {
    iVar7 = 0;
    do {
      iVar5 = iVar7 + param_1[0x36];
      iVar3 = fn_82CE5410();
      piVar1 = *(int **)(iVar3 + 0x10);
      *(undefined4 *)(iVar5 + 8) = 0;
      if ((*(uint *)(iVar5 + 0xc) & 0x80000000) == 0) {
        (**(code **)(*piVar1 + 0x10))
                  (piVar1,*(undefined4 *)(iVar5 + 4),*(uint *)(iVar5 + 0xc) & 0x3fffffff,2);
      }
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar5 + 4) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0x80000000;
      iVar7 = iVar7 + 0x10;
    } while (iVar4 < (int)param_1[0x34]);
  }
  uVar2 = param_1[0x36];
  iVar4 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar4 + 0x10),uVar2);
  lVar6 = 2;
  puVar8 = param_1 + 0x34;
  do {
    puVar9 = puVar8 + -3;
    iVar4 = fn_82CE5410();
    piVar1 = *(int **)(iVar4 + 0x10);
    puVar8[-2] = 0;
    if ((puVar8[-1] & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*puVar9,puVar8[-1] & 0x3fffffff,4);
    }
    lVar6 = lVar6 + -1;
    *puVar9 = 0;
    puVar8[-1] = 0x80000000;
    puVar8 = puVar9;
  } while (-1 < lVar6);
  iVar4 = fn_82CE5410();
  piVar1 = *(int **)(iVar4 + 0x10);
  param_1[0x29] = 0;
  if ((param_1[0x2a] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x28],param_1[0x2a] & 0x3fffffff,0x10);
  }
  param_1[0x28] = 0;
  param_1[0x2a] = 0x80000000;
  fn_83096048(param_1);
  return;
}

