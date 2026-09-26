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
extern int fn_8250B068();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_8250AB88(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0x2aaaaaa < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x60) < (param_2 & 0xffffffff)) {
    uVar3 = 0;
    if (((param_2 & 0xffffffff) != 0) && (uVar3 = fn_8265C9E0(param_2 * 0x60), uVar3 == 0)) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    uVar4 = param_1[1];
    uVar6 = uVar3;
    for (uVar7 = (ulonglong)*param_1; (uVar7 & 0xffffffff) != (ulonglong)uVar4; uVar7 = uVar7 + 0x60
        ) {
      if ((uVar6 & 0xffffffff) != 0) {
        fn_8250B068(uVar6,uVar7);
      }
      uVar6 = uVar6 + 0x60;
    }
    uVar4 = *param_1;
    uVar1 = param_1[1];
    iVar2 = uVar1 - uVar4;
    if (uVar4 != 0) {
      if (uVar4 != uVar1) {
        piVar5 = (int *)(uVar4 + 0x50);
        do {
          if (*piVar5 != 0) {
            fn_822315A0();
          }
          uVar4 = uVar4 + 0x60;
          piVar5 = piVar5 + 0x18;
        } while (uVar4 != uVar1);
      }
      fn_8265CA20(*param_1);
    }
    uVar4 = (uint)uVar3;
    *param_1 = uVar4;
    param_1[2] = (int)param_2 * 0x60 + uVar4;
    param_1[1] = (iVar2 / 0x60) * 0x60 + uVar4;
  }
  return;
}

