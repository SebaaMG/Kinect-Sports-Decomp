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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_825275B0();
extern int fn_82630B08();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822B9440(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 in_r0;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  piVar11 = param_1 + 4;
  piVar12 = param_1 + 0x24;
  lVar10 = 2;
  piVar13 = piVar11;
  do {
    if (*piVar13 != 0) {
      *piVar12 = *piVar13;
      *(undefined2 *)(piVar12 + 1) = *(undefined2 *)(piVar13 + 2);
      iVar2 = *piVar12;
      if (*(int *)(*(int *)(*param_1 + 0x8c0) + 0x90) != 0) {
        uVar7 = 0;
        piVar14 = piVar11;
LAB_822b94b0:
        if (*piVar14 != iVar2) break;
        *(undefined4 *)(iVar2 + 0x1b4) = 0;
        lVar15 = 2;
        puVar8 = (uint *)(iVar2 + 0x1dc);
        *(undefined1 *)(param_1 + (uVar7 + 1) * 0x10) = 1;
        do {
          puVar3 = puVar8 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar3 & 0xfffffffd;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        goto LAB_822b950c;
      }
      fn_825275B0();
LAB_822b950c:
      iVar2 = *piVar12;
      lVar15 = 2;
      piVar14 = piVar11;
      do {
        if (*piVar14 == iVar2) {
          *piVar14 = 0;
          piVar14[1] = -1;
          *(undefined2 *)(piVar14 + 2) = 0x5b;
          *(undefined1 *)(piVar14 + 0xc) = 0;
          *(undefined1 *)((int)piVar14 + 0x31) = 0;
          puVar4 = (undefined4 *)((uint)(piVar14 + 8) & 0xfffffff0);
          *puVar4 = in_register_000104d0;
          puVar4[1] = in_register_000104d4;
          puVar4[2] = in_register_000104d8;
          puVar4[3] = in_vr77;
          *(undefined1 *)((int)piVar14 + 0x32) = 0;
          piVar14[0xd] = 0;
          piVar14[0xe] = 0;
        }
        piVar14 = piVar14 + 0x10;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 4;
      piVar14 = (int *)(*(int *)(*piVar12 + 0x8c0) + 0x80);
      do {
        uVar1 = *(ushort *)((int *)*piVar14 + 2);
        iVar2 = *(int *)*piVar14;
        if (uVar1 != 0) {
          iVar9 = iVar2 + 0x20;
          uVar16 = (ulonglong)uVar1;
          do {
            puVar4 = (undefined4 *)((int)&lbl_8329EAD0 + (int)in_r0 & 0xfffffff0);
            uVar17 = puVar4[1];
            uVar18 = puVar4[2];
            uVar19 = puVar4[3];
            puVar5 = (undefined4 *)(iVar9 - 0x20U & 0xfffffff0);
            *puVar5 = *puVar4;
            puVar5[1] = uVar17;
            puVar5[2] = uVar18;
            puVar5[3] = uVar19;
            uVar19 = uRam8329eaec;
            uVar18 = uRam8329eae8;
            uVar17 = uRam8329eae4;
            puVar4 = (undefined4 *)(iVar9 - 0x10U & 0xfffffff0);
            *puVar4 = lbl_8329EAE0;
            puVar4[1] = uVar17;
            puVar4[2] = uVar18;
            puVar4[3] = uVar19;
            uVar19 = uRam8329eafc;
            uVar18 = uRam8329eaf8;
            uVar17 = uRam8329eaf4;
            puVar4 = (undefined4 *)((int)in_r0 + iVar9 & 0xfffffff0);
            *puVar4 = lbl_8329EAF0;
            puVar4[1] = uVar17;
            puVar4[2] = uVar18;
            puVar4[3] = uVar19;
            uVar19 = uRam8329eb0c;
            uVar18 = uRam8329eb08;
            uVar17 = uRam8329eb04;
            puVar4 = (undefined4 *)(iVar9 + 0x10U & 0xfffffff0);
            *puVar4 = lbl_8329EB00;
            puVar4[1] = uVar17;
            puVar4[2] = uVar18;
            puVar4[3] = uVar19;
            iVar9 = iVar9 + 0x40;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        lVar6 = (ulonglong)uVar1 * 0x40;
        for (uVar16 = CONCAT44(iVar2,iVar2) & 0xffffffffffffff7f; (int)uVar16 < (int)lVar6 + iVar2;
            uVar16 = uVar16 + 0x80) {
          dataCacheBlockFlush(uVar16);
        }
        fn_82630B08(lbl_8320A898,iVar2,lVar6,0);
        lVar15 = lVar15 + -1;
        piVar14 = piVar14 + 1;
      } while (lVar15 != 0);
      *piVar13 = 0;
      piVar13[1] = -1;
      *(undefined2 *)(piVar13 + 2) = 0x5b;
      *(undefined1 *)(piVar13 + 0xc) = 0;
      *(undefined1 *)((int)piVar13 + 0x31) = 0;
      *(undefined1 *)((int)piVar13 + 0x32) = 0;
      piVar13[0xd] = 0;
    }
    lVar10 = lVar10 + -1;
    piVar12 = piVar12 + 2;
    piVar13 = piVar13 + 0x10;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
  uVar7 = uVar7 + 1;
  piVar14 = piVar14 + 0x10;
  if (1 < uVar7) goto LAB_822b950c;
  goto LAB_822b94b0;
}

