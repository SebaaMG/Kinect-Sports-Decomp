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
extern int fn_82637550();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82641C20();
extern int fn_82641DA0();
extern int fn_82641EF8();
extern int fn_82642F50();
extern int fn_82643B08();
extern int fn_82644DF0();
extern int fn_82645110();
extern int fn_826452A8();
extern int fn_82647258();
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8264CB18(ulonglong *param_1,int param_2,int param_3,ulonglong param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  
  if (param_2 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    puVar8 = &uStack_d8;
    puVar9 = (undefined8 *)(param_2 + -8);
    lVar18 = 5;
    do {
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar9;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  lVar18 = 5;
  if (param_3 == 0) {
    puVar8 = &uStack_a8;
    puVar9 = &uStack_d8;
    do {
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar9;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  else {
    puVar9 = (undefined8 *)(param_3 + -8);
    puVar8 = &uStack_a8;
    do {
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar9;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  uVar10 = param_4 & 0xf;
  if (uVar10 == 0) {
    uVar10 = 1;
  }
  uVar1 = *(uint *)((int)param_1 + 0x5eac);
  uVar11 = (param_4 & 0xffffffff) >> 4 & 1;
  *(uint *)((int)param_1 + 0x5eac) = uVar1 + 1;
  if (0x3e < uVar1 + 1) {
    *(undefined4 *)((int)param_1 + 0x5eac) = 0;
  }
  uVar5 = *(uint *)(param_1 + 0xbd5);
  piVar13 = (int *)(*(int *)(param_1 + 0xbd6) + uVar1 * 0x14);
  *param_5 = uVar1 | 0xd1230000;
  uVar12 = (ulonglong)uVar5 + ((ulonglong)uVar1 & 0x1ffffff) * 0x80;
  if (*piVar13 != 0) {
    fn_826452A8(param_1,*piVar13,0x14,0);
  }
  piVar13[1] = (int)uVar10;
  if (*(int *)((int)param_1 + 0x5e8c) == 0) {
    puVar2 = (uint *)uVar12;
    puVar2[0x1b] = 0;
    uVar5 = *(uint *)(param_1 + 6);
    if (*(uint *)(param_1 + 7) < uVar5) {
      uVar5 = fn_82645110(param_1);
    }
    uVar4 = 0x18000000;
    *(undefined4 *)(uVar5 + 4) = 0x57a;
    if ((param_4 & 0x20000000) == 0) {
      uVar4 = 0x10000000;
    }
    *(uint *)(uVar5 + 8) = uVar1 | uVar4;
    puVar7 = (undefined4 *)(uVar12 + 0x6c);
    *(undefined4 *)(uVar5 + 0xc) = 0xc0043c00;
    *(undefined4 *)(uVar5 + 0x10) = 0x13;
    *(uint *)(uVar5 + 0x14) =
         ((int)((uVar12 + 0x6c & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
         ((uint)puVar7 & 0x1fffffff) | 2;
    *(undefined4 *)(uVar5 + 0x18) = 0xffffffff;
    *(undefined4 *)(uVar5 + 0x1c) = 0xffffffff;
    *(undefined4 *)(uVar5 + 0x20) = 0x100;
    *(undefined4 *)(uVar5 + 0x24) = 0x57a;
    *(undefined4 *)(uVar5 + 0x28) = 0;
    piVar13[2] = 0;
    *(undefined4 *)(uVar5 + 0x2c) = 0x57b;
    puVar3 = (uint *)(uVar5 + 0x30);
    *puVar3 = (uint)(piVar13 + 2) | 1;
    *(uint **)(param_1 + 6) = puVar3;
    uVar14 = param_1[4] & uStack_b0;
    uVar15 = param_1[3] & uStack_b8;
    uVar17 = param_1[2] & uStack_c0;
    uVar16 = param_1[1] & uStack_c8;
    if ((*param_1 & uStack_d0) != 0) {
      fn_82641EF8(param_1,*param_1 & uStack_d0,0x4000,param_1 + 0xf0);
      *param_1 = 0;
    }
    if (uVar16 != 0) {
      fn_82641EF8(param_1,uVar16,0x4400,param_1 + 0x2f0);
      param_1[1] = 0;
    }
    if (uVar17 != 0) {
      if ((uVar17 & 0x1e0000) != 0) {
        uVar17 = fn_82642F50(param_1,uVar17);
      }
      if ((param_1[5] & uVar17) != 0) {
        uVar17 = fn_826417C8(param_1,uVar17,*(undefined4 *)(param_1 + 0x528));
      }
      if ((uVar17 & 0xfff) != 0) {
        fn_82641B60(param_1,uVar17 << 0x34,0x2200,(int)param_1 + 0x2934);
      }
      if ((uVar17 & 0x1f000) != 0) {
        fn_82641B60(param_1,(uVar17 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
      }
      if ((uVar17 & 0x3fffc0000000000) != 0) {
        fn_82641B60(param_1,(uVar17 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
      }
      if ((uVar17 & 0x3ffffe00000) != 0) {
        fn_82641B60(param_1,(uVar17 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
      }
      param_1[2] = 0;
    }
    if (uVar15 != 0) {
      if ((uVar15 & 0xffffffff) != 0) {
        fn_82641DA0(param_1,uVar15 << 0x20);
      }
      if ((uVar15 & 0x7ffffc00000000) != 0) {
        fn_82641B60(param_1,(uVar15 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
      }
      param_1[3] = 0;
    }
    if (uVar14 != 0) {
      if ((uVar14 & 0x3fc000000000) != 0) {
        fn_82641B60(param_1,(uVar14 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
      }
      if ((uVar14 & 0x7e000000000000) != 0) {
        fn_82641C20(param_1,(uVar14 & 0x7e000000000000) << 9);
      }
      if ((uVar14 & 0x100000000000000) != 0) {
        fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
      }
      if ((uVar14 & 0x3fffffffff) != 0) {
        fn_82641B60(param_1,uVar14 << 0x1a,0x2300,param_1 + 0x537);
      }
      if (((uVar14 & 0xc000000000000000) != 0) &&
         (((param_1[0x558] & 0x8000000000000000) != 0 ||
          ((param_1[0x558] & 0x4000000000000000) != 0)))) {
        fn_82647258(param_1);
      }
      param_1[4] = 0;
    }
    uVar1 = piVar13[4];
    piVar6 = (int *)0x0;
    uVar4 = (uint)(uVar11 << 0x1f);
    piVar13[4] = uVar4 | uVar1 & 0x7fffffff;
    piVar13[4] = (*(byte *)((int)param_1 + 0x2abf) >> 5 & 1) << 0x1e | uVar4 | uVar1 & 0x3fffffff;
    if (((*(byte *)((int)param_1 + 0x2abc) & 1) != 0) && ((int)uVar11 != 0)) {
      piVar6 = *(int **)((int)param_1 + 0x347c);
      if (*(int **)(param_1 + 0x690) < piVar6 + 4) {
        piVar6 = (int *)fn_82643B08(param_1 + 0x68e);
      }
      *piVar6 = (int)puVar3;
      *(int **)((int)param_1 + 0x347c) = piVar6 + 4;
      *(undefined4 *)(uVar5 + 0x34) = 0xc0006000;
      *(undefined4 *)(uVar5 + 0x38) = 0xffffffff;
    }
    puVar2[1] = 0xbadd00d;
    sync(0);
    if (*(int *)((int)param_1 + 0x5e8c) == 0) {
      if (*(int *)(param_1 + 6) != *(int *)((int)param_1 + 0x3b24) + -4) {
        fn_82645110(param_1);
      }
      fn_82644DF0(param_1,uVar12 + 0x70,
                    (((uVar12 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar12 & 0x1fffffff),
                    (uVar10 + 1) * 3,0,param_1 + 0x6a0,1);
      if ((*(byte *)((int)param_1 + 0x2abc) & 0x20) != 0) {
        puVar7 = *(undefined4 **)((int)param_1 + 0x34f4);
        if (*(undefined4 **)(param_1 + 0x69f) < puVar7 + 1) {
          puVar7 = (undefined4 *)fn_82643B08(param_1 + 0x69d);
        }
        *puVar7 = 0;
        *(undefined4 **)((int)param_1 + 0x34f4) = puVar7 + 1;
        piVar13[3] = (int)puVar7;
      }
      *piVar13 = *(int *)((int)param_1 + 0x2a9c);
      puVar7 = *(undefined4 **)(param_1 + 6);
      if (*(undefined4 **)(param_1 + 7) < puVar7) {
        puVar7 = (undefined4 *)fn_82645110(param_1);
      }
      if (piVar6 != (int *)0x0) {
        puVar7[1] = 0xc0006000;
        puVar7[2] = 0x80000000;
        puVar7[3] = 0xc0015a01;
        puVar7[4] = 0x1a;
        puVar7[5] = (((uint)(piVar6 + 1) >> 0x14) + 0x200 & 0x1000) +
                    ((uint)(piVar6 + 1) & 0x1ffffffe) | 1;
        puVar7[6] = 0xc0004601;
        puVar7 = puVar7 + 7;
        *puVar7 = 0x19;
      }
      puVar7[1] = 0x57b;
      puVar7[2] = 0;
      *(undefined4 **)(param_1 + 6) = puVar7 + 2;
      if ((uStack_80 & 0x1c00000000000) != 0x1c00000000000) {
        uVar1 = *(uint *)(param_1 + 0x519);
        fn_82637550(param_1,(*(int *)((int)param_1 + 0x28c4) << 0x11) >> 0x11,
                          (*(int *)((int)param_1 + 0x28c4) << 1) >> 0x11,
                          (int)(uVar1 << 0x11 | uVar1 >> 0xf) >> 0x11,(int)(uVar1 << 1) >> 0x11);
      }
      *param_1 = ~uStack_a0;
      param_1[1] = ~uStack_98;
      param_1[2] = ~uStack_90;
      param_1[3] = ~uStack_88;
      param_1[4] = ~uStack_80;
    }
    else {
      *puVar2 = (int)uVar10 * 0x30000 + 0x10000U | 0xc0001000;
      sync(0);
      *puVar7 = 0xffffffff;
    }
  }
  return;
}

