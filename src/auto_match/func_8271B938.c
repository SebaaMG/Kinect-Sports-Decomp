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
extern int fn_8267BE38();
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_8268B330();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_8269E088();
extern int fn_826AF618();
extern int fn_8271A720();
extern int fn_8271B248();
extern int fn_82720748();
extern unsigned int iStack_5c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern U64 storeWordConditionalIndexed();


void fn_8271B938(ulonglong param_1,int param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  char in_RESERVE;
  byte bVar9;
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint *puStack_50;
  undefined4 *puStack_4c;
  
  if ((param_3 & 0xffffffff) != 0) {
    fn_8268B330(&uStack_60);
    fn_8269E088(param_3,&uStack_60);
    lVar8 = param_1 + 0x30;
    puVar4 = (undefined4 *)fn_8271A720(lVar8,&uStack_60);
    bVar9 = (puVar4 == (undefined4 *)0x0) << 1;
    if (puVar4 == (undefined4 *)0x0) {
      puStack_50 = &uStack_60;
      puStack_4c = &uStack_58;
      uStack_58 = param_4;
      uStack_54 = param_5;
      fn_8271B248(lVar8,lVar8,&puStack_50);
    }
    else {
      *puVar4 = param_4;
      puVar4[1] = param_5;
    }
    lVar8 = ((ulonglong)uStack_60 & 0xfffffffc) + 4;
    do {
      puVar6 = (uint *)lVar8;
      uVar5 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar7 = storeWordConditionalIndexed(uVar5 - 1,0,lVar8);
        *puVar6 = uVar7;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38();
    }
  }
  puVar6 = (uint *)(param_2 + 8);
  uVar7 = *(int *)(param_2 + 8) + 0x10;
  *(uint *)(param_2 + 8) = uVar7;
  if (*(uint *)(param_2 + 0x10) <= uVar7) {
    fn_826826A8(puVar6);
  }
  puVar1 = (undefined1 *)*puVar6;
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar1 + 8) = param_5;
    *puVar1 = 4;
  }
  uVar7 = *puVar6;
  *puVar6 = uVar7 + 0x10;
  if (*(uint *)(param_2 + 0x10) <= uVar7 + 0x10) {
    fn_826826A8(puVar6);
  }
  puVar1 = (undefined1 *)*puVar6;
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar1 + 8) = param_4;
    *puVar1 = 4;
  }
  uVar7 = *puVar6;
  *puVar6 = uVar7 + 0x10;
  if (*(uint *)(param_2 + 0x10) <= uVar7 + 0x10) {
    fn_826826A8(puVar6);
  }
  if (*puVar6 != 0) {
    fn_82695520(*puVar6,param_3);
  }
  lVar8 = param_1 + 0x10;
  if ((param_1 & 0xffffffff) == 0) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  uVar7 = *puVar6;
  uVar3 = *(uint *)(param_2 + 0x1c);
  fn_82681728(&iStack_5c,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8200eb50);
  fn_82720748(param_2,lVar8,&iStack_5c,3,
                    (longlong)((int)(uVar7 - iVar2) >> 4) + ((ulonglong)uVar3 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar8 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
  *(int *)(iStack_5c + 8) = (int)lVar8;
  if (lVar8 == 0) {
    fn_826944C8(iStack_5c);
  }
  fn_826AF618(puVar6);
  return;
}

