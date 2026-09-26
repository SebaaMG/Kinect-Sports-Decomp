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
extern unsigned int lbl_83156A74;
extern unsigned int lbl_83156A94;
extern unsigned int lbl_83156A98;


void fn_8278FAF0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  
  lbl_83156A98 = lbl_83156A98 + 1 & 7;
  uVar1 = (ulonglong)(uint)(&lbl_83156A74)[lbl_83156A98] * 0x2ab5245e + (ulonglong)lbl_83156A94;
  lbl_83156A94 = (uint)(uVar1 >> 0x20);
  uVar2 = (uVar1 & 0xffffffff) + (uVar1 >> 0x20);
  iVar3 = (int)uVar2;
  if ((uVar2 & 0xffffffff) < uVar1 >> 0x20) {
    lbl_83156A94 = lbl_83156A94 + 1;
    iVar3 = iVar3 + 1;
  }
  (&lbl_83156A74)[lbl_83156A98] = -2 - iVar3;
  return;
}

