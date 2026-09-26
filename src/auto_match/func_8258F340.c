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
extern int fn_822924C0();
extern int fn_82292780();
extern int fn_822933E8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


/* WARNING: Removing unreachable block (ram,0x8258f390) */

uint * fn_8258F340(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  if (param_1 != param_2) {
    uVar7 = *param_2;
    uVar8 = (ulonglong)uVar7;
    uVar3 = param_2[1];
    uVar2 = (int)(uVar3 - uVar7) / 0x24;
    if (uVar2 == 0) {
      uVar8 = (ulonglong)*param_1;
      if (uVar8 == param_1[1]) {
        return param_1;
      }
      fn_822933E8(uVar8,param_1[1]);
    }
    else {
      uVar4 = *param_1;
      uVar6 = (ulonglong)uVar4;
      uVar1 = (int)(param_1[1] - uVar4) / 0x24;
      if (uVar2 <= uVar1) {
        if (uVar7 != uVar3) {
          do {
            fn_822924C0(uVar6,uVar8);
            uVar8 = uVar8 + 0x24;
            uVar6 = uVar6 + 0x24;
          } while ((uVar8 & 0xffffffff) != (ulonglong)uVar3);
        }
        fn_822933E8(uVar6,param_1[1]);
        param_1[1] = ((int)(param_2[1] - *param_2) / 0x24) * 0x24 + *param_1;
        return param_1;
      }
      if ((uint)((int)(param_1[2] - uVar4) / 0x24) < uVar2) {
        if (uVar6 != 0) {
          fn_822933E8();
          fn_8265CA20(*param_1);
        }
        uVar2 = param_2[1];
        bVar5 = false;
        uVar7 = *param_2;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar2 = (int)(uVar2 - uVar7) / 0x24;
        if (uVar2 != 0) {
          if (0x71c71c7 < uVar2) {
                    /* WARNING: Subroutine does not return */
            fn_82F622A8(0xffffffff82196fd4);
          }
          uVar7 = 0;
          if ((uVar2 != 0) && (uVar7 = fn_8265C9E0((longlong)(int)uVar2 * 0x24), uVar7 == 0))
          {
            uStack_3c = 0;
            ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
            fn_82230040(&ppuStack_40);
          }
          *param_1 = uVar7;
          param_1[1] = uVar7;
          bVar5 = true;
          param_1[2] = uVar2 * 0x24 + uVar7;
        }
        if (!bVar5) {
          return param_1;
        }
        uVar2 = param_2[1];
        uVar8 = (ulonglong)*param_1;
        for (uVar6 = (ulonglong)*param_2; (uVar6 & 0xffffffff) != (ulonglong)uVar2;
            uVar6 = uVar6 + 0x24) {
          if ((uVar8 & 0xffffffff) != 0) {
            fn_82292780(uVar8,uVar6);
          }
          uVar8 = uVar8 + 0x24;
        }
      }
      else {
        uVar9 = (longlong)(int)uVar1 * 0x24 + uVar8;
        if ((ulonglong)uVar7 != (uVar9 & 0xffffffff)) {
          do {
            fn_822924C0(uVar6,uVar8);
            uVar8 = uVar8 + 0x24;
            uVar6 = uVar6 + 0x24;
          } while ((uVar8 & 0xffffffff) != (uVar9 & 0xffffffff));
        }
        uVar2 = param_2[1];
        uVar8 = (ulonglong)param_1[1];
        for (; (uVar9 & 0xffffffff) != (ulonglong)uVar2; uVar9 = uVar9 + 0x24) {
          if ((uVar8 & 0xffffffff) != 0) {
            fn_82292780(uVar8,uVar9);
          }
          uVar8 = uVar8 + 0x24;
        }
      }
    }
    param_1[1] = (uint)uVar8;
  }
  return param_1;
}

