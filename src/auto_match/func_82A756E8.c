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
extern unsigned int *auStack_90;
extern int fn_82A6CF00();
extern int fn_82A6D090();
extern int fn_82A6D200();
extern int fn_82A72B38();
extern int fn_82A74640();
extern int fn_82A75410();
extern int fn_82BA02A8();


undefined8 fn_82A756E8(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort *puVar17;
  longlong lVar16;
  int *piVar18;
  uint auStack_90 [36];
  
  uVar5 = param_1[0xe];
  iVar2 = *(int *)(param_2 + 0x18);
  iVar3 = *param_1;
  uVar14 = param_1[0x41];
  piVar18 = param_1 + 0x38;
  uVar4 = param_1[0x42];
  iVar7 = param_1[0x40];
  uVar8 = 0;
  pbVar12 = (byte *)param_1[0x3f];
  uVar10 = param_1[0x44];
  uVar9 = param_1[0x43];
  if (6 < uVar5) {
    return 0;
  }
  if (uVar5 == 0) {
LAB_82a757b0:
    uVar15 = (ulonglong)uVar4;
    uVar5 = 0x17;
    uVar13 = (ulonglong)uVar10;
    if (uVar15 < 0x17) {
      if (uVar13 != 0) {
        uVar11 = 0x20 - uVar15;
        if (uVar13 <= (0x20 - uVar15 & 0xffffffff)) {
          uVar11 = uVar13;
        }
        uVar10 = uVar10 - (uint)uVar11;
        uVar14 = uVar14 << ((uint)uVar11 & 0x3f) | uVar9 >> (uVar10 & 0x3f);
        uVar9 = (1 << (uVar10 & 0x3f)) - 1U & uVar9;
        uVar15 = uVar11 + uVar15;
      }
      uVar13 = (ulonglong)uVar14;
      if ((code *)param_1[0x4d] == fn_82BA02A8) {
        for (; ((uVar15 & 0xffffffff) < 0x19 && (uVar14 = (uint)uVar13, iVar7 != 0));
            iVar7 = iVar7 + -1) {
          uVar15 = uVar15 + 8;
          uVar13 = (uVar13 & 0xffffff) << 8 | (ulonglong)*pbVar12;
          uVar14 = (uint)uVar13;
          pbVar12 = pbVar12 + 1;
        }
      }
      else {
        for (; ((uVar15 & 0xffffffff) < 0x19 && (uVar14 = (uint)uVar13, iVar7 != 0));
            iVar7 = iVar7 + -1) {
          uVar11 = (*(code *)param_1[0x4d])(*pbVar12);
          uVar15 = uVar15 + 8;
          uVar13 = (uVar13 & 0xffffff) << 8 | uVar11 & 0xffffffff000000ff;
          uVar14 = (uint)uVar13;
          pbVar12 = pbVar12 + 1;
        }
      }
      if ((uVar15 & 0xffffffff) < 0x17) {
        param_1[0x41] = uVar14;
        param_1[0x42] = (int)uVar15;
        param_1[0x40] = iVar7;
        param_1[0x3f] = (int)pbVar12;
        param_1[0x44] = uVar10;
        param_1[0x43] = uVar9;
        uVar8 = fn_82A6CF00(piVar18,1,0x17);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        uVar15 = (ulonglong)(uint)param_1[0x42];
        uVar14 = param_1[0x41];
        iVar7 = param_1[0x40];
        pbVar12 = (byte *)param_1[0x3f];
        uVar10 = param_1[0x44];
        uVar9 = param_1[0x43];
        if (uVar15 < 0x17) {
          uVar5 = param_1[0x42];
        }
      }
    }
    uVar5 = (uVar14 >> ((int)(short)((short)uVar15 - (short)uVar5) & 0x3fU)) <<
            (0x20 - uVar5 & 0x3f);
    puVar17 = (ushort *)(iVar2 + (uVar5 >> 0x1d & 6));
    uVar1 = *puVar17;
    uVar13 = (ulonglong)uVar1;
    if ((uVar1 & 0x8000) == 0) {
      uVar11 = (ulonglong)uVar5;
      puVar17 = puVar17 + (uVar5 >> 0x1c & 3) + (uint)uVar1;
      uVar1 = *puVar17;
      uVar13 = (ulonglong)uVar1;
      if ((uVar1 & 0x8000) == 0) {
        puVar17 = puVar17 + (int)((uVar11 & 0xfffffff) >> 0x1a) + (uint)uVar1;
        uVar1 = *puVar17;
        uVar13 = (ulonglong)uVar1;
        if ((uVar1 & 0x8000) == 0) {
          puVar17 = puVar17 + (uVar5 >> 0x18 & 3) + (uint)uVar1;
          uVar1 = *puVar17;
          uVar13 = (ulonglong)uVar1;
          if ((uVar1 & 0x8000) == 0) {
            puVar17 = puVar17 + (int)((uVar11 & 0xffffff) >> 0x16) + (uint)uVar1;
            uVar1 = *puVar17;
            uVar13 = (ulonglong)uVar1;
            if ((uVar1 & 0x8000) == 0) {
              puVar17 = puVar17 + (int)((uVar11 & 0x3fffff) >> 0x14) + (uint)uVar1;
              uVar1 = *puVar17;
              uVar13 = (ulonglong)uVar1;
              if ((uVar1 & 0x8000) == 0) {
                puVar17 = puVar17 + (int)((uVar11 & 0xfffff) >> 0x12) + (uint)uVar1;
                uVar1 = *puVar17;
                uVar13 = (ulonglong)uVar1;
                if ((uVar1 & 0x8000) == 0) {
                  puVar17 = puVar17 + (uVar5 >> 0x10 & 3) + (uint)uVar1;
                  uVar1 = *puVar17;
                  uVar13 = (ulonglong)uVar1;
                  if ((uVar1 & 0x8000) == 0) {
                    puVar17 = puVar17 + (int)((uVar11 & 0xffff) >> 0xf) + (uint)uVar1;
                    uVar1 = *puVar17;
                    uVar13 = (ulonglong)uVar1;
                    if ((uVar1 & 0x8000) == 0) {
                      puVar17 = puVar17 + (int)((uVar11 & 0x7fff) >> 0xe) + (uint)uVar1;
                      uVar1 = *puVar17;
                      uVar13 = (ulonglong)uVar1;
                      if ((uVar1 & 0x8000) == 0) {
                        puVar17 = puVar17 + (int)((uVar11 & 0x3fff) >> 0xd) + (uint)uVar1;
                        uVar1 = *puVar17;
                        uVar13 = (ulonglong)uVar1;
                        if ((uVar1 & 0x8000) == 0) {
                          uVar6 = (uVar11 & 0x1fff) << 0x13;
                          puVar17 = puVar17 + (int)((uVar11 & 0x1fff) >> 0xc) + (uint)uVar1;
                          uVar1 = *puVar17;
                          uVar13 = (ulonglong)uVar1;
                          if ((uVar1 & 0x8000) == 0) {
                            puVar17 = puVar17 + (int)((uVar6 & 0x7fffffff) >> 0x1e) + (uint)uVar1;
                            uVar1 = *puVar17;
                            uVar13 = (ulonglong)uVar1;
                            if ((uVar1 & 0x8000) == 0) {
                              puVar17 = puVar17 + ((uint)((uVar6 & 0x7fffffff) >> 0x1d) & 1) +
                                                  (uint)uVar1;
                              uVar1 = *puVar17;
                              uVar13 = (ulonglong)uVar1;
                              if ((uVar1 & 0x8000) == 0) {
                                puVar17 = puVar17 + uVar1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar6 = uVar13 >> 10 & 0x1f;
    uVar11 = uVar13 & 0x3ff;
    auStack_90[0] = (uint)uVar6;
    if (0x3fb < uVar11) {
      uVar11 = (ulonglong)puVar17[((uint)uVar13 & 3) + 1];
    }
    iVar2 = uVar5 << auStack_90[0];
    param_1[0x41] = uVar14;
    param_1[0x42] = (int)uVar15;
    param_1[0x40] = iVar7;
    param_1[0x3f] = (int)pbVar12;
    param_1[0x44] = uVar10;
    param_1[0x43] = uVar9;
    if ((uVar15 & 0xffffffff) < uVar6) {
      uVar8 = fn_82A6D200(piVar18);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      uVar15 = (ulonglong)(uint)param_1[0x42];
    }
    else {
      uVar15 = uVar15 - uVar6;
    }
    param_1[0x42] = (int)uVar15;
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(int *)(iVar3 + 0x10) =
             (int)(short)(((short)*(undefined4 *)(param_2 + 0x24) - *(short *)(iVar3 + 0xca)) + -1);
        return uVar8;
      }
      if ((uVar15 & 0xffffffff) == 0) {
        uVar8 = fn_82A6D200(piVar18,1);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        iVar7 = param_1[0x42];
      }
      else {
        iVar7 = (int)uVar15 + -1;
      }
      param_1[0x42] = iVar7;
      iVar7 = (int)((uVar11 - 2 & 0xffffffff) << 1);
      *(uint *)(iVar3 + 0x10) = (uint)*(ushort *)(*(int *)(param_2 + 0x1c) + iVar7);
      uVar1 = *(ushort *)(*(int *)(param_2 + 0x20) + iVar7);
      *(int *)(iVar3 + 0x18) = -1 - (iVar2 >> 0x1f);
      *(uint *)(iVar3 + 0x14) = (uint)uVar1;
      return uVar8;
    }
    iVar2 = *(int *)(iVar3 + 0x3c);
    param_1[0xe] = 5;
    if (2 < iVar2) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
  }
  else {
    if (uVar5 == 1) {
      return 0;
    }
    if (uVar5 == 2) {
      return 0;
    }
    if (uVar5 == 3) {
      return 0;
    }
    if (uVar5 == 4) {
      uVar8 = fn_82A6D090(piVar18,1,auStack_90);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      fn_82A72B38(param_1,param_2,auStack_90[0] & 0xffff);
      param_1[0xe] = 0;
      uVar14 = param_1[0x41];
      uVar4 = param_1[0x42];
      iVar7 = param_1[0x40];
      pbVar12 = (byte *)param_1[0x3f];
      uVar10 = param_1[0x44];
      uVar9 = param_1[0x43];
      goto LAB_82a757b0;
    }
    if (uVar5 != 5) goto LAB_82a75d14;
  }
  if (*(int *)(iVar3 + 0x3c) < 3) {
    uVar8 = fn_82A6D090(piVar18,*(uint *)(iVar3 + 0x34) & 0xffff,auStack_90);
    if ((int)uVar8 < 0) {
      return uVar8;
    }
    *(uint *)(iVar3 + 0x14) = auStack_90[0];
    param_1[0xe] = 6;
  }
  else {
    if (*(int *)(iVar3 + 0x18) == 0) {
      lVar16 = 0;
      uVar8 = fn_82A75410(piVar18,4,auStack_90);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 4;
      if ((auStack_90[0] & 0x80000000) != 0) {
        *(undefined4 *)(iVar3 + 0x18) = 8;
        lVar16 = 1;
        *(undefined4 *)(iVar3 + 0x14) = 0x10;
        uVar5 = auStack_90[0] & 0x40000000;
        while (uVar5 != 0) {
          uVar5 = *(uint *)(iVar3 + 0x18);
          lVar16 = lVar16 + 1;
          *(uint *)(iVar3 + 0x18) = uVar5 + 8;
          *(int *)(iVar3 + 0x14) = (1 << (uVar5 & 0x3f)) + *(int *)(iVar3 + 0x14);
          uVar5 = 0x80000000U >> ((uint)lVar16 & 0x3f) & auStack_90[0];
        }
      }
      uVar8 = fn_82A6D200(piVar18,lVar16 + 1);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
    }
    uVar8 = fn_82A6D090(piVar18,(ulonglong)*(uint *)(iVar3 + 0x18) + 1,auStack_90);
    if ((int)uVar8 < 0) {
      return uVar8;
    }
    *(uint *)(iVar3 + 0x14) = (auStack_90[0] >> 1) + *(int *)(iVar3 + 0x14) + 1;
    *(uint *)(iVar3 + 0x18) = (auStack_90[0] & 1) - 1;
    param_1[0xe] = 6;
  }
LAB_82a75d14:
  if (*(int *)(iVar3 + 0x3c) < 3) {
    uVar8 = fn_82A6D090(piVar18,*(int *)(iVar3 + 0xf8) + 1U & 0xffff,auStack_90);
    if (-1 < (int)uVar8) {
      iVar2 = *(int *)(*param_1 + 0xf8);
      *(uint *)(iVar3 + 0x18) = (auStack_90[0] & 1) - 1;
      *(uint *)(iVar3 + 0x10) =
           (int)(short)((ushort)(0xffffffff >> (0x20 - (iVar2 + 1U & 0xffff) & 0x3f)) &
                       (ushort)auStack_90[0]) >> 1 & 0x7fffffff;
      param_1[0xe] = 0;
    }
  }
  else {
    uVar8 = fn_82A74640(auStack_90,*(undefined2 *)(param_1 + 0x4e),piVar18);
    if (-1 < (int)uVar8) {
      *(int *)(iVar3 + 0x10) = (int)(short)auStack_90[0];
      if ((short)auStack_90[0] == 0) {
        *(int *)(iVar3 + 0x14) = (int)*(short *)((int)param_1 + 0x13a) + *(int *)(iVar3 + 0x14);
      }
      param_1[0xe] = 0;
    }
  }
  return uVar8;
}

