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
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268ACE8();
extern int fn_8268B368();
extern int fn_826BD7D0();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268BD50(uint *param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  char in_RESERVE;
  byte in_cr0;
  
  uVar4 = (ulonglong)*param_1 & 0xfffffffc;
  uVar1 = *(uint *)uVar4;
  uVar5 = fn_8268ACE8();
  if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    if ((uVar5 & 0xffffffff) < (param_2 + param_3 & 0xffffffff)) {
      param_3 = uVar5 - param_2;
    }
    lVar6 = fn_826BD7D0(param_2,uVar4 + 8,0xffffffffffffffff);
    lVar7 = fn_826BD7D0(param_3,lVar6 + uVar4 + 8,0xffffffffffffffff);
    uVar2 = *(uint *)uVar4;
    uVar3 = *param_1 & 3;
    uVar5 = 0;
    if ((*param_1 & 3) == 0) {
      uVar5 = (ulonglong)lbl_831E7E64;
    }
    else if (uVar3 == 1) {
      uVar5 = fn_8267BF50(param_1,0);
    }
    else if (uVar3 < 3) {
      uVar5 = (ulonglong)param_1[1];
    }
    uVar3 = *param_1;
    lVar10 = ((ulonglong)uVar1 & 0x7fffffff) - lVar7;
    lVar8 = fn_8268B368(param_1,uVar5,lVar10,uVar2 & 0x80000000);
    fn_82F68CC0(lVar8 + 8,uVar4 + 8,lVar6);
    fn_82F68CC0(lVar8 + lVar6 + 8,(ulonglong)uVar3 + lVar7 + lVar6 + 8,lVar10 - lVar6);
    *param_1 = (uint)lVar8 | *param_1 & 3;
    do {
      puVar9 = (uint *)(uVar4 + 4);
      uVar5 = (ulonglong)*puVar9;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,uVar4 + 4);
        *puVar9 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38(uVar4);
    }
  }
  return;
}

