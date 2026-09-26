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
extern int fn_8267BF50();
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_8268C2D0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  
  uVar3 = (ulonglong)*param_2 & 0xfffffffc;
  uVar4 = fn_8267BF50();
  uVar5 = 0;
  uVar1 = *param_2 & 3;
  if ((*param_2 & 3) == 0) {
    uVar5 = (ulonglong)lbl_831E7E64;
  }
  else if (uVar1 == 1) {
    uVar5 = fn_8267BF50(param_2);
  }
  else if (uVar1 < 3) {
    uVar5 = (ulonglong)param_2[1];
  }
  puVar2 = (uint *)uVar3;
  if ((uVar5 & 0xffffffff) == (uVar4 & 0xffffffff)) {
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
    uVar1 = *puVar2 & 0x7fffffff;
    lVar6 = fn_8268B368(param_1,uVar4,uVar1,*puVar2 & 0x80000000);
    fn_82F68CC0(lVar6 + 8,uVar3 + 8,uVar1);
    puVar2 = (uint *)lVar6;
  }
  *param_1 = (uint)puVar2 | 1;
  return;
}

