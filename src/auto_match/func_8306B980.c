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
extern int fn_82810380();
extern int fn_8281D3B0();


ulonglong fn_8306B980(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = 1;
  if ((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) {
    lVar3 = 6;
    uVar4 = param_2;
    do {
      uVar1 = fn_82810380(param_1,uVar4,(param_3 - param_2) + uVar4);
      lVar3 = lVar3 + -1;
      uVar2 = uVar1 & uVar2;
      uVar4 = uVar4 + 0xc;
    } while (lVar3 != 0);
    lVar5 = param_2 + 0x48;
    lVar3 = 6;
    do {
      uVar4 = fn_8281D3B0(param_1,lVar5,lVar5 + (param_3 - param_2));
      lVar3 = lVar3 + -1;
      uVar2 = uVar4 & uVar2;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 != 0);
  }
  return uVar2;
}

