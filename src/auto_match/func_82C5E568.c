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
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C565B0();
extern int fn_82C65818();
extern int fn_82C658A8();
extern int fn_82C93060();
extern int fn_82C9D0C8();
extern int fn_82CA1648();
extern int fn_82CA5860();
extern int fn_82CA5C50();
extern int fn_82CA6740();
extern int fn_82CBB638();
extern unsigned int iStack_148;
extern unsigned int iStack_14c;
extern unsigned int iStack_bc;
extern unsigned int iStack_c8;
extern unsigned int iStack_d0;
extern unsigned int iStack_dc;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_150;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_fc;


undefined8 fn_82C5E568(int param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uStack_150;
  int iStack_14c;
  int iStack_148;
  uint *puStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  uint *puStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint *puStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint *puStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint **ppuStack_f4;
  uint *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int *piStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int *piStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  puStack_130 = &uStack_13c;
  iVar14 = *(int *)(param_1 + 0x50d0);
  uStack_124 = *(undefined4 *)(param_1 + 0xe4);
  uStack_110 = *(undefined4 *)(param_1 + 0xe8);
  uStack_128 = 0;
  iVar10 = (*(int *)(param_1 + 0xd0) >> 1) * iVar14;
  uStack_13c = (*(int *)(param_1 + 0xcc) >> 1) * iVar14 + *(int *)(param_1 + 0xec0) +
               *(int *)(param_1 + 0xdc);
  uStack_140 = *(int *)(param_1 + 0xe0) + iVar10 + *(int *)(param_1 + 0xec4);
  puStack_11c = &uStack_140;
  uStack_138 = *(int *)(param_1 + 0xe0) + iVar10 + *(int *)(param_1 + 0xec8);
  uStack_114 = 0;
  puStack_108 = &uStack_138;
  iStack_14c = *(int *)(param_1 + 0x768);
  puStack_144 = (uint *)(iVar14 * *(int *)(param_1 + 0x90) * 0x18 + *(int *)(param_1 + 0x110));
  iStack_148 = *(int *)(param_1 + 0x76c);
  ppuStack_f4 = &puStack_144;
  piStack_e0 = &iStack_14c;
  uVar13 = 0;
  uStack_100 = 0;
  iVar14 = 1;
  piStack_cc = &iStack_148;
  iStack_d0 = *(int *)(param_1 + 0x88) << 1;
  uStack_ec = 0x18;
  uStack_e8 = 0;
  uStack_134 = 1;
  uVar15 = *(int *)(param_1 + 0x88) + 1;
  uStack_d8 = 0xc0;
  uStack_d4 = 0;
  uStack_c4 = 0x90;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
     (*(int *)(param_1 + 0x54c8) != 1)) {
    *(undefined4 *)(param_1 + 0x55d0) = *(undefined4 *)(param_1 + 0x55d4);
  }
  else {
    *(int *)(param_1 + 0x55d0) = *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0x55d4);
  }
  if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x90) << 2) {
      iVar6 = 0;
      do {
        iVar10 = iVar10 + 1;
        *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x6f0)) = 0x4000;
        iVar6 = iVar6 + 2;
      } while (iVar10 < *(int *)(param_1 + 0x90) << 2);
    }
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x90)) {
      iVar6 = 0;
      do {
        iVar10 = iVar10 + 1;
        *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x6f8)) = 0x4000;
        iVar6 = iVar6 + 2;
      } while (iVar10 < *(int *)(param_1 + 0x90));
    }
  }
  if ((*(int *)(param_1 + 0x3cb0) == 3) || (3 < *(int *)(param_1 + 0x3cb0))) {
    uVar2 = *(undefined4 *)((*(int *)(param_1 + 0xb94) + 0x2df) * 4 + param_1);
    *(undefined4 *)(param_1 + 0xb6c) = uVar2;
    *(undefined4 *)(param_1 + 0xb68) = uVar2;
    *(undefined4 *)(param_1 + 0xb64) = uVar2;
    *(undefined4 *)(param_1 + 0xb70) =
         *(undefined4 *)((*(int *)(param_1 + 0xba0) + 0x2e2) * 4 + param_1);
    *(undefined4 *)(param_1 + 0xb74) =
         *(undefined4 *)((*(int *)(param_1 + 0xba4) + 0x2e2) * 4 + param_1);
    *(undefined4 *)(param_1 + 0xb78) =
         *(undefined4 *)((*(int *)(param_1 + 0xba8) + 0x2e2) * 4 + param_1);
    *(undefined4 *)(param_1 + 0x830) =
         *(undefined4 *)((*(int *)(param_1 + 0x82c) + 0x107) * 8 + param_1);
    *(undefined4 *)(param_1 + 0x834) =
         *(undefined4 *)(*(int *)(param_1 + 0x82c) * 8 + param_1 + 0x83c);
  }
  else {
    *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb84);
    *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_1 + 0xb90);
  }
  uStack_12c = uStack_13c;
  uStack_118 = uStack_140;
  uStack_104 = uStack_138;
  uStack_fc = uStack_110;
  puStack_f0 = puStack_144;
  iStack_dc = iStack_14c;
  iStack_c8 = iStack_148;
  iStack_bc = iStack_d0;
  fn_82C565B0(param_1,*(undefined4 *)(param_1 + 0xf8));
  uStack_150 = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    do {
      uVar17 = (ulonglong)uStack_13c;
      uVar18 = (ulonglong)uStack_140;
      uVar19 = (ulonglong)uStack_138;
      uVar16 = (uint)LZCOUNT((*(int *)(param_1 + 0x8c) + -1) - uStack_150) >> 5;
      if ((uStack_150 & 1) == 0) {
        iStack_14c = *(int *)(param_1 + 0x768);
        iStack_148 = *(int *)(param_1 + 0x76c);
      }
      else if (*(int *)(param_1 + 0x3a24) != 0) {
        uVar7 = *(int *)(param_1 + 0x3a30) >> 4;
        iStack_148 = (int)(((longlong)(int)uVar7 + ((ulonglong)uVar7 & 0x1fffffff) * 8 & 0xffffffff)
                          << 4) + *(int *)(param_1 + 0x76c);
        iStack_14c = (int)(((longlong)(int)uVar7 + ((ulonglong)uVar7 & 0x7fffffff) * 2 & 0xffffffff)
                          << 6) + *(int *)(param_1 + 0x768);
      }
      if ((*(int *)(param_1 + 0x3cb0) < 4) && (*(int *)(param_1 + 0x3cb0) != 0)) {
        if (*(int *)(param_1 + 0x3cac) == 0) {
          return 1;
        }
        fn_82CA6740();
      }
      iVar10 = (int)uVar13;
      if (*(int *)(param_1 + 0x55b4) == 0) {
LAB_82c5eafc:
        if (((*(int *)(param_1 + 0xf94) != 0) && (*(int *)(param_1 + 0x120) != 4)) &&
           (uVar5 = fn_82CA5C50(param_1,uStack_150), (int)uVar5 != 0)) {
          return uVar5;
        }
        uVar11 = 0;
        *(undefined4 *)(param_1 + 3000) = 0x80;
        *(undefined4 *)(param_1 + 0xbb4) = 0x80;
        *(undefined4 *)(param_1 + 0xbb0) = 0x80;
        if (*(int *)(param_1 + 0x88) != 0) {
          lVar9 = uVar19 - uVar18;
          do {
            if ((*(int *)(param_1 + 0x3cb0) == 0) && (iVar6 = fn_82C65818(param_1), iVar6 != 0))
            {
              uVar5 = fn_82C658A8(param_1,param_1 + 0xf8);
              if ((int)uVar5 != 0) {
                return uVar5;
              }
              uVar15 = 0;
            }
            uVar15 = uVar15 + 1;
            uVar5 = (**(code **)(param_1 + 0xc24))(param_1,puStack_144,uVar11,uStack_150);
            if ((int)uVar5 != 0) {
              uVar8 = 0xffffffffffffffff;
LAB_82c5ee04:
              iVar6 = fn_82C93060(param_1,uVar5,uVar8,uVar11,&uStack_150,0,0,&puStack_130);
              if (iVar6 != 0) {
                return uVar5;
              }
              if ((iVar10 == 0) || (iVar10 == 1)) {
                uVar13 = uVar5;
              }
              break;
            }
            if (((*(uint *)(param_1 + 0xbbc) & 4) != 0) && ((*puStack_144 & 0x800) == 0)) {
              *(uint *)(param_1 + 0xbbc) = *(uint *)(param_1 + 0xbbc) & 0xfffffffe;
              *(undefined2 *)
               ((int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uStack_150 + uVar11 &
                      0xffffffff) << 1) + *(int *)(param_1 + 0x6f8)) = 0;
              *(undefined2 *)
               ((int)(((longlong)(int)(uStack_150 * 2 + 1) * (longlong)*(int *)(param_1 + 0x88) +
                       uVar11 & 0xffffffff) << 2) + *(int *)(param_1 + 0x6f0) + 2) = 0;
              *(undefined2 *)
               ((int)(((longlong)(int)(uStack_150 * 2 + 1) * (longlong)*(int *)(param_1 + 0x88) +
                       uVar11 & 0xffffffff) << 2) + *(int *)(param_1 + 0x6f0)) = 0;
              *(undefined2 *)
               ((int)((((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uStack_150 & 0x7fffffffU
                       ) * 2 + uVar11 & 0xffffffff) << 2) + *(int *)(param_1 + 0x6f0) + 2) = 0;
              *(undefined2 *)
               ((int)((((longlong)*(int *)(param_1 + 0x88) * (longlong)(int)uStack_150 & 0x7fffffffU
                       ) * 2 + uVar11 & 0xffffffff) << 2) + *(int *)(param_1 + 0x6f0)) = 0;
            }
            if (((uVar11 & 0xffffffff) == 0) || (uVar5 = 1, uVar15 < 2)) {
              uVar5 = 0;
            }
            uVar5 = (**(code **)(param_1 + 0xc20))
                              (param_1,puStack_144,uVar17,uVar18,lVar9 + uVar18,iStack_14c,
                               iStack_148,uVar5);
            if ((*(uint *)(param_1 + 0xbbc) & 4) != 0) {
              *(undefined4 *)(param_1 + 0xbbc) = 7;
            }
            if ((int)uVar5 != 0) {
              uVar8 = 0xfffffffffffffffe;
              goto LAB_82c5ee04;
            }
            uVar11 = uVar11 + 1;
            uVar17 = uVar17 + 0x10;
            iStack_14c = iStack_14c + 0xc0;
            iStack_148 = iStack_148 + 0x90;
            puStack_144 = puStack_144 + 6;
            uVar18 = uVar18 + 8;
          } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x88));
        }
        if ((*(uint *)(param_1 + 0xbbc) & 1) != 0) {
          fn_82CBB638(param_1,uStack_150,uStack_13c,uStack_140,uStack_138,uStack_134,0);
        }
        uStack_134 = 0;
        if ((uStack_150 < *(int *)(param_1 + 0x8c) - 1U) &&
           (*(int *)((uStack_150 + 1) * 4 + *(int *)(param_1 + 0x55d0)) != 0)) {
          uVar16 = 1;
        }
        uStack_140 = *(int *)(param_1 + 0xe8) + uStack_140;
        uStack_138 = *(int *)(param_1 + 0xe8) + uStack_138;
        uStack_13c = *(int *)(param_1 + 0xe4) + uStack_13c;
        if ((uVar16 != 0) && ((*(uint *)(param_1 + 0xbbc) & 1) != 0)) {
          fn_82CBB638(param_1);
        }
      }
      else {
        if ((*(int *)(param_1 + 0x54c8) == 1) && (uStack_150 == 0)) {
          *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + 1;
        }
        if (*(int *)(uStack_150 * 4 + *(int *)(param_1 + 0x55d0)) == 0) {
LAB_82c5eae0:
          if (*(int *)(uStack_150 * 4 + *(int *)(param_1 + 0x55d0)) != 0) {
            uStack_134 = 1;
          }
          goto LAB_82c5eafc;
        }
        plVar1 = *(longlong **)(param_1 + 0x54);
        *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + 1;
        if (*(int *)((int)plVar1 + 0x1c) != 0) {
          uVar11 = (ulonglong)*(uint *)(plVar1 + 1);
          uVar20 = 1;
          uVar12 = uVar11 + 0x10;
          if ((uVar12 & 0xffffffff) == 0) {
            do {
              if ((uVar12 & 0xffffffff) == 0) break;
              uVar20 = uVar20 - uVar12;
              *plVar1 = *plVar1 << (uVar12 & 0x7f);
              *(int *)(plVar1 + 1) = (int)(uVar11 - uVar12);
              if ((longlong)(uVar11 - uVar12) < 0) {
                fn_82C4E5E8(plVar1);
              }
              uVar11 = (ulonglong)*(uint *)(plVar1 + 1);
              uVar12 = uVar11 + 0x10;
            } while ((uVar12 & 0xffffffff) < (uVar20 & 0xffffffff));
          }
          *plVar1 = *plVar1 << (uVar20 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar11 - uVar20);
          if ((longlong)(uVar11 - uVar20) < 0) {
            fn_82C4E5E8(plVar1);
          }
        }
        fn_82C4E470(plVar1,*(uint *)(plVar1 + 1) & 7);
        uVar2 = *(undefined4 *)(param_1 + 0x120);
        iVar6 = *(int *)(param_1 + 0x50c8);
        iVar3 = *(int *)(param_1 + 0x50cc);
        iVar4 = *(int *)(param_1 + 0x50d0);
        uVar5 = fn_82CA5860(param_1,uStack_150);
        *(undefined4 *)(param_1 + 0x79c) = 1;
        if ((int)uVar5 == 0) {
          if ((((*(int *)(param_1 + 0x50c8) == iVar6) && (*(int *)(param_1 + 0x50cc) == iVar3)) &&
              (*(int *)(param_1 + 0x50d0) == iVar4)) &&
             ((*(int *)(param_1 + 0x120) == 0 || (*(int *)(param_1 + 0x120) == 4)))) {
            iVar14 = 1;
            goto LAB_82c5eae0;
          }
          *(undefined4 *)(param_1 + 0x120) = uVar2;
          *(int *)(param_1 + 0x50c8) = iVar6;
          *(int *)(param_1 + 0x50cc) = iVar3;
          *(int *)(param_1 + 0x50d0) = iVar4;
          iVar6 = fn_82C93060(param_1,1,iVar14,0,&uStack_150,0,0,&puStack_130);
          if (iVar6 != 0) {
            return 0;
          }
          if (iVar10 == 0) {
            uVar13 = 1;
          }
          if (iVar14 == 0) break;
          iVar14 = 0;
          *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + -1;
        }
        else {
          *(undefined4 *)(param_1 + 0x120) = uVar2;
          *(int *)(param_1 + 0x50c8) = iVar6;
          *(int *)(param_1 + 0x50cc) = iVar3;
          *(int *)(param_1 + 0x50d0) = iVar4;
          iVar6 = fn_82C93060(param_1,uVar5,iVar14,0,&uStack_150,0,0,&puStack_130);
          if (iVar6 != 0) {
            return uVar5;
          }
          if ((iVar10 == 0) || (iVar10 == 1)) {
            uVar13 = uVar5;
          }
          if (iVar14 == 0) break;
          iVar14 = 0;
          *(int *)(param_1 + 0x55d8) = *(int *)(param_1 + 0x55d8) + -1;
        }
      }
      uVar7 = uStack_150 + 1;
      uVar16 = uStack_150 + 1;
      uStack_150 = uVar7;
    } while (uVar16 < *(uint *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0x3cb0) < 6) {
    if (*(int *)(param_1 + 0xf6c) != 0) {
      fn_82C9D0C8(param_1,(ulonglong)*(uint *)(param_1 + 0xec0) +
                              (ulonglong)*(uint *)(param_1 + 0xdc),
                      (ulonglong)*(uint *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xec4),
                      (ulonglong)*(uint *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xec8),0
                      ,0,1,*(undefined4 *)(param_1 + 0x88));
    }
  }
  else if (*(int *)(param_1 + 0xf6c) != 0) {
    lVar9 = (longlong)(*(int *)(param_1 + 0xd0) >> 1) * (longlong)*(int *)(param_1 + 0x50d0);
    fn_82CA1648(param_1,(longlong)(*(int *)(param_1 + 0xcc) >> 1) *
                            (longlong)*(int *)(param_1 + 0x50d0) +
                            (ulonglong)*(uint *)(param_1 + 0xec0) +
                            (ulonglong)*(uint *)(param_1 + 0xdc),
                    (ulonglong)*(uint *)(param_1 + 0xe0) + lVar9 +
                    (ulonglong)*(uint *)(param_1 + 0xec4),
                    (ulonglong)*(uint *)(param_1 + 0xe0) + lVar9 +
                    (ulonglong)*(uint *)(param_1 + 0xec8),0,0,1,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x3d0c) = 0;
    return uVar13;
  }
  *(undefined4 *)(param_1 + 0x3d0c) = 0;
  return uVar13;
}

