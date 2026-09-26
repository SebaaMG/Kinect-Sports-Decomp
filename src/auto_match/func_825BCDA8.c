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
extern unsigned int lbl_821C8D10;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_34;
extern unsigned int uStack_40;


undefined4 * fn_825BCDA8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  
  fn_827D9980(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc),
                    *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x38));
  *param_1 = &lbl_821C8D10;
  param_1[0xd] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xe] = *(undefined4 *)(param_2 + 4);
  param_1[0xf] = *(undefined4 *)(param_2 + 8);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = uStack_40;
  param_1[0x19] = 0;
  iVar1 = fn_8265C9E0(0x10);
  if (iVar1 != 0) {
    param_1[0x18] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x18];
    uVar2 = lbl_821CA460;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x21] = uVar2;
    fn_82587028(param_1 + 0x17,8);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x77] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    fn_827D9630(param_1 + 0x7e,param_2 + 0x18);
    param_1[0x84] = *(undefined4 *)(param_2 + 0x34);
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    if (param_1[0x84] == 0) {
      *(undefined1 *)(param_1 + 0x85) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x85) = 1;
    }
    uVar2 = fn_82A1E6A0(0,1,0,0);
    param_1[0x76] = uVar2;
    RtlInitializeCriticalSection(param_1 + 0x8d);
    return param_1;
  }
  uStack_34 = 0;
  ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_38);
}

