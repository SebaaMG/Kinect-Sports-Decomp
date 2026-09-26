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


longlong fn_82D4B1C8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (param_2 >> (0x20 - *(uint *)(param_1 + 0x30) & 0x3f)) * 0x38 + *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(iVar4 + 0x20);
  if (iVar1 != 0) {
    iVar2 = (0xffffffffU >> (*(uint *)(param_1 + 0x30) & 0x3f) & param_2) * *(int *)(iVar4 + 0x24);
    if (*(char *)(iVar4 + 0x11) == '\x01') {
      uVar3 = (uint)*(byte *)(iVar2 + iVar1);
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + iVar1);
    }
    if (uVar3 != 0xffffffff) {
      return (longlong)*(int *)(iVar4 + 0x2c) * (longlong)(int)uVar3 +
             (ulonglong)*(uint *)(iVar4 + 0x28);
    }
  }
  return 0;
}

