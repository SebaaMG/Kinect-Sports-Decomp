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
extern unsigned int lbl_83214448;
extern unsigned int *lbl_83214458;


void fn_83141510(void)

{
  int iVar1;
  
  if (lbl_83214458 != (int *)0x0) {
    iVar1 = (int)&lbl_83214448 + -(int)lbl_83214458;
    (**(code **)(*lbl_83214458 + 0xc))
              (lbl_83214458,iVar1 - (-(int)lbl_83214458 + -0x7cdebbb9 + (uint)(iVar1 == 0)));
    lbl_83214458 = (int *)0x0;
  }
  return;
}

