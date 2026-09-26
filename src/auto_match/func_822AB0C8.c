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
extern int fn_822ABF20();
extern int fn_822AC808();
extern int fn_822ACAD8();
extern int fn_82526C70();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_5c;


int fn_822AB0C8(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9)

{
  int iVar3;
  ulonglong uVar1;
  undefined4 uVar4;
  undefined8 uVar2;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  
  *(undefined4 *)(param_2 + 8) = 0;
  iVar3 = fn_8265C9E0(0x18);
  if (iVar3 != 0) {
    *(int *)(param_2 + 4) = iVar3;
    *(int *)iVar3 = iVar3;
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    uVar4 = lbl_821CC160;
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(undefined1 *)(*(int *)(param_2 + 4) + 0x14) = 1;
    *(undefined1 *)(*(int *)(param_2 + 4) + 0x15) = 1;
    *(float *)(param_2 + 0x14) = (float)param_1;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x10) = param_6;
    *(undefined4 *)(param_2 + 0x18) = param_8;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(int *)(param_2 + 0x4c) = (int)param_4;
    *(undefined4 *)(param_2 + 0x50) = param_5;
    fn_82F68CC0(param_2 + 0x54,param_9,0x54);
    uVar1 = fn_8265C9E0(0xb0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_822AC808(param_1,uVar1,param_3,param_4);
    }
    *(undefined4 *)(param_2 + 0x48) = uVar4;
    fn_82526C70(param_2 + 0x28,0x20,0xffffffff821ac494);
    if (*(int *)(param_2 + 0x18) == 0) {
      uVar2 = 0xffffffff821ac49c;
    }
    else {
      uVar2 = fn_822ABF20(param_2);
    }
    fn_822ACAD8(*(undefined4 *)(param_2 + 0x48),param_2 + 0x28,uVar2);
    *(undefined2 *)(param_2 + 0xa8) = 0;
    return param_2;
  }
  uStack_5c = 0;
  ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_60);
}

