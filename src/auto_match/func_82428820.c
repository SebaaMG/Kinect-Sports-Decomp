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
extern int fn_82262440();


void fn_82428820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  if ((uint)((*(int *)(iVar1 + 0xc) - iVar2) / 0x1ac) < 2) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0x1dc);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (uVar4 = 1, *(int *)(iVar3 + 0x40) != 1)) {
    uVar4 = 0;
  }
  fn_82262440(*(undefined4 *)(iVar1 + 0x408),uVar4,*(undefined4 *)(iVar2 + 0x30),
                  *(undefined4 *)(iVar2 + 0x19c),
                  (ulonglong)*(uint *)(iVar2 + 0x1a0) + (ulonglong)*(uint *)(iVar2 + 0x1a4),
                  (ulonglong)*(uint *)(iVar2 + 0x1a0),(ulonglong)*(uint *)(iVar2 + 0x1a4),uVar5);
  return;
}

