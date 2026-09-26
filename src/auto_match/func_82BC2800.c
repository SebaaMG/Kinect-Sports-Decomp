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
extern unsigned int lbl_820E3B00;
extern unsigned int lbl_820E3B08;
extern unsigned int lbl_820E3B10;
extern unsigned int lbl_820E3B14;
extern unsigned int lbl_8316FF50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BC2800(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0x30;
  *(undefined4 *)(param_1 + 0x80) = lbl_820E3B08;
  lVar7 = 1;
  *(undefined4 *)(param_1 + 0x3b0) = lbl_820E3B00;
  uVar2 = lbl_820E3B14;
  uVar1 = lbl_820E3B10;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  do {
    iVar9 = (int)((lVar7 + 0x20U & 0xffffffff) << 2);
    *(undefined4 *)((int)((lVar7 + 0xeU & 0xffffffff) << 2) + param_1) = 0xffffffff;
    *(undefined4 *)((int)((lVar7 + 0x14U & 0xffffffff) << 2) + param_1) = 0x30;
    *(undefined4 *)(iVar9 + param_1) = lbl_820E3B00;
    iVar8 = (int)lVar7;
    if ((*(uint *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) != 0) {
      if (iVar8 == 1) {
        *(undefined4 *)(param_1 + 0x84) = uVar2;
      }
      else {
        *(undefined4 *)(iVar9 + param_1) = uVar1;
      }
    }
    uVar4 = lVar7 + 7;
    *(undefined1 *)(param_1 + 0x98 + iVar8) = 0;
    uVar3 = lVar7 + 0x32;
    *(undefined1 *)(param_1 + 0x9e + iVar8) = 0;
    lVar7 = lVar7 + 1;
    *(undefined4 *)((int)((uVar4 & 0xffffffff) << 2) + param_1) = 0;
    *(undefined4 *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = 0;
  } while ((int)lVar7 < 6);
  iVar9 = 0x5b;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  do {
    *(undefined4 *)(param_1 + 0x8d + iVar9) = 0;
    iVar8 = 0;
    lVar7 = 4;
    do {
      iVar5 = iVar9 + iVar8;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(iVar5 * 4 + param_1) = 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar9 = iVar9 + 4;
  } while (iVar9 < 0xdb);
  puVar6 = (undefined4 *)(param_1 + 0x39c);
  puVar10 = (undefined4 *)(param_1 + 0x37c);
  lVar7 = 4;
  do {
    puVar10[1] = 0;
    puVar10 = puVar10 + 2;
    *puVar10 = 0;
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

