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
extern unsigned int *auStack_50;
extern int fn_8262FFB0();
extern int fn_8263AB38();
extern int fn_8263AC58();
extern int fn_8263B0F8();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_54;


void fn_82A947A0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  uint auStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 0x28) >> 0x1f;
  uVar2 = -iVar1;
  uVar4 = (ulonglong)uVar2;
  fn_8263B0F8(param_1,&iStack_60,&iStack_5c,&iStack_58);
  lVar9 = (uVar4 - LZCOUNT(iStack_60 + iVar1 * 2 + -1)) + 0x20;
  lVar8 = (uVar4 - LZCOUNT(iStack_5c + iVar1 * 2 + -1)) + 0x20;
  if ((int)lVar8 <= (int)lVar9) {
    lVar9 = lVar8;
  }
  uVar10 = lVar9 - 4;
  uVar10 = (((uVar10 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar10 == 0) & uVar10;
  iVar11 = (int)uVar10;
  param_2[0xe] = iVar11;
  if ((*(uint *)(param_1 + 0x30) & 0x600) == 0x400) {
    lVar9 = (uVar4 - LZCOUNT(iStack_58 + iVar1 * 2 + -1)) + 0x20;
  }
  else {
    lVar9 = 0;
  }
  param_2[2] = 1 << (((uVar2 - (int)LZCOUNT(iStack_5c + iVar1 * 2 + -1)) + 0x20) - iVar11 & 0x3f);
  lVar9 = lVar9 - uVar10;
  param_2[1] = 1 << (((uVar2 - (int)LZCOUNT(iStack_60 + iVar1 * 2 + -1)) + 0x20) - iVar11 & 0x3f);
  uVar2 = (uint)lVar9;
  param_2[3] = 1 << ((-1 - ((int)uVar2 >> 0x1f)) + (uint)(lVar9 == 0) & uVar2 & 0x3f);
  param_2[7] = (uint)(byte)(&lbl_821CBFB1)[(*(uint *)(param_1 + 0x20) & 0x3f) * 2];
  fn_8263AC58(param_2 + 1,param_2 + 2,param_2 + 3,param_2[7],*(uint *)(param_1 + 0x20) & 0x3f,
                    *(uint *)(param_1 + 0x30) >> 9 & 3,*(uint *)(param_1 + 0x1c) >> 0x1f);
  iVar1 = param_2[7];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  iVar11 = param_2[3];
  uVar5 = uVar2 * iVar1 >> 3;
  param_2[5] = uVar5;
  iVar12 = uVar3 * uVar5;
  if ((*(uint *)(param_1 + 0x30) & 0x600) == 0x400) {
    param_2[6] = iVar12;
    param_2[0xf] = iVar12 * iVar11 + 0xfffU & 0xfffff000;
  }
  else {
    uVar6 = iVar12 + 0xfffU & 0xfffff000;
    param_2[6] = uVar6;
    param_2[0xf] = uVar6 * iVar11;
  }
  fn_8263AB38(*(uint *)(param_1 + 0x20) & 0x3f,auStack_50,&uStack_54);
  param_2[10] = iVar11;
  param_2[0xd] = 0;
  trapWord(6,(ulonglong)auStack_50[0],0);
  trapWord(6,(ulonglong)uStack_54,0);
  param_2[9] = (int)((((ulonglong)uVar3 + (ulonglong)uStack_54) - 1 & 0xffffffff) /
                    (ulonglong)uStack_54);
  param_2[5] = uVar5 * uStack_54;
  param_2[8] = (int)((((ulonglong)uVar2 + (ulonglong)auStack_50[0]) - 1 & 0xffffffff) /
                    (ulonglong)auStack_50[0]);
  param_2[0xb] = (int)(((longlong)(int)(iVar1 * auStack_50[0]) * (longlong)(int)uStack_54 &
                       0xffffffffU) >> 3);
  if ((uint)param_2[0xe] <= (*(uint *)(param_1 + 0x2c) >> 6 & 0xf)) {
    param_2[0xd] = 2;
  }
  if ((*(uint *)(param_1 + 0x28) & 0x80000000) != 0) {
    param_2[0xd] = param_2[0xd] | 8;
  }
  uVar7 = fn_8262FFB0(param_1);
  *param_2 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar3 = *(uint *)(param_1 + 0x28);
  param_2[4] = ((((((((((uVar3 >> 7 & 0x38 | uVar3 >> 7 & 7) << 3 | uVar3 >> 4 & 7) << 3 |
                      uVar3 >> 1 & 7) << 1 | uVar3 & 1) << 2 | uVar2 >> 8 & 3) << 2 | uVar2 >> 6 & 3
                   ) << 2 | uVar2 >> 4 & 3) << 2 | uVar2 >> 2 & 3) << 1 | uVar2 >> 0x1f) << 2 |
               *(uint *)(param_1 + 0x20) >> 6 & 3) << 6 | *(uint *)(param_1 + 0x20) & 0x3f;
  param_2[0xc] = (int)(*(uint *)(param_1 + 0x28) << 0xd | *(uint *)(param_1 + 0x28) >> 0x13) >> 0x1a
  ;
  return;
}

