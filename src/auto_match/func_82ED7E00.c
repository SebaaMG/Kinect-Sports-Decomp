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
extern int fn_82F081B8();


void fn_82ED7E00(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,longlong param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x1e54) + param_4 * 0x114;
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    uVar1 = *(uint *)(param_1 + 0x2d0);
    lVar2 = param_3 - param_2;
    do {
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          fn_82F081B8(param_1,lVar3,param_5,param_6,param_7);
          uVar1 = *(uint *)(param_1 + 0x2d0);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x114;
          param_5 = param_5 + 0x60;
          param_6 = param_6 + 0x600;
          param_7 = param_7 + 0xc;
        } while (uVar4 < uVar1);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

