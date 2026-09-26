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
extern int fn_82AA8FD0();
extern int fn_82B68CA8();
extern int fn_82B68CF0();
extern int fn_82B68DA8();
extern int fn_82B68FC8();


void fn_82AAABA0(ulonglong param_1,ulonglong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (param_2 & 0x3fffffff) * 4;
  lVar5 = (ulonglong)*(uint *)(param_3 + 0x60) + lVar7;
  lVar6 = (ulonglong)*(uint *)(param_3 + 0x50) + lVar7;
  lVar4 = (ulonglong)*(uint *)(param_3 + 0x70) + lVar7;
  lVar3 = (ulonglong)*(uint *)(param_3 + 0x40) + lVar7;
  fn_82B68FC8(lVar3,lVar6,lVar5,lVar4);
  lVar2 = (longlong)((int)param_1 >> 4) + (ulonglong)((int)param_1 < 0 && (param_1 & 0xf) != 0) + -1
  ;
  iVar1 = 0;
  if (0 < lVar2) {
    do {
      lVar5 = lVar5 + 0x40;
      lVar4 = lVar4 + 0x40;
      fn_82B68FC8(lVar3 + 0x40,lVar6 + 0x40,lVar5,lVar4);
      if (param_4 != 0) {
        fn_82B68CF0(lVar3 + 0x20,lVar6 + 0x20);
      }
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 0x40;
      lVar6 = lVar6 + 0x40;
    } while (iVar1 < (int)lVar2);
  }
  lVar3 = (ulonglong)*(uint *)(param_3 + 0x40) + lVar7;
  lVar2 = (ulonglong)*(uint *)(param_3 + 0x48) + lVar7;
  lVar6 = (ulonglong)*(uint *)(param_3 + 0x44) + lVar7;
  lVar7 = (ulonglong)*(uint *)(param_3 + 0x4c) + lVar7;
  if (param_5 != 0) {
    fn_82AA8FD0(lVar3,lVar6,lVar2,lVar7);
  }
  fn_82B68DA8(lVar3,lVar6,lVar2,lVar7);
  iVar1 = 0;
  if (0 < (longlong)(param_1 - 4)) {
    do {
      lVar5 = lVar6 + 0x10;
      lVar7 = lVar7 + 0x10;
      lVar4 = lVar3 + 0x10;
      lVar2 = lVar2 + 0x10;
      if (param_5 != 0) {
        fn_82AA8FD0(lVar4,lVar5,lVar2,lVar7);
      }
      fn_82B68DA8(lVar4,lVar5,lVar2,lVar7);
      if (param_4 != 0) {
        fn_82B68CA8(lVar3 + 8,lVar6 + 8);
      }
      iVar1 = iVar1 + 4;
      lVar3 = lVar4;
      lVar6 = lVar5;
    } while (iVar1 < (int)(param_1 - 4));
  }
  return;
}

