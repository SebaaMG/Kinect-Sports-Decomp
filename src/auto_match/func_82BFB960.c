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
extern int fn_82BFB7E0();


longlong fn_82BFB960(uint *param_1,undefined4 *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_3) {
    uVar4 = 0x80;
    if ((param_3 & 0xffffffff) < 0x41) {
      uVar1 = 0x40;
      do {
        uVar4 = uVar1;
        uVar1 = uVar4 >> 1;
      } while ((param_3 & 0xffffffff) <= uVar4 >> 1);
    }
    uVar3 = 8;
    if (param_1 != (uint *)0x0) {
      uVar3 = *param_1;
    }
    if (uVar4 <= uVar3) {
      uVar4 = 1;
    }
    if ((1 < (int)(uVar4 + param_3)) && ((int)uVar4 != 0)) {
      lVar2 = fn_82BFB7E0(param_1,uVar4 + param_3 + -1,param_4);
      *param_2 = (int)lVar2;
      return (uVar4 - lVar2 & uVar4 - 1) + lVar2;
    }
  }
  *param_2 = 0;
  return 0;
}

