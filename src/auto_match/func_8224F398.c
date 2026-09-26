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
extern int fn_822315A0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


undefined4 * fn_8224F398(undefined4 *param_1)

{
  int iVar1;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  *param_1 = 0;
  param_1[3] = 0;
  iVar1 = fn_8265C9E0(0x38);
  if (iVar1 == 0) {
    uStack_24 = 0;
    ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_28);
  }
  param_1[2] = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  *(undefined1 *)(param_1[2] + 0x34) = 1;
  *(undefined1 *)(param_1[2] + 0x35) = 1;
  param_1[7] = 0;
  iVar1 = fn_8265C9E0(0x4c);
  if (iVar1 != 0) {
    param_1[6] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[6] + 4) = param_1[6];
    *(undefined4 *)(param_1[6] + 8) = param_1[6];
    *(undefined1 *)(param_1[6] + 0x48) = 1;
    *(undefined1 *)(param_1[6] + 0x49) = 1;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    iVar1 = param_1[0xe];
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    param_1[0xf] = 0;
    return param_1;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

