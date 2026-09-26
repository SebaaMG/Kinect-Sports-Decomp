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
extern int fn_82B41560();


ulonglong fn_82B41870(uint param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                       int param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar14;
  ulonglong uVar12;
  int iVar15;
  uint *puVar16;
  longlong lVar13;
  ulonglong uVar17;
  ulonglong uVar18;
  int in_stack_00000054;
  
  iVar14 = (param_1 & 0x7f800000) + 0xc0800000;
  uVar3 = iVar14 >> 0x17;
  if ((int)uVar3 < 0) {
    if ((int)uVar3 < -0x19) {
      uVar12 = 0;
    }
    else {
      uVar2 = iVar14 >> 0x1f;
      uVar12 = (ulonglong)
               ((int)(param_1 & 0x7fffff | 0x800000) >> (((uVar3 ^ uVar2) - uVar2) - 1 & 0x3f));
    }
  }
  else {
    uVar12 = (ulonglong)((param_1 & 0x7fffff | 0x800000) << (uVar3 + 1 & 0x3f));
  }
  if (in_stack_00000054 == 0) {
    uVar3 = param_1 & 0x7fffffff;
    if (param_4 == 0x17) {
      uVar6 = (ulonglong)param_1 & 0x80000000;
      if (uVar3 < 0x4016cbe4) {
        if (0x3fc90fda < uVar3) {
          uVar12 = uVar12 - 0x1921fb5;
          goto LAB_82b41978;
        }
        if (0x3f490fda < uVar3) {
          lVar10 = 0x1921fb5;
          goto LAB_82b41974;
        }
        iVar14 = 0x17;
      }
      else {
        lVar10 = 0x3243f6a;
LAB_82b419c4:
        uVar12 = lVar10 - uVar12;
        iVar14 = 0x17;
      }
    }
    else if (uVar3 < 0x4016cbe4) {
      if (uVar3 < 0x3fc90fdb) {
        uVar6 = 0;
        if (0x3f490fda < uVar3) {
          lVar10 = 0x1921fb5;
          goto LAB_82b419c4;
        }
        uVar12 = uVar12 | 0x1000000;
        iVar14 = 0x18;
      }
      else {
        uVar12 = uVar12 - 0x1921fb5;
        uVar6 = 0xffffffff80000000;
        iVar14 = 0x17;
      }
    }
    else {
      uVar6 = 0xffffffff80000000;
      lVar10 = 0x3243f6a;
LAB_82b41974:
      uVar12 = lVar10 - uVar12;
LAB_82b41978:
      uVar12 = uVar12 | 0x1000000;
      iVar14 = 0x18;
    }
  }
  else {
    uVar6 = 0;
    iVar14 = param_4;
  }
  if ((param_1 & 0x7f800000) == 0 || 0x40490fda < (param_1 & 0x7fffffff)) {
    if (param_4 != 0x17) {
      bVar4 = false;
      bVar5 = true;
      goto LAB_82b41a38;
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  bVar5 = false;
LAB_82b41a38:
  uVar9 = uVar12 & ((ulonglong)*(uint *)(param_3 + 0x78) ^ 0x1ffffff);
  uVar3 = *(uint *)(param_3 + 0x3c);
  iVar1 = (int)(*(uint *)(param_3 + 0x78) & (uint)uVar12) >> (*(uint *)(param_3 + 0x7c) & 0x3f);
  iVar8 = (int)uVar9;
  if ((int)uVar3 < 0) {
    uVar12 = (ulonglong)
             (uint)(iVar8 << ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f));
  }
  else {
    iVar15 = 0;
    uVar12 = uVar9;
    if (0 < (int)uVar3) {
      do {
        iVar15 = iVar15 + 1;
        uVar12 = uVar12 >> 1 | uVar12 & 1;
      } while (iVar15 < (int)uVar3);
    }
  }
  uVar3 = *(uint *)(param_3 + 0x40);
  if ((int)uVar3 < 0) {
    uVar11 = (ulonglong)
             (uint)(iVar8 << ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f));
  }
  else {
    iVar15 = 0;
    uVar11 = uVar9;
    if (0 < (int)uVar3) {
      do {
        iVar15 = iVar15 + 1;
        uVar11 = uVar11 >> 1 | uVar11 & 1;
      } while (iVar15 < (int)uVar3);
    }
  }
  uVar3 = *(uint *)(param_3 + 0x44);
  if ((int)uVar3 < 0) {
    uVar9 = (ulonglong)(uint)(iVar8 << ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f))
    ;
  }
  else {
    iVar8 = 0;
    if (0 < (int)uVar3) {
      do {
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 >> 1 | uVar9 & 1;
      } while (iVar8 < (int)uVar3);
    }
  }
  iVar8 = iVar1 * 4;
  if (in_stack_00000054 == 0) {
    uVar7 = 0;
    uVar18 = 0;
    uVar17 = 0;
  }
  else {
    puVar16 = (uint *)(iVar1 * 0xc + in_stack_00000054);
    uVar7 = (ulonglong)*puVar16;
    uVar18 = (ulonglong)puVar16[1];
    uVar17 = (ulonglong)puVar16[2];
  }
  if (iVar14 == 0x17) {
    uVar7 = -uVar7;
  }
  lVar13 = 0;
  lVar10 = 0;
  if (param_4 == 0x18 || param_4 == 0x17) {
    lVar13 = *(uint *)(iVar8 + param_7) + uVar18;
    lVar10 = *(uint *)(iVar8 + param_8) + uVar17;
    if (iVar14 != 0x17) {
      lVar10 = *(uint *)(iVar8 + param_8) - uVar17;
    }
  }
  lVar10 = fn_82B41560(*(undefined4 *)(iVar8 + param_5),*(uint *)(iVar8 + param_6) + uVar7,lVar13,
                         lVar10,uVar12,uVar11,uVar9,param_3);
  iVar14 = (int)(lVar10 >> 0xc);
  uVar9 = (ulonglong)iVar14;
  uVar12 = 0x7f;
  if (uVar9 == 0) {
    uVar12 = 0x67;
  }
  else if ((lVar10 >> 0xc & 0x8000000U) == 0) {
    do {
      uVar11 = (uVar9 & 0xffffffff) << 1;
      uVar9 = uVar11 & 0xfffffffe;
      iVar14 = (int)uVar9;
      uVar12 = uVar12 - 1;
    } while ((uVar11 & 0x8000000) == 0);
  }
  else {
    bVar5 = true;
  }
  if (bVar4) {
    uVar6 = 0;
  }
  else if (bVar5) {
    uVar6 = uVar6 | 0x3f800000;
  }
  else {
    uVar6 = (uVar12 & 0xff) << 0x17 | (longlong)(iVar14 >> 4) & 0x7fffffU | uVar6;
  }
  return uVar6;
}

