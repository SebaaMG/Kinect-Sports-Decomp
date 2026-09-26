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
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268BA10(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar7;
  longlong lVar6;
  ulonglong uVar8;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = *param_1 & 3;
  uVar8 = 0;
  if ((*param_1 & 3) == 0) {
    uVar8 = (ulonglong)lbl_831E7E64;
  }
  else if (uVar1 == 1) {
    uVar8 = fn_8267BF50(param_1);
  }
  else if (uVar1 < 3) {
    uVar8 = (ulonglong)param_1[1];
  }
  uVar1 = *param_2;
  uVar5 = 0;
  uVar2 = *param_1;
  uVar3 = (ulonglong)uVar1 & 0xfffffffc;
  if ((uVar1 & 3) == 0) {
    uVar5 = (ulonglong)lbl_831E7E64;
  }
  else if ((uVar1 & 3) == 1) {
    uVar5 = fn_8267BF50(param_2);
  }
  else if ((uVar1 & 3) < 3) {
    uVar5 = (ulonglong)param_2[1];
  }
  if ((uVar8 & 0xffffffff) == (uVar5 & 0xffffffff)) {
    *param_1 = *param_1 & 3 | (uint)(uint *)uVar3;
    do {
      puVar7 = (uint *)(uVar3 + 4);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,uVar3 + 4);
        *puVar7 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar1 = *(uint *)uVar3;
    uVar4 = uVar1 & 0x7fffffff;
    lVar6 = fn_8268B368(param_1,uVar8,uVar4,uVar1 & 0x80000000);
    fn_82F68CC0(lVar6 + 8,uVar3 + 8,uVar4);
    *param_1 = (uint)lVar6 | *param_1 & 3;
  }
  lVar6 = ((ulonglong)uVar2 & 0xfffffffc) + 4;
  do {
    puVar7 = (uint *)lVar6;
    uVar8 = (ulonglong)*puVar7;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
      *puVar7 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar8 == 1) {
    fn_8267BE38((ulonglong)uVar2 & 0xfffffffc);
  }
  return;
}

