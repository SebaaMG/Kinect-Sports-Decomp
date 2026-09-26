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
extern int fn_82359C18();
extern int fn_82392C68();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_82457208(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0xaaaaaaa < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x18) < (param_2 & 0xffffffff)) {
    uVar4 = 0;
    if (((param_2 & 0xffffffff) != 0) && (uVar4 = fn_8265C9E0(param_2 * 0x18), uVar4 == 0)) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    uVar1 = param_1[1];
    uVar3 = uVar4;
    for (uVar6 = (ulonglong)*param_1; (uVar6 & 0xffffffff) != (ulonglong)uVar1; uVar6 = uVar6 + 0x18
        ) {
      if ((uVar3 & 0xffffffff) != 0) {
        fn_82392C68(uVar3,uVar6);
      }
      uVar3 = uVar3 + 0x18;
    }
    uVar1 = *param_1;
    uVar3 = (ulonglong)uVar1;
    uVar2 = param_1[1];
    if (uVar3 != 0) {
      if (uVar3 != uVar2) {
        do {
          fn_82359C18(uVar3);
          uVar3 = uVar3 + 0x18;
        } while ((uVar3 & 0xffffffff) != (ulonglong)uVar2);
      }
      fn_8265CA20(*param_1);
    }
    uVar5 = (uint)uVar4;
    *param_1 = uVar5;
    param_1[2] = (int)param_2 * 0x18 + uVar5;
    param_1[1] = ((int)(uVar2 - uVar1) / 0x18) * 0x18 + uVar5;
  }
  return;
}

