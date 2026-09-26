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


void fn_8268BC50(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar7 = 0;
  uVar5 = (ulonglong)uVar1 & 0xfffffffc;
  uVar3 = *(uint *)uVar5;
  uVar4 = *(uint *)(uVar2 & 0xfffffffc);
  uVar10 = (ulonglong)uVar3 & 0x7fffffff;
  uVar6 = (ulonglong)uVar4 & 0x7fffffff;
  if ((uVar1 & 3) == 0) {
    uVar7 = (ulonglong)lbl_831E7E64;
  }
  else if ((uVar1 & 3) == 1) {
    uVar7 = fn_8267BF50(param_1);
  }
  else if ((uVar1 & 3) < 3) {
    uVar7 = (ulonglong)param_1[1];
  }
  lVar8 = fn_8268B368(param_1,uVar7,uVar6 + uVar10,uVar4 & uVar3 & 0x80000000);
  fn_82F68CC0(lVar8 + 8,uVar5 + 8,uVar10);
  fn_82F68CC0(lVar8 + uVar10 + 8,(uint *)(uVar2 & 0xfffffffc) + 2,uVar6);
  *param_1 = (uint)lVar8 | *param_1 & 3;
  do {
    puVar9 = (uint *)(uVar5 + 4);
    uVar10 = (ulonglong)*puVar9;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar10 - 1,0,uVar5 + 4);
      *puVar9 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar10 == 1) {
    fn_8267BE38(uVar5);
  }
  return;
}

