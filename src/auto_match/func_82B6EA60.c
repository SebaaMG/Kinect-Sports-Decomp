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
extern int fn_82AB15D0();


uint fn_82B6EA60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar5 = 0;
  iVar2 = *(int *)(iVar1 + 0x5aa0);
  *(int *)(iVar1 + 0x5aa0) = iVar2 + 1;
  do {
    uVar4 = uVar5 + iVar2 & 0x3f;
    iVar3 = (uVar4 + 0x1168) * 4;
    if (*(int *)(iVar3 + iVar1) == -1) {
      *(int *)(iVar3 + iVar1) = iVar2;
      return uVar4;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x25a);
  return 0;
}

