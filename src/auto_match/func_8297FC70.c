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


longlong fn_8297FC70(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  while( true ) {
    while( true ) {
      if (param_2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 != 1) break;
      iVar2 = fn_8297FC70(param_1,*(undefined4 *)(param_2 + 8));
      if (iVar2 != 0) {
        return 1;
      }
      param_2 = *(int *)(param_2 + 0xc);
    }
    if (iVar2 == 0xf) {
      lVar3 = (ulonglong)*(uint *)(param_2 + 0x10) - 6;
      return lVar3 - (((ulonglong)*(uint *)(param_2 + 0x10) - 7) + (ulonglong)(lVar3 == 0));
    }
    if (iVar2 != 0xe) {
      return 0;
    }
    iVar2 = *(int *)(param_2 + 0x1c);
    if (0x1d < iVar2) break;
    if (iVar2 < 0x1c) {
      if (iVar2 < 0) {
        return 1;
      }
      if (1 < iVar2) {
        if (iVar2 < 0x1a) {
          return 1;
        }
        bVar1 = 0x1b < iVar2;
        goto LAB_8297fd28;
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
  }
  if (iVar2 < 0x1f) {
    return 1;
  }
  bVar1 = 0x20 < iVar2;
LAB_8297fd28:
  if (!bVar1) {
    return 0;
  }
  return 1;
}

