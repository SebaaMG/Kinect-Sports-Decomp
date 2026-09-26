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


void fn_82DB4A10(double param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  if (*(int *)(iVar1 + 0x34) < 1) {
    return;
  }
  iVar4 = 0;
  do {
    iVar3 = iVar3 + 1;
    pfVar2 = (float *)(*(int *)(iVar1 + 0x30) + iVar4);
    iVar4 = iVar4 + 0x70;
    *pfVar2 = (float)((double)*pfVar2 + param_1);
  } while (iVar3 < *(int *)(iVar1 + 0x34));
  return;
}

