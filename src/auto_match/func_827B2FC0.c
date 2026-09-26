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
extern int fn_827B0D18();
extern int fn_827B1A38();
extern int fn_827B1A90();
extern int fn_827B1B10();
extern int fn_827B1BE8();


void fn_827B2FC0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar4 = param_1 + 8;
    do {
      iVar1 = *(int *)(((uint)((uVar5 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_1 + 0x58));
      iVar3 = (int)((uVar5 & 0x3f) << 3);
      iVar2 = iVar1 + iVar3;
      fn_827B1A38(iVar4,*(undefined2 *)(iVar1 + iVar3));
      fn_827B1B10(iVar4,*(undefined2 *)(iVar2 + 2));
      fn_827B1A90(iVar4,*(undefined4 *)(iVar2 + 4));
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x4c));
  }
  fn_827B0D18((uint *)(param_1 + 0x5c),0,*(undefined4 *)(param_1 + 0x5c),0xffffffff827b0288);
  iVar4 = param_1 + 8;
  fn_827B1BE8(iVar4,*(undefined4 *)(param_1 + 0x5c));
  uVar5 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    do {
      iVar1 = *(int *)(((uint)((uVar5 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_1 + 0x68));
      iVar3 = (int)((uVar5 & 0x3f) << 3);
      iVar2 = iVar1 + iVar3;
      fn_827B1A38(iVar4,*(undefined2 *)(iVar1 + iVar3));
      fn_827B1A38(iVar4,*(undefined2 *)(iVar2 + 2));
      fn_827B1B10(iVar4,*(undefined4 *)(iVar2 + 4));
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x5c));
  }
  return;
}

