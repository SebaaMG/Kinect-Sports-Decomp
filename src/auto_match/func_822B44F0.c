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
extern int fn_822B4448();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


int fn_822B44F0(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = fn_8265C9E0(0x14);
  if (iVar3 == 0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  *(int *)(param_1 + 4) = iVar3;
  *(int *)iVar3 = iVar3;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x10) = 1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x11) = 1;
  fn_822B4448(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar3 = fn_8265C9E0(0x14);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x14) = iVar3;
    *(int *)iVar3 = iVar3;
    *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x14);
    *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x10) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x11) = 1;
    fn_822B4448(param_1 + 0x10,param_2 + 0x10);
    puVar1 = (undefined4 *)((int)param_2 + 0x20U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    return param_1;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}

