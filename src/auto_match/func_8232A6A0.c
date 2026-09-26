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
extern unsigned int *auStack_58;
extern int fn_828B5580();
extern int fn_828B55B0();


void fn_8232A6A0(undefined8 param_1,int param_2)

{
  undefined8 in_r7;
  ulonglong uVar1;
  code *pcStack_60;
  undefined1 auStack_58 [88];
  
  uVar1 = *(ulonglong *)(param_2 + 8);
  fn_828B5580(auStack_58,in_r7);
  pcStack_60 = (code *)(uVar1 >> 0x20);
  (*pcStack_60)(param_1,(ulonglong)*(uint *)(param_2 + 0x10) + (uVar1 & 0xffffffff));
  fn_828B55B0(in_r7);
  return;
}

