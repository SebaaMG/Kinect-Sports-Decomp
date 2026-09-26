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
extern int fn_82230040();
extern int fn_8223B688();
extern int fn_8243DFF8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


int fn_8243DED8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  fn_8223B688();
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar7 = fn_8265C9E0(0x18);
  if (iVar7 != 0) {
    *(int *)(param_1 + 0x20) = iVar7;
    *(int *)iVar7 = iVar7;
    *(int *)(*(int *)(param_1 + 0x20) + 4) = *(int *)(param_1 + 0x20);
    *(int *)(*(int *)(param_1 + 0x20) + 8) = *(int *)(param_1 + 0x20);
    *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x14) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x15) = 1;
    iVar7 = *(int *)(param_1 + 0x20);
    uVar8 = fn_8243DFF8(param_1 + 0x1c,*(undefined4 *)(*(int *)(param_2 + 0x20) + 4),iVar7);
    *(undefined4 *)(iVar7 + 4) = uVar8;
    piVar1 = *(int **)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    puVar2 = (undefined4 *)piVar1[1];
    if (*(char *)((int)puVar2 + 0x15) == '\0') {
      puVar5 = (undefined4 *)*puVar2;
      while (puVar3 = puVar5, *(char *)((int)puVar3 + 0x15) == '\0') {
        puVar2 = puVar3;
        puVar5 = (undefined4 *)*puVar3;
      }
      *piVar1 = (int)puVar2;
      iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 4);
      iVar6 = *(int *)(iVar7 + 8);
      while (iVar4 = iVar6, *(char *)(iVar4 + 0x15) == '\0') {
        iVar7 = iVar4;
        iVar6 = *(int *)(iVar4 + 8);
      }
      *(int *)(*(int *)(param_1 + 0x20) + 8) = iVar7;
    }
    else {
      *piVar1 = (int)piVar1;
      *(int *)(*(int *)(param_1 + 0x20) + 8) = *(int *)(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    return param_1;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

