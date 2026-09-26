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


void fn_82D8B980(int param_1,char param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (param_2 == '\0') {
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    bVar4 = false;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    bVar4 = true;
    uVar5 = *(uint *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      uVar8 = (uint)*(byte *)(iVar1 + 0x307);
      uVar7 = (ulonglong)*(byte *)(iVar1 + 0x306);
      uVar6 = (ulonglong)*(byte *)(iVar1 + 0x305);
    }
  }
  if (bVar4) {
    *(char *)(param_1 + 0xe9) = (char)(uVar5 & 0xf);
    if ((uVar8 & 3) < (uVar5 & 3)) {
      uVar2 = (ushort)((~uVar6 & 0xffffffff) << 0xe);
    }
    else {
      uVar2 = (ushort)(uVar6 << 0xe);
    }
    if (uVar8 < (uVar5 & 0xf)) {
      uVar3 = (ushort)((~uVar7 & 0xffffffff) << 0xe);
    }
    else {
      uVar3 = (ushort)(uVar7 << 0xe);
    }
    *(ushort *)(param_1 + 0xea) = *(ushort *)(param_1 + 0xea) & 0x3fff | uVar2;
    *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) & 0x3fff | uVar3;
    return;
  }
  *(undefined2 *)(param_1 + 0xea) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0xff;
  *(undefined2 *)(param_1 + 0xec) = 0;
  return;
}

