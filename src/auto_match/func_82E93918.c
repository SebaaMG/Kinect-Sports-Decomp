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
extern int fn_82F004D8();
extern unsigned int lbl_8215F730;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E93918(int param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x7824);
  iVar2 = *(int *)(param_1 + 0x7820);
  param_5 = (iVar2 - (int)(((double)(longlong)param_4 * lbl_8215F730) / (double)(longlong)param_2))
            + param_5;
  iVar3 = param_5 + 9;
  *(int *)(param_1 + 0x7820) = iVar3;
  if (iVar3 == iVar2) {
    *(int *)(param_1 + 0x7820) = param_5 + 10;
  }
  iVar3 = *(int *)(param_1 + 0x7820);
  if (8 < iVar3) {
    iVar3 = 8;
  }
  iVar4 = iVar3 + 2;
  *(int *)(param_1 + 0x7820) = iVar3;
  *(int *)(param_1 + 0x7824) = iVar4;
  if (8 < iVar4) {
    iVar4 = 8;
  }
  *(int *)(param_1 + 0x7824) = iVar4;
  *(int *)(param_1 + 0x2a0) = (*(int *)(param_1 + 0x2a0) - iVar3) + iVar2;
  if ((iVar3 != iVar2) || (iVar4 != iVar1)) {
    fn_82F004D8();
  }
  return;
}

