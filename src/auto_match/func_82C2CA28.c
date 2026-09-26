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


void fn_82C2CA28(int param_1,short param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1bc) != 0) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0xfc) >> (*(uint *)(param_1 + 0x1c8) & 0x3f);
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x100) >> (*(uint *)(param_1 + 0x1c8) & 0x3f);
    iVar1 = (int)param_2;
    if (*(int *)(param_1 + 0x10c) < (int)param_2) {
      iVar1 = *(int *)(param_1 + 0x10c);
    }
    *(int *)(param_1 + 0x1d8) = iVar1;
    return;
  }
  if (*(int *)(param_1 + 0x1c0) != 0) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0xfc) << (*(uint *)(param_1 + 0x1c8) & 0x3f);
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x100) << (*(uint *)(param_1 + 0x1c8) & 0x3f);
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x10c);
    return;
  }
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x10c);
  return;
}

