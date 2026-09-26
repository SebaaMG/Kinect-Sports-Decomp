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
extern int fn_827D9630();
extern int fn_827D9980();
extern int fn_82A1E6A0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C8D88;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_44;
extern unsigned int uStack_50;


undefined4 *
fn_825BE350(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_50;
  undefined **ppuStack_48;
  undefined4 uStack_44;
  
  fn_827D9980(param_1,param_2,param_4,param_5,param_8);
  param_1[0xe] = param_3;
  param_1[0xd] = param_7;
  *param_1 = &lbl_821C8D88;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6f] = (int)param_2;
  param_1[0x6c] = 0;
  param_1[0x70] = (int)param_8;
  *(undefined1 *)(param_1 + 0x71) = uStack_50;
  param_1[0x73] = 0;
  iVar1 = fn_8265C9E0(0x30);
  if (iVar1 != 0) {
    param_1[0x72] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x72] + 4) = param_1[0x72];
    uVar2 = lbl_821CA460;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x7b] = uVar2;
    fn_82587028(param_1 + 0x71,8);
    param_1[0x7c] = 0;
    fn_827D9630(param_1 + 0x7e,param_6);
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    uVar2 = fn_82A1E6A0(0,1,0,0);
    param_1[0x6d] = uVar2;
    return param_1;
  }
  uStack_44 = 0;
  ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_48);
}

