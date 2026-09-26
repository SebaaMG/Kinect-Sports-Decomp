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
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


int fn_8225C430(int param_1)

{
  int iVar1;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = fn_8265C9E0(0x1c);
  if (iVar1 == 0) {
    uStack_2c = 0;
    ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_30);
  }
  *(int *)(param_1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x18) = 1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x19) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = fn_8265C9E0(0x50);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x38) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(param_1 + 0x38) + 4) = *(int *)(param_1 + 0x38);
    *(int *)(*(int *)(param_1 + 0x38) + 8) = *(int *)(param_1 + 0x38);
    *(undefined1 *)(*(int *)(param_1 + 0x38) + 0x48) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x38) + 0x49) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar1 = fn_8265C9E0(0x18);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x4c) = iVar1;
      *(int *)iVar1 = iVar1;
      *(int *)(*(int *)(param_1 + 0x4c) + 4) = *(int *)(param_1 + 0x4c);
      *(int *)(*(int *)(param_1 + 0x4c) + 8) = *(int *)(param_1 + 0x4c);
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x14) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x15) = 1;
      *(undefined4 *)(param_1 + 0x58) = 0xfe;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      return param_1;
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

