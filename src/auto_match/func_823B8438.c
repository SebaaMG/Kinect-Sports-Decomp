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


void fn_823B8438(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) & 1U) == 0) {
    if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 2U >> 1) {
      fn_822CAE38();
    }
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x10);
  uVar3 = (uVar5 & 0xffffffff) >> 1;
  if (*(uint *)(param_1 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(param_1 + 8);
  }
  iVar1 = (int)((uVar3 & 0x3fffffff) << 2);
  if (*(int *)(*(int *)(param_1 + 4) + iVar1) == 0) {
    iVar2 = fn_8265C9E0(0x10);
    if (iVar2 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar1) = iVar2;
  }
  lVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + iVar1) + (uVar5 & 1) * 8;
  if (lVar4 != 0) {
    *(undefined8 *)lVar4 = *param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

