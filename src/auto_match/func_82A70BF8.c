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
extern int fn_82A70AF0();
extern int fn_82C2B590();


void fn_82A70BF8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      fn_82C2B590();
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x100)) {
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + 0x10c) != 0) {
          iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x10c));
          if (iVar1 != 0) {
            fn_82C2B590(iVar1);
          }
        }
        if (*(int *)(param_1 + 0x110) != 0) {
          iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x110));
          if (iVar1 != 0) {
            fn_82C2B590(iVar1);
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x100));
    }
    if (*(int *)(param_1 + 0x10c) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x108) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x120) != 0) {
      fn_82C2B590();
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      fn_82C2B590();
    }
    fn_82A70AF0(param_1);
  }
  return;
}

