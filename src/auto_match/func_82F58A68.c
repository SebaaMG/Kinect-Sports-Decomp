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
extern unsigned int *auStack_20;
extern int fn_8265C9E0();
extern int fn_82F56810();
extern unsigned int lbl_832627F0;
extern unsigned int lbl_832627F4;


ulonglong fn_82F58A68(void)

{
  ulonglong uVar1;
  undefined1 auStack_20 [8];
  
  if ((lbl_832627F4 & 1) == 0) {
    lbl_832627F4 = lbl_832627F4 | 1;
    uVar1 = fn_8265C9E0(0x10);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      fn_82F56810(uVar1,auStack_20,auStack_20);
    }
    lbl_832627F0 = (uint)uVar1;
  }
  else {
    uVar1 = (ulonglong)lbl_832627F0;
  }
  return uVar1;
}

