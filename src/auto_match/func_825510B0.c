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
extern int fn_82551528();
extern int fn_825519F8();
extern int fn_82551ED8();
extern int fn_82F68CC0();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_825510B0(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar5;
  longlong lVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uStack_70;
  uint uStack_6c;
  undefined1 auStack_60 [96];
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 / 0x18;
  uVar6 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar6;
      if (iVar5 < 1) break;
      fn_82551528(&uStack_70,param_1,uVar6,param_4);
      param_3 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar7 = (ulonglong)uStack_6c;
      param_2 = (ulonglong)uStack_70;
      if ((int)(uStack_70 - (int)param_1) / 0x18 < (int)((int)uVar6 - uStack_6c) / 0x18) {
        fn_825510B0(param_1,param_2,param_3,param_4);
        param_2 = uVar6;
        param_1 = uVar7;
      }
      else {
        fn_825510B0(uVar7,uVar6,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 / 0x18;
      uVar6 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < lVar4) {
        lVar3 = lVar4 * 0x18 + param_1;
        do {
          lVar3 = lVar3 + -0x18;
          lVar4 = lVar4 + -1;
          fn_82F68CC0(auStack_60,lVar3,0x18);
          fn_82551ED8(param_1,lVar4,uVar1,auStack_60,param_4);
        } while (0 < (int)lVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = param_2 - 0x18;
      do {
        fn_82F68CC0(auStack_60,lVar4,0x18);
        fn_82F68CC0(lVar4,param_1,0x18);
        fn_82551ED8(param_1,0,((int)lVar2 + -0x18) / 0x18,auStack_60,param_4);
        lVar4 = lVar4 + -0x18;
        lVar2 = (lVar4 - param_1) + 0x18;
      } while (1 < (int)lVar2 / 0x18);
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_825519F8(param_1,param_2,param_4);
  }
  return;
}

