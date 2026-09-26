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
extern int fn_824060E8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821ACFB8;
extern unsigned int uStack_1c;


undefined4 * fn_822C70F0(undefined4 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  *param_1 = &lbl_821ACFB8;
  fn_8223B688(param_1 + 1);
  param_1[8] = *(undefined4 *)(param_3 + 8);
  param_1[9] = *(undefined4 *)(param_3 + 0xc);
  fn_824060E8(param_1 + 10,param_3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  iVar1 = fn_8265C9E0(0x48);
  if (iVar1 != 0) {
    param_1[0x11] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x11] + 4) = param_1[0x11];
    *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
    *(undefined1 *)(param_1[0x11] + 0x44) = 1;
    *(undefined1 *)(param_1[0x11] + 0x45) = 1;
    param_1[0x14] = 0;
    return param_1;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

