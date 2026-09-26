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
extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_82267C00();
extern int fn_82267CC8();
extern int fn_82267D60();
extern int fn_82274A10();
extern int fn_82284118();
extern int fn_8265C9E0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821A8C90;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


int * fn_82267460(int *param_1,int param_2,undefined8 param_3,uint *param_4,int *param_5,
                   int param_6,int param_7)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [112];
  
  param_1[1] = 0;
  iVar1 = fn_8265C9E0(0xc);
  if (iVar1 == 0) {
    uStack_74 = 0;
    ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_78);
  }
  *param_1 = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[4] = 0;
  iVar1 = fn_8265C9E0(0xc);
  if (iVar1 != 0) {
    param_1[3] = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(param_1[3] + 4) = param_1[3];
    param_1[6] = 0;
    param_1[8] = param_2;
    param_1[9] = (int)&lbl_821A8C90;
    param_1[0xe] = 0;
    param_1[0xf] = 1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = (int)param_3;
    param_1[0x15] = 1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1a] = param_6;
    param_1[0x1b] = 0;
    param_1[0x1d] = param_7;
    iVar1 = fn_82274A10(1,param_3,0,0);
    param_1[6] = iVar1;
    param_1[10] = (int)param_1;
    param_1[0xb] = (int)fn_82267C00;
    param_1[0xc] = (int)fn_82267CC8;
    param_1[0xd] = (int)fn_82267D60;
    if (param_4 != (uint *)0x0) {
      uVar2 = (ulonglong)*param_4;
      if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
        uVar2 = fn_8265C9E0(0xd44);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = fn_82284118(uVar2,param_4,1);
        }
        param_1[0x1b] = iVar1;
      }
    }
    param_1[0x1c] = *param_5;
    fn_82864988(auStack_70,0xffffffff821a7cd8);
    iVar1 = fn_828647D8();
    param_1[0x18] = iVar1;
    fn_82864898(auStack_70);
    fn_82864988(auStack_70,0xffffffff821a7cfc);
    iVar1 = fn_828647D8();
    param_1[0x19] = iVar1;
    fn_82864898(auStack_70);
    return param_1;
  }
  uStack_7c = 0;
  ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_80);
}

