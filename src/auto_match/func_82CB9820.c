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


undefined8
fn_82CB9820(int param_1,ulonglong param_2,int param_3,ulonglong param_4,int param_5,int param_6,
             int param_7,uint *param_8)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *in_stack_00000054;
  int in_stack_0000005c;
  
  iVar7 = (int)param_2;
  uVar5 = ((longlong)param_3 * (longlong)(int)param_4 + param_2) - 1;
  if (in_stack_0000005c == 0) {
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x88) == 1) {
        iVar8 = (int)(((uVar5 - param_4) + 1 & 0xffffffff) << 1);
        goto LAB_82cb9888;
      }
      uVar14 = 0;
      uVar3 = 0;
    }
    else {
      iVar8 = (int)((uVar5 & 0xffffffff) << 1);
      uVar3 = (uint)*(short *)(iVar8 + param_6);
      uVar14 = (uint)*(short *)(iVar8 + param_7);
    }
    uVar5 = (uVar5 - param_4) + 1;
    iVar8 = (int)((uVar5 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar8 + param_6);
    uVar6 = (uint)sVar1;
    iVar10 = (int)(((((((~(param_4 - 1 ^ param_2) & 0xffffffff) >> 0x1f) +
                      (ulonglong)(param_4 - 1 <= param_2)) * 2 & 2) + uVar5) - 1 & 0xffffffff) << 1)
    ;
    uVar4 = (uint)*(short *)(iVar8 + param_7);
    sVar2 = *(short *)(iVar10 + param_6);
    uVar12 = (uint)sVar2;
    uVar11 = (uint)*(short *)(iVar10 + param_7);
    uVar9 = ((uint)LZCOUNT(sVar2 + -0x4000) >> 5) + ((uint)LZCOUNT(sVar1 + -0x4000) >> 5) +
            ((uint)LZCOUNT(uVar3 - 0x4000) >> 5);
    if (1 < uVar9) {
      *param_8 = 0x4000;
      *in_stack_00000054 = 0;
      *param_8 = 0;
      return 1;
    }
    if (uVar9 == 1) {
      if (sVar1 == 0x4000) {
        uVar4 = 0;
        uVar6 = 0;
      }
      else if (sVar2 == 0x4000) {
        uVar11 = 0;
        uVar12 = 0;
      }
      else if (uVar3 == 0x4000) {
        uVar14 = 0;
        uVar3 = 0;
      }
    }
    uVar17 = uVar12 - uVar3 ^ uVar12 - uVar6;
    uVar16 = uVar3 - uVar6 ^ uVar12 - uVar6;
    uVar9 = uVar11 - uVar14 ^ uVar11 - uVar4;
    uVar15 = uVar14 - uVar4 ^ uVar11 - uVar4;
    *param_8 = uVar3 & ~((int)(uVar17 | uVar16) >> 0x1f) | (int)uVar17 >> 0x1f & uVar12 |
               (int)uVar16 >> 0x1f & uVar6;
    *in_stack_00000054 =
         uVar14 & ~((int)(uVar9 | uVar15) >> 0x1f) | (int)uVar9 >> 0x1f & uVar11 |
         (int)uVar15 >> 0x1f & uVar4;
LAB_82cb98a0:
    if (*param_8 == 0x4000) {
      *in_stack_00000054 = 0;
      *param_8 = 0;
      return 1;
    }
  }
  else {
    if (0 < iVar7) {
      iVar8 = (int)((uVar5 & 0xffffffff) << 1);
LAB_82cb9888:
      *param_8 = (int)*(short *)(iVar8 + param_6);
      *in_stack_00000054 = (int)*(short *)(iVar8 + param_7);
      goto LAB_82cb98a0;
    }
    *in_stack_00000054 = 0;
    *param_8 = 0;
  }
  uVar3 = *param_8;
  iVar13 = uVar3 + iVar7 * 0x40;
  iVar7 = *in_stack_00000054 + param_3 * 0x40;
  iVar10 = (int)((param_4 & 0xffffffff) << 6) + -4;
  iVar8 = param_5 * 0x40 + -4;
  if (iVar13 < -0x3c) {
    uVar3 = (uVar3 - iVar13) - 0x3c;
  }
  else {
    if (iVar13 <= iVar10) goto LAB_82cb9a78;
    uVar3 = (uVar3 - iVar13) + iVar10;
  }
  *param_8 = uVar3;
LAB_82cb9a78:
  if (iVar7 < -0x3c) {
    *in_stack_00000054 = (*in_stack_00000054 - iVar7) - 0x3c;
  }
  else if (iVar8 < iVar7) {
    *in_stack_00000054 = (*in_stack_00000054 - iVar7) + iVar8;
  }
  return 0;
}

