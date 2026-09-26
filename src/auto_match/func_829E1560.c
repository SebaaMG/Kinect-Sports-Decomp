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
extern int fn_829E0980();
extern int fn_829E0C20();
extern int fn_82A1DDC0();


undefined8 fn_829E1560(longlong param_1,undefined8 param_2,ushort *param_3)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs62 [16];
  
  iVar2 = fn_829E0C20(param_2,*param_3);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = fn_829E0980(iVar2,0x598,0,6,param_2);
    if (-1 < (int)uVar1) {
      *param_3 = (ushort)((uint)*(undefined4 *)(iVar2 + 4) >> 0x11);
      altv207_13(in_vs32,in_vs62);
      altv300_27(in_vs32,in_vs43);
      altv300_29(in_vs43,in_vs41);
      fn_82A1DDC0(iVar2 + 0x18,param_1 + 0x10,700);
      fn_82A1DDC0(iVar2 + 0x2d4,param_1 + 0x2cc,700);
      fn_82A1DDC0(iVar2 + 0x590,param_1 + 0x588,1);
      fn_82A1DDC0(iVar2 + 0x594,param_1 + 0x58c,4);
      uVar1 = 0;
    }
  }
  return uVar1;
}

