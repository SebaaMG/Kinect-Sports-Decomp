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
extern unsigned int lbl_82192330;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


undefined4 * fn_8254AB00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  iVar3 = fn_8265C9E0(0x18);
  if (iVar3 == 0) {
    uStack_24 = 0;
    ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_28);
  }
  param_1[0xf] = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(param_1[0xf] + 4) = param_1[0xf];
  *(undefined4 *)(param_1[0xf] + 8) = param_1[0xf];
  *(undefined1 *)(param_1[0xf] + 0x14) = 1;
  *(undefined1 *)(param_1[0xf] + 0x15) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  iVar3 = fn_8265C9E0(0x2c);
  if (iVar3 == 0) {
    uStack_2c = 0;
    ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_30);
  }
  param_1[0x17] = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(param_1[0x17] + 4) = param_1[0x17];
  *(undefined4 *)(param_1[0x17] + 8) = param_1[0x17];
  *(undefined1 *)(param_1[0x17] + 0x28) = 1;
  *(undefined1 *)(param_1[0x17] + 0x29) = 1;
  param_1[0x1c] = 0;
  iVar3 = fn_8265C9E0(0x18);
  if (iVar3 == 0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  param_1[0x1b] = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(param_1[0x1b] + 4) = param_1[0x1b];
  *(undefined4 *)(param_1[0x1b] + 8) = param_1[0x1b];
  *(undefined1 *)(param_1[0x1b] + 0x14) = 1;
  *(undefined1 *)(param_1[0x1b] + 0x15) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2b] = 0;
  iVar3 = fn_8265C9E0(0x30);
  if (iVar3 != 0) {
    param_1[0x2a] = iVar3;
    *(int *)iVar3 = iVar3;
    uVar2 = lbl_821CC160;
    uVar1 = lbl_82192330;
    *(undefined4 *)(param_1[0x2a] + 4) = param_1[0x2a];
    *(undefined4 *)(param_1[0x2a] + 8) = param_1[0x2a];
    *(undefined1 *)(param_1[0x2a] + 0x2c) = 1;
    *(undefined1 *)(param_1[0x2a] + 0x2d) = 1;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x37] = uVar2;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0xffffffff;
    param_1[0x6e] = uVar1;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    return param_1;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}

