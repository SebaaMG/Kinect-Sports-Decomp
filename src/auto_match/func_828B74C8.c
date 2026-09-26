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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822315A0();
extern int fn_828B7258();
extern unsigned int stack0x00000000;
extern unsigned int uStack_3c;


void fn_828B74C8(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  undefined4 uStack_3c;
  ulonglong uVar3;
  
  param_2 = param_2 - (int)param_1;
  uVar1 = param_2 >> 3;
  uVar4 = (longlong)(param_2 >> 4) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < (longlong)uVar4) {
    uVar3 = (uVar4 & 0x1fffffff) * 8 + param_1;
    do {
      uVar2 = uVar3 - 8;
      uStack_3c = 0;
      uVar4 = uVar4 - 1;
      if ((ZEXT48(&stack0x00000000) - 0x40 & 0xffffffff) != (uVar2 & 0xffffffff)) {
        uStack_3c = *(int *)((int)uVar3 + -4);
        *(undefined4 *)((int)uVar3 + -4) = 0;
        *(undefined4 *)uVar2 = 0;
      }
      fn_828B7258(param_1,uVar4,uVar1,ZEXT48(&stack0x00000000) - 0x40,param_3);
      if (uStack_3c != 0) {
        fn_822315A0();
      }
      uVar3 = uVar2;
    } while (0 < (int)uVar4);
  }
  return;
}

