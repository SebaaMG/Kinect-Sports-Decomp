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
extern int fn_82964628();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


uint fn_82965C70(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                  int *param_7)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  double dVar17;
  
  iVar13 = *(int *)(param_1 + 0x14);
  puVar2 = *(uint **)(param_2 * 4 + iVar13);
  if (puVar2[2] != 0xffffffff) {
    return 0x80004005;
  }
  if ((*puVar2 & 1) == 0) {
    return 0x80004005;
  }
  iVar15 = *(int *)(param_1 + 0x10);
  if ((*(uint *)(*(int *)(puVar2[1] * 4 + iVar15) + 4) & 2) == 0) {
    return 0x80004005;
  }
  uVar16 = 0;
  iVar14 = *(int *)(param_1 + 0x18);
  puVar2 = *(uint **)(puVar2[0x12] * 4 + iVar14);
  uVar10 = (ulonglong)puVar2[3];
  if (uVar10 != 0) {
    iVar9 = 0;
    do {
      if (*(int *)(puVar2[4] + iVar9) == param_2) break;
      uVar16 = uVar16 + 1;
      iVar9 = iVar9 + 4;
    } while ((uVar16 & 0xffffffff) < uVar10);
  }
  if ((uVar16 & 0xffffffff) == uVar10) {
    return 0x80004005;
  }
  uVar6 = *puVar2 & 0xfff00000;
  if (uVar6 == 0x10000000) {
    uVar6 = fn_82965C70(param_1,*(undefined4 *)((int)((uVar16 & 0xffffffff) << 2) + puVar2[2]),
                          param_3,param_4,param_5,param_6,param_7);
    return (int)uVar6 >> 0x1f & uVar6;
  }
  if (uVar6 == 0x20500000) {
    iVar13 = *(int *)((int)((uVar16 & 0xffffffff) << 2) + puVar2[2]);
    iVar15 = *(int *)((int)((uVar10 + uVar16 & 0xffffffff) << 2) + puVar2[2]);
    uVar6 = fn_82965C70(param_1,iVar13,param_3,param_4,param_5,param_6,param_7);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    if (iVar13 == iVar15) {
      return 0;
    }
    uVar6 = fn_82965C70(param_1,iVar15,param_3,param_4,param_5,param_6,param_7);
    if (-1 < (int)uVar6) {
      return 0;
    }
    return uVar6;
  }
  if (uVar6 == 0x20200000) {
    iVar14 = *param_3;
    iVar9 = *(int *)((int)((uVar16 & 0xffffffff) << 2) + puVar2[2]);
    iVar8 = *(int *)((int)((uVar10 + uVar16 & 0xffffffff) << 2) + puVar2[2]);
    if ((iVar14 == -1) || (iVar8 == iVar14)) {
      iVar7 = *(int *)(iVar13 + iVar9 * 4);
      if (((*(uint *)(*(int *)(*(int *)(iVar7 + 4) * 4 + iVar15) + 4) & 0x100) != 0) &&
         (*(int *)(iVar7 + 8) == -1)) {
        if ((*param_4 != -1) &&
           (*(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4) + 0x20) <=
            *(double *)(*(int *)(*param_4 * 4 + *(int *)(param_1 + 0x14)) + 0x20))) {
          return 0;
        }
        *param_3 = iVar8;
        *param_4 = iVar9;
        return 0;
      }
    }
    if ((iVar14 != -1) && (iVar9 != iVar14)) {
      return 0x80004005;
    }
    iVar13 = *(int *)(iVar13 + iVar8 * 4);
    if ((*(uint *)(*(int *)(*(int *)(iVar13 + 4) * 4 + iVar15) + 4) & 0x100) == 0) {
      return 0x80004005;
    }
    if (*(int *)(iVar13 + 8) != -1) {
      return 0x80004005;
    }
    if ((*param_7 != -1) &&
       (*(double *)(*(int *)(*param_7 * 4 + *(int *)(param_1 + 0x14)) + 0x20) <=
        *(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar8 * 4) + 0x20))) {
      return 0;
    }
    *param_3 = iVar9;
    goto LAB_82966320;
  }
  if (uVar6 == 0x20300000) {
    iVar14 = *param_3;
    iVar9 = *(int *)((int)((uVar16 & 0xffffffff) << 2) + puVar2[2]);
    iVar8 = *(int *)((int)((uVar10 + uVar16 & 0xffffffff) << 2) + puVar2[2]);
    if ((iVar14 == -1) || (iVar8 == iVar14)) {
      iVar7 = *(int *)(iVar13 + iVar9 * 4);
      if (((*(uint *)(*(int *)(*(int *)(iVar7 + 4) * 4 + iVar15) + 4) & 0x100) != 0) &&
         (*(int *)(iVar7 + 8) == -1)) {
        if ((*param_6 != -1) &&
           (*(double *)(*(int *)(*param_6 * 4 + *(int *)(param_1 + 0x14)) + 0x20) <=
            *(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4) + 0x20))) {
          return 0;
        }
        *param_3 = iVar8;
        *param_6 = iVar9;
        return 0;
      }
    }
    if ((iVar14 != -1) && (iVar9 != iVar14)) {
      return 0x80004005;
    }
    iVar13 = *(int *)(iVar13 + iVar8 * 4);
    if ((*(uint *)(*(int *)(*(int *)(iVar13 + 4) * 4 + iVar15) + 4) & 0x100) == 0) {
      return 0x80004005;
    }
    if (*(int *)(iVar13 + 8) != -1) {
      return 0x80004005;
    }
    if ((*param_5 != -1) &&
       (*(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar8 * 4) + 0x20) <=
        *(double *)(*(int *)(*param_5 * 4 + *(int *)(param_1 + 0x14)) + 0x20))) {
      return 0;
    }
    *param_3 = iVar9;
    goto LAB_829662e8;
  }
  if (uVar6 != 0x30000000) {
    return 0x80004005;
  }
  iVar9 = *(int *)(*(int *)((int)((puVar2[3] + uVar16 & 0xffffffff) << 2) + puVar2[2]) * 4 +
                  *(int *)(param_1 + 0x14));
  iVar8 = *(int *)(*(int *)((int)((((ulonglong)puVar2[3] & 0x7fffffff) * 2 + uVar16 & 0xffffffff) <<
                                 2) + puVar2[2]) * 4 + *(int *)(param_1 + 0x14));
  if ((*(uint *)(*(int *)(*(int *)(iVar9 + 4) * 4 + iVar15) + 4) & 0x100) == 0) {
    return 0x80004005;
  }
  if (*(int *)(iVar9 + 8) != -1) {
    return 0x80004005;
  }
  if ((*(uint *)(*(int *)(*(int *)(iVar8 + 4) * 4 + iVar15) + 4) & 0x100) == 0) {
    return 0x80004005;
  }
  if (*(int *)(iVar8 + 8) != -1) {
    return 0x80004005;
  }
  if ((*(double *)(iVar9 + 0x20) != lbl_82005710) || (*(double *)(iVar8 + 0x20) != lbl_82005758)) {
    if (*(double *)(iVar9 + 0x20) != lbl_82005758) {
      return 0x80004005;
    }
    if (*(double *)(iVar8 + 0x20) != lbl_82005710) {
      return 0x80004005;
    }
  }
  iVar8 = *(int *)((int)((uVar16 & 0xffffffff) << 2) + puVar2[2]);
  iVar7 = *(int *)(iVar8 * 4 + iVar13);
  if ((*(uint *)(*(int *)(*(int *)(iVar7 + 4) * 4 + iVar15) + 4) & 2) == 0) {
    return 0x80004005;
  }
  puVar2 = *(uint **)(*(int *)(iVar7 + 0x48) * 4 + iVar14);
  uVar6 = *puVar2 & 0xfff00000;
  if ((uVar6 != 0x20400000) && (uVar6 != 0x10100000)) {
    return 0x80004005;
  }
  uVar1 = puVar2[3];
  uVar10 = 0;
  if (uVar1 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(iVar7 + puVar2[4]) == iVar8) break;
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 4;
    } while ((uVar10 & 0xffffffff) < (ulonglong)uVar1);
  }
  iVar7 = 0;
  iVar8 = 0;
  dVar17 = lbl_82005758;
  if (uVar6 != 0x10100000) {
    uVar6 = 0;
    iVar12 = 1;
    do {
      iVar3 = *(int *)((int)(((longlong)iVar12 * (longlong)(int)uVar1 + uVar10 & 0xffffffff) << 2) +
                      puVar2[2]);
      iVar4 = *(int *)(iVar3 * 4 + iVar13);
      if (((*(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + iVar15) + 4) & 2) != 0) &&
         (puVar5 = *(uint **)(*(int *)(iVar4 + 0x48) * 4 + iVar14),
         (*puVar5 & 0xfff00000) == 0x10100000)) {
        uVar11 = 0;
        if (puVar5[3] == 0) goto LAB_82966240;
        iVar13 = 0;
        goto LAB_82966224;
      }
      uVar6 = uVar6 + 1;
      iVar12 = iVar12 + -1;
    } while (uVar6 < 2);
    goto LAB_8296625c;
  }
  iVar7 = fn_82964628(param_1,*(undefined4 *)(param_1 + 0x78),0,0);
  iVar8 = *(int *)((int)((uVar10 & 0xffffffff) << 2) + puVar2[2]);
  if (iVar7 == -1) {
    return 0x8007000e;
  }
  goto LAB_82966264;
  while( true ) {
    uVar11 = uVar11 + 1;
    iVar13 = iVar13 + 4;
    if (puVar5[3] <= uVar11) break;
LAB_82966224:
    if (iVar3 == *(int *)(iVar13 + puVar5[4])) break;
  }
LAB_82966240:
  iVar8 = *(int *)(uVar11 * 4 + puVar5[2]);
  iVar7 = *(int *)((int)(((longlong)(int)uVar1 * (longlong)(int)uVar6 + uVar10 & 0xffffffff) << 2) +
                  puVar2[2]);
LAB_8296625c:
  if (uVar6 == 2) {
    return 0x80004005;
  }
LAB_82966264:
  iVar13 = *param_3;
  if ((iVar13 == -1) || (iVar7 == iVar13)) {
    iVar14 = iVar8 * 4;
    iVar15 = *(int *)(iVar14 + *(int *)(param_1 + 0x14));
    if (((*(uint *)(*(int *)(*(int *)(iVar15 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0
        ) && (*(int *)(iVar15 + 8) == -1)) {
      if (*(double *)(iVar9 + 0x20) == dVar17) {
        if ((*param_5 != -1) &&
           (*(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar14) + 0x20) <=
            *(double *)(*(int *)(*param_5 * 4 + *(int *)(param_1 + 0x14)) + 0x20))) {
          return 0;
        }
        *param_3 = iVar7;
LAB_829662e8:
        *param_5 = iVar8;
        return 0;
      }
      if ((*param_7 != -1) &&
         (*(double *)(*(int *)(*param_7 * 4 + *(int *)(param_1 + 0x14)) + 0x20) <=
          *(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar14) + 0x20))) {
        return 0;
      }
      *param_3 = iVar7;
LAB_82966320:
      *param_7 = iVar8;
      return 0;
    }
  }
  if ((iVar13 == -1) || (iVar8 == iVar13)) {
    iVar15 = iVar7 * 4;
    iVar13 = *(int *)(iVar15 + *(int *)(param_1 + 0x14));
    if (((*(uint *)(*(int *)(*(int *)(iVar13 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0
        ) && (*(int *)(iVar13 + 8) == -1)) {
      if (*(double *)(iVar9 + 0x20) != dVar17) {
        if ((*param_4 != -1) &&
           (*(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar15) + 0x20) <=
            *(double *)(*(int *)(*param_4 * 4 + *(int *)(param_1 + 0x14)) + 0x20))) {
          return 0;
        }
        *param_3 = iVar8;
        *param_4 = iVar7;
        return 0;
      }
      if ((*param_6 != -1) &&
         (*(double *)(*(int *)(*param_6 * 4 + *(int *)(param_1 + 0x14)) + 0x20) <=
          *(double *)(*(int *)(*(int *)(param_1 + 0x14) + iVar15) + 0x20))) {
        return 0;
      }
      *param_3 = iVar8;
      *param_6 = iVar7;
      return 0;
    }
  }
  return 0x80004005;
}

