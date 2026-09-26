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
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


undefined8 fn_82551480(int *param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    lVar2 = 0;
    if ((param_2 != 0) &&
       (lVar2 = fn_8265C9E0(((ulonglong)param_2 & 0x3fffffff) << 2), lVar2 == 0)) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    iVar3 = (int)lVar2;
    *param_1 = iVar3;
    param_1[1] = iVar3;
    uVar1 = 1;
    param_1[2] = param_2 * 4 + iVar3;
  }
  return uVar1;
}

