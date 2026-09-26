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
extern int fn_82468D38();
extern int fn_82468F58();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_5c;


void fn_824680D0(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  
  if (0xccccccc < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x14) < (param_2 & 0xffffffff)) {
    uVar5 = 0;
    if (((param_2 & 0xffffffff) != 0) && (uVar5 = fn_8265C9E0(param_2 * 0x14), uVar5 == 0)) {
      uStack_5c = 0;
      ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_60);
    }
    uVar6 = param_1[1];
    uVar3 = uVar5;
    for (uVar7 = (ulonglong)*param_1; (uVar7 & 0xffffffff) != (ulonglong)uVar6; uVar7 = uVar7 + 0x14
        ) {
      if ((uVar3 & 0xffffffff) != 0) {
        fn_82468D38(uVar3,uVar7);
      }
      uVar3 = uVar3 + 0x14;
    }
    uVar6 = *param_1;
    uVar1 = param_1[1];
    iVar4 = uVar1 - uVar6;
    if (uVar6 != 0) {
      for (; uVar6 != uVar1; uVar6 = uVar6 + 0x14) {
        uVar3 = (ulonglong)*(uint *)(uVar6 + 4);
        if (uVar3 != 0) {
          uVar2 = *(uint *)(uVar6 + 8);
          if (uVar3 != uVar2) {
            do {
              fn_82468F58(uVar3);
              uVar3 = uVar3 + 0x14;
            } while ((uVar3 & 0xffffffff) != (ulonglong)uVar2);
          }
          fn_8265CA20(*(undefined4 *)(uVar6 + 4));
        }
        *(undefined4 *)(uVar6 + 4) = 0;
        *(undefined4 *)(uVar6 + 8) = 0;
        *(undefined4 *)(uVar6 + 0xc) = 0;
      }
      fn_8265CA20(*param_1);
    }
    uVar6 = (uint)uVar5;
    *param_1 = uVar6;
    param_1[2] = (int)param_2 * 0x14 + uVar6;
    param_1[1] = (iVar4 / 0x14) * 0x14 + uVar6;
  }
  return;
}

