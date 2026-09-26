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
extern int fn_822750C8();
extern int fn_823AB478();
extern int fn_82A1C0E8();


longlong fn_824E2870(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = fn_823AB478();
  }
  uVar1 = fn_822750C8();
  lVar2 = fn_82A1C0E8(uVar1,uVar3,param_2,param_3,param_4,param_5,param_6);
  return (lVar2 + -5) - (lVar2 + -6 + (ulonglong)(lVar2 + -5 == 0));
}

