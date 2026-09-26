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
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_24;
extern unsigned int uStack_30;


undefined4 * fn_82579B78(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uStack_30;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = uStack_30;
  param_1[10] = 0;
  iVar2 = fn_8265C9E0(0x40);
  if (iVar2 != 0) {
    param_1[9] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(param_1[9] + 4) = param_1[9];
    uVar1 = lbl_821CA460;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0x12] = uVar1;
    fn_82587028(param_1 + 8,8);
    param_1[0x13] = 0;
    return param_1;
  }
  uStack_24 = 0;
  ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_28);
}

