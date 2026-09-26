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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_8256D8D0(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0x15555555 < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((param_1[2] - *param_1) / 0xc) < (param_2 & 0xffffffff)) {
    iVar2 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      iVar2 = fn_8265C9E0(param_2 * 0xc);
      if (iVar2 == 0) {
        uStack_4c = 0;
        ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_50);
      }
    }
    iVar1 = param_1[1];
    iVar3 = iVar2;
    for (iVar4 = *param_1; iVar4 != iVar1; iVar4 = iVar4 + 0xc) {
      if (iVar3 != 0) {
        fn_82365BD8(iVar3,iVar4);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar4 + 8);
      }
      iVar3 = iVar3 + 0xc;
    }
    iVar4 = *param_1;
    iVar1 = param_1[1];
    iVar3 = iVar1 - iVar4;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0xc) {
        if (*(int *)(iVar4 + 4) != 0) {
          fn_822315A0();
        }
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = iVar2;
    param_1[2] = (int)param_2 * 0xc + iVar2;
    param_1[1] = (iVar3 / 0xc) * 0xc + iVar2;
  }
  return;
}

