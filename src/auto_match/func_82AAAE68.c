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
extern int fn_82B68D38();
extern int fn_82B68DA8();
extern int fn_82B690E8();


void fn_82AAAE68(longlong param_1,ulonglong param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar1 = (uint *)(param_3 * 4 + param_4);
  lVar2 = (param_2 & 0x3fffffff) * 4;
  lVar5 = (ulonglong)*puVar1 + lVar2;
  lVar4 = (ulonglong)puVar1[1] + lVar2;
  lVar10 = (ulonglong)*(uint *)((param_3 + 2) * 4 + param_4) + lVar2;
  lVar9 = (ulonglong)*(uint *)((param_3 + 3) * 4 + param_4) + lVar2;
  lVar7 = (ulonglong)*(uint *)((param_3 + 4) * 4 + param_4) + lVar2;
  lVar2 = (ulonglong)*(uint *)((param_3 + 5) * 4 + param_4) + lVar2;
  if (param_7 != 0) {
    fn_82AA8FD0(lVar10,lVar9,lVar7,lVar2);
  }
  fn_82B68DA8(lVar10,lVar9,lVar7,lVar2);
  if (param_6 != 0) {
    fn_82B68D38(lVar5,lVar4,lVar10,lVar9);
  }
  lVar5 = lVar5 + 8;
  lVar4 = lVar4 + 8;
  lVar10 = lVar10 + 0x10;
  lVar9 = lVar9 + 0x10;
  iVar3 = 0;
  if (0 < param_1 + -4) {
    do {
      lVar8 = lVar7 + 0x10;
      lVar6 = lVar2 + 0x10;
      if (param_7 != 0) {
        fn_82AA8FD0(lVar10,lVar9,lVar8,lVar6);
      }
      fn_82B68DA8(lVar10,lVar9,lVar8,lVar6);
      if (param_6 != 0) {
        fn_82B690E8(lVar5,lVar4,lVar10 + -8,lVar9 + -8);
      }
      if ((param_5 != 0) && (param_6 != 0)) {
        fn_82B68CA8(lVar7 + 8,lVar2 + 8);
      }
      iVar3 = iVar3 + 4;
      lVar10 = lVar10 + 0x10;
      lVar9 = lVar9 + 0x10;
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + 0x10;
      lVar2 = lVar6;
      lVar7 = lVar8;
    } while (iVar3 < (int)(param_1 + -4));
  }
  if (param_6 != 0) {
    fn_82B68D38(lVar5,lVar4,lVar10 + -8,lVar9 + -8);
  }
  return;
}

