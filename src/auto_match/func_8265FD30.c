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
extern int fn_822462B0();
extern int fn_8265DDA0();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


uint fn_8265FD30(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iStack00000014;
  uint uStack0000001c;
  uint uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  if (*(uint *)(param_1 + 0x10) < param_2) {
    fn_82663F28(param_1);
  }
  uVar1 = uStack0000002c;
  if (*(int *)(iStack00000014 + 0x10) - uStack0000001c < uStack00000024) {
    uStack00000024 = *(int *)(iStack00000014 + 0x10) - uStack0000001c;
  }
  if (uStack00000024 < uStack00000034) {
    uStack_2c = uStack00000024;
  }
  else {
    uStack_2c = uStack00000034;
  }
  lVar2 = fn_8265DDA0(iStack00000014);
  uStack_28 = fn_822462B0(lVar2 + (ulonglong)uStack0000001c,uVar1,uStack_2c);
  if (uStack_28 == 0) {
    if (uStack00000024 < uStack00000034) {
      uStack_24 = 0xffffffff;
    }
    else {
      uStack_24 = (uint)LZCOUNT(uStack00000034 - uStack00000024) >> 5 ^ 1;
    }
    uStack_28 = uStack_24;
  }
  return uStack_28;
}

