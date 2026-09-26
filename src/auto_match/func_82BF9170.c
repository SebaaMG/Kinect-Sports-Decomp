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
extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD1E;
extern unsigned int lbl_8322FD2F;


void fn_82BF9170(uint param_1)

{
  ushort uVar1;
  short sVar2;
  
  if (param_1 < lbl_8322FD1E) {
    lbl_8322FD1E = (ushort)param_1;
  }
  sVar2 = 0;
  while (param_1 != 0xfffe) {
    sVar2 = sVar2 + 1;
    uVar1 = (&lbl_8322BCF8)[param_1];
    (&lbl_8322BCF8)[param_1] = 0xffff;
    param_1 = (uint)uVar1;
  }
  lbl_8322FD2F = 1;
  lbl_8322FD1C = lbl_8322FD1C + sVar2;
  return;
}

