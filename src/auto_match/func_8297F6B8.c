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


bool fn_8297F6B8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
LAB_8297f6d0:
  while( true ) {
    if (param_2 == 0) {
      return param_3 == 0;
    }
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 != 1) break;
    if (param_3 == 0) {
      return false;
    }
    if (*(int *)(param_3 + 4) != 1) break;
    iVar1 = fn_8297F6B8(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_3 + 8));
    if (iVar1 == 0) {
      return false;
    }
    param_2 = *(int *)(param_2 + 0xc);
    param_3 = *(int *)(param_3 + 0xc);
  }
  if ((param_3 != 0) && (iVar1 == *(int *)(param_3 + 4))) {
    if (iVar1 == 6) {
      param_3 = *(int *)(param_3 + 0x18);
      param_2 = *(int *)(param_2 + 0x18);
      goto LAB_8297f6d0;
    }
    if (iVar1 == 8) {
      if (*(int *)(param_2 + 0x14) == *(int *)(param_3 + 0x14)) {
        param_3 = *(int *)(param_3 + 0x10);
        param_2 = *(int *)(param_2 + 0x10);
        goto LAB_8297f6d0;
      }
    }
    else {
      if (iVar1 == 9) {
        if (*(int *)(param_2 + 0x10) != *(int *)(param_3 + 0x10)) {
          return false;
        }
        if (*(int *)(param_2 + 0x14) != *(int *)(param_3 + 0x14)) {
          return false;
        }
        iVar1 = fn_8297F6B8(param_1,*(undefined4 *)(param_2 + 0x18),
                              *(undefined4 *)(param_3 + 0x18));
        if (iVar1 == 0) {
          return false;
        }
        if (*(int *)(param_2 + 0x1c) != *(int *)(param_3 + 0x1c)) {
          return false;
        }
        if (*(int *)(param_2 + 0x20) != *(int *)(param_3 + 0x20)) {
          return false;
        }
        return true;
      }
      if (iVar1 == 0xb) {
        param_3 = *(int *)(param_3 + 0x30);
        param_2 = *(int *)(param_2 + 0x30);
        goto LAB_8297f6d0;
      }
    }
  }
  return false;
}

