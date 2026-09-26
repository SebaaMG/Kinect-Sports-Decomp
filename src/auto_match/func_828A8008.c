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
extern int fn_8265C9E0();
extern int fn_828A7268();
extern int fn_828A7CE0();
extern int fn_82BA02A8();
extern U64 storeWordConditionalIndexed();


undefined4 * fn_828A8008(undefined4 *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  uVar2 = fn_8265C9E0(0x20);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828A7268(uVar2,param_3);
  }
  *param_1 = (int)uVar3;
  fn_828A7CE0(param_1 + 1,uVar3);
  fn_82BA02A8(param_1,uVar3,uVar3);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  uVar1 = *(uint *)(param_2 + 0xc);
  param_1[3] = uVar1;
  if ((ulonglong)uVar1 != 0) {
    lVar4 = (ulonglong)uVar1 + 4;
    do {
      puVar5 = (uint *)lVar4;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return param_1;
}

