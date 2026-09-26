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
extern int fn_82372F88();


undefined8 fn_82372DE8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  
  piVar3 = *(int **)(param_2 * 4 + **(int **)(param_1 + 8));
  piVar4 = *(int **)(((uint)LZCOUNT(param_2) >> 3 & 4) + **(int **)(param_1 + 8));
  uVar1 = (uint)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  uVar2 = (uint)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  if (*(int *)(param_1 + 0x204) == 0) {
    lVar5 = fn_82372F88();
    iVar6 = (int)(lVar5 + 1) - ((int)lVar5 + (uint)(lVar5 + 1 == 0));
  }
  else {
    iVar6 = *(int *)(param_1 + 0x658);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x260);
    if (uVar1 == *(int *)(iVar6 + 0x150) - 1U) {
      return 1;
    }
    if (((uVar2 < uVar1) && (*(int *)(iVar6 + 0x148) - 1U <= uVar1)) &&
       (*(int *)(iVar6 + 0x14c) - 1U <= uVar1 - uVar2)) {
      return 1;
    }
  }
  return 0;
}

