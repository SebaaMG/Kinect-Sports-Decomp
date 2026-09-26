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
extern int fn_82937A60();


void fn_8293B260(undefined8 param_1,int param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  
  uVar5 = 0;
  bVar2 = false;
  lVar10 = 4;
  lVar6 = 0;
  bVar9 = 0;
  lVar8 = 0;
  iVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = (*(uint *)(param_4 + 0x24) >> (uVar4 & 0x3f)) - iVar3;
    iVar3 = iVar3 + 1;
    uVar5 = (uVar1 & 3) << (uVar4 & 0x3f) | uVar5;
    uVar4 = uVar4 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar3 = *(int *)(param_4 + 0x14);
  if (iVar3 != 0x1000000) {
    if (iVar3 == 0xb000000) {
      bVar2 = true;
      goto LAB_8293b2ec;
    }
    if (iVar3 != 0xc000000) goto LAB_8293b2ec;
    bVar2 = true;
  }
  lVar6 = 1;
LAB_8293b2ec:
  if (*(int *)(param_4 + 0x10) == 0) {
    lVar8 = 1;
    bVar9 = (byte)*(undefined4 *)(param_4 + 0x18) & 0x3f;
    if (bVar2) {
      bVar9 = bVar9 | 0x80;
    }
    if ((*(int *)(param_4 + 0x28) != 0) && (*(int *)(*(int *)(param_4 + 0x28) + 0x10) == 0xf)) {
      bVar9 = bVar9 | 0x40;
    }
  }
  else if (*(int *)(param_4 + 0x10) == 2) {
    bVar9 = *(byte *)(param_4 + 0x1b);
    lVar8 = 0;
  }
  else {
    fn_82937A60(param_1,0xffffffff820328c8,param_3 + 1);
  }
  uVar7 = (undefined1)uVar5;
  if ((param_3 & 0xffffffff) == 0) {
    *(undefined1 *)(param_2 + 5) = uVar7;
    *(byte *)(param_2 + 9) = bVar9;
    *(uint *)(param_2 + 8) = (uint)(lVar8 << 0x1f) | *(uint *)(param_2 + 8) & 0x7fffffff;
    *(uint *)(param_2 + 4) = (uint)(lVar6 << 0x1a) | *(uint *)(param_2 + 4) & 0xfbffffff;
  }
  else {
    if ((param_3 & 0xffffffff) == 1) {
      *(byte *)(param_2 + 10) = bVar9;
      *(undefined1 *)(param_2 + 6) = uVar7;
      uVar5 = (uint)(lVar8 << 0x1e) | *(uint *)(param_2 + 8) & 0xbfffffff;
      uVar4 = (uint)(lVar6 << 0x19) | *(uint *)(param_2 + 4) & 0xfdffffff;
    }
    else {
      if (2 < (param_3 & 0xffffffff)) {
        return;
      }
      *(undefined1 *)(param_2 + 7) = uVar7;
      *(byte *)(param_2 + 0xb) = bVar9;
      uVar5 = (uint)(lVar8 << 0x1d) | *(uint *)(param_2 + 8) & 0xdfffffff;
      uVar4 = (uint)(lVar6 << 0x18) | *(uint *)(param_2 + 4) & 0xfeffffff;
    }
    *(uint *)(param_2 + 4) = uVar4;
    *(uint *)(param_2 + 8) = uVar5;
  }
  return;
}

