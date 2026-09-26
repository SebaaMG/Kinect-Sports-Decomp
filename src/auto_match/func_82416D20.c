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
extern int fn_82230040();
extern int fn_8252AE68();
extern int fn_8253C548();
extern int fn_825A14E8();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821A0000;
extern unsigned int uStack_4c;


void fn_82416D20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int *piVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [64];
  
  iVar1 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = 1;
  *(int *)(iVar1 + 0x7d4) = *(int *)(iVar1 + 0x7d4) + -1;
  *(int *)(iVar1 + 0x7d8) = *(int *)(iVar1 + 0x7d8) + 1;
  iVar1 = *(int *)(param_2 + 0x28);
  fn_8252AE68(iVar1,1);
  if (*(int *)(iVar1 + 0xb10) != 0) {
    fn_825A14E8();
    *(int *)(iVar1 + 0x8a8) = *(int *)(iVar1 + 0x8a8) + 1;
  }
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 4);
  piVar6 = (int *)fn_8265C9E0(0xc);
  if (piVar6 != (int *)0x0) {
    *piVar6 = iVar1;
    piVar6[1] = iVar2;
    if (piVar6 + 2 != (int *)0x0) {
      piVar6[2] = param_2;
    }
    puVar7 = (undefined *)param_1[1];
    if (puVar7 == (undefined *)0x3ffffffe) {
      puVar7 = &lbl_821A0000;
      piVar6 = (int *)fn_82F622A8(0xffffffff8219852c);
    }
    param_1[1] = (int)(puVar7 + 1);
    *(int **)(iVar1 + 4) = piVar6;
    *(int **)piVar6[1] = piVar6;
    uVar3 = *(undefined4 *)(param_2 + 0x28);
    puVar4 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar10;
    fn_8253C548(uVar3,auStack_40,0);
    return;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

