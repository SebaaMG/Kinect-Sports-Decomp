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
extern int fn_8263AB38();
extern int fn_8263AC58();
extern unsigned int iStack00000024;
extern unsigned int iStack0000004c;
extern unsigned int *iStack_b0;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


ulonglong fn_8263AD78(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                       int param_5,ulonglong param_6,undefined8 param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iStack00000024;
  int iStack0000004c;
  uint in_stack_00000054;
  uint in_stack_00000064;
  uint *in_stack_0000006c;
  uint *in_stack_00000074;
  int *in_stack_0000007c;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int aiStack_a4 [41];
  
  iStack00000024 = (int)param_3;
  iVar6 = 0;
  if (((param_6 & 0xffffffff) == 1) && (1 < (param_3 & 0xffffffff))) {
    aiStack_a4[0] = 1;
LAB_8263add4:
    bVar3 = true;
  }
  else {
    aiStack_a4[0] = 0;
    bVar3 = false;
    if ((param_6 & 0xffffffff) == 3) goto LAB_8263add4;
  }
  uVar13 = 1;
  if (!bVar3) {
    uVar13 = param_3;
  }
  uVar16 = (ulonglong)in_stack_00000054;
  uVar11 = (ulonglong)in_stack_00000054 & 0x7fffffff;
  uVar8 = param_1 + uVar11 * -2;
  uVar10 = param_2 + uVar11 * -2;
  iVar4 = (int)uVar8;
  bVar1 = (&lbl_821CBFB1)[param_5 * 2];
  uVar7 = (ulonglong)bVar1;
  uVar14 = (uVar16 - LZCOUNT(iVar4 + -1)) + 0x20;
  uVar15 = (uVar16 - LZCOUNT((int)uVar10 + -1)) + 0x20;
  if ((param_6 & 0xffffffff) == 2) {
    uVar11 = uVar13 + uVar11 * -2;
    uVar12 = (ulonglong)in_stack_00000064;
    uVar5 = (in_stack_00000054 - (int)LZCOUNT((int)uVar11 + -1)) + 0x20;
  }
  else {
    uVar11 = 1;
    uVar5 = 0;
    uVar12 = -(ulonglong)(param_6 != 0) & (ulonglong)in_stack_00000064;
  }
  uVar9 = (uint)uVar12;
  iStack_b0 = 1 << (uVar5 & 0x3f);
  uStack_a8 = 1 << ((uint)uVar14 & 0x3f);
  uStack_ac = 1 << ((uint)uVar15 & 0x3f);
  if (((0x10 < uStack_a8) && (0x10 < uStack_ac)) || (param_8 == 0)) {
    if (uVar12 == 0) {
      uStack_a8 = (uint)param_1;
    }
    else {
      trapWord(6,uVar7,0);
      uStack_a8 = (uint)(((uVar12 & 0x1fffffff) << 3) / uVar7);
    }
    iStack_b0 = (int)uVar13;
    uStack_ac = (uint)param_2;
  }
  iStack0000004c = param_8;
  fn_8263AC58(&uStack_a8,&uStack_ac,&iStack_b0,uVar7,param_5,param_6,param_7);
  uVar5 = uStack_a8;
  if (uVar12 == 0) {
    uVar9 = uStack_a8 * bVar1 >> 3;
  }
  if (((int)param_7 != 0) || (bVar3)) {
    if ((param_6 & 0xffffffff) == 2) goto LAB_8263af94;
    uVar9 = (uVar9 * uStack_ac + 0xfff & 0xfffff000) * iStack_b0;
LAB_8263afac:
    if (bVar3) {
      uVar9 = uVar9 * iStack00000024;
    }
  }
  else {
    if ((param_6 & 0xffffffff) == 2) {
LAB_8263af94:
      uVar9 = uVar9 * iStack_b0 * uStack_ac + 0xfff & 0xfffff000;
      goto LAB_8263afac;
    }
    if ((((param_6 & 0xffffffff) == 1) && ((param_4 & 0xffffffff) == 1)) &&
       ((iStack0000004c == 0 && (uVar16 == 0)))) {
      fn_8263AB38(param_5,&uStack_a8,aiStack_a4);
      uVar9 = ((aiStack_a4[0] + (uint)param_2) - 1 & ~(aiStack_a4[0] - 1U)) * uVar9;
      goto LAB_8263b0d4;
    }
    uVar9 = uVar9 * iStack_b0 * uStack_ac;
  }
  if ((1 < (param_4 & 0xffffffff)) || ((param_4 & 0xffffffff) == 0)) {
    uVar16 = uVar10;
    if ((uVar10 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
      uVar16 = uVar11;
    }
    if (((uVar8 & 0xffffffff) <= (uVar16 & 0xffffffff)) &&
       (iVar4 = (int)uVar10, (uVar10 & 0xffffffff) <= (uVar11 & 0xffffffff))) {
      iVar4 = (int)uVar11;
    }
    uVar11 = param_4;
    iVar6 = 0;
    if ((param_4 & 0xffffffff) == 0) {
      uVar11 = 0x20 - LZCOUNT(iVar4);
      param_4 = uVar11;
    }
    while ((uVar11 - 1 != 0 &&
           ((iStack0000004c == 0 || ((4 < (uVar14 & 0xffffffff) && (4 < (uVar15 & 0xffffffff))))))))
    {
      if ((uVar14 & 0xffffffff) != 0) {
        uVar14 = uVar14 - 1;
      }
      if ((uVar15 & 0xffffffff) != 0) {
        uVar15 = uVar15 - 1;
      }
      if (1 < (uVar13 & 0xffffffff)) {
        uVar13 = (uVar13 & 0xffffffff) >> 1;
      }
      iStack_b0 = 1 << ((uint)uVar14 & 0x3f);
      uStack_a8 = (uint)uVar13;
      uStack_ac = 1 << ((uint)uVar15 & 0x3f);
      iVar4 = fn_8263AC58(&iStack_b0,&uStack_ac,&uStack_a8,uVar7,param_5,param_6,param_7);
      uVar11 = uVar11 - 1;
      iVar6 = iVar4 + iVar6;
    }
    if (bVar3) {
      uVar2 = -(uint)(aiStack_a4[0] != 0) & 3;
      iVar6 = (uVar2 + iStack00000024 & ~uVar2) * iVar6;
    }
  }
LAB_8263b0d4:
  *in_stack_0000006c = uVar5;
  *in_stack_00000074 = uVar9;
  *in_stack_0000007c = iVar6;
  return param_4;
}

