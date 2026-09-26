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
extern int fn_82F2ACF0();


void fn_82ED7D48(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x1e54) + param_4 * 0x114;
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    uVar2 = *(uint *)(param_1 + 0x2d0);
    do {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          if (((uVar4 & 0xffffffff) == 0) || (uVar1 = 1, param_2 == 0)) {
            uVar1 = 0;
          }
          fn_82F2ACF0(param_1,lVar3,param_5,param_6,uVar4 != 0,param_2 != 0,uVar1);
          uVar2 = *(uint *)(param_1 + 0x2d0);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x114;
          param_5 = param_5 + 0x60;
          param_6 = param_6 + 0x600;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
      }
      param_2 = param_2 + 1;
    } while ((param_2 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  return;
}

