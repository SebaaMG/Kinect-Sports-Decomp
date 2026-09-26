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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


void fn_82CB7520(int param_1,uint *param_2,int param_3,byte *param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar7;
  ulonglong uVar6;
  int *piVar8;
  uint *puVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uint *puVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (param_7 == 0) {
    lVar13 = 8;
    if (param_6 == 0) {
      puVar10 = (undefined1 *)((int)param_2 + 2);
      piVar8 = (int *)(param_3 + -4);
      do {
        pbVar11 = param_4 + param_5;
        iVar4 = (uint)pbVar11[1] + (uint)param_4[1] + 1;
        puVar10[-2] = *(undefined1 *)
                       (((uint)*param_4 + (uint)param_4[param_5] + iVar4 >> 2) + piVar8[1] + iVar1);
        puVar10[-1] = *(undefined1 *)
                       (((uint)pbVar11[2] + (uint)param_4[2] + iVar4 >> 2) + piVar8[2] + iVar1);
        iVar4 = (uint)pbVar11[3] + (uint)param_4[3] + 1;
        *puVar10 = *(undefined1 *)
                    (((uint)pbVar11[2] + (uint)param_4[2] + iVar4 >> 2) + piVar8[3] + iVar1);
        puVar10[1] = *(undefined1 *)
                      (((uint)pbVar11[4] + (uint)param_4[4] + iVar4 >> 2) + piVar8[4] + iVar1);
        iVar4 = (uint)pbVar11[5] + (uint)param_4[5] + 1;
        puVar10[2] = *(undefined1 *)
                      (((uint)pbVar11[4] + (uint)param_4[4] + iVar4 >> 2) + piVar8[5] + iVar1);
        puVar10[3] = *(undefined1 *)
                      (((uint)param_4[6] + (uint)pbVar11[6] + iVar4 >> 2) + piVar8[6] + iVar1);
        iVar4 = (uint)pbVar11[7] + (uint)param_4[7] + 1;
        puVar10[4] = *(undefined1 *)
                      (((uint)param_4[6] + (uint)pbVar11[6] + iVar4 >> 2) + piVar8[7] + iVar1);
        piVar8 = piVar8 + 8;
        puVar10[5] = *(undefined1 *)
                      (((uint)pbVar11[8] + (uint)param_4[8] + iVar4 >> 2) + *piVar8 + iVar1);
        puVar10 = puVar10 + param_5;
        lVar13 = lVar13 + -1;
        param_4 = pbVar11;
      } while (lVar13 != 0);
    }
    else {
      puVar9 = (uint *)(param_3 + 8);
      do {
        pbVar11 = param_4 + param_5;
        uVar6 = (longlong)((int)((uint)pbVar11[2] + (uint)param_4[2]) >> 1) + (ulonglong)*puVar9;
        uVar5 = (longlong)((int)((uint)pbVar11[3] + (uint)param_4[3]) >> 1) + (ulonglong)puVar9[1];
        uVar7 = (uint)uVar5;
        uVar3 = (longlong)((int)((uint)pbVar11[1] + (uint)param_4[1]) >> 1) + (ulonglong)puVar9[-1];
        uVar2 = (longlong)((int)((uint)*param_4 + (uint)param_4[param_5]) >> 1) +
                (ulonglong)puVar9[-2];
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar2 = uVar2 & 0xffffff;
        }
        else {
          uVar2 = (ulonglong)*(byte *)((int)uVar2 + iVar1);
          uVar3 = (ulonglong)*(byte *)((int)uVar3 + iVar1);
          uVar6 = (ulonglong)*(byte *)((int)uVar6 + iVar1);
          uVar7 = (uint)*(byte *)(uVar7 + iVar1);
        }
        *param_2 = (uint)((((uVar2 << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 | uVar6 & 0xffffffff)
                         << 8) | uVar7;
        uVar6 = (longlong)((int)((uint)pbVar11[6] + (uint)param_4[6]) >> 1) + (ulonglong)puVar9[4];
        uVar5 = (longlong)((int)((uint)pbVar11[7] + (uint)param_4[7]) >> 1) + (ulonglong)puVar9[5];
        uVar7 = (uint)uVar5;
        uVar3 = (longlong)((int)((uint)pbVar11[5] + (uint)param_4[5]) >> 1) + (ulonglong)puVar9[3];
        uVar2 = (longlong)((int)((uint)pbVar11[4] + (uint)param_4[4]) >> 1) + (ulonglong)puVar9[2];
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar2 = uVar2 & 0xffffff;
        }
        else {
          uVar2 = (ulonglong)*(byte *)((int)uVar2 + iVar1);
          uVar3 = (ulonglong)*(byte *)((int)uVar3 + iVar1);
          uVar6 = (ulonglong)*(byte *)((int)uVar6 + iVar1);
          uVar7 = (uint)*(byte *)(uVar7 + iVar1);
        }
        puVar9 = puVar9 + 8;
        param_2[1] = (uint)((((uVar2 << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                            uVar6 & 0xffffffff) << 8) | uVar7;
        param_2 = (uint *)((int)param_2 + param_5);
        lVar13 = lVar13 + -1;
        param_4 = pbVar11;
      } while (lVar13 != 0);
    }
  }
  else {
    puVar9 = (uint *)(param_3 + 8);
    pbVar11 = param_4 + 2;
    lVar13 = 8;
    if (param_6 == 0) {
      puVar12 = param_2 + 1;
      do {
        uVar6 = (longlong)((int)((uint)pbVar11[1] + (uint)*pbVar11) >> 1) + (ulonglong)*puVar9;
        uVar5 = (longlong)((int)((uint)pbVar11[2] + (uint)pbVar11[1]) >> 1) + (ulonglong)puVar9[1];
        uVar3 = (longlong)((int)((uint)pbVar11[-1] + (uint)*pbVar11) >> 1) + (ulonglong)puVar9[-1];
        uVar2 = (longlong)((int)((uint)pbVar11[-2] + (uint)pbVar11[-1]) >> 1) +
                (ulonglong)puVar9[-2];
        uVar7 = (uint)uVar5;
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar7 = (uint)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar6 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)uVar2 + iVar1),
                                             *(undefined1 *)((int)uVar3 + iVar1)),
                                    *(undefined1 *)((int)uVar6 + iVar1)),
                           *(undefined1 *)(uVar7 + iVar1));
        }
        *(uint *)(pbVar11 + (int)param_2 + (-2 - (int)param_4)) = uVar7;
        uVar6 = (longlong)((int)((uint)pbVar11[5] + (uint)pbVar11[4]) >> 1) + (ulonglong)puVar9[4];
        uVar5 = (longlong)((int)((uint)pbVar11[6] + (uint)pbVar11[5]) >> 1) + (ulonglong)puVar9[5];
        uVar3 = (longlong)((int)((uint)pbVar11[4] + (uint)pbVar11[3]) >> 1) + (ulonglong)puVar9[3];
        uVar2 = (longlong)((int)((uint)pbVar11[2] + (uint)pbVar11[3]) >> 1) + (ulonglong)puVar9[2];
        uVar7 = (uint)uVar5;
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar7 = (uint)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar6 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)uVar2 + iVar1),
                                             *(undefined1 *)((int)uVar3 + iVar1)),
                                    *(undefined1 *)((int)uVar6 + iVar1)),
                           *(undefined1 *)(uVar7 + iVar1));
        }
        *puVar12 = uVar7;
        pbVar11 = pbVar11 + param_5;
        puVar12 = (uint *)((int)puVar12 + param_5);
        puVar9 = puVar9 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    else {
      do {
        uVar5 = (ulonglong)*pbVar11 + (ulonglong)*puVar9;
        uVar3 = (ulonglong)pbVar11[-1] + (ulonglong)puVar9[-1];
        uVar2 = (ulonglong)pbVar11[-2] + (ulonglong)puVar9[-2];
        uVar7 = (uint)((ulonglong)pbVar11[1] + (ulonglong)puVar9[1]);
        if ((((ulonglong)pbVar11[1] + (ulonglong)puVar9[1] | uVar5 | uVar3 | uVar2) & 0xffffff00) ==
            0) {
          uVar7 = (uint)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar5 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)uVar2 + iVar1),
                                             *(undefined1 *)((int)uVar3 + iVar1)),
                                    *(undefined1 *)((int)uVar5 + iVar1)),
                           *(undefined1 *)(uVar7 + iVar1));
        }
        *param_2 = uVar7;
        uVar5 = (ulonglong)pbVar11[4] + (ulonglong)puVar9[4];
        uVar3 = (ulonglong)pbVar11[3] + (ulonglong)puVar9[3];
        uVar2 = (ulonglong)pbVar11[2] + (ulonglong)puVar9[2];
        uVar7 = (uint)((ulonglong)pbVar11[5] + (ulonglong)puVar9[5]);
        if ((((ulonglong)pbVar11[5] + (ulonglong)puVar9[5] | uVar5 | uVar3 | uVar2) & 0xffffff00) ==
            0) {
          uVar7 = (uint)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar5 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)uVar2 + iVar1),
                                             *(undefined1 *)((int)uVar3 + iVar1)),
                                    *(undefined1 *)((int)uVar5 + iVar1)),
                           *(undefined1 *)(uVar7 + iVar1));
        }
        param_2[1] = uVar7;
        pbVar11 = pbVar11 + param_5;
        param_2 = (uint *)((int)param_2 + param_5);
        puVar9 = puVar9 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}

