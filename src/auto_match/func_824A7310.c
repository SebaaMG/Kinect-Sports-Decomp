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
extern int fn_824A74A0();
extern int fn_824A7540();
extern unsigned int lbl_821CC160;


undefined8 fn_824A7310(int param_1)

{
  float fVar1;
  int iVar3;
  undefined8 uVar2;
  float *pfVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar5 + 0x14) == 0) {
    pfVar4 = (float *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar5 + 0x14) + -1;
    if ((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 0xc)) / 0xa0 <= iVar3) {
      iVar3 = iVar3 - (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0xa0;
    }
    pfVar4 = (float *)(iVar3 * 0xa0 + *(int *)(iVar5 + 0xc));
  }
  if (((pfVar4 == (float *)0x0) || (iVar3 = fn_824A74A0(param_1), iVar3 == 0)) ||
     (iVar3 = fn_824A7540(param_1), iVar3 != 0)) {
    uVar2 = 0;
    fVar1 = lbl_821CC160;
  }
  else {
    uVar2 = 1;
    fVar1 = *pfVar4 + *(float *)(iVar5 + 0x24);
  }
  *(float *)(iVar5 + 0x24) = fVar1;
  return uVar2;
}

