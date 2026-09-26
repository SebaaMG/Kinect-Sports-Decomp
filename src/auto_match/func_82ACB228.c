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
extern unsigned int *auStack_30;
extern int fn_82ACAE18();
extern int fn_82ACAF10();


ulonglong fn_82ACB228(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint auStack_30 [12];
  
  uVar2 = (param_2 & 0x3fffffff) << 2;
  while( true ) {
    if ((int)param_4 < 1) {
      uVar2 = fn_82ACAF10((uint *)(param_1 + 4),uVar2 + 3,auStack_30);
    }
    else {
      uVar2 = fn_82ACAE18();
    }
    if ((uint)uVar2 == 0xffffffff) {
      return 0xffffffffffffffff;
    }
    if ((param_3 & 0xffffffff) == 1) break;
    uVar3 = (ulonglong)auStack_30[0];
    if ((param_3 & 0xffffffff) <=
        (((0x4a2932934dcU >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f) & 7)) {
      uVar3 = ~uVar3;
      goto LAB_82acb300;
    }
    puVar1 = *(uint **)(param_1 + 4);
    uVar2 = uVar2 + param_4 & 0xfffffffc;
    if ((~(uint)puVar1 & 1) == 0) {
      uVar3 = 0x1f;
    }
    else {
      uVar3 = ((ulonglong)*puVar1 & 0x7ffffff) * 0x20 - 1;
    }
    if ((uVar3 & 0xffffffff) < (uVar2 + param_3 & 0xffffffff)) {
      return 0xffffffffffffffff;
    }
  }
  uVar3 = (ulonglong)(uint)(1 << ((uint)uVar2 & 3));
LAB_82acb300:
  return (uVar2 & 0x3ffffffc) << 2 | uVar3 & 0xffffffff0000000f;
}

