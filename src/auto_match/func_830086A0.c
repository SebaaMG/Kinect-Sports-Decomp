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
extern int fn_82A1DDC0();
extern int fn_82F64CE0();
extern int fn_82FA5060();
extern int fn_83008488();
extern unsigned int lbl_831BC768;


void fn_830086A0(int param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *(undefined8 *)(param_1 + 0x20) = param_5;
  fn_83008488();
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((param_4 & 0xffffffff) != 0) {
    lVar1 = fn_82F64CE0(param_4);
    lVar1 = (lVar1 + 1U & 0x7fffffff) << 1;
    uVar2 = fn_82FA5060(lbl_831BC768,lVar1);
    *(int *)(param_1 + 0x18) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82A1DDC0(uVar2,param_4,lVar1);
    }
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 2;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x1000000;
  return;
}

