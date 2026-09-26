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
extern int fn_82B68CF0();
extern int fn_82B68D70();
extern int fn_82B68FC8();
extern int fn_82B69290();


void fn_82AAAD30(uint param_1,ulonglong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = (param_2 & 0x3fffffff) * 4;
  lVar8 = (ulonglong)*(uint *)(param_3 + 0x40) + lVar1;
  lVar7 = (ulonglong)*(uint *)(param_3 + 0x50) + lVar1;
  lVar5 = (ulonglong)*(uint *)(param_3 + 0x70) + lVar1;
  lVar6 = (ulonglong)*(uint *)(param_3 + 0x60) + lVar1;
  lVar4 = (ulonglong)*(uint *)(param_3 + 0x20) + lVar1;
  lVar1 = (ulonglong)*(uint *)(param_3 + 0x30) + lVar1;
  fn_82B68FC8(lVar8,lVar7,lVar6,lVar5);
  if (param_5 != 0) {
    fn_82B68D70(lVar4,lVar1,lVar8,lVar7);
  }
  lVar2 = (longlong)((int)param_1 >> 4) + (ulonglong)((int)param_1 < 0 && (param_1 & 0xf) != 0) + -1
  ;
  lVar4 = lVar4 + 0x20;
  lVar1 = lVar1 + 0x20;
  lVar8 = lVar8 + 0x40;
  lVar7 = lVar7 + 0x40;
  iVar3 = 0;
  if (0 < lVar2) {
    do {
      fn_82B68FC8(lVar8,lVar7,lVar6 + 0x40,lVar5 + 0x40);
      if (param_5 != 0) {
        fn_82B69290(lVar4,lVar1,lVar8 + -0x20,lVar7 + -0x20);
      }
      if ((param_4 != 0) && (param_5 != 0)) {
        fn_82B68CF0(lVar6 + 0x20,lVar5 + 0x20);
      }
      iVar3 = iVar3 + 1;
      lVar8 = lVar8 + 0x40;
      lVar7 = lVar7 + 0x40;
      lVar4 = lVar4 + 0x40;
      lVar1 = lVar1 + 0x40;
      lVar5 = lVar5 + 0x40;
      lVar6 = lVar6 + 0x40;
    } while (iVar3 < (int)lVar2);
  }
  if (param_5 != 0) {
    fn_82B68D70(lVar4,lVar1,lVar8 + -0x20,lVar7 + -0x20);
  }
  return;
}

