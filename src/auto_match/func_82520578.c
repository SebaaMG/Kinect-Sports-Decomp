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
extern int fn_8251F468();
extern int fn_8265BF48();
extern unsigned int lbl_83276741;
extern U64 storeWordConditionalIndexed();


void fn_82520578(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 auStack_20 [2];
  
  lVar3 = param_1 + 4;
  do {
    puVar4 = (uint *)lVar3;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)*puVar4 + 1,0,lVar3);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *(undefined4 *)((int)param_1 + 8) = 1;
  fn_8251F468(0xffffffff832961d0,param_1 + 0x10,2,0,0xffffffff82520540,param_1,0,0);
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)*puVar4 + 1,0,lVar3);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  fn_8251F468(0xffffffff832961d8,0,2,0,0xffffffff82520360,param_1,0,0);
  auStack_20[0] = fn_8265BF48(0xffffffff821c1318,0);
  bVar1 = lbl_83276741 == '\0';
  if (bVar1) {
    lbl_83276741 = '\x01';
  }
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)*puVar4 + 1,0,lVar3);
      *puVar4 = uVar2;
      bVar1 = true;
    }
  } while (!bVar1);
  fn_8251F468(auStack_20,param_1 + 0xc,2,0,0xffffffff82520420,param_1,0,0);
  return;
}

