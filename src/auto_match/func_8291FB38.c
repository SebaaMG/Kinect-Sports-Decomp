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
extern unsigned int *auStack_120;
extern int fn_8265C940();
extern int fn_828F13C0();
extern int fn_8291F908();
extern int fn_82F68CC0();
extern unsigned int iStack_d8;
extern unsigned int lbl_8315A490;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;


undefined8 fn_8291FB38(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint *puStack_130;
  undefined1 auStack_120 [4];
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_10c;
  uint uStack_108;
  int iStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b4;
  
  if (((3 < param_3) &&
      (uVar11 = *param_2,
      (((ulonglong)(uVar11 >> 0x10) | (ulonglong)uVar11 & 0xffffffffffff0000) >> 8 & 0xffff |
      ((((ulonglong)uVar11 & 0xffff) << 0x10 | (ulonglong)uVar11 & 0xffffffff0000ffff) & 0xffff00)
      << 8) == 0x20534444)) && (0x7b < param_3 - 4)) {
    fn_82F68CC0(auStack_120,param_2 + 1,0x7c);
    fn_8291F908(auStack_120,auStack_120);
    puVar12 = param_2 + 0x20;
    uVar11 = param_3 - 0x80;
    param_1[3] = uStack_114;
    param_1[4] = uStack_118;
    if ((uStack_11c & 0x800000) == 0) {
      uStack_10c = 1;
    }
    param_1[5] = uStack_10c;
    if (uStack_10c == 0) {
      param_1[5] = 1;
    }
    if ((uStack_b4 & 0xfc00) == 0xfc00) {
      uVar9 = 6;
    }
    else {
      if ((uStack_b4 & 0xfc00) != 0) {
        return 0xffffffff80004005;
      }
      uVar9 = 1;
    }
    uVar10 = uStack_108;
    if (uStack_108 == 0) {
      uVar10 = 1;
    }
    if ((uStack_d4 & 4) != 0) {
      uStack_d4 = 4;
    }
    puVar13 = &lbl_8315A490;
    uVar1 = lbl_8315A490;
    while (((uVar1 & 0xfffffe3f) != 0xfffffe3f &&
           ((((((iStack_d8 != 0x20 || (puVar13[2] != uStack_d4)) ||
               (((uStack_d4 & 4) != 0 && (uStack_d0 != puVar13[3])))) ||
              (((uStack_d4 & 0xc4462) != 0 && (uStack_cc != puVar13[4])))) ||
             (((uStack_d4 & 0xe4040) != 0 && (uStack_c8 != puVar13[5])))) ||
            (((((uStack_d4 & 0xc4440) != 0 && (uStack_c4 != puVar13[6])) ||
              (((uStack_d4 & 0xc4040) != 0 && (uStack_c0 != puVar13[7])))) ||
             (((uStack_d4 & 0x80003) != 0 && (uStack_bc != puVar13[8]))))))))) {
      puVar13 = puVar13 + 9;
      uVar1 = *puVar13;
    }
    uVar1 = *puVar13;
    if ((uVar1 & 0xfffffe3f) != 0xfffffe3f) {
      iVar2 = fn_828F13C0(uVar1);
      if ((uStack_11c & 0x800000) == 0) {
        uVar7 = 0x12;
        if (uVar9 != 6) {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 0x11;
      }
      param_1[0x11] = uVar7;
      if (*(int *)(iVar2 + 4) == 1) {
        if (uVar11 < 0x400) {
          return 0xffffffff80004005;
        }
        uVar11 = param_3 - 0x480;
        puVar13 = puVar12;
        puVar12 = param_2 + 0x120;
      }
      else {
        puVar13 = (uint *)0x0;
      }
      uVar7 = 0;
      puVar4 = puStack_130;
      if (uVar9 != 0) {
        do {
          uVar18 = (ulonglong)param_1[3];
          uVar15 = (ulonglong)param_1[4];
          uVar17 = (ulonglong)param_1[5];
          puVar3 = param_1;
          if (uVar7 != 0) {
            puVar3 = (uint *)fn_8265C940(0x54,0x24810000);
            if (puVar3 == (uint *)0x0) {
              puVar3 = (uint *)0x0;
            }
            else {
              *puVar3 = 0xffffffff;
              puVar3[1] = 0;
              puVar3[2] = 0;
              puVar3[0xe] = 0;
              puVar3[0xf] = 0;
              puVar3[0x13] = 0;
              puVar3[0x14] = 0;
            }
            if (puVar3 == (uint *)0x0) {
              return 0xffffffff8007000e;
            }
            puStack_130[0x14] = (uint)puVar3;
          }
          uVar14 = 0;
          puVar19 = puVar4;
          if (uVar10 != 0) {
            do {
              puVar4 = puVar3;
              if (uVar14 != 0) {
                puVar4 = (uint *)fn_8265C940(0x54,0x24810000);
                if (puVar4 == (uint *)0x0) {
                  puVar4 = (uint *)0x0;
                }
                else {
                  *puVar4 = 0xffffffff;
                  puVar4[1] = 0;
                  puVar4[2] = 0;
                  puVar4[0xe] = 0;
                  puVar4[0xf] = 0;
                  puVar4[0x13] = 0;
                  puVar4[0x14] = 0;
                }
                if (puVar4 == (uint *)0x0) {
                  return 0xffffffff8007000e;
                }
                puVar19[0x13] = (uint)puVar4;
              }
              uVar8 = uVar1 & 0xfffffe3f;
              uVar16 = (uint)uVar15;
              if ((int)uVar8 < 0x1828000b) {
LAB_8291ff28:
                uVar8 = (*(uint *)(iVar2 + 8) >> 3) * (uint)uVar18;
LAB_8291ff34:
                uVar6 = uVar8 * uVar16;
              }
              else {
                if ((int)uVar8 < 0x1828000d) {
LAB_8291ff1c:
                  uVar8 = (uint)((uVar18 + 1 & 0xffffffff) << 1) & 0xfffffffc;
                  goto LAB_8291ff34;
                }
                if ((int)uVar8 < 0x1a20000b) goto LAB_8291ff28;
                if ((int)uVar8 < 0x1a20000d) goto LAB_8291ff1c;
                if (uVar8 == 0x1a200012) {
                  uVar8 = (uint)((uVar18 + 3 & 0xffffffff) << 1) & 0xfffffff8;
                }
                else {
                  if (((int)uVar8 < 0x1a200013) || (0x1a200014 < (int)uVar8)) goto LAB_8291ff28;
                  uVar8 = (uint)((uVar18 + 3 & 0xffffffff) << 2) & 0xfffffff0;
                }
                uVar6 = (uVar16 + 3 >> 2) * uVar8;
              }
              uVar5 = uVar6 * (uint)uVar17;
              puVar4[1] = (uint)puVar12;
              puVar4[0xc] = uVar8;
              puVar4[0xd] = uVar6;
              puVar4[3] = (uint)uVar18;
              puVar4[4] = uVar16;
              puVar4[5] = (uint)uVar17;
              puVar4[2] = (uint)puVar13;
              puVar4[0xe] = 0;
              puVar4[0xf] = 0;
              *puVar4 = uVar1 & 0xfffffeff;
              if (uVar11 < uVar5) {
                return 0xffffffff80004005;
              }
              puVar12 = (uint *)(uVar5 + (int)puVar12);
              uVar11 = uVar11 - uVar5;
              if (uVar18 != 1) {
                uVar18 = uVar18 >> 1;
              }
              if (uVar15 != 1) {
                uVar15 = uVar15 >> 1;
              }
              if (uVar17 != 1) {
                uVar17 = uVar17 >> 1;
              }
              uVar14 = uVar14 + 1;
              puVar19 = puVar4;
            } while (uVar14 < uVar10);
          }
          uVar7 = uVar7 + 1;
          puStack_130 = puVar3;
        } while (uVar7 < uVar9);
      }
      return 0;
    }
  }
  return 0xffffffff80004005;
}

