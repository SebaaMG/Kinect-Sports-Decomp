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
extern int fn_822CAE38();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_822CACB8(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    if ((ulonglong)*(uint *)(param_1 + 8) <=
        ((ulonglong)*(uint *)(param_1 + 0x10) + 2 & 0xffffffff) >> 1) {
      fn_822CAE38();
    }
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 8) << 1;
  }
  uVar3 = iVar4 - 1;
  iVar4 = (uVar3 & 0x7ffffffe) * 2;
  if (*(int *)(*(int *)(param_1 + 4) + iVar4) == 0) {
    iVar1 = fn_8265C9E0(0x10);
    if (iVar1 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar4) = iVar1;
  }
  puVar2 = (undefined8 *)(*(int *)(*(int *)(param_1 + 4) + iVar4) + (uVar3 & 1) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_2;
  }
  *(uint *)(param_1 + 0xc) = uVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

