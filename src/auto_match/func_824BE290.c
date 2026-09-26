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
extern int fn_8245A5C8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_824BE290(int param_1)

{
  int iVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 0x54c) == 0) {
    if (*(int *)(param_1 + 0xf4) == *(int *)(param_1 + 0xf8)) {
      dVar2 = (double)lbl_821CA460;
    }
    else {
      dVar2 = (double)(*(float *)(param_1 + 0xdc) / *(float *)(*(int *)(param_1 + 0xf8) + -4));
    }
  }
  else {
    iVar1 = fn_8245A5C8();
    if ((*(int *)(iVar1 + 0x80068) == 0) || (*(ushort *)(iVar1 + 0x26) == 0)) {
      dVar2 = (double)lbl_821CC160;
    }
    else {
      dVar2 = (double)((float)*(ushort *)(iVar1 + 0x24) / (float)*(ushort *)(iVar1 + 0x26));
    }
  }
  return dVar2;
}

