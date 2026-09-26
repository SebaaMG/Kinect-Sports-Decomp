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
extern int fn_82D2B688();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


longlong fn_82D22578(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float fVar6;
  longlong lVar7;
  int *piVar8;
  double dVar9;
  
  fVar6 = lbl_821AAD20;
  lVar7 = 0;
  dVar9 = (double)lbl_821AAD20;
  uVar5 = lbl_82002AE0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x14); lbl_82002AE0 = uVar5, puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[0xc] = fVar6;
    uVar5 = lbl_82002AE0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  while (puVar1 != (undefined4 *)0x0) {
    piVar8 = puVar1 + 2;
    iVar2 = puVar1[3];
    iVar3 = puVar1[4];
    puVar1 = (undefined4 *)*puVar1;
    *(undefined4 *)(*piVar8 + 0x30) = uVar5;
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
    *(undefined4 *)(iVar3 + 0x30) = uVar5;
  }
  piVar8 = *(int **)(param_1 + 0x14);
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    do {
      piVar4 = (int *)*piVar8;
      if ((double)(float)piVar8[0xc] == dVar9) {
        iVar2 = *piVar8;
        piVar8 = (int *)piVar8[1];
        if (iVar2 != 0) {
          *(int **)(iVar2 + 4) = piVar8;
        }
        if (piVar8 == (int *)0x0) {
          *(int *)(param_1 + 0x14) = iVar2;
        }
        else {
          *piVar8 = iVar2;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        fn_82D2B688();
        lVar7 = lVar7 + 1;
      }
      piVar8 = piVar4;
    } while (piVar4 != (int *)0x0);
    if ((int)lVar7 != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x7b8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined4 *)(param_1 + 0x7b8) = 0;
    }
  }
  return lVar7;
}

