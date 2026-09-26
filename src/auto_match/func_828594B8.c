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
extern unsigned int lbl_83211320;
extern unsigned int lbl_83211328;


void fn_828594B8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)lbl_83211328;
  fn_82F68CC0(uVar3 + 8,param_2,0xa8);
  iVar4 = 1;
  if (1 < lbl_83211320) {
    lVar1 = 0xd8;
    while( true ) {
      lVar2 = lVar1 + uVar3 + 8;
      fn_82F68CC0(lVar2,param_2,0xa8);
      fn_828611B8(lVar1 + uVar3 + 0xb0,param_1,0xf0,0xf0,lVar2);
      iVar4 = iVar4 + 1;
      lVar1 = lVar1 + 0xd8;
      if ((int)(uint)lbl_83211320 <= iVar4) break;
      uVar3 = (ulonglong)lbl_83211328;
    }
  }
  return;
}

