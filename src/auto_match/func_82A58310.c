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


ulonglong fn_82A58310(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
                       int param_7,longlong param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  if (param_6 < 3) {
    uVar1 = 1;
    if (param_1 != 1) {
      uVar1 = 0x20;
    }
    if (param_2 != 0) {
      uVar1 = uVar1 | 2;
    }
    if (param_3 != 0) {
      uVar3 = 0;
      uVar4 = param_4;
      if (param_5 == 0) {
        while (1 < uVar4) {
          uVar3 = uVar3 + 1;
          uVar4 = param_4 >> (uVar3 & 0x3f);
        }
        return ((ulonglong)(uVar3 + 0xfffd) & 0x1fff) << 3 | uVar1 | 4;
      }
      while (1 < uVar4) {
        uVar3 = uVar3 + 1;
        uVar4 = param_4 >> (uVar3 & 0x3f);
      }
      return ((ulonglong)(uVar3 + 0xffff) & 0x1fff) << 3 | uVar1 | 4;
    }
  }
  else if (param_6 == 3) {
    uVar2 = 0;
    if ((param_7 == 0) || (in_stack_0000005c != 100)) {
      if (param_8 == 0) {
        uVar2 = 0x40;
      }
      if (in_stack_00000054 != 0) {
        uVar2 = uVar2 | 0x80;
      }
    }
    else {
      uVar2 = 1;
    }
    uVar4 = 0;
    uVar3 = param_4;
    while (1 < uVar3) {
      uVar4 = uVar4 + 1;
      uVar3 = param_4 >> (uVar4 & 0x3f);
    }
    uVar1 = ((ulonglong)uVar4 & 0x1fff) << 3 | uVar2;
    if ((uVar2 & 1) != 0) {
      return uVar1 | 0x100;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

