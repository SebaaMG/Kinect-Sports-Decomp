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
extern int fn_8235A028();
extern int fn_823915C8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_823B8948(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 1U) {
    fn_823915C8();
  }
  uVar5 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(param_1 + 8);
  }
  iVar6 = uVar5 * 4;
  if (*(int *)(*(int *)(param_1 + 4) + iVar6) == 0) {
    iVar3 = fn_8265C9E0(0x18);
    if (iVar3 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar6) = iVar3;
  }
  puVar2 = *(undefined8 **)(*(int *)(param_1 + 4) + iVar6);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = param_2 + 1;
    *puVar2 = *param_2;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((int)puVar2 + 0xc) = 0;
    if (puVar2 + 1 != puVar4) {
      uVar1 = *(undefined4 *)((int)puVar2 + 0xc);
      *(undefined4 *)((int)puVar2 + 0xc) = *(undefined4 *)((int)param_2 + 0xc);
      *(undefined4 *)((int)param_2 + 0xc) = uVar1;
      uVar1 = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)puVar4;
      *(undefined4 *)puVar4 = uVar1;
    }
    fn_8235A028(puVar2 + 2,param_2 + 2);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

