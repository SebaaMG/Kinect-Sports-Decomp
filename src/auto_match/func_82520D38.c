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
extern int fn_82230110();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C2CCC;
extern unsigned int uStack_3c;


undefined4 * fn_82520D38(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  *param_1 = &lbl_821C2CCC;
  param_1[1] = *(undefined4 *)(param_2 + 0x44);
  param_1[2] = 0;
  fn_82230110(param_1 + 3);
  iVar1 = param_1[1];
  iVar2 = *(int *)(iVar1 + 0xa0);
  iVar3 = *(int *)(iVar2 + 4);
  piVar4 = (int *)fn_8265C9E0(0xc);
  if (piVar4 == (int *)0x0) {
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  *piVar4 = iVar2;
  piVar4[1] = iVar3;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = (int)param_1;
  }
  if (*(int *)(iVar1 + 0xa4) == 0x3ffffffe) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(iVar1 + 0xa4) = *(int *)(iVar1 + 0xa4) + 1;
  *(int **)(iVar2 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  return param_1;
}

