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


undefined8 fn_8248D2B8(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  uVar3 = (uint)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    if (0x15555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    iVar2 = 0;
    if (uVar3 != 0) {
      iVar2 = fn_8265C9E0(param_2 * 0xc);
      if (iVar2 == 0) {
        uStack_2c = 0;
        ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_30);
      }
    }
    *param_1 = iVar2;
    param_1[1] = iVar2;
    uVar1 = 1;
    param_1[2] = uVar3 * 0xc + iVar2;
  }
  return uVar1;
}

