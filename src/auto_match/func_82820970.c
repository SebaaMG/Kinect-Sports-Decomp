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
extern int fn_82820EF8();


void fn_82820970(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  bVar1 = *(byte *)(iVar3 + 0x38);
  *(int *)(param_1 + 0x28) = iVar3 + 0x3b;
  iVar2 = (uint)*(byte *)(iVar3 + 0x38) + iVar3 + 0x3b;
  *(int *)(param_1 + 0x2c) = iVar2;
  iVar2 = (bVar1 + 3) * 4 + iVar2;
  *(int *)(param_1 + 0x30) = iVar2;
  iVar2 = *(int *)(iVar3 + 0x2c) * 0x1c + iVar2;
  *(int *)(param_1 + 0x38) = iVar2;
  *(int *)(param_1 + 0x34) = *(int *)(iVar3 + 0x34) + iVar2;
  if (*(int *)(iVar3 + 0x2c) != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x30) + iVar3;
      if (*(char *)(*(int *)(param_1 + 0x1c) + 0x39) != '\x01') {
        fn_82820EF8(iVar2 + 4,4);
        fn_82820EF8(iVar2 + 8,4);
        fn_82820EF8(iVar2 + 0xc,4);
        fn_82820EF8(iVar2 + 0x10,4);
        fn_82820EF8(iVar2 + 0x18,4);
        fn_82820EF8(iVar2 + 0x14,4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x1c;
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + *(int *)(param_1 + 0x34);
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + *(int *)(param_1 + 0x38);
    } while (uVar4 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x2c));
  }
  return;
}

