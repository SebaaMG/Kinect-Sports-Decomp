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
extern int fn_82A1DD38();
extern unsigned int iStack_44;
extern unsigned int lbl_83261824;
extern unsigned int lbl_83261870;


/* WARNING: Type propagation algorithm not settling */

void fn_82F4D528(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  int iStack_44;
  int aiStack_40 [8];
  int aiStack_20 [8];
  
  piVar6 = &iStack_44;
  uVar3 = 0;
  lVar10 = 6;
  puVar5 = (undefined4 *)0x832616b4;
  do {
    piVar6 = piVar6 + 1;
    *piVar6 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar7 = 0;
  lVar10 = 6;
  do {
    puVar5 = puVar5 + 0x70;
    *(undefined4 *)((int)aiStack_20 + iVar7) = *puVar5;
    iVar7 = iVar7 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  piVar6 = &iStack_44;
  piVar8 = aiStack_20;
  piVar2 = &lbl_83261870;
  lVar10 = 6;
  do {
    if ((*piVar2 == 2) && (uVar3 < 6)) {
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
      *piVar6 = *piVar8;
    }
    piVar2 = piVar2 + 0x70;
    piVar8 = piVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  piVar2 = aiStack_20;
  piVar6 = &iStack_44 + uVar3;
  piVar8 = &lbl_83261870;
  lVar10 = 6;
  do {
    if ((*piVar8 != 2) && (uVar3 < 6)) {
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
      *piVar6 = *piVar2;
    }
    piVar8 = piVar8 + 0x70;
    piVar2 = piVar2 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar7 = 0;
  piVar6 = aiStack_40;
  do {
    iVar4 = 0;
    iVar9 = 0;
    lVar10 = 2;
    do {
      if (iVar7 != iVar4) {
        iVar1 = *piVar6;
        if ((iVar1 == *(int *)((int)&lbl_83261824 + iVar9)) && (iVar1 != 0)) {
          *piVar6 = *(int *)((int)aiStack_40 + iVar9);
          *(int *)((int)aiStack_40 + iVar9) = iVar1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar7 < 2);
  fn_82A1DD38(0xffffffff83261824,aiStack_40,0x18);
  return;
}

