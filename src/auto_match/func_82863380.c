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
extern int fn_828611B8();
extern int fn_82F68CC0();
extern unsigned int uRam832116a8;
extern unsigned int uRam832116b0;


void fn_82863380(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (uRam832116a8 != 0) {
    lVar3 = 0;
    do {
      uVar1 = (ulonglong)uRam832116b0;
      lVar2 = lVar3 + uVar1 + 4;
      fn_82F68CC0(lVar2,param_2,0xa8);
      fn_828611B8(lVar3 + uVar1 + 0xac,param_1,0xf0,0xf0,lVar2);
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0xd4;
    } while (iVar4 < (int)(uint)uRam832116a8);
  }
  return;
}

