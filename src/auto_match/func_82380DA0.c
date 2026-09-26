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
extern unsigned int lbl_821B3A10;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


undefined4 * fn_82380DA0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  param_1[1] = param_2;
  *param_1 = &lbl_821B3A10;
  param_1[4] = 0;
  iVar1 = fn_8265C9E0(0x18);
  if (iVar1 == 0) {
    uStack_24 = 0;
    ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_28);
  }
  param_1[3] = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[3] + 4) = param_1[3];
  *(undefined4 *)(param_1[3] + 8) = param_1[3];
  *(undefined1 *)(param_1[3] + 0x14) = 1;
  *(undefined1 *)(param_1[3] + 0x15) = 1;
  param_1[8] = 0;
  iVar1 = fn_8265C9E0(0x18);
  if (iVar1 != 0) {
    param_1[7] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[7] + 4) = param_1[7];
    *(undefined4 *)(param_1[7] + 8) = param_1[7];
    *(undefined1 *)(param_1[7] + 0x14) = 1;
    *(undefined1 *)(param_1[7] + 0x15) = 1;
    return param_1;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

