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
extern unsigned int lbl_821CC160;
extern int (*lbl_83276778)();


void fn_8236B4F0(double param_1,int param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_2 + 0x4b0);
  dVar2 = (double)lbl_821CC160;
  *(float *)(iVar1 + 0xd8) = (float)param_1;
  if ((param_1 == dVar2) && (lbl_83276778 != (code *)0x0)) {
    (*lbl_83276778)(0,0,1,0xffffffff821b6718,0xffffffff821b66a8,0x1dc);
  }
  *(undefined4 *)(iVar1 + 0xd4) = 1;
  return;
}

