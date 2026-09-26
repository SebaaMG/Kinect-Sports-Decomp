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
extern unsigned int *auStack_70;
extern int fn_82631E78();
extern int fn_82634898();
extern int fn_82F68CC0();
extern unsigned int iStack_58;
extern unsigned int lbl_831E798C;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_826344A8(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uStack_80;
  uint uStack_7c;
  uint auStack_70 [3];
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  
  uVar1 = param_3[1] + 0x1f & 0xffffffe0;
  uVar8 = param_1[0x1c];
  uVar13 = param_1[0x19];
  param_3[1] = uVar1;
  uVar2 = uVar8 + 1 >> 1;
  lVar14 = ((ulonglong)uVar13 + (ulonglong)uVar2 + 1) * 0xc;
  if (param_3[2] == 0) {
    fn_82631E78(param_3,0,lVar14);
  }
  else {
    *param_2 = uVar1;
    param_2[1] = (uint)lVar14;
    uVar13 = param_3[1];
    uVar9 = (ulonglong)uVar13 + lVar14;
    param_3[1] = (uint)uVar9;
    if ((ulonglong)param_3[3] < (uVar9 & 0xffffffff)) {
      param_3[3] = (uint)uVar9;
    }
    uVar16 = 0;
    uVar6 = param_3[2] - uVar9;
    iVar3 = 0;
    lVar4 = uVar9 + (uVar9 <= param_3[2]);
    uVar15 = uVar9 - lVar4 & (ulonglong)uVar13 + (ulonglong)*param_3;
    uVar9 = uVar15;
    if (uVar8 != 0) {
      lVar10 = (ulonglong)(uVar8 - 1 >> 1) + 1;
      lVar5 = (ulonglong)(uint)param_1[0x1b] - 8;
      do {
        uVar6 = *(ulonglong *)((int)lVar5 + 8);
        lVar4 = lVar5 + 8;
        uStack_7c = (uint)uVar6;
        uStack_80 = (uint)(uVar6 >> 0x20);
        uVar13 = uStack_80;
        if ((1 << (uStack_7c >> 0xc & 0xf) & 0x607eU) != 0) {
          uVar13 = uStack_80 & 0xfffff000 | uStack_80 + uVar2 & 0xfff;
        }
        if (iVar3 + 1U < uVar8) {
          lVar4 = lVar5 + 0x10;
          uVar11 = *(ulonglong *)lVar4;
          uStack_7c = (uint)uVar11;
          uVar7 = uVar11 & 0xffffffff;
          uStack_80 = (uint)(uVar11 >> 0x20);
          if ((1 << (uStack_7c >> 0xc & 0xf) & 0x607eU) == 0) {
            uVar11 = (ulonglong)uStack_80;
          }
          else {
            uVar11 = (ulonglong)uStack_80 & 0xfffff000 |
                     (ulonglong)uStack_80 + (ulonglong)uVar2 & 0xffffffff00000fff;
          }
        }
        else {
          uVar11 = 0;
          uVar7 = 0;
        }
        puVar17 = (uint *)uVar9;
        *puVar17 = uVar13;
        uVar6 = (uVar11 & 0xffff) << 0x10 | uVar6 & 0xffff;
        puVar17[1] = (uint)uVar6;
        iVar3 = iVar3 + 2;
        puVar17[2] = (uint)(uVar11 >> 0x10) & 0xffff | (uint)(uVar7 << 0x10);
        uVar9 = uVar9 + 0xc;
        lVar10 = lVar10 + -1;
        lVar5 = lVar4;
      } while (lVar10 != 0);
    }
    fn_82F68CC0(uVar9,param_1[0x18],(ulonglong)(uint)param_1[0x19] * 0xc,lVar4,uVar8,uVar6);
    param_1[0x40] = (int)uVar15;
    param_1[0x41] = (int)uVar9;
    piVar12 = (int *)(param_1[0x19] * 0xc + (int)uVar9);
    param_1[0x42] = (int)piVar12;
    *piVar12 = param_1[0x55];
    piVar12[1] = param_1[0x56];
    piVar12[2] = param_1[0x57];
    param_2[1] = (uint)lVar14;
    auStack_70[2] = *(uint *)(*param_1 + 0x4db4) >> 2 & 1;
    auStack_70[0] = 0;
    auStack_70[1] = 0xffffffff;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    iStack_58 = 0;
    fn_82634898(param_1,1,1,0xffffffff82634238,auStack_70);
    if (iStack_58 != 0) {
      *(undefined4 *)(*param_1 + 0x4df0) = 1;
    }
    uVar9 = 0;
    param_2[4] = auStack_70[0];
    uVar8 = *(uint *)(*param_1 + 0x4db4);
    if (((uVar8 >> 3 & 1) != 0) && (uVar9 = 0x20000, (uVar8 >> 2 & 1) == 0)) {
      uVar9 = 0x40000;
    }
    uVar13 = 0;
    if ((uVar8 >> 2 & 1) == 0) {
      puVar17 = (uint *)param_1[0x4c];
      uVar9 = ((ulonglong)(uint)param_1[0x4d] & 0x1f) << 5 | uVar9;
      uVar8 = (uint)uVar9;
      if ((param_1[0x4d] & 0x1fU) != 0) {
        do {
          uVar8 = 1 << (*puVar17 >> 8 & 0xf) & 0xffffU | uVar13;
          uVar6 = (ulonglong)(byte)(&lbl_831E798C)[*puVar17 >> 0xc & 0xf] * 0x400 + uVar9 & 0x1fc00;
          uVar15 = uVar9 & 0xfffe03ff | uVar6;
          if (uVar8 != uVar13) {
            uVar15 = uVar9 & 0xfffe03e0 | uVar6 | uVar15 + 1 & 0xffffffff0000001f;
            uVar13 = uVar8;
          }
          uVar8 = (uint)uVar15;
          uVar16 = uVar16 + 1;
          puVar17 = puVar17 + 1;
          uVar9 = uVar15;
        } while ((uVar16 & 0xffffffff) < (uVar15 >> 5 & 0x1f));
      }
    }
    else {
      puVar17 = (uint *)param_1[0x43];
      uVar9 = ((ulonglong)(uint)param_1[0x44] & 0x1f) << 5 | uVar9;
      uVar8 = (uint)uVar9;
      if ((param_1[0x44] & 0x1fU) != 0) {
        do {
          uVar8 = 1 << (*puVar17 >> 0x14 & 0xf) & 0xffffU | uVar13;
          uVar6 = (ulonglong)(byte)(&lbl_831E798C)[*puVar17 >> 0x10 & 0xf] * 0x400 + uVar9 & 0x1fc00
          ;
          uVar15 = uVar9 & 0xfffe03ff | uVar6;
          if (uVar8 != uVar13) {
            uVar15 = uVar9 & 0xfffe03e0 | uVar6 | uVar15 + 1 & 0xffffffff0000001f;
            uVar13 = uVar8;
          }
          uVar8 = (uint)uVar15;
          uVar16 = uVar16 + 1;
          puVar17 = puVar17 + 1;
          uVar9 = uVar15;
        } while ((uVar16 & 0xffffffff) < (uVar15 >> 5 & 0x1f));
      }
    }
    param_2[5] = uVar8;
    uVar9 = ~(ulonglong)*(uint *)(*param_1 + 0x4db4);
    if ((*(uint *)(*param_1 + 0x4db4) >> 2 & 1) == 0) {
      uVar9 = (uVar9 & 0xffffffff) >> 7 & 1;
      if (uVar9 == 0) {
        uStack_60 = *(ushort *)(param_1 + 0x16) & 1;
      }
      uVar8 = (uStack_60 & 1) << 0x10 | param_1[0x16] & 0x87f00000U;
      if (uVar9 == 0) {
        uStack_5c = (uint)param_1[0x17] >> 0x12 & 1;
      }
      uVar13 = (uStack_5c & 1) << 0x12;
    }
    else {
      if (((uVar9 & 0xffffffff) >> 7 & 1) == 0) {
        uStack_60 = (uint)param_1[0x16] >> 0x11 & 1;
      }
      uVar8 = (uStack_60 & 1) << 0x11 | param_1[0x16] & 0x780c0000U;
      uVar13 = (param_1[0x54] & 3U) << 2 | param_1[0x17] & 0xff02U;
    }
    param_2[2] = uVar8;
    param_2[3] = uVar13;
  }
  return;
}

