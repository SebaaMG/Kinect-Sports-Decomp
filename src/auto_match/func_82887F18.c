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
extern int fn_8265C9E0();
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E50;
extern unsigned int lbl_83213E54;


void fn_82887F18(ulonglong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  
  lbl_83213E4C = (uint)param_1;
  lbl_83213E50 = fn_8265C9E0(param_1 * 0x13ec);
  lbl_83213E54 = fn_8265C9E0((param_1 & 0x3ffffff) * 0x40 + param_1);
  uVar6 = (ulonglong)lbl_83213E4C;
  if (0 < (int)lbl_83213E4C) {
    puVar2 = (undefined1 *)(lbl_83213E54 + -0x41);
    iVar4 = lbl_83213E50;
    do {
      puVar7 = (undefined4 *)(iVar4 + 0x194);
      lVar9 = 0x33;
      do {
        puVar7[-0x32] = 0;
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar5 = 0x2ca;
      do {
        iVar8 = 0;
        lVar9 = 0x33;
        do {
          iVar3 = iVar5 + -0x231 + iVar8;
          iVar1 = iVar5 + iVar8;
          iVar8 = iVar8 + 1;
          *(undefined4 *)(iVar3 * 4 + iVar4) = 0;
          *(undefined4 *)(iVar1 * 4 + iVar4) = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        iVar5 = iVar5 + 0x33;
      } while (iVar5 < 0x4fb);
      uVar6 = uVar6 - 1;
      puVar2 = puVar2 + 0x41;
      *puVar2 = 0;
      iVar4 = iVar4 + 0x13ec;
    } while (uVar6 != 0);
  }
  return;
}

