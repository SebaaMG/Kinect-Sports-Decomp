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
extern int fn_8268DA20();
extern unsigned int lbl_831E9284;
extern unsigned int lbl_831E9288;


void fn_8268DAB0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fn_8268DA20(0xffffffff831e7e80,param_1);
  uVar3 = (undefined4)param_1;
  uVar2 = uVar3;
  if (lbl_831E9288 != 0) {
    puVar1 = (undefined4 *)(lbl_831E9288 + 0x14);
    lbl_831E9288 = uVar3;
    *puVar1 = uVar3;
    uVar3 = lbl_831E9284;
    uVar2 = lbl_831E9288;
  }
  lbl_831E9288 = uVar2;
  lbl_831E9284 = uVar3;
  return;
}

