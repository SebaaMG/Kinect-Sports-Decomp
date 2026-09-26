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
extern int fn_82315140();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AF698;
extern unsigned int lbl_821AF6B8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;


undefined4 * fn_82314970(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  
  uVar1 = *(undefined4 *)(param_2 + 0x114);
  param_1[3] = param_2;
  param_1[4] = param_3;
  uStack_6c = 0;
  ppuStack_70 = (undefined **)fn_82315140;
  uStack_60 = 0x8231514000000000;
  param_1[2] = uVar1;
  *param_1 = &lbl_821AF698;
  param_1[1] = 0x11;
  param_1[5] = 0;
  uVar1 = lbl_821CC160;
  param_1[0xc] = 0;
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  piVar2 = (int *)param_1[0xc];
  puStack_58 = param_1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,param_1 + 8 != piVar2);
    param_1[0xc] = 0;
  }
  puVar3 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &lbl_821AF6B8;
    fn_82F68CC0(puVar3 + 2,&uStack_60,0x30);
    param_1[0xc] = puVar3;
    return param_1;
  }
  uStack_6c = 0;
  ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_70);
}

