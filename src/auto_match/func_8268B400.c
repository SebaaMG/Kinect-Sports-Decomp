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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_826BD398();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268B400(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_40 [2];
  undefined1 auStack_38 [56];
  
  uVar2 = (ulonglong)*param_1 & 0xfffffffc;
  auStack_40[0] = 0;
  uVar6 = (ulonglong)*(uint *)uVar2 & 0x7fffffff;
  fn_826BD398(auStack_38,auStack_40,param_2);
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
  uVar7 = (ulonglong)auStack_40[0];
  lVar3 = fn_8268B368(param_1,uVar4,uVar7 + uVar6,0);
  fn_82F68CC0(lVar3 + 8,uVar2 + 8,uVar6);
  fn_82F68CC0(lVar3 + uVar6 + 8,auStack_38,uVar7);
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
  return;
}

