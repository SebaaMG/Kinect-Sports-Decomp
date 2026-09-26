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
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F63CA0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_8234D4C0(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if (0x7fffffff < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)(param_1[2] - *param_1 >> 1) < (param_2 & 0xffffffff)) {
    lVar3 = 0;
    if (((param_2 & 0xffffffff) != 0) &&
       (lVar3 = fn_8265C9E0((param_2 & 0x7fffffff) << 1), lVar3 == 0)) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    fn_82F63CA0(lVar3,*param_1,(param_1[1] - *param_1 >> 1) << 1);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      fn_8265CA20();
    }
    iVar4 = (int)lVar3;
    *param_1 = iVar4;
    param_1[2] = (int)((param_2 & 0xffffffff) << 1) + iVar4;
    param_1[1] = (iVar2 - iVar1 >> 1) * 2 + iVar4;
  }
  return;
}

