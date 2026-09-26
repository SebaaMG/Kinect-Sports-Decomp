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
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_1c;


undefined4 * fn_82448010(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  uVar3 = lbl_821CC160;
  uVar2 = lbl_82193D04;
  uVar1 = lbl_821922D4;
  *param_1 = 0;
  param_1[5] = uVar3;
  param_1[1] = 0;
  param_1[6] = uVar3;
  param_1[2] = 0;
  param_1[10] = uVar1;
  param_1[7] = 0;
  param_1[0xb] = uVar2;
  param_1[0xe] = 0;
  iVar4 = fn_8265C9E0(0x14);
  if (iVar4 != 0) {
    param_1[0xd] = iVar4;
    *(int *)iVar4 = iVar4;
    *(undefined4 *)(param_1[0xd] + 4) = param_1[0xd];
    *(undefined4 *)(param_1[0xd] + 8) = param_1[0xd];
    *(undefined1 *)(param_1[0xd] + 0x10) = 1;
    *(undefined1 *)(param_1[0xd] + 0x11) = 1;
    param_1[0x10] = 0;
    return param_1;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

