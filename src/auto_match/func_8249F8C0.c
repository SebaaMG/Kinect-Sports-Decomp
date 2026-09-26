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
extern int fn_82266D28();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821BF148;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;


void fn_8249F8C0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  *param_1 = &lbl_821BF148;
  param_1[0x13] = *param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_82266D28(param_1 + 0x14,0);
  param_1[0x16] = param_3;
  param_1[0x17] = 1;
  param_1[0x1a] = 0;
  iVar4 = fn_8265C9E0(0x18);
  if (iVar4 == 0) {
    uStack_4c = 0;
    ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_50);
  }
  param_1[0x19] = iVar4;
  *(int *)iVar4 = iVar4;
  uVar3 = lbl_821CC160;
  uVar2 = lbl_82192480;
  uVar1 = lbl_821922D0;
  *(undefined4 *)(param_1[0x19] + 4) = param_1[0x19];
  *(undefined4 *)(param_1[0x19] + 8) = param_1[0x19];
  *(undefined1 *)(param_1[0x19] + 0x14) = 1;
  *(undefined1 *)(param_1[0x19] + 0x15) = 1;
  param_1[0x1f] = uVar2;
  param_1[0x20] = uVar1;
  param_1[0x1c] = 0;
  param_1[0x21] = uVar3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  iVar4 = fn_8265C9E0(0x18);
  if (iVar4 != 0) {
    param_1[0x23] = iVar4;
    *(int *)iVar4 = iVar4;
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x23];
    *(undefined4 *)(param_1[0x23] + 8) = param_1[0x23];
    *(undefined1 *)(param_1[0x23] + 0x14) = 1;
    *(undefined1 *)(param_1[0x23] + 0x15) = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_1 + 4,0,0x14);
  }
  uStack_54 = 0;
  ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_58);
}

