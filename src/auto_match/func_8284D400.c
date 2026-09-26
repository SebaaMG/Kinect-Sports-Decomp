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
#define CARRY8(a,b) ((((U64)(a)) + ((U64)(b))) < ((U64)(a)))
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_8263C620();
extern int fn_8263C6F0();
extern int fn_8263C700();
extern int fn_8263C7D8();
extern int fn_82837DF0();
extern int fn_8284C428();
extern int fn_8284C528();
extern int fn_8284C5C8();
extern int fn_8284C628();
extern int fn_8284C6E0();
extern int fn_82A94368();
extern int fn_82A947A0();
extern int fn_82A94AA8();
extern int fn_82A94F60();
extern int fn_82A98408();
extern int fn_82A98F18();
extern unsigned int iStack_130;
extern unsigned int iStack_140;
extern unsigned int iStack_14c;
extern unsigned int iStack_150;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_148;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_e4;
extern unsigned int uStack_f4;


void fn_8284D400(int param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar10;
  longlong lVar9;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iStack_150;
  int iStack_14c;
  uint uStack_148;
  int iStack_140;
  uint uStack_13c;
  uint uStack_138;
  int iStack_130;
  uint uStack_12c;
  uint uStack_128;
  undefined1 auStack_120 [4];
  uint uStack_11c;
  uint uStack_118;
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_f4;
  uint uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 == 0) {
    lVar5 = 0;
    uStack_12c = 0;
    lVar6 = 0;
    iStack_130 = 0;
    iVar8 = 0;
    uVar7 = 0;
    if (param_2 == 1) {
      iVar8 = 1;
    }
    else if (param_2 == 2) {
      iVar8 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
    }
    uVar1 = fn_82A94AA8(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),0);
    fn_82A94368(*(undefined4 *)(param_1 + 0x34),0,auStack_110);
    fn_82A947A0(*(undefined4 *)(param_1 + 0x34),&uStack_c0);
    fn_8284C5C8(*(undefined4 *)(param_1 + 0x18),auStack_120);
    if (iVar8 != 0) {
      do {
        fn_8284C428(uStack_10c,uStack_108,lVar5,&uStack_12c,&iStack_130);
        fn_8263C7D8(*(undefined4 *)(param_1 + 0x34),lVar5,auStack_d0,0,0);
        if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) & 0x3c0) != 0) {
          lVar6 = fn_82A94F60(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),1,
                                  lVar5,*(uint *)(param_1 + 0x18) & 0x3f,
                                  *(uint *)(param_1 + 0x18) >> 8 & 1,0);
        }
        if ((int)lVar5 < (int)uVar1) {
          lVar9 = fn_8284C628(uStack_10c,uStack_108,auStack_120,lVar5);
          uVar17 = fn_8284C528(uStack_10c,auStack_120,lVar5);
          uVar13 = (uVar17 & 0xffffffff) / (ulonglong)uStack_e4;
          uVar15 = (ulonglong)((uStack_118 + iStack_130) - 1 & ~(uStack_118 - 1)) /
                   (ulonglong)uStack_118;
          uVar12 = uVar13;
          uVar14 = uVar15;
        }
        else {
          lVar9 = fn_8284C628(uStack_10c,uStack_108,auStack_120,uVar1);
          uVar15 = (ulonglong)uStack_9c;
          uVar17 = (ulonglong)uStack_ac;
          uVar13 = (ulonglong)((uStack_11c + uStack_12c) - 1 & ~(uStack_11c - 1)) /
                   (ulonglong)uStack_11c;
          uVar12 = (ulonglong)uStack_a0;
          uVar14 = (ulonglong)((uStack_118 + iStack_130) - 1 & ~(uStack_118 - 1)) /
                   (ulonglong)uStack_118;
        }
        if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
          lVar16 = (ulonglong)*(uint *)(param_1 + 0x28) + lVar9;
          fn_82A98F18(lVar16,uVar17,0,lVar16,uVar12,uVar15,0,uStack_e4);
        }
        fn_82837DF0((ulonglong)*(uint *)(param_1 + 0x28) + lVar9 + lVar6,
                      *(undefined4 *)(param_1 + 0x18),uVar13,uVar14,uVar17,uVar7);
        uVar7 = uVar7 + 1;
        uVar7 = -(ulonglong)!CARRY8(8 - uVar7,uVar7 ^ 0x80000000) & uVar7;
        if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
          lVar9 = (ulonglong)*(uint *)(param_1 + 0x28) + lVar9;
          fn_82A98408(lVar9,uVar12,uVar15,0,lVar9,uVar17,0,uStack_e4);
        }
        fn_8263C620(*(undefined4 *)(param_1 + 0x34),lVar5);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < iVar8);
    }
  }
  else if (iVar8 == 2) {
    iStack_14c = 0;
    lVar6 = 0;
    iStack_150 = 0;
    iVar8 = 0;
    uStack_148 = 0;
    uVar7 = 0;
    if (param_2 == 1) {
      iVar8 = 1;
    }
    else if (param_2 == 2) {
      iVar8 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
    }
    lVar5 = fn_82A94AA8(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),0);
    fn_82A94368(*(undefined4 *)(param_1 + 0x34),0,auStack_120);
    fn_82A947A0(*(undefined4 *)(param_1 + 0x34),auStack_e0);
    fn_8284C5C8(*(undefined4 *)(param_1 + 0x18),&iStack_140);
    lVar9 = 0;
    if (iVar8 != 0) {
      do {
        iVar4 = 0;
        puVar10 = (undefined4 *)0x83157388;
        do {
          fn_8284C428(uStack_11c,uStack_118,lVar9,&iStack_14c,&iStack_150);
          if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) & 0x3c0) != 0) {
            lVar6 = fn_82A94F60(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),
                                    1,lVar9,*(uint *)(param_1 + 0x18) & 0x3f,
                                    *(uint *)(param_1 + 0x18) >> 8 & 1,0);
          }
          iVar3 = (int)lVar5;
          iVar11 = (int)lVar9;
          if (iVar11 < iVar3) {
            iVar2 = fn_8284C6E0(uStack_11c,uStack_118,&iStack_140,lVar9);
            lVar16 = (longlong)iVar2 * (longlong)iVar4;
            fn_8263C700(*(undefined4 *)(param_1 + 0x34),*puVar10,lVar9,&iStack_130,0,0);
            uVar17 = fn_8284C528(uStack_11c,&iStack_140,lVar9);
            uVar13 = (uVar17 & 0xffffffff) / (ulonglong)uStack_f4;
            uVar15 = (ulonglong)((uStack_138 + iStack_150) - 1 & ~(uStack_138 - 1)) /
                     (ulonglong)uStack_138;
            uVar12 = uVar13;
            uVar14 = uVar15;
          }
          else {
            iVar2 = fn_8284C6E0(uStack_11c,uStack_118,&iStack_140,lVar5);
            lVar16 = (longlong)iVar2 * (longlong)iVar4;
            fn_8263C700(*(undefined4 *)(param_1 + 0x34),*puVar10,lVar5,&iStack_130,0,0);
            uVar13 = (ulonglong)uStack_c0;
            uVar15 = (ulonglong)uStack_bc;
            uVar17 = (ulonglong)uStack_cc;
            uVar12 = (ulonglong)((uStack_13c + iStack_14c) - 1 & ~(uStack_13c - 1)) /
                     (ulonglong)uStack_13c;
            uVar14 = (ulonglong)((uStack_138 + iStack_150) - 1 & ~(uStack_138 - 1)) /
                     (ulonglong)uStack_138;
          }
          lVar16 = ((ulonglong)*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0xfffff000) +
                   (ulonglong)uStack_148 + lVar16;
          if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
            fn_82A98F18(lVar16,uVar17,0,lVar16,uVar13,uVar15,0,uStack_f4);
          }
          fn_82837DF0(lVar16 + lVar6,*(undefined4 *)(param_1 + 0x18),uVar12,uVar14,uVar17,uVar7);
          if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
            fn_82A98408(lVar16,uVar13,uVar15,0,lVar16,uVar17,0,uStack_f4);
          }
          lVar16 = lVar5;
          if (iVar11 < iVar3) {
            lVar16 = lVar9;
          }
          fn_8263C620(*(undefined4 *)(param_1 + 0x34),*puVar10,lVar16);
          puVar10 = puVar10 + 1;
          iVar4 = iVar4 + 1;
        } while ((int)puVar10 < -0x7cea8c60);
        if (iVar11 < iVar3) {
          iVar4 = fn_8284C628(uStack_11c,uStack_118,&iStack_140,lVar9 + 1);
          uStack_148 = iVar4 * 6;
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 1;
        uVar7 = -(ulonglong)!CARRY8(8 - uVar7,uVar7 ^ 0x80000000) & uVar7;
      } while ((int)lVar9 < iVar8);
    }
  }
  else {
    if (iVar8 == 3) {
      return;
    }
    if (iVar8 == 4) {
      iVar8 = *(int *)(param_1 + 0x38);
      uStack_12c = 0;
      lVar6 = 0;
      iStack_130 = 0;
      iVar3 = 0;
      iVar4 = 0;
      if (0 < iVar8) {
        do {
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar8);
      }
      iVar4 = 0;
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          uVar7 = 0;
          if (param_2 == 1) {
            iVar3 = 1;
          }
          else if (param_2 == 2) {
            iVar3 = (*(uint *)(*(int *)(*(int *)(param_1 + 0x34) + iVar8) + 0x2c) >> 6 & 0xf) + 1;
          }
          lVar5 = 0;
          if (iVar3 != 0) {
            do {
              uVar1 = fn_82A94AA8(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x44)),
                                      *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar8),0);
              fn_82A94368(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x34)),0,auStack_110);
              fn_82A947A0(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x34)),&uStack_c0);
              fn_8284C5C8(*(undefined4 *)(param_1 + 0x18),auStack_120);
              fn_8284C428(uStack_10c,uStack_108,lVar5,&uStack_12c,&iStack_130);
              fn_8263C7D8(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x34)),lVar5,auStack_d0,0,0);
              if ((*(uint *)(*(int *)(iVar8 + *(int *)(param_1 + 0x34)) + 0x2c) & 0x3c0) != 0) {
                lVar6 = fn_82A94F60(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x44)),
                                        *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar8),1,lVar5,
                                        *(uint *)(param_1 + 0x18) & 0x3f,
                                        *(uint *)(param_1 + 0x18) >> 8 & 1,0);
              }
              if ((int)lVar5 < (int)uVar1) {
                lVar9 = fn_8284C628(uStack_10c,uStack_108,auStack_120,lVar5);
                uVar17 = fn_8284C528(uStack_10c,auStack_120,lVar5);
                uVar13 = (uVar17 & 0xffffffff) / (ulonglong)uStack_e4;
                uVar15 = (ulonglong)((uStack_118 + iStack_130) - 1 & ~(uStack_118 - 1)) /
                         (ulonglong)uStack_118;
                uVar12 = uVar15;
                uVar14 = uVar13;
              }
              else {
                lVar9 = fn_8284C628(uStack_10c,uStack_108,auStack_120,uVar1);
                uVar13 = (ulonglong)uStack_a0;
                uVar15 = (ulonglong)uStack_9c;
                uVar17 = (ulonglong)uStack_ac;
                uVar12 = (ulonglong)((uStack_118 + iStack_130) - 1 & ~(uStack_118 - 1)) /
                         (ulonglong)uStack_118;
                uVar14 = (ulonglong)((uStack_11c + uStack_12c) - 1 & ~(uStack_11c - 1)) /
                         (ulonglong)uStack_11c;
              }
              lVar9 = ((ulonglong)*(uint *)(*(int *)(iVar8 + *(int *)(param_1 + 0x34)) + 0x20) &
                      0xfffff000) + lVar9;
              if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
                fn_82A98F18(lVar9,uVar17,0,lVar9,uVar13,uVar15,0,uStack_e4);
              }
              fn_82837DF0(lVar9 + lVar6,*(undefined4 *)(param_1 + 0x18),uVar14,uVar12,uVar17,uVar7
                           );
              if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
                fn_82A98408(lVar9,uVar13,uVar15,0,lVar9,uVar17,0,uStack_e4);
              }
              fn_8263C620(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x34)),0);
              uVar7 = uVar7 + 1;
              lVar5 = lVar5 + 1;
              uVar7 = -(ulonglong)!CARRY8(8 - uVar7,uVar7 ^ 0x80000000) & uVar7;
            } while ((int)lVar5 < iVar3);
          }
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar4 < *(int *)(param_1 + 0x38));
      }
    }
    else {
      if (iVar8 != 5) {
        return;
      }
      uStack_13c = 0;
      lVar6 = 0;
      iStack_140 = 0;
      iVar8 = 0;
      uVar7 = 0;
      lVar5 = 0;
      fn_8263C6F0(*(undefined4 *)(param_1 + 0x34));
      if (param_2 == 1) {
        iVar8 = 1;
      }
      else if (param_2 == 2) {
        iVar8 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
      }
      uVar1 = fn_82A94AA8(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),0);
      fn_82A94368(*(undefined4 *)(param_1 + 0x34),0,auStack_120);
      fn_82A947A0(*(undefined4 *)(param_1 + 0x34),auStack_e0);
      fn_8284C5C8(*(undefined4 *)(param_1 + 0x18),&iStack_130);
      if (param_2 == 1) {
        iVar8 = 1;
      }
      else if (param_2 == 2) {
        iVar8 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
      }
      lVar9 = 0;
      if (iVar8 != 0) {
        do {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x38)) {
            do {
              fn_8284C428(uStack_11c,uStack_118,lVar9,&uStack_13c,&iStack_140);
              if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) & 0x3c0) != 0) {
                lVar6 = fn_82A94F60(*(undefined2 *)(param_1 + 0x24),
                                        *(undefined2 *)(param_1 + 0x26),1,lVar9,
                                        *(uint *)(param_1 + 0x18) & 0x3f,
                                        *(uint *)(param_1 + 0x18) >> 8 & 1,0);
              }
              if ((int)lVar9 < (int)uVar1) {
                iVar3 = fn_8284C6E0(uStack_11c,uStack_118,&iStack_130,lVar9);
                lVar16 = (longlong)iVar3 * (longlong)iVar4;
                uVar17 = fn_8284C528(uStack_11c,&iStack_130,lVar9);
                uVar15 = (uVar17 & 0xffffffff) / (ulonglong)uStack_f4;
                uVar13 = (ulonglong)((uStack_128 + iStack_140) - 1 & ~(uStack_128 - 1)) /
                         (ulonglong)uStack_128;
                uVar12 = uVar13;
                uVar14 = uVar15;
              }
              else {
                iVar3 = fn_8284C6E0(uStack_11c,uStack_118,&iStack_130,uVar1);
                uVar15 = (ulonglong)uStack_c0;
                uVar13 = (ulonglong)uStack_bc;
                uVar17 = (ulonglong)uStack_cc;
                lVar16 = (longlong)iVar3 * (longlong)iVar4;
                uVar12 = (ulonglong)((uStack_128 + iStack_140) - 1 & ~(uStack_128 - 1)) /
                         (ulonglong)uStack_128;
                uVar14 = (ulonglong)((uStack_12c + uStack_13c) - 1 & ~(uStack_12c - 1)) /
                         (ulonglong)uStack_12c;
              }
              lVar16 = ((ulonglong)*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0xfffff000) + lVar5
                       + lVar16;
              if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
                fn_82A98F18(lVar16,uVar17,0,lVar16,uVar15,uVar13,0,uStack_f4);
              }
              fn_82837DF0(lVar16 + lVar6,*(undefined4 *)(param_1 + 0x18),uVar14,uVar12,uVar17,
                            uVar7);
              if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
                fn_82A98408(lVar16,uVar15,uVar13,0,lVar16,uVar17,0,uStack_f4);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x38));
          }
          if ((int)lVar9 < (int)uVar1) {
            iVar4 = fn_8284C628(uStack_11c,uStack_118,&iStack_130,lVar9 + 1);
            lVar5 = (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x38);
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 1;
          uVar7 = -(ulonglong)!CARRY8(8 - uVar7,uVar7 ^ 0x80000000) & uVar7;
        } while ((int)lVar9 < iVar8);
      }
    }
  }
  return;
}

