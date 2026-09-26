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
extern int fn_82A987D8();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_821A7F10;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


void fn_82A98F20(undefined8 param_1,int param_2,ulonglong param_3,int param_4,ulonglong param_5,
                  undefined8 param_6,undefined8 param_7,int *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint in_stack_00000054;
  int *in_stack_0000005c;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  uint uStack_84;
  
  fn_82A94F88(param_4,&iStack_b0,&iStack_ac);
  uVar5 = 0x1f - (int)LZCOUNT(iStack_b0);
  uVar4 = 0x1f - (int)LZCOUNT(iStack_ac);
  uVar3 = (uint)param_5 & 2;
  uVar11 = (uint)((param_5 & 0xffffffff) >> 1) & 1;
  bVar1 = (&lbl_821A7F10)[param_4];
  uVar12 = (uint)param_3;
  iVar6 = (int)param_1;
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = (iStack_b0 + iVar6) - 1U >> (uVar5 & 0x3f);
    iVar9 = param_2;
  }
  else {
    iVar9 = (1 << ((uVar11 - (int)LZCOUNT((iVar6 - uVar3) + -1)) + 0x20 & 0x3f)) >> (uVar12 & 0x3f);
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    uVar2 = (iVar9 + iStack_b0) - 1U >> (uVar5 & 0x3f);
    iVar9 = (1 << ((uVar11 - (int)LZCOUNT((param_2 - uVar3) + -1)) + 0x20 & 0x3f)) >>
            (uVar12 & 0x3f);
    if (iVar9 < 2) {
      iVar9 = 1;
    }
  }
  piVar13 = (int *)0x0;
  if (param_8 != (int *)0x0) {
    piVar13 = &iStack_a8;
    iStack_a8 = *param_8 >> (uVar5 & 0x3f);
    iStack_a4 = param_8[1] >> (uVar4 & 0x3f);
  }
  if (in_stack_0000005c == (int *)0x0) {
    uVar11 = iVar6 - uVar3 >> (uVar12 & 0x3f);
    iStack_90 = 0;
    iStack_8c = 0;
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    uVar12 = param_2 - uVar3 >> (uVar12 & 0x3f);
    uVar11 = (uVar11 + uVar3 + iStack_b0) - 1 >> (uVar5 & 0x3f);
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    uVar3 = (uVar12 + uVar3 + iStack_ac) - 1 >> (uVar4 & 0x3f);
  }
  else {
    iStack_90 = *in_stack_0000005c >> (uVar5 & 0x3f);
    iStack_8c = in_stack_0000005c[1] >> (uVar4 & 0x3f);
    uVar11 = (in_stack_0000005c[2] + iStack_b0) - 1U >> (uVar5 & 0x3f);
    uVar3 = (in_stack_0000005c[3] + iStack_ac) - 1U >> (uVar4 & 0x3f);
  }
  iVar7 = iStack_8c;
  iVar6 = iStack_90;
  uStack_88 = uVar11;
  uStack_84 = uVar3;
  if ((param_5 & 1) == 0) {
    lVar8 = fn_82A94B08(param_1,param_2,1,param_3,param_4,1,(param_5 & 0xffffffff) >> 1 & 1,
                          &iStack_a0);
    iStack_90 = iStack_a0 + iVar6;
    iStack_8c = iStack_9c + iVar7;
    uVar10 = (ulonglong)in_stack_00000054 - lVar8;
    uStack_88 = iStack_a0 + uVar11;
    uStack_84 = iStack_9c + uVar3;
  }
  else {
    uVar10 = (ulonglong)in_stack_00000054;
  }
  fn_82A987D8(param_6,param_7,piVar13,uVar10,uVar2,(iVar9 + iStack_ac) - 1U >> (uVar4 & 0x3f),
                &iStack_90,((uint)bVar1 << (uVar4 + uVar5 & 0x3f)) >> 3);
  return;
}

