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
extern unsigned int *auStack_20;
extern int fn_8267BE38();
extern int fn_8268C6A8();
extern int fn_827A7E00();
extern U64 storeWordConditionalIndexed();


undefined8 fn_827A7E68(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_20 [2];
  
  pcVar7 = param_3;
  if (param_4 == (char *)0xffffffff) {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    param_4 = pcVar7 + (-1 - (int)param_3);
  }
  fn_8268C6A8(auStack_20,param_3,param_4);
  uVar3 = fn_827A7E00(param_1,param_2,auStack_20);
  lVar4 = ((ulonglong)auStack_20[0] & 0xfffffffc) + 4;
  do {
    puVar5 = (uint *)lVar4;
    uVar6 = (ulonglong)*puVar5;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
      *puVar5 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar6 == 1) {
    fn_8267BE38();
  }
  return uVar3;
}

