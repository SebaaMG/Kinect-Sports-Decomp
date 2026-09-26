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
extern int fn_82FA5190();
extern int fn_83032CF8();
extern unsigned int lbl_831BC768;
extern U64 storeWordConditionalIndexed();


void fn_83032D88(ulonglong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar4 = (uint *)(param_1 + 0x10);
    lVar3 = (ulonglong)*puVar4 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(lVar3,0,param_1 + 0x10);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)lVar3 == 0) {
    fn_83032CF8(param_1);
    uVar2 = lbl_831BC768;
    if ((param_1 & 0xffffffff) != 0) {
      (**(code **)*(undefined4 *)param_1)(param_1,0);
      fn_82FA5190(uVar2,param_1);
    }
  }
  return;
}

