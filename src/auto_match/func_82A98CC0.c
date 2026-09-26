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
extern int fn_82A94B08();
extern int fn_82A94F88();
extern int fn_82A98408();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_821A7F10;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_82A98CC0(undefined8 param_1,int param_2,ulonglong param_3,int param_4,ulonglong param_5,
                  longlong param_6,int *param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 in_stack_00000054;
  int *in_stack_0000005c;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  
  fn_82A94F88(param_4,&iStack_a0,&iStack_9c);
  uVar4 = 0x1f - (int)LZCOUNT(iStack_a0);
  uVar3 = 0x1f - (int)LZCOUNT(iStack_9c);
  uVar6 = (uint)param_5 & 2;
  uVar10 = (uint)((param_5 & 0xffffffff) >> 1) & 1;
  bVar1 = (&lbl_821A7F10)[param_4];
  uVar11 = (uint)param_3;
  iVar5 = (int)param_1;
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = (iStack_a0 + iVar5) - 1U >> (uVar4 & 0x3f);
    iVar9 = param_2;
  }
  else {
    iVar9 = (1 << ((uVar10 - (int)LZCOUNT((iVar5 - uVar6) + -1)) + 0x20 & 0x3f)) >> (uVar11 & 0x3f);
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    uVar2 = (iVar9 + iStack_a0) - 1U >> (uVar4 & 0x3f);
    iVar9 = (1 << ((uVar10 - (int)LZCOUNT((param_2 - uVar6) + -1)) + 0x20 & 0x3f)) >>
            (uVar11 & 0x3f);
    if (iVar9 < 2) {
      iVar9 = 1;
    }
  }
  iStack_98 = 0;
  iStack_94 = 0;
  if (in_stack_0000005c == (int *)0x0) {
    iStack_80 = 0;
    iStack_7c = 0;
    uVar10 = iVar5 - uVar6 >> (uVar11 & 0x3f);
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar11 = param_2 - uVar6 >> (uVar11 & 0x3f);
    uStack_78 = (uVar10 + uVar6 + iStack_a0) - 1 >> (uVar4 & 0x3f);
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    uStack_74 = (uVar11 + uVar6 + iStack_9c) - 1 >> (uVar3 & 0x3f);
  }
  else {
    iStack_80 = *in_stack_0000005c >> (uVar4 & 0x3f);
    iStack_7c = in_stack_0000005c[1] >> (uVar3 & 0x3f);
    uStack_78 = (in_stack_0000005c[2] + iStack_a0) - 1U >> (uVar4 & 0x3f);
    uStack_74 = (in_stack_0000005c[3] + iStack_9c) - 1U >> (uVar3 & 0x3f);
  }
  piVar12 = (int *)0x0;
  if (param_7 != (int *)0x0) {
    piVar12 = &iStack_98;
    iStack_98 = *param_7 >> (uVar4 & 0x3f);
    iStack_94 = param_7[1] >> (uVar3 & 0x3f);
  }
  iVar7 = iStack_94;
  iVar5 = iStack_98;
  if ((param_5 & 1) == 0) {
    lVar8 = fn_82A94B08(param_1,param_2,1,param_3,param_4,1,(param_5 & 0xffffffff) >> 1 & 1,
                          &iStack_90);
    param_6 = param_6 - lVar8;
    iStack_98 = iStack_90 + iVar5;
    iStack_94 = iStack_8c + iVar7;
    piVar12 = &iStack_98;
  }
  fn_82A98408(param_6,uVar2,(iVar9 + iStack_9c) - 1U >> (uVar3 & 0x3f),piVar12,param_8,
                in_stack_00000054,&iStack_80,((uint)bVar1 << (uVar3 + uVar4 & 0x3f)) >> 3);
  return;
}

