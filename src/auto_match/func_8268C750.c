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


undefined4 * fn_8268C750(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar4;
  longlong lVar3;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = *param_2;
  uVar2 = (ulonglong)uVar1 & 0xfffffffc;
  uVar4 = lbl_831E7E64;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 3) == 1) {
      uVar4 = fn_8267BF50(param_2);
    }
    else {
      uVar4 = 0;
      if ((uVar1 & 3) < 3) {
        uVar4 = param_2[1];
      }
    }
  }
  if (uVar4 == lbl_831E7E64) {
    *param_1 = (uint *)uVar2;
    do {
      puVar5 = (uint *)(uVar2 + 4);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,uVar2 + 4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar1 = *(uint *)uVar2;
    uVar4 = uVar1 & 0x7fffffff;
    lVar3 = fn_8268B368(param_1,lbl_831E7E64,uVar4,uVar1 & 0x80000000);
    fn_82F68CC0(lVar3 + 8,uVar2 + 8,uVar4);
    *param_1 = (int)lVar3;
  }
  return param_1;
}

