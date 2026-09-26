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


void fn_82814480(int param_1,code *param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x20) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x20) + 0x10) & 0x4000) != 0)) {
    (*param_2)();
  }
  if (((*(uint *)(param_1 + 0x10) & 0x100) != 0) &&
     (*(char *)(*(int *)(param_1 + 0x1c) + 0x51) != '\0')) {
    uVar1 = 0;
    do {
      if (*(int *)(uVar1 * 0x21 + *(int *)(param_1 + 0x30) + 0xd) != 0) {
        (*param_2)();
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < *(byte *)(*(int *)(param_1 + 0x1c) + 0x51));
  }
  if ((*(uint *)(param_1 + 0x10) & 0x20) != 0) {
    (*param_2)(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x5c));
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x70) != 0) {
      (*param_2)();
    }
  }
  if ((*(uint *)(param_1 + 0x10) & 0x10) != 0) {
    (*param_2)(param_1);
  }
  return;
}

