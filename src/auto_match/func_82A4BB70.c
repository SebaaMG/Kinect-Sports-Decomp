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
extern int fn_82A3FEE0();
extern int fn_82A4F4E0();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82A4BB70(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  uVar3 = param_1 + 0x10;
  do {
    puVar5 = (uint *)(param_1 + 0x14);
    uVar4 = (ulonglong)*puVar5 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar4,0,param_1 + 0x14);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((uVar4 & 0xffffffff) == 0) {
    if ((uVar3 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*(int *)uVar3 + 0xc))(uVar3,0);
    }
    fn_82A4F4E0(uVar2);
    fn_82A3FEE0(0xffffffff83219d50);
  }
  return uVar4;
}

