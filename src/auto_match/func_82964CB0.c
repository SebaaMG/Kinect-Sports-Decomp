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


undefined8 fn_82964CB0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = *(int *)(param_1 * 4 + *(int *)(param_3 + 0x14));
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_3 + 0x14));
  if (*(uint *)(iVar2 + 4) <= *(uint *)(iVar1 + 4)) {
    if (*(uint *)(iVar2 + 4) < *(uint *)(iVar1 + 4)) {
      return 1;
    }
    if ((*(uint *)(iVar1 + 0x3c) & 0x80000) == 0) {
      dVar4 = *(double *)(iVar1 + 0x20);
    }
    else {
      dVar4 = -*(double *)(iVar1 + 0x20);
    }
    dVar3 = *(double *)(iVar2 + 0x20);
    if ((*(uint *)(iVar2 + 0x3c) & 0x80000) != 0) {
      dVar3 = -dVar3;
    }
    if (dVar3 <= dVar4) {
      if (dVar3 < dVar4) {
        return 1;
      }
      return 0;
    }
  }
  return 0xffffffffffffffff;
}

