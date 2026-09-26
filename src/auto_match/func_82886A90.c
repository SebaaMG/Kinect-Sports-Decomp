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
extern int fn_82886A20();
extern int fn_82887E80();
extern unsigned int lbl_83212A1C;


void fn_82886A90(int param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  
  iVar6 = lbl_83212A1C;
  iVar11 = param_2 * 4;
  iVar10 = *(int *)(iVar11 + param_1);
  iVar13 = iVar10 + 0x1c;
  iVar9 = *(int *)(iVar10 + 0xc);
  *(int *)(iVar10 + 0xc) = param_3;
  uVar3 = 1 << (*(uint *)(iVar11 + iVar6) & 0x3f);
  uVar8 = (uVar3 >> 2) + iVar9;
  if (uVar3 <= uVar8) {
    uVar8 = uVar8 - uVar3;
  }
  uVar7 = (uVar3 >> 2) + param_3;
  if (uVar3 <= uVar7) {
    uVar7 = uVar7 - uVar3;
  }
  uVar3 = uVar8 >> 3;
  uVar4 = uVar7 >> 3;
  iVar10 = uVar8 - (uVar8 & 0xfffffff8);
  iVar9 = uVar7 - (uVar7 & 0xfffffff8);
  if ((uVar3 != uVar4) || (uVar8 = uVar3, iVar9 < iVar10)) {
    bVar2 = *(byte *)(uVar3 + iVar13);
    uVar7 = (1 << (iVar10 + 1U & 0x3f)) + 0xff;
    uVar5 = fn_82887E80();
    fn_82886A20(uVar5,param_2,~((uint)bVar2 | uVar7 & 0xff) & 0xff);
    iVar6 = lbl_83212A1C;
    uVar8 = uVar3 + 1;
    *(byte *)(uVar3 + iVar13) = *(byte *)(uVar3 + iVar13) & (byte)uVar7;
  }
  bVar1 = uVar8 == uVar4;
  if (uVar4 < uVar8) {
    uVar7 = *(uint *)(iVar11 + iVar6);
    for (; uVar8 != (1 << (uVar7 & 0x3f)) + 7U >> 3; uVar8 = uVar8 + 1) {
      bVar2 = *(byte *)(uVar8 + iVar13);
      uVar5 = fn_82887E80();
      fn_82886A20(uVar5,param_2,~bVar2);
      *(undefined1 *)(uVar8 + iVar13) = 0;
    }
    uVar8 = 0;
    bVar1 = uVar4 == 0;
  }
  if (!bVar1) {
    do {
      bVar2 = *(byte *)(uVar8 + iVar13);
      puVar12 = (undefined1 *)(uVar8 + iVar13);
      uVar5 = fn_82887E80();
      fn_82886A20(uVar5,param_2,~bVar2);
      uVar8 = uVar8 + 1;
      *puVar12 = 0;
    } while (uVar8 != uVar4);
  }
  if ((uVar3 != uVar4) || (iVar9 < iVar10)) {
    bVar2 = *(byte *)(uVar4 + iVar13);
    uVar8 = 0xff << (iVar9 + 1U & 0x3f);
    uVar5 = fn_82887E80();
    fn_82886A20(uVar5,param_2,~((uint)bVar2 | uVar8 & 0xff) & 0xff);
    *(byte *)(uVar4 + iVar13) = *(byte *)(uVar4 + iVar13) & (byte)uVar8;
  }
  if ((uVar3 == uVar4) && (iVar10 < iVar9)) {
    bVar2 = *(byte *)(uVar4 + iVar13);
    uVar3 = (1 << (iVar10 + 1U & 0x3f)) + 0xffU | 0xff << (iVar9 + 1U & 0x3f);
    uVar5 = fn_82887E80();
    fn_82886A20(uVar5,param_2,~((uint)bVar2 | uVar3 & 0xff) & 0xff);
    *(byte *)(uVar4 + iVar13) = *(byte *)(uVar4 + iVar13) & (byte)uVar3;
  }
  return;
}

