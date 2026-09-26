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
extern unsigned int *auStack_264;
extern unsigned int *auStack_280;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D2C3F8();
extern unsigned int uStack_268;
extern unsigned int uStack_26c;


longlong fn_82D2D510(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 **ppuVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 **ppuVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  undefined1 **ppuVar20;
  undefined1 auStack_280 [16];
  undefined1 *puStack_270;
  uint uStack_26c;
  uint uStack_268;
  undefined1 auStack_264 [612];
  
  for (puVar12 = *(undefined4 **)(param_1 + 0x34); puVar12 != (undefined4 *)0x0;
      puVar12 = (undefined4 *)*puVar12) {
    *(ushort *)(puVar12 + 8) = *(ushort *)(puVar12 + 8) | 0xfff;
  }
  puStack_270 = auStack_264;
  uStack_268 = 0x80000040;
  uStack_26c = 0;
  iVar9 = fn_82D2C3F8(auStack_280,param_1,0,0);
  iVar10 = fn_82CE5410();
  if (uStack_26c == (uStack_268 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar10 + 0x10),&puStack_270,8);
  }
  puVar12 = (undefined4 *)(puStack_270 + uStack_26c * 8);
  if (puVar12 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(iVar9 + 4);
    puVar12[1] = *(undefined4 *)(iVar9 + 8);
    *puVar12 = uVar1;
  }
  uStack_26c = uStack_26c + 1;
  lVar17 = -1;
  ppuVar8 = &puStack_270;
  ppuVar15 = (undefined1 **)(param_1 + 0x40);
  do {
    ppuVar20 = ppuVar8;
    lVar16 = lVar17;
    lVar17 = lVar16 + 1;
    ppuVar15[1] = (undefined1 *)0x0;
    do {
      iVar9 = *(int *)(*ppuVar20 + (int)ppuVar20[1] * 8 + -8);
      ppuVar20[1] = ppuVar20[1] + -1;
      if ((*(ushort *)(iVar9 + 0x20) & 0xfff) == 0xfff) {
        puVar19 = (uint *)(iVar9 + 0x14);
        lVar18 = 3;
        *(ushort *)(iVar9 + 0x20) = (ushort)lVar17 & 0xfff | *(ushort *)(iVar9 + 0x20) & 0xf000;
        do {
          uVar5 = *puVar19 & 0xfffffffc;
          uVar6 = *puVar19 & 3;
          if ((uVar5 != 0) && ((*(ushort *)(uVar5 + 0x20) & 0xfff) == 0xfff)) {
            iVar2 = *(int *)((uVar6 + 2) * 4 + uVar5);
            iVar3 = *(int *)(((-(uint)(uVar6 != 2) & uVar6 + 1) + 2) * 4 + uVar5);
            iVar9 = *(int *)(iVar2 + 8);
            iVar10 = *(int *)(iVar3 + 8);
            if ((iVar9 < iVar10) ||
               ((iVar9 <= iVar10 &&
                ((iVar9 = *(int *)(iVar2 + 0xc), iVar10 = *(int *)(iVar3 + 0xc), iVar9 < iVar10 ||
                 (iVar9 <= iVar10)))))) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if ((bVar7) || (bVar7 = false, (*(uint *)((uVar6 + 5) * 4 + uVar5) & 0xfffffffc) == 0))
            {
              bVar7 = true;
            }
            uVar11 = uVar5;
            uVar13 = uVar6;
            if (!bVar7) {
              uVar13 = *(uint *)((uVar6 + 5) * 4 + uVar5);
              uVar11 = uVar13 & 0xfffffffc;
              uVar13 = uVar13 & 3;
            }
            if (((uint)(*(ushort *)(uVar11 + 0x20) >> 0xd) & 1 << uVar13) == 0) {
              iVar9 = fn_82CE5410();
              if (ppuVar20[1] == (undefined1 *)((uint)ppuVar20[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),ppuVar20,8);
              }
              puVar14 = (uint *)(*ppuVar20 + (int)ppuVar20[1] * 8);
              if (puVar14 != (uint *)0x0) {
                *puVar14 = uVar5;
                puVar14[1] = uVar6;
              }
              ppuVar20[1] = ppuVar20[1] + 1;
            }
            else {
              iVar9 = fn_82CE5410();
              if (ppuVar15[1] == (undefined1 *)((uint)ppuVar15[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),ppuVar15,8);
              }
              puVar14 = (uint *)(*ppuVar15 + (int)ppuVar15[1] * 8);
              if (puVar14 != (uint *)0x0) {
                *puVar14 = uVar5;
                puVar14[1] = uVar6;
              }
              ppuVar15[1] = ppuVar15[1] + 1;
            }
          }
          lVar18 = lVar18 + -1;
          puVar19 = puVar19 + 1;
        } while (lVar18 != 0);
      }
    } while (0 < (int)ppuVar20[1]);
    ppuVar4 = ppuVar15 + 1;
    ppuVar8 = ppuVar15;
    ppuVar15 = ppuVar20;
  } while (0 < (int)*ppuVar4);
  iVar9 = fn_82CE5410();
  uStack_26c = 0;
  if ((uStack_268 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar9 + 0x10) + 0x10))
              (*(int **)(iVar9 + 0x10),puStack_270,uStack_268 & 0x3fffffff,8);
  }
  return lVar16 + 2;
}

