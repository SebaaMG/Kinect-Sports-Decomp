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
extern int fn_82AF62F8();
extern int fn_82AF6A18();
extern int fn_82B857D8();
extern int fn_82B8D2B8();


/* WARNING: Type propagation algorithm not settling */

longlong fn_82AF71C8(int *param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  char cVar13;
  longlong lVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar17;
  longlong lVar16;
  uint uVar18;
  int *piVar19;
  
  puVar2 = (uint *)param_1[1];
  puVar3 = (uint *)param_2[1];
  if (puVar2 == (uint *)0x0) {
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
  }
  else if (puVar3 != (uint *)0x0) {
    piVar4 = (int *)puVar2[3];
    piVar5 = (int *)puVar3[3];
    lVar11 = ((ulonglong)*puVar2 & 0x1e) - ((ulonglong)*puVar3 & 0x1e);
    if (lVar11 != 0) {
      return lVar11;
    }
    if (piVar4 == piVar5) {
      return 0;
    }
    uVar18 = piVar5[2];
    uVar17 = piVar4[2];
    lVar11 = ((ulonglong)(uVar17 >> 7) & 0x7f) - ((ulonglong)(uVar18 >> 7) & 0x7f);
    if ((lVar11 == 0) && (lVar11 = ((ulonglong)uVar17 & 1) - ((ulonglong)uVar18 & 1), lVar11 == 0))
    {
      lVar11 = ((ulonglong)(uVar17 >> 0x17) & 1) - ((ulonglong)(uVar18 >> 0x17) & 1);
    }
    uVar6 = *(undefined4 *)(*(int *)((uint)piVar4 & 0xfffff000) + 0x94);
    if ((int)lVar11 != 0) {
      return lVar11;
    }
    if (((uVar17 >> 0x17 & 1) != 0) && (cVar13 = fn_82AF6A18(uVar6,piVar4,piVar5), cVar13 == '\0')
       ) {
      lVar12 = fn_82AF62F8(piVar4,piVar5);
      lVar11 = 0;
      if (lVar12 != 0) {
        return lVar12;
      }
    }
    uVar18 = (uint)piVar4[2] >> 0x13 & 7;
    bVar1 = (piVar4[2] & 0x3f80U) == 0x3200;
    if (bVar1) {
      uVar18 = 1;
    }
    uVar17 = (uint)bVar1;
    if (uVar17 < uVar18) {
      piVar19 = piVar5 + uVar17 + 0xb;
      do {
        puVar2 = *(uint **)(((int)piVar4 - (int)piVar5) + (int)piVar19);
        uVar7 = puVar2[3];
        uVar8 = ((uint *)*piVar19)[3];
        if (uVar7 != uVar8) {
          uVar9 = *(uint *)(uVar7 + 8);
          uVar15 = (ulonglong)(*(uint *)(uVar8 + 8) >> 7) & 0x7f;
          uVar14 = (ulonglong)(uVar9 >> 7) & 0x7f;
          lVar11 = uVar14 - uVar15;
          if (lVar11 != 0) {
            if ((uVar14 == 0x7d) || (lVar12 = 0, uVar14 == 0x7c)) {
              lVar12 = 1;
            }
            if ((uVar15 == 0x7d) || (lVar16 = 0, uVar15 == 0x7c)) {
              lVar16 = 1;
            }
            if ((lVar12 != lVar16) ||
               ((uint)LZCOUNT((int)uVar14 + -0x7d) >> 5 != (uint)LZCOUNT((int)uVar15 + -0x7d) >> 5))
            break;
          }
          if (uVar14 != 0x7d) {
            lVar11 = ((ulonglong)*puVar2 & 0x1e) - ((ulonglong)*(uint *)*piVar19 & 0x1e);
            if (lVar11 != 0) {
              return lVar11;
            }
            if (uVar14 == 0x7c) {
              lVar11 = fn_82AF62F8(uVar7,uVar8);
              if (lVar11 != 0) {
                return lVar11;
              }
LAB_82af73d0:
              lVar11 = 0;
              if ((*(uint *)(uVar7 + 8) >> 0xe & 7) + (*(uint *)(uVar8 + 8) >> 0xe & 7) < 5)
              goto LAB_82af73ec;
            }
            else {
              lVar11 = ((ulonglong)(uVar9 >> 0x17) & 1) -
                       ((ulonglong)(*(uint *)(uVar8 + 8) >> 0x17) & 1);
              if (lVar11 != 0) {
                return lVar11;
              }
              if (((uVar9 >> 0x17 & 1) == 0) ||
                 (cVar13 = fn_82AF6A18(uVar6,uVar7,uVar8), cVar13 != '\0')) goto LAB_82af73d0;
            }
            lVar11 = fn_82AF62F8(uVar7,uVar8);
            break;
          }
        }
LAB_82af73ec:
        uVar17 = uVar17 + 1;
        piVar19 = piVar19 + 1;
      } while (uVar17 < uVar18);
      if ((int)lVar11 != 0) {
        return lVar11;
      }
    }
    cVar13 = fn_82B857D8(piVar4,piVar5);
    if (cVar13 == '\0') {
      lVar12 = fn_82AF62F8(piVar4,piVar5);
      lVar11 = 0;
      if (lVar12 != 0) {
        return lVar12;
      }
    }
    iVar10 = *piVar5;
    do {
      if (iVar10 == 0) {
        bVar1 = false;
LAB_82af746c:
        if ((!bVar1) && (cVar13 = fn_82B8D2B8(uVar6,piVar4,piVar5,1,1), cVar13 != '\0')) {
          return lVar11;
        }
        lVar11 = fn_82AF62F8(piVar4,piVar5);
        return lVar11;
      }
      if (*(int **)(iVar10 + 0xc) == piVar4) {
        bVar1 = true;
        goto LAB_82af746c;
      }
      iVar10 = *(int *)(iVar10 + 4);
    } while( true );
  }
  lVar11 = fn_82AF62F8(*(undefined4 *)(*param_1 + 0xc),*(undefined4 *)(*param_2 + 0xc));
  return lVar11;
}

