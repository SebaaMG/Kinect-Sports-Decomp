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


ulonglong fn_82A3AD78(longlong param_1,uint param_2)

{
  uint uVar1;
  int *piVar3;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar8;
  longlong lVar7;
  int iVar10;
  longlong lVar9;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  
  piVar3 = (int *)param_1;
  iVar4 = (uint)*(ushort *)(*piVar3 + param_2) * 4;
  uVar1 = *(uint *)(iVar4 + piVar3[2]);
  *(uint *)(iVar4 + piVar3[2]) = param_2;
  uVar13 = (param_2 - piVar3[1]) + 4;
  iVar4 = param_2 * 4;
  if (uVar1 <= uVar13) {
    *(undefined4 *)(piVar3[4] + iVar4) = 0;
    *(undefined4 *)(piVar3[3] + iVar4) = 0;
    return 0;
  }
  uVar2 = 2;
  iVar10 = 2;
  piVar3[0x14] = (param_2 - uVar1) + 2;
  iVar11 = 2;
  iVar16 = 2;
  puVar15 = (uint *)(iVar4 + piVar3[3]);
  puVar14 = (uint *)(piVar3[4] + iVar4);
  do {
    iVar8 = iVar10 + uVar1;
    lVar6 = (ulonglong)*(byte *)(*piVar3 + iVar8) - (ulonglong)*(byte *)(*piVar3 + iVar10 + param_2)
    ;
    iVar4 = iVar10;
    if (lVar6 == 0) {
      iVar5 = (iVar8 - uVar1) + param_2;
      do {
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 1;
        if (0x100 < iVar4) goto LAB_82a3ae6c;
        lVar6 = (ulonglong)*(byte *)((iVar8 - iVar10) + *piVar3 + iVar4) -
                (ulonglong)*(byte *)(iVar5 + *piVar3);
      } while (lVar6 == 0);
    }
    if ((int)lVar6 < 0) {
      if (iVar16 < iVar4) {
        if ((int)uVar2 < iVar4) {
LAB_82a3ae6c:
          lVar6 = (uVar2 + 0x12 & 0x3fffffff) * 4 + param_1;
          do {
            uVar2 = uVar2 + 1;
            lVar6 = lVar6 + 4;
            *(int *)lVar6 = (param_2 - uVar1) + 2;
          } while ((int)uVar2 < iVar4);
          if (0x31 < iVar4) {
LAB_82a3b094:
            *puVar15 = *(uint *)(uVar1 * 4 + piVar3[3]);
            *puVar14 = *(uint *)(piVar3[4] + uVar1 * 4);
            goto LAB_82a3af34;
          }
        }
        iVar10 = iVar11;
        iVar16 = iVar4;
        if (iVar4 <= iVar11) {
          iVar10 = iVar4;
        }
      }
      *puVar14 = uVar1;
      iVar4 = piVar3[3];
      puVar14 = (uint *)(uVar1 * 4 + iVar4);
    }
    else {
      if (iVar11 < iVar4) {
        if ((int)uVar2 < iVar4) {
          lVar6 = (uVar2 + 0x12 & 0x3fffffff) * 4 + param_1;
          do {
            uVar2 = uVar2 + 1;
            lVar6 = lVar6 + 4;
            *(int *)lVar6 = (param_2 - uVar1) + 2;
          } while ((int)uVar2 < iVar4);
          if (0x31 < iVar4) goto LAB_82a3b094;
        }
        iVar10 = iVar4;
        iVar11 = iVar4;
        if (iVar16 <= iVar4) {
          iVar10 = iVar16;
        }
      }
      *puVar15 = uVar1;
      iVar4 = piVar3[4];
      puVar15 = (uint *)(uVar1 * 4 + iVar4);
    }
    uVar1 = *(uint *)(uVar1 * 4 + iVar4);
  } while (uVar13 < uVar1);
  *puVar15 = 0;
  *puVar14 = 0;
LAB_82a3af34:
  lVar6 = 0;
  iVar4 = (int)uVar2;
  if (0 < iVar4) {
    do {
      if (*(char *)(*piVar3 + param_2 + (int)lVar6) !=
          *(char *)((*piVar3 - piVar3[0xf]) + (int)lVar6 + param_2)) break;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar4);
  }
  iVar10 = (int)lVar6;
  if (1 < iVar10) {
    lVar7 = (lVar6 + 0x13U & 0x3fffffff) * 4 + param_1;
    lVar9 = lVar6;
    do {
      lVar9 = lVar9 + -1;
      lVar7 = lVar7 + -4;
      *(undefined4 *)lVar7 = 0;
    } while (1 < (int)lVar9);
    if (0x32 < iVar10) goto LAB_82a3b068;
  }
  iVar11 = 0;
  if (0 < iVar4) {
    do {
      if (*(char *)(*piVar3 + param_2 + iVar11) !=
          *(char *)((*piVar3 - piVar3[0x10]) + iVar11 + param_2)) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar4);
  }
  if (iVar10 < iVar11) {
    lVar7 = (lVar6 + 0x12U & 0x3fffffff) * 4 + param_1;
    do {
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 4;
      *(undefined4 *)lVar7 = 1;
    } while ((int)lVar6 < iVar11);
  }
  iVar10 = 0;
  if (0 < iVar4) {
    do {
      if (*(char *)(*piVar3 + param_2 + iVar10) !=
          *(char *)((*piVar3 - piVar3[0x11]) + iVar10 + param_2)) break;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar4);
  }
  if ((int)lVar6 < iVar10) {
    param_1 = (lVar6 + 0x12U & 0x3fffffff) * 4 + param_1;
    do {
      lVar6 = lVar6 + 1;
      param_1 = param_1 + 4;
      *(undefined4 *)param_1 = 2;
    } while ((int)lVar6 < iVar10);
  }
LAB_82a3b068:
  uVar12 = -((ulonglong)param_2 & 0x7fff) + 0x7fff;
  if ((int)uVar12 < iVar4) {
    uVar2 = -(ulonglong)(-((ulonglong)param_2 & 0x7fff) + 0x7ffd < 0xffffffff7ffffffe) & uVar12;
  }
  return uVar2;
}

