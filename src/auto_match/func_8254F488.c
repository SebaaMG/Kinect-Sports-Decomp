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
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_8254F488(uint *param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0x2aaaaaa < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x60) < (param_2 & 0xffffffff)) {
    uVar2 = 0;
    if (((param_2 & 0xffffffff) != 0) && (uVar2 = fn_8265C9E0(param_2 * 0x60), uVar2 == 0)) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    uVar3 = param_1[1];
    uVar4 = uVar2;
    for (uVar5 = (ulonglong)*param_1; (uVar5 & 0xffffffff) != (ulonglong)uVar3; uVar5 = uVar5 + 0x60
        ) {
      if ((uVar4 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar4,uVar5,0x60);
      }
      uVar4 = uVar4 + 0x60;
    }
    uVar3 = *param_1;
    iVar1 = param_1[1] - uVar3;
    if (uVar3 != 0) {
      for (; uVar3 != param_1[1]; uVar3 = uVar3 + 0x60) {
      }
      fn_8265CA20();
    }
    uVar3 = (uint)uVar2;
    *param_1 = uVar3;
    param_1[2] = (int)param_2 * 0x60 + uVar3;
    param_1[1] = (iVar1 / 0x60) * 0x60 + uVar3;
  }
  return;
}

