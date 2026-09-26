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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_e0;
extern int fn_8263C620();
extern int fn_8263C700();
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
extern unsigned int iStack_14c;
extern unsigned int iStack_150;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_148;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_f4;


void fn_8284CB20(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iStack_150;
  int iStack_14c;
  uint uStack_148;
  undefined1 auStack_140 [4];
  uint uStack_13c;
  uint uStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [4];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_f4;
  undefined1 auStack_e0 [20];
  uint uStack_cc;
  uint uStack_c0;
  uint uStack_bc;
  
  iStack_14c = 0;
  lVar4 = 0;
  iStack_150 = 0;
  iVar5 = 0;
  uStack_148 = 0;
  uVar6 = 0;
  if (param_2 == 1) {
    iVar5 = 1;
  }
  else if (param_2 == 2) {
    iVar5 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
  }
  lVar1 = fn_82A94AA8(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),0);
  fn_82A94368(*(undefined4 *)(param_1 + 0x34),0,auStack_120);
  fn_82A947A0(*(undefined4 *)(param_1 + 0x34),auStack_e0);
  fn_8284C5C8(*(undefined4 *)(param_1 + 0x18),auStack_140);
  lVar9 = 0;
  if (iVar5 != 0) {
    do {
      iVar3 = 0;
      puVar8 = (undefined4 *)0x83157388;
      do {
        fn_8284C428(uStack_11c,uStack_118,lVar9,&iStack_14c,&iStack_150);
        if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) & 0x3c0) != 0) {
          lVar4 = fn_82A94F60(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),1,
                                  lVar9,*(uint *)(param_1 + 0x18) & 0x3f,
                                  *(uint *)(param_1 + 0x18) >> 8 & 1,0);
        }
        iVar7 = (int)lVar1;
        iVar10 = (int)lVar9;
        if (iVar10 < iVar7) {
          iVar2 = fn_8284C6E0(uStack_11c,uStack_118,auStack_140,lVar9);
          lVar14 = (longlong)iVar2 * (longlong)iVar3;
          fn_8263C700(*(undefined4 *)(param_1 + 0x34),*puVar8,lVar9,auStack_130,0,0);
          uVar16 = fn_8284C528(uStack_11c,auStack_140,lVar9);
          uVar12 = (uVar16 & 0xffffffff) / (ulonglong)uStack_f4;
          uVar11 = (ulonglong)((uStack_138 + iStack_150) - 1 & ~(uStack_138 - 1)) /
                   (ulonglong)uStack_138;
          uVar13 = uVar12;
          uVar15 = uVar11;
        }
        else {
          iVar2 = fn_8284C6E0(uStack_11c,uStack_118,auStack_140,lVar1);
          lVar14 = (longlong)iVar2 * (longlong)iVar3;
          fn_8263C700(*(undefined4 *)(param_1 + 0x34),*puVar8,lVar1,auStack_130,0,0);
          uVar12 = (ulonglong)uStack_c0;
          uVar11 = (ulonglong)uStack_bc;
          uVar16 = (ulonglong)uStack_cc;
          uVar13 = (ulonglong)((uStack_13c + iStack_14c) - 1 & ~(uStack_13c - 1)) /
                   (ulonglong)uStack_13c;
          uVar15 = (ulonglong)((uStack_138 + iStack_150) - 1 & ~(uStack_138 - 1)) /
                   (ulonglong)uStack_138;
        }
        lVar14 = ((ulonglong)*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0xfffff000) +
                 (ulonglong)uStack_148 + lVar14;
        if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
          fn_82A98F18(lVar14,uVar16,0,lVar14,uVar12,uVar11,0,uStack_f4);
        }
        fn_82837DF0(lVar14 + lVar4,*(undefined4 *)(param_1 + 0x18),uVar13,uVar15,uVar16,uVar6);
        if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
          fn_82A98408(lVar14,uVar12,uVar11,0,lVar14,uVar16,0,uStack_f4);
        }
        lVar14 = lVar1;
        if (iVar10 < iVar7) {
          lVar14 = lVar9;
        }
        fn_8263C620(*(undefined4 *)(param_1 + 0x34),*puVar8,lVar14);
        puVar8 = puVar8 + 1;
        iVar3 = iVar3 + 1;
      } while ((int)puVar8 < -0x7cea8c60);
      if (iVar10 < iVar7) {
        iVar3 = fn_8284C628(uStack_11c,uStack_118,auStack_140,lVar9 + 1);
        uStack_148 = iVar3 * 6;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 1;
      uVar6 = -(ulonglong)!CARRY8(8 - uVar6,uVar6 ^ 0x80000000) & uVar6;
    } while ((int)lVar9 < iVar5);
  }
  return;
}

