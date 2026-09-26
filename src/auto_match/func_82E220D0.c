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
extern int fn_8265C9E0();
extern int fn_82E21E18();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_82E220D0(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 1U) {
    fn_82E21E18(param_1,1);
  }
  uVar2 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(param_1 + 8);
  }
  iVar3 = uVar2 * 4;
  if (*(int *)(*(int *)(param_1 + 4) + iVar3) == 0) {
    iVar1 = fn_8265C9E0(0x1c);
    if (iVar1 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar3) = iVar1;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 4) + iVar3);
  if (iVar3 != 0) {
    fn_8223B688(iVar3,param_2);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

