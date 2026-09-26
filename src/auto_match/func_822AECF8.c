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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82230040();
extern int fn_8223B688();
extern int fn_822B19F0();
extern int fn_822B1B28();
extern int fn_82359C18();
extern int fn_82610EF0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AC518;
extern unsigned int lbl_821AC528;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;


undefined4 * fn_822AECF8(undefined4 *param_1,undefined8 param_2)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  undefined **ppuStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  undefined8 uStack_3c;
  undefined ***pppuStack_30;
  
  *param_1 = &lbl_821AC518;
  param_1[3] = 0;
  iVar2 = fn_8265C9E0(0x1c);
  if (iVar2 != 0) {
    param_1[2] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(param_1[2] + 4) = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
    *(undefined1 *)(param_1[2] + 0x18) = 1;
    *(undefined1 *)(param_1[2] + 0x19) = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    fn_8223B688(param_1 + 7,param_2);
    param_1[0xe] = lbl_821CC160;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    uVar1 = fn_8265C9E0(0x28);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821AC528;
      uStack_3c = CONCAT44(fn_82610EF0,param_1);
      uVar3 = fn_822B19F0(uVar1,&ppuStack_40);
    }
    uVar1 = (ulonglong)(uint)param_1[0xf];
    param_1[0xf] = uVar3;
    if (uVar1 != 0) {
      fn_82359C18(uVar1 + 0x10);
      fn_822B1B28(uVar1);
      fn_8265CA20(uVar1);
    }
    return param_1;
  }
  uStack_44 = 0;
  ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_48);
}

