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
extern int fn_829EF778();


undefined8 fn_829F12C8(int param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  if ((param_1 == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x280);
    if (uVar3 == 0) {
      uVar3 = 0;
      do {
        uVar1 = fn_829EF778(param_1,param_2);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 0xa0;
      } while (uVar3 < 2);
    }
    else {
      lVar2 = (ulonglong)uVar3 - 1;
      uVar1 = fn_829EF778(param_1,(lVar2 - (((ulonglong)uVar3 - 2) + (ulonglong)(lVar2 == 0)))
                                        * 0xa0 + param_2);
    }
  }
  return uVar1;
}

