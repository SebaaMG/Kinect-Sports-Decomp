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
extern int fn_82230300();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


void fn_8258BE68(undefined4 *param_1)

{
  int iVar1;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  *param_1 = 0;
  fn_82230300(param_1 + 100,0,0);
  param_1[0x6e] = 0;
  iVar1 = fn_8265C9E0(0x3c);
  if (iVar1 == 0) {
    uStack_2c = 0;
    ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_30);
  }
  param_1[0x6d] = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[0x6d] + 4) = param_1[0x6d];
  *(undefined4 *)(param_1[0x6d] + 8) = param_1[0x6d];
  *(undefined1 *)(param_1[0x6d] + 0x38) = 1;
  *(undefined1 *)(param_1[0x6d] + 0x39) = 1;
  param_1[0x72] = 0;
  iVar1 = fn_8265C9E0(0x30);
  if (iVar1 != 0) {
    param_1[0x71] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x71] + 4) = param_1[0x71];
    *(undefined4 *)(param_1[0x71] + 8) = param_1[0x71];
    *(undefined1 *)(param_1[0x71] + 0x2c) = 1;
    *(undefined1 *)(param_1[0x71] + 0x2d) = 1;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x7a] = 0;
    iVar1 = fn_8265C9E0(0x34);
    if (iVar1 != 0) {
      param_1[0x79] = iVar1;
      *(int *)iVar1 = iVar1;
      *(undefined4 *)(param_1[0x79] + 4) = param_1[0x79];
      *(undefined4 *)(param_1[0x79] + 8) = param_1[0x79];
      *(undefined1 *)(param_1[0x79] + 0x30) = 1;
      *(undefined1 *)(param_1[0x79] + 0x31) = 1;
      param_1[0x7c] = 0;
      param_1[0x7d] = 0;
      param_1[0x7e] = 0;
      param_1[0x7f] = 1;
      param_1[0x80] = 1;
      param_1[0x3ff] = 0;
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(param_1 + 0xda,0,8);
    }
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  uStack_34 = 0;
  ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_38);
}

