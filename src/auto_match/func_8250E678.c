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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82359C18();
extern int fn_8250E2F8();
extern int fn_8250EFB0();
extern int fn_827F04B0();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_821C23EC;
extern U64 storeWordConditionalIndexed();


void fn_8250E678(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint *puVar9;
  longlong lVar8;
  char in_RESERVE;
  byte bVar10;
  undefined **ppuStack_40;
  code *pcStack_3c;
  int iStack_38;
  int iStack_34;
  undefined ***pppuStack_30;
  
  uVar5 = fn_827F04B0(0x5e8);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  if (bVar1) {
    uVar6 = 0;
  }
  else {
    pppuStack_30 = &ppuStack_40;
    pcStack_3c = fn_8250EFB0;
    iStack_34 = iStack_38;
    ppuStack_40 = &lbl_821C23EC;
    iStack_38 = param_1;
    uVar6 = fn_8250E2F8(uVar5,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                          *(undefined4 *)(param_1 + 0x38),&ppuStack_40);
  }
  bVar10 = bVar1 << 1;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  if (!bVar1) {
    fn_82359C18(&ppuStack_40);
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0x14) + 0x5dc);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x5d8);
  if ((ulonglong)uVar2 != 0) {
    lVar7 = (ulonglong)uVar2 + 8;
    do {
      puVar9 = (uint *)lVar7;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar7);
        *puVar9 = uVar4;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
  }
  piVar3 = *(int **)(param_1 + 0x1c);
  if (ZEXT48(piVar3) != 0) {
    lVar7 = ZEXT48(piVar3) + 8;
    do {
      puVar9 = (uint *)lVar7;
      lVar8 = (ulonglong)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar8,0,lVar7);
        *puVar9 = uVar4;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(code **)(*piVar3 + 4))();
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  return;
}

