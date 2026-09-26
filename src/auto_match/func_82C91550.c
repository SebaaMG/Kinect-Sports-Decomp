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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA4F48();
extern int fn_82CA6780();
extern int fn_82CBC490();
extern unsigned int lbl_820FDBB8;
extern unsigned int lbl_820FDBF8;


undefined8 fn_82C91550(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ulonglong *puVar8;
  int *piVar9;
  longlong *plVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar23;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar24;
  
  uVar24 = 0;
  *param_2 = *param_2 & 0xef3ff8ff | 0x20000;
  uVar18 = *(int *)(param_1 + 0xf8) * 2 + *(int *)(param_1 + 0xfc) + 0xff;
  uVar23 = uVar18 & 0xff;
  *(char *)(param_2 + 1) = (char)uVar18;
  if (uVar23 == 0) {
    return 1;
  }
  if (0x3e < uVar23) {
    return 1;
  }
  *(undefined1 *)((int)param_2 + 0xb) = 0;
  *(undefined1 *)((int)param_2 + 0xd) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)((int)param_2 + 9) = 0;
  *(undefined1 *)((int)param_2 + 10) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(int *)(param_1 + 0x3a14) == 0) {
    puVar8 = *(ulonglong **)(param_1 + 0x54);
    uVar19 = *puVar8;
    uVar23 = *(uint *)(puVar8 + 1);
    *puVar8 = uVar19 << 1;
    *(int *)(puVar8 + 1) = (int)((ulonglong)uVar23 - 1);
    if ((longlong)((ulonglong)uVar23 - 1) < 0) {
      fn_82C4E5E8();
    }
    *param_2 = (uint)((uVar19 >> 0x3f) << 5) | *param_2 & 0xffffff1f;
  }
  if (*(int *)(param_1 + 0x15c) == 0) {
    puVar8 = *(ulonglong **)(param_1 + 0x54);
    uVar19 = *puVar8;
    uVar23 = *(uint *)(puVar8 + 1);
    *puVar8 = uVar19 << 1;
    *(int *)(puVar8 + 1) = (int)((ulonglong)uVar23 - 1);
    if ((longlong)((ulonglong)uVar23 - 1) < 0) {
      fn_82C4E5E8();
    }
    *param_2 = (uint)((uVar19 >> 0x3f) << 0x1f) | *param_2 & 0x7fffffff;
  }
  bVar13 = true;
  if ((*param_2 & 0xe0) == 0x20) {
    **(uint **)(param_1 + 0x164) = **(uint **)(param_1 + 0x164) | 8;
  }
  else {
    if ((*param_2 & 0x80000000) == 0) {
      fn_82CBC490(param_1,*(undefined4 *)(param_1 + 0x94c),8,*(undefined4 *)(param_1 + 0x164));
    }
    if ((*param_2 & 0xe0) == 0) {
      if ((**(uint **)(param_1 + 0x164) & 4) == 0) {
        plVar10 = *(longlong **)(param_1 + 0x54);
        lVar21 = *plVar10;
        uVar23 = *(uint *)(plVar10 + 1);
        *plVar10 = lVar21 << 1;
        *(int *)(plVar10 + 1) = (int)((ulonglong)uVar23 - 1);
        if ((longlong)((ulonglong)uVar23 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar21 < 0) {
          plVar10 = *(longlong **)(param_1 + 0x54);
          lVar21 = *plVar10;
          uVar23 = *(uint *)(plVar10 + 1);
          *plVar10 = lVar21 << 1;
          *(int *)(plVar10 + 1) = (int)((ulonglong)uVar23 - 1);
          if ((longlong)((ulonglong)uVar23 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar21 < 0) {
            uVar23 = *param_2 & 0xffffff1f | 0x40;
            goto LAB_82c91750;
          }
          *param_2 = (*(uint *)(param_1 + 0x3a00) & 7) << 5 | *param_2 & 0xffffff1f;
        }
        else {
          *param_2 = (*(uint *)(param_1 + 0x39fc) & 7) << 5 | *param_2 & 0xffffff1f;
        }
      }
      else {
        uVar23 = *param_2 & 0xffffff1f | 0x60;
LAB_82c91750:
        *param_2 = uVar23;
      }
    }
  }
  uVar23 = *param_2;
  if ((uVar23 & 0x80000000) != 0) {
    *(undefined2 *)((int)param_2 + 0xe) = 0;
    *(undefined2 *)(param_2 + 4) = 0;
    *(undefined2 *)((int)param_2 + 0x12) = 0;
    fn_82CA4F48(param_2,1,0);
    fn_82CA4F48(param_2,2,0);
    fn_82CA4F48(param_2,3,0);
    fn_82CA4F48(param_2,4,0);
    fn_82CA4F48(param_2,5,0);
    fn_82CA4F48(param_2,6,0);
    return 0;
  }
  uVar18 = **(uint **)(param_1 + 0x164);
  if ((uVar18 & 8) == 0) {
    *param_2 = uVar23 | 0x40000000;
    if (((*(int *)(param_1 + 0x11c) != 0) && ((**(uint **)(param_1 + 0x164) & 4) != 0)) &&
       (uVar15 = fn_82CA6780(param_1,param_2), (int)uVar15 != 0)) {
      return uVar15;
    }
    if ((**(uint **)(param_1 + 0x164) & 4) != 0) {
      puVar8 = *(ulonglong **)(param_1 + 0x54);
      uVar19 = *puVar8;
      uVar23 = *(uint *)(puVar8 + 1);
      *puVar8 = uVar19 << 1;
      *(int *)(puVar8 + 1) = (int)((ulonglong)uVar23 - 1);
      if ((longlong)((ulonglong)uVar23 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (uint)((uVar19 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
    }
  }
  else {
    if ((uVar23 & 0xe0) == 0x40) {
      fn_82CBC490(param_1,*(undefined4 *)(param_1 + 0x94c),8,*(uint **)(param_1 + 0x164) + 1);
      uVar23 = (*(uint **)(param_1 + 0x164))[1];
      if ((uVar23 & 4) != 0) {
        return 1;
      }
      uVar18 = **(uint **)(param_1 + 0x164);
      if ((uVar18 & 4) != 0) {
        return 1;
      }
      if ((uVar23 & 8) == 0) {
        *param_2 = *param_2 | 0x40000000;
        goto LAB_82c91cf4;
      }
    }
    iVar17 = *(int *)(param_1 + 0x18c);
    if ((*(int *)(param_1 + 0x14c) == 0) || ((uVar18 & 4) != 0)) {
      bVar13 = false;
    }
    if ((uVar18 & 4) != 0) {
      puVar8 = *(ulonglong **)(param_1 + 0x54);
      uVar24 = *puVar8;
      uVar23 = *(uint *)(puVar8 + 1);
      *puVar8 = uVar24 << 1;
      *(int *)(puVar8 + 1) = (int)((ulonglong)uVar23 - 1);
      if ((longlong)((ulonglong)uVar23 - 1) < 0) {
        fn_82C4E5E8();
      }
      *param_2 = (uint)((uVar24 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
    }
    piVar9 = *(int **)(param_1 + 0x860);
    puVar8 = *(ulonglong **)(param_1 + 0x54);
    if (piVar9 == (int *)0x0) {
      uVar24 = 0;
      *(undefined4 *)((int)puVar8 + 0x14) = 3;
    }
    else {
      iVar16 = *piVar9;
      sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar16);
      uVar24 = (ulonglong)sVar7;
      if (sVar7 < 0) {
        fn_82C4E470(puVar8);
        do {
          uVar19 = *puVar8;
          fn_82C4E470(puVar8,1);
          sVar7 = *(short *)((int)(((uVar24 - ((longlong)uVar19 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar16);
          uVar24 = (ulonglong)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar16 = *(int *)(puVar8 + 1);
        iVar12 = (int)(uVar24 & 0xf);
        *puVar8 = *puVar8 << (uVar24 & 0xf);
        *(int *)(puVar8 + 1) = iVar16 - iVar12;
        if (iVar16 < iVar12) {
          do {
            pbVar11 = *(byte **)((int)puVar8 + 0xc);
            if (pbVar11 < (byte *)(*(int *)(puVar8 + 2) - 4U)) {
              bVar1 = *pbVar11;
              bVar2 = pbVar11[1];
              bVar3 = pbVar11[2];
              bVar4 = pbVar11[3];
              bVar5 = pbVar11[4];
              bVar6 = pbVar11[5];
              iVar16 = *(int *)(puVar8 + 1);
              *(byte **)((int)puVar8 + 0xc) = pbVar11 + 6;
              *(int *)(puVar8 + 1) = iVar16 + 0x30;
              *puVar8 = ((((((ulonglong)bVar2 + (ulonglong)bVar1 * 0x100) * 0x100 + (ulonglong)bVar3
                           ) * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                         (ulonglong)bVar6 << ((longlong)-iVar16 & 0x7fU)) + *puVar8;
              goto LAB_82c91a48;
            }
            iVar16 = fn_82C4E3B0(puVar8);
          } while (iVar16 == 1);
          uVar24 = (ulonglong)((int)sVar7 >> 4);
        }
        else {
LAB_82c91a48:
          uVar24 = (ulonglong)((int)sVar7 >> 4);
        }
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) ||
       ((*(int *)(param_1 + 0x11c) != 0 &&
        (iVar16 = fn_82CA6780(param_1,param_2), iVar16 != 0)))) {
      return 1;
    }
    *param_2 = *param_2 & 0xbfffffff;
    if (iVar17 != 0) {
      plVar10 = *(longlong **)(param_1 + 0x54);
      lVar20 = *plVar10;
      uVar23 = *(uint *)(plVar10 + 1);
      lVar21 = -(lVar20 >> 0x3f);
      *plVar10 = lVar20 << 1;
      *(int *)(plVar10 + 1) = (int)((ulonglong)uVar23 - 1);
      if ((longlong)((ulonglong)uVar23 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar20 < 0) {
        plVar10 = *(longlong **)(param_1 + 0x54);
        lVar20 = *plVar10;
        uVar23 = *(uint *)(plVar10 + 1);
        *plVar10 = lVar20 << 1;
        *(int *)(plVar10 + 1) = (int)((ulonglong)uVar23 - 1);
        if ((longlong)((ulonglong)uVar23 - 1) < 0) {
          fn_82C4E5E8();
        }
        lVar21 = lVar21 - (lVar20 >> 0x3f);
      }
      *param_2 = (uint)(lVar21 << 0x16) & 0xc00000 | *param_2 & 0xff3fffff;
    }
    if (bVar13) {
      piVar9 = *(int **)(param_1 + 0x9d8);
      puVar8 = *(ulonglong **)(param_1 + 0x54);
      if (piVar9 == (int *)0x0) {
        uVar19 = 0;
        *(undefined4 *)((int)puVar8 + 0x14) = 3;
      }
      else {
        iVar17 = *piVar9;
        sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                                 0xffffffff) << 1) + iVar17);
        uVar19 = (ulonglong)sVar7;
        if (sVar7 < 0) {
          fn_82C4E470(puVar8);
          do {
            uVar22 = *puVar8;
            fn_82C4E470(puVar8,1);
            sVar7 = *(short *)((int)(((uVar19 - ((longlong)uVar22 >> 0x3f)) + 0x8000 & 0xffffffff)
                                    << 1) + iVar17);
            uVar19 = (ulonglong)sVar7;
          } while (sVar7 < 0);
        }
        else {
          iVar17 = *(int *)(puVar8 + 1);
          iVar16 = (int)(uVar19 & 0xf);
          *puVar8 = *puVar8 << (uVar19 & 0xf);
          *(int *)(puVar8 + 1) = iVar17 - iVar16;
          if (iVar17 < iVar16) {
            do {
              pbVar11 = *(byte **)((int)puVar8 + 0xc);
              if (pbVar11 < (byte *)(*(int *)(puVar8 + 2) - 4U)) {
                bVar1 = *pbVar11;
                bVar2 = pbVar11[1];
                bVar3 = pbVar11[2];
                bVar4 = pbVar11[3];
                bVar5 = pbVar11[4];
                bVar6 = pbVar11[5];
                iVar17 = *(int *)(puVar8 + 1);
                *(byte **)((int)puVar8 + 0xc) = pbVar11 + 6;
                *(int *)(puVar8 + 1) = iVar17 + 0x30;
                *puVar8 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 +
                             (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                           (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                          ((longlong)-iVar17 & 0x7fU)) + *puVar8;
                goto LAB_82c91c44;
              }
              iVar17 = fn_82C4E3B0(puVar8);
            } while (iVar17 == 1);
            uVar19 = (ulonglong)((int)sVar7 >> 4);
          }
          else {
LAB_82c91c44:
            uVar19 = (ulonglong)((int)sVar7 >> 4);
          }
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
        return 1;
      }
      if (0xf < (uVar19 & 0xffffffff)) {
        return 1;
      }
      uVar23 = *param_2;
      iVar17 = (int)((uVar19 & 0xffffffff) << 2);
      uVar18 = (uint)((((~uVar19 & 0xffffffff) >> 0x1f) + (ulonglong)(7 < uVar19) & 1) << 0x1c);
      *param_2 = uVar18 | uVar23 & 0xefffffff;
      uVar14 = (*(uint *)(&lbl_820FDBB8 + iVar17) & 7) << 0x18;
      *param_2 = uVar14 | uVar18 | uVar23 & 0xe8ffffff;
      *param_2 = (*(uint *)(&lbl_820FDBF8 + iVar17) & 3) << 0x14 |
                 uVar14 | uVar18 | uVar23 & 0xe0cfffff;
    }
  }
LAB_82c91cf4:
  fn_82CA4F48(param_2,1,uVar24 & 1);
  iVar17 = (int)uVar24;
  fn_82CA4F48(param_2,2,iVar17 >> 1 & 1);
  fn_82CA4F48(param_2,3,iVar17 >> 2 & 1);
  fn_82CA4F48(param_2,4,iVar17 >> 3 & 1);
  fn_82CA4F48(param_2,5,iVar17 >> 4 & 1);
  fn_82CA4F48(param_2,6,iVar17 >> 5 & 1);
  return 0;
}

