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
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


void fn_8236D250(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  if (0x7ffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 5) < param_2) {
    uVar2 = 0;
    if ((param_2 != 0) && (uVar2 = fn_8265C9E0(param_2 & 0x7ffffff), uVar2 == 0)) {
      uStack_3c = 0;
      ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_40);
    }
    uVar1 = param_1[1];
    uVar4 = uVar2;
    for (uVar5 = *param_1; uVar5 != uVar1; uVar5 = uVar5 + 0x20) {
      if (uVar4 != 0) {
        fn_8223B688(uVar4,uVar5);
        *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(uVar5 + 0x1c);
      }
      uVar4 = uVar4 + 0x20;
    }
    uVar5 = *param_1;
    uVar3 = (ulonglong)uVar5;
    uVar1 = param_1[1];
    if (uVar3 != 0) {
      if (uVar3 != uVar1) {
        do {
          fn_82230300(uVar3,1,0);
          uVar3 = uVar3 + 0x20;
        } while ((uVar3 & 0xffffffff) != (ulonglong)uVar1);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = uVar2;
    param_1[2] = param_2 * 0x20 + uVar2;
    param_1[1] = ((int)(uVar1 - uVar5) >> 5) * 0x20 + uVar2;
  }
  return;
}

