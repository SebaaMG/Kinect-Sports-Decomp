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
extern int fn_82275530();
extern int fn_822755F8();
extern int fn_82275698();
extern int fn_822757E0();


void fn_82275470(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((int)param_3 < 0x21) {
    fn_822755F8();
  }
  else {
    uVar2 = (int)param_3 + 1;
    uVar4 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    lVar3 = (uVar4 & 0x1fffffff) * 8 + param_1;
    iVar1 = fn_82275530(param_4);
    if (iVar1 < (int)uVar4) {
      fn_82275470(param_1,lVar3,uVar4,param_4);
      param_3 = param_3 - uVar4;
      fn_82275470(lVar3,param_2,param_3,param_4);
    }
    else {
      fn_82275698();
      param_3 = param_3 - uVar4;
      fn_82275698(lVar3,param_2,param_3,param_4);
    }
    fn_822757E0(param_1,lVar3,param_2,uVar4,param_3,param_4);
  }
  return;
}

