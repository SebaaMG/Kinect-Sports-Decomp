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
extern int fn_825AD308();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_8287D048(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if ((*(uint *)(param_1 + 0xc) & 3) == 0) {
    if ((ulonglong)*(uint *)(param_1 + 8) <=
        ((ulonglong)*(uint *)(param_1 + 0x10) + 4 & 0xffffffff) >> 2) {
      fn_825AD308(param_1,1);
    }
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 8) << 2;
  }
  uVar4 = iVar2 - 1;
  uVar1 = uVar4 & 0xfffffffc;
  if (*(int *)(*(int *)(param_1 + 4) + uVar1) == 0) {
    iVar2 = fn_8265C9E0(0x10);
    if (iVar2 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + uVar1) = iVar2;
  }
  puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + uVar1) + (uVar4 & 3) * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *param_2;
  }
  *(uint *)(param_1 + 0xc) = uVar4;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

