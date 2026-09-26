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
extern int fn_825ACAC8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_5c;


void fn_823B4A18(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[2] = param_1 + 1;
  uVar1 = lbl_821CC160;
  param_1[1] = param_1 + 1;
  param_1[5] = uVar1;
  param_1[4] = 0;
  param_1[10] = uVar1;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  iVar2 = fn_8265C9E0(0x38);
  if (iVar2 != 0) {
    param_1[0x18] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x18];
    *(undefined4 *)(param_1[0x18] + 8) = param_1[0x18];
    *(undefined1 *)(param_1[0x18] + 0x34) = 1;
    *(undefined1 *)(param_1[0x18] + 0x35) = 1;
                    /* WARNING: Subroutine does not return */
    fn_825ACAC8(param_1 + 0x1b);
  }
  uStack_5c = 0;
  ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_60);
}

