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
extern int fn_827C7150();
extern int fn_827C72A8();
extern int fn_827C72F8();
extern int fn_827C7348();
extern int fn_827C73F8();
extern unsigned int lbl_82017AE8;


undefined8 fn_827C7988(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  int aiStack_170 [92];
  int iVar13;
  
  iVar2 = *(int *)(param_1 + 0x15c);
  uVar9 = *(uint *)(param_1 + 0x130);
  uVar3 = *(uint *)(param_1 + 0x138);
  *(undefined4 *)(iVar2 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar2 + 0x44) == 0)) {
    fn_827C73F8(iVar2,*(undefined4 *)(iVar2 + 0x48));
  }
  uVar4 = *(uint *)(param_1 + 300);
  uVar10 = (ulonglong)uVar4;
  iVar11 = *param_2;
  uVar12 = 0;
  iVar13 = 0;
  if ((int)uVar4 <= (int)uVar9) {
    iVar8 = uVar4 << 2;
    lVar6 = (uVar9 - uVar10) + 1;
    uVar7 = uVar10;
    do {
      sVar1 = *(short *)(*(int *)(&lbl_82017AE8 + iVar8) * 2 + iVar11);
      iVar13 = (int)sVar1;
      if (sVar1 < 0) {
        iVar13 = -(int)sVar1;
      }
      iVar13 = iVar13 >> (uVar3 & 0x3f);
      *(int *)((int)aiStack_170 + iVar8) = iVar13;
      if (iVar13 == 1) {
        uVar12 = uVar7;
      }
      iVar13 = (int)uVar12;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar15 = 0;
  iVar16 = 0;
  iVar8 = *(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x3c);
  if ((int)uVar4 <= (int)uVar9) {
    iVar14 = uVar4 << 2;
    do {
      iVar5 = *(int *)((int)aiStack_170 + iVar14);
      if (iVar5 == 0) {
        iVar15 = iVar15 + 1;
      }
      else {
        while ((0xf < iVar15 && ((int)uVar10 <= iVar13))) {
          fn_827C7348(iVar2);
          fn_827C72A8(iVar2,*(undefined4 *)(iVar2 + 0x34),0xf0);
          iVar15 = iVar15 + -0x10;
          fn_827C72F8(iVar2,iVar8,iVar16);
          iVar16 = 0;
          iVar8 = *(int *)(iVar2 + 0x40);
        }
        if (iVar5 < 2) {
          fn_827C7348(iVar2);
          fn_827C72A8(iVar2,*(undefined4 *)(iVar2 + 0x34),iVar15 * 0x10 + 1);
          fn_827C7150(iVar2,((longlong)*(short *)(*(int *)(&lbl_82017AE8 + iVar14) * 2 + iVar11) &
                              0xffffffffU) >> 0x1f ^ 1,1);
          fn_827C72F8(iVar2,iVar8,iVar16);
          iVar16 = 0;
          iVar15 = 0;
          iVar8 = *(int *)(iVar2 + 0x40);
        }
        else {
          *(byte *)(iVar8 + iVar16) = (byte)iVar5 & 1;
          iVar16 = iVar16 + 1;
        }
      }
      uVar10 = uVar10 + 1;
      iVar14 = iVar14 + 4;
    } while ((int)uVar10 <= (int)uVar9);
    if ((0 < iVar15) || (iVar16 != 0)) {
      iVar11 = *(int *)(iVar2 + 0x38) + 1;
      uVar9 = iVar16 + *(int *)(iVar2 + 0x3c);
      *(int *)(iVar2 + 0x38) = iVar11;
      *(uint *)(iVar2 + 0x3c) = uVar9;
      if ((iVar11 == 0x7fff) || (0x3a9 < uVar9)) {
        fn_827C7348(iVar2);
      }
    }
  }
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar2 + 0x44) == 0) {
      *(int *)(iVar2 + 0x44) = *(int *)(param_1 + 0xbc);
      *(uint *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1U & 7;
    }
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
  }
  return 1;
}

