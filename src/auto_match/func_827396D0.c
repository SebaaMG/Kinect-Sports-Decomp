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
extern int fn_82739680();


void fn_827396D0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x50) = iVar3;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x5c)
  ;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((86399999 < iVar3) || (iVar3 < 0)) {
    iVar4 = (iVar3 + 864000000) / 86400000 + -10;
    iVar5 = *(int *)(param_1 + 0x40) + iVar4;
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x50) = iVar3 + iVar4 * -86400000;
    uVar1 = fn_82739680(iVar2);
    if (iVar5 < (int)(((uVar1 & 0xff) == 0 ^ 1) + 0x16d)) {
      if (-1 < iVar5) {
        return;
      }
      *(int *)(param_1 + 0x54) = iVar2 + -1;
      uVar1 = fn_82739680();
      iVar5 = ((uint)LZCOUNT(uVar1 & 0xff) >> 5 ^ 1) + 0x16d + iVar5;
    }
    else {
      *(int *)(param_1 + 0x54) = iVar2 + 1;
      iVar5 = iVar5 - (((uint)LZCOUNT(uVar1 & 0xff) >> 5 ^ 1) + 0x16d);
    }
    *(int *)(param_1 + 0x58) = iVar5;
  }
  return;
}

