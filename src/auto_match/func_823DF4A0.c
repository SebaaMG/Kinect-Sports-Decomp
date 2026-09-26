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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern int (*lbl_83276778)();


void fn_823DF4A0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = lbl_821CC160;
  fVar2 = lbl_821CA460;
  if (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x4b0) + 0xd4) != 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x4b0);
  *(float *)(iVar1 + 0xd8) = lbl_821CA460;
  if ((fVar2 == fVar3) && (lbl_83276778 != (code *)0x0)) {
    (*lbl_83276778)(0,0,1,0xffffffff821b6718,0xffffffff821b66a8,0x1dc);
  }
  *(undefined4 *)(iVar1 + 0xd4) = 1;
  return;
}

