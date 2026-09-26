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
extern int fn_8305D680();
extern int fn_8305D6A0();
extern int fn_8305F670();


void fn_83067488(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  longlong lVar3;
  
  lVar3 = 0;
  iVar2 = fn_8305D680(param_2);
  if (0 < iVar2) {
    do {
      uVar1 = fn_8305D6A0(param_2,lVar3);
      fn_8305F670(param_1,uVar1);
      lVar3 = lVar3 + 1;
      iVar2 = fn_8305D680(param_2);
    } while ((int)lVar3 < iVar2);
  }
  return;
}

