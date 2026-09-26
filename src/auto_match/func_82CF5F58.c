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


int fn_82CF5F58(double param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = *(int *)(param_2 + 0x34);
  iVar5 = 0;
  if (2 < iVar3) {
    iVar4 = 0;
    do {
      iVar2 = iVar3 + iVar4 >> 1;
      iVar1 = *(int *)(iVar2 * 4 + *(int *)(param_2 + 0x30));
      iVar5 = iVar4;
      if (*(int *)(iVar1 + 0x54) == 2) break;
      iVar5 = iVar2;
      if (param_1 < *(double *)(iVar1 + 0x40)) {
        iVar5 = iVar4;
        iVar3 = iVar2;
      }
      iVar4 = iVar5;
    } while (2 < iVar3 - iVar5);
  }
  if (iVar5 < iVar3) {
    piVar6 = (int *)(*(int *)(param_2 + 0x30) + iVar5 * 4);
    while( true ) {
      iVar4 = *piVar6;
      if ((*(int *)(iVar4 + 0x54) != 2) &&
         (param_1 <= (double)*(float *)(param_4 * 4 + iVar4) + *(double *)(iVar4 + 0x40))) break;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
      if (iVar3 <= iVar5) {
        return 0;
      }
    }
    if (*(double *)(iVar4 + 0x40) <= param_1) {
      return iVar4;
    }
  }
  return 0;
}

