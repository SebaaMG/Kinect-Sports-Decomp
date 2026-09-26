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
extern int fn_8268B368();
extern int fn_826BD598();
extern int fn_826BD620();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268B508(uint *param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = (ulonglong)*param_1 & 0xfffffffc;
    uVar6 = (ulonglong)*(uint *)uVar2 & 0x7fffffff;
    lVar3 = fn_826BD598(param_2,param_3);
    uVar4 = 0;
    uVar1 = *param_1 & 3;
    if ((*param_1 & 3) == 0) {
      uVar4 = (ulonglong)lbl_831E7E64;
    }
    else if (uVar1 == 1) {
      uVar4 = fn_8267BF50(param_1,0);
    }
    else if (uVar1 < 3) {
      uVar4 = (ulonglong)param_1[1];
    }
    lVar3 = fn_8268B368(param_1,uVar4,lVar3 + uVar6,0);
    fn_82F68CC0(lVar3 + 8,uVar2 + 8,uVar6);
    fn_826BD620(lVar3 + uVar6 + 8,param_2,param_3);
    *param_1 = (uint)lVar3 | *param_1 & 3;
    do {
      puVar5 = (uint *)(uVar2 + 4);
      uVar6 = (ulonglong)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,uVar2 + 4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar6 == 1) {
      fn_8267BE38(uVar2);
    }
  }
  return;
}

