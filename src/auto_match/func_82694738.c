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
extern int fn_8268B330();
extern int fn_8268B920();
extern int fn_82694610();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82694738(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_20 [2];
  
  fn_8268B330(auStack_20);
  fn_8268B920(auStack_20,param_2);
  uVar2 = fn_82694610(param_1,((ulonglong)auStack_20[0] & 0xfffffffc) + 8,
                        *(uint *)(auStack_20[0] & 0xfffffffc) & 0x7fffffff);
  lVar3 = ((ulonglong)auStack_20[0] & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar5 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return uVar2;
}

