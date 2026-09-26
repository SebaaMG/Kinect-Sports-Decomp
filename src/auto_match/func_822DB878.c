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
extern unsigned int *auStack_60;
extern int fn_822DBDC8();
extern int fn_822DC578();
extern int fn_822DCBC0();
extern unsigned int uStack_64;
extern unsigned int uStack_70;


void fn_822DB878(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar8;
  longlong lVar7;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined1 auStack_60 [96];
  
  lVar5 = param_2 - param_1;
  uVar4 = (int)lVar5 / 0x14;
  uVar6 = param_2;
  if (0x20 < (int)uVar4) {
    do {
      iVar8 = (int)param_3;
      param_2 = uVar6;
      if (iVar8 < 1) break;
      fn_822DBDC8(&uStack_70,param_1,uVar6,param_4);
      param_3 = (longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar9 = uStack_70 & 0xffffffff;
      param_2 = (ulonglong)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
      if ((int)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) - (int)param_1) / 0x14 < ((int)uVar6 - (((U64)(uStack_70) >> 32) & 0xFFFFFFFF)) / 0x14) {
        fn_822DB878(param_1,param_2,param_3,param_4);
        param_2 = uVar6;
        param_1 = uVar9;
      }
      else {
        fn_822DB878(uVar9,uVar6,param_3,param_4);
      }
      lVar5 = param_2 - param_1;
      uVar4 = (int)lVar5 / 0x14;
      uVar6 = param_2;
    } while (0x20 < (int)uVar4);
    if (0x20 < (int)uVar4) {
      if ((int)uVar4 < 2) {
        return;
      }
      lVar7 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      if (0 < lVar7) {
        lVar1 = lVar7 * 0x14 + param_1;
        do {
          puVar2 = &uStack_64;
          lVar7 = lVar7 + -1;
          lVar3 = lVar1 + -0x18;
          lVar10 = 5;
          do {
            lVar3 = lVar3 + 4;
            puVar2 = puVar2 + 1;
            *puVar2 = *(undefined4 *)lVar3;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          fn_822DCBC0(param_1,lVar7,uVar4,auStack_60,param_4);
          lVar1 = lVar1 + -0x14;
        } while (0 < (int)lVar7);
      }
      if ((int)uVar4 < 2) {
        return;
      }
      lVar7 = param_2 - 0x14;
      do {
        puVar2 = &uStack_64;
        lVar1 = lVar7 + -4;
        lVar3 = 5;
        do {
          lVar1 = lVar1 + 4;
          puVar2 = puVar2 + 1;
          *puVar2 = *(undefined4 *)lVar1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar1 = param_1 - 4;
        lVar3 = lVar7 + -4;
        lVar10 = 5;
        do {
          lVar1 = lVar1 + 4;
          lVar3 = lVar3 + 4;
          *(undefined4 *)lVar3 = *(undefined4 *)lVar1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        fn_822DCBC0(param_1,0,((int)lVar5 + -0x14) / 0x14,auStack_60,param_4);
        lVar7 = lVar7 + -0x14;
        lVar5 = (lVar7 - param_1) + 0x14;
      } while (1 < (int)lVar5 / 0x14);
      return;
    }
  }
  if ((1 < (int)uVar4) && ((param_1 & 0xffffffff) != (param_2 & 0xffffffff))) {
    uStack_70 = param_4;
    fn_822DC578(param_1,param_2,&uStack_70);
  }
  return;
}

