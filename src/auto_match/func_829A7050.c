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
extern int fn_829533F0();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82BA02A8();
extern int fn_82F68CC0();


longlong fn_829A7050(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar9;
  int iVar10;
  longlong lVar8;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  bool bVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  ulonglong uVar20;
  int aiStack_60 [24];
  
  puVar12 = (uint *)param_1[0x41];
  uVar4 = *puVar12 & 0xfffff;
  if (uVar4 < 3) {
    return 0;
  }
  puVar9 = (uint *)fn_829533F0(param_1,0x10000002,puVar12,0,2,1);
  if ((((puVar9 == (uint *)0x0) &&
       (puVar9 = (uint *)fn_829533F0(param_1,0x10000003,puVar12,0,2,1), puVar9 == (uint *)0x0)
       ) && (puVar9 = (uint *)fn_829533F0(param_1,0x10000004,puVar12,0,2,1),
            puVar9 == (uint *)0x0)) ||
     (*(int *)(*(int *)(*(int *)puVar9[4] * 4 + param_1[5]) + 4) != param_1[0x21])) {
LAB_829a7250:
    if ((uVar4 == 3) && (0x1ff < *(ushort *)((int)param_1 + 0xca))) {
      puVar3 = (undefined4 *)param_1[0x41];
      pbVar18 = (byte *)puVar3[2];
      pbVar17 = pbVar18 + 0xc;
      pbVar15 = pbVar18 + 0xc;
      do {
        bVar1 = *pbVar18;
        bVar2 = *pbVar17;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar18 = pbVar18 + 1;
        pbVar17 = pbVar17 + 1;
      } while (pbVar18 != pbVar15);
      if ((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
          (puVar11 = (undefined4 *)fn_829533F0(param_1,0x10700001,puVar3,0,2,1),
          puVar11 != (undefined4 *)0x0)) &&
         ((puVar12 = (uint *)fn_829533F0(param_1,0x20500003,puVar11,aiStack_60,2,1),
          puVar12 != (uint *)0x0 ||
          (puVar12 = (uint *)fn_829533F0(param_1,0x20500004,puVar11,aiStack_60,2,1),
          puVar12 != (uint *)0x0)))) {
        pbVar18 = (byte *)puVar3[2];
        uVar4 = *puVar12;
        iVar10 = param_1[5];
        uVar6 = uVar4 & 0xfffff;
        iVar7 = (uVar4 & 0xfffff) * 4;
        pbVar17 = (byte *)(iVar7 + puVar12[2]);
        pbVar15 = pbVar17 + 0xc;
        iVar13 = *(int *)(*(int *)pbVar18 * 4 + iVar10);
        iVar5 = *(int *)(*(int *)puVar12[4] * 4 + iVar10);
        do {
          bVar1 = *pbVar17;
          bVar2 = *pbVar18;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar17 = pbVar17 + 1;
          pbVar18 = pbVar18 + 1;
        } while (pbVar17 != pbVar15);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          uVar19 = 0;
          if ((uVar4 & 0xfffff) != 0) {
            iVar16 = 0;
            do {
              if (*(uint *)(*(int *)(*(int *)(iVar16 + (int)puVar12[4]) * 4 + iVar10) + 0x10) !=
                  uVar19) {
                return 0;
              }
              uVar19 = uVar19 + 1;
              iVar16 = iVar16 + 4;
            } while (uVar19 < uVar6);
          }
          if ((*(int *)(iVar13 + 4) != *(int *)(iVar5 + 4)) ||
             (*(int *)(iVar13 + 0xc) != *(int *)(iVar5 + 0xc))) {
            iVar10 = fn_82963998(0x74);
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = fn_829632A0();
            }
            if (iVar10 == 0) {
              return -0x7ff8fff2;
            }
            lVar8 = fn_82963A30(iVar10,uVar6 | 0x70200000,uVar6,uVar6,0);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
            lVar8 = fn_829632F0(iVar10,puVar12);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
            fn_82F68CC0(*(undefined4 *)(iVar10 + 0x10),puVar12[4],iVar7);
            fn_82F68CC0(*(undefined4 *)(iVar10 + 8),iVar7 + puVar12[2],iVar7);
            iVar13 = (**(code **)(*param_1 + 0x20))(param_1,iVar10,0);
            if (iVar13 == 0) {
              *puVar3 = 0;
              *puVar11 = 0;
              *puVar12 = 0;
              iVar13 = (**(code **)(*param_1 + 0x34))(param_1,iVar10,aiStack_60[0]);
              if (iVar13 == 0) {
                iVar13 = *(int *)(aiStack_60[0] * 4 + param_1[6]);
                if (iVar13 != 0) {
                  fn_82BA02A8(iVar13);
                  fn_829639F0(iVar13);
                }
                *(int *)(aiStack_60[0] * 4 + param_1[6]) = iVar10;
                return 0;
              }
              *puVar3 = 0x50000003;
              *puVar11 = 0x10700001;
              *puVar12 = uVar6 | 0x20500000;
            }
            fn_82BA02A8(iVar10);
            fn_829639F0(iVar10);
          }
        }
      }
    }
  }
  else {
    bVar14 = true;
    uVar20 = (ulonglong)*puVar9 & 0xfffff;
    if ((*puVar9 & 0xfffff) != 0) {
      iVar10 = 0;
      do {
        if ((*(int *)(iVar10 + puVar9[2]) != *(int *)puVar12[4]) ||
           ((*(uint *)(*(int *)(*(int *)(iVar10 + puVar9[2]) * 4 + param_1[5]) + 0x34) & 0x1ffe00)
            != 0)) {
          bVar14 = false;
        }
        iVar10 = iVar10 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      if (!bVar14) goto LAB_829a7250;
    }
    iVar10 = fn_82963998(0x74);
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = fn_829632A0();
    }
    if (iVar10 == 0) {
      return -0x7ff8fff2;
    }
    lVar8 = fn_82963A30(iVar10,uVar4 | 0x50000000,puVar12[1],puVar9[3],0);
    if ((lVar8 < 0) || (lVar8 = fn_829632F0(iVar10,puVar12), lVar8 < 0)) {
      fn_82BA02A8(iVar10);
      fn_829639F0(iVar10);
      return lVar8;
    }
    fn_82F68CC0(*(undefined4 *)(iVar10 + 0x10),puVar9[4],*(int *)(iVar10 + 0xc) << 2);
    fn_82F68CC0(*(undefined4 *)(iVar10 + 8),puVar12[2],*(int *)(iVar10 + 4) << 2);
    *puVar9 = 0;
    iVar13 = param_1[0x41];
    if (iVar13 != 0) {
      fn_82BA02A8(iVar13);
      fn_829639F0(iVar13);
    }
    *(int *)(param_1[0x40] * 4 + param_1[6]) = iVar10;
    param_1[0x41] = iVar10;
  }
  return 0;
}

