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
extern int fn_82587028();
extern int fn_8265C9E0();
extern int fn_827D9980();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C7BA0;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_60;


undefined4 *
fn_8259A4C8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uStack_60;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  fn_827D9980(param_1,param_8,param_2,param_3,1);
  *param_1 = &lbl_821C7BA0;
  *(undefined1 *)(param_1 + 0xd) = uStack_60;
  param_1[0xf] = 0;
  iVar2 = fn_8265C9E0(0x10);
  if (iVar2 == 0) {
    uStack_4c = 0;
    ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_50);
  }
  param_1[0xe] = iVar2;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[0xe] + 4) = param_1[0xe];
  uVar1 = lbl_821CA460;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = uVar1;
  fn_82587028(param_1 + 0xd,8);
  param_1[0x1c] = param_4;
  param_1[0x1d] = param_5;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_6;
  param_1[0x26] = param_7;
  param_1[0x29] = 0;
  iVar2 = fn_8265C9E0(0x14);
  if (iVar2 != 0) {
    param_1[0x28] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(param_1[0x28] + 4) = param_1[0x28];
    *(undefined4 *)(param_1[0x28] + 8) = param_1[0x28];
    *(undefined1 *)(param_1[0x28] + 0x10) = 1;
    *(undefined1 *)(param_1[0x28] + 0x11) = 1;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2f] = (int)param_8;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined1 *)((int)param_1 + 0xc2) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    return param_1;
  }
  uStack_54 = 0;
  ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_58);
}

