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
extern int fn_8249ABC0();


uint fn_824FDBD8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = fn_8249ABC0();
    if (*(uint *)(iVar2 + 0x114) != 0xffffffff) {
      return *(uint *)(iVar2 + 0x114);
    }
    iVar2 = fn_8249ABC0();
    uVar1 = *(uint *)(*(int *)(iVar2 + 0x14) + 0x20);
    if (-1 < (int)uVar1) {
      return uVar1;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x18) + 0x20);
    if (iVar2 < 0) {
      return 0;
    }
  }
  else {
    iVar2 = fn_8249ABC0();
    uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + 0x20);
    if (-1 < (int)uVar1) {
      return uVar1;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 0x20);
    if (iVar2 < 0) {
      return 1;
    }
  }
  return (uint)(iVar2 == 0);
}

