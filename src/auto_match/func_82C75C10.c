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
extern int fn_82CA6740();
extern int fn_82CA6768();
extern unsigned int lbl_820FC450;


void fn_82C75C10(int param_1)

{
  int iVar1;
  uint uVar3;
  uint uVar4;
  ulonglong uVar2;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  
  lVar11 = 0;
  puVar9 = (uint *)(*(int *)(param_1 + 0x50d0) * 0x90 + *(int *)(param_1 + 0x170) + -4);
  do {
    iVar10 = *(int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
    uVar3 = fn_82CA6740(lVar11,6);
    if ((iVar10 == 0) || (iVar7 = 1, uVar3 != 5)) {
      iVar7 = 0;
    }
    iVar8 = *(int *)(&lbl_820FC450 + uVar3 * 4);
    uVar4 = fn_82CA6768(lVar11,6);
    if ((iVar10 == 0) || (lVar5 = 1, uVar4 != 5)) {
      lVar5 = 0;
    }
    uVar6 = (((ulonglong)*(uint *)(&lbl_820FC450 + uVar4 * 4) - lVar5 & 0xffffffff) >> 0x1f) - 1 &
            (ulonglong)*(uint *)(&lbl_820FC450 + uVar4 * 4) - lVar5;
    lVar11 = lVar11 + 1;
    puVar9 = puVar9 + 1;
    *puVar9 = (1 << ((uint)uVar6 & 0x3f)) * 0x1000000 - 0x1000000U |
              (1 << (uVar3 & 0x3f)) * 0x100 - 0x100U | (1 << (uVar4 & 0x3f)) * 0x10000 - 0x10000U |
              (uint)((uVar6 & 0xffffffff) << 4) & 0xf0 |
              0xffffffffU - (iVar8 - iVar7 >> 0x1f) & iVar8 - iVar7 & 0xf;
  } while ((int)lVar11 < 0x24);
  lVar11 = 0;
  iVar10 = 0;
  do {
    iVar7 = *(int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
    uVar6 = fn_82CA6740(lVar11,6);
    if ((iVar7 == 0) || (iVar8 = 1, (int)uVar6 != 5)) {
      iVar8 = 0;
    }
    iVar1 = *(int *)(&lbl_820FC450 + (int)((uVar6 & 0xffffffff) << 2));
    uVar2 = fn_82CA6768(lVar11,6);
    if ((iVar7 == 0) || (lVar5 = 1, (int)uVar2 != 5)) {
      lVar5 = 0;
    }
    lVar11 = lVar11 + 1;
    *(ushort *)(iVar10 + *(int *)(param_1 + 0x16c)) =
         (ushort)(((uVar2 & 0xfffffff) << 4 |
                  (((ulonglong)*(uint *)(&lbl_820FC450 + (int)((uVar2 & 0xffffffff) << 2)) - lVar5 &
                   0xffffffff) >> 0x1f) - 1 &
                  (ulonglong)*(uint *)(&lbl_820FC450 + (int)((uVar2 & 0xffffffff) << 2)) - lVar5 &
                  0xffffffff) << 8) |
         (ushort)((uVar6 & 0xffffffff) << 4) |
         -(short)(iVar1 - iVar8 >> 0x1f) - 1U & (ushort)(iVar1 - iVar8);
    iVar10 = iVar10 + 2;
  } while (iVar10 < 0x48);
  return;
}

