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
extern int fn_8281D460();
extern unsigned int lbl_821AAD20;


void fn_828625D0(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x28) + *(int *)(param_2 + 8);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_2 + 8)) = lbl_821AAD20;
  *(int *)(iVar4 + 4) = iVar4 + 0xc;
  iVar1 = 0;
  if (*(ushort *)(param_1 + 8) != 0xfffffffe) {
    lVar2 = 0;
    do {
      fn_8281D460((ulonglong)*(uint *)(iVar4 + 4) + lVar2);
      iVar3 = iVar3 + 1;
      iVar1 = *(ushort *)(param_1 + 8) + 2;
      lVar2 = lVar2 + 0x10;
    } while (iVar3 < iVar1);
  }
  *(short *)(iVar4 + 8) = (short)iVar1;
  return;
}

